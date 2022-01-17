// dllmain.cpp : Définit le point d'entrée de l'application DLL.
#include "pch.h"
#include "detour.h"

typedef void(*tdecrypt)(char*, const char*);

tdecrypt odecrypt = nullptr;

void hdecrypt(char* payload, const char* key) {
    odecrypt(payload, key);

    std::cout << "Payload decrypted: " << payload << std::endl;
    std::cout << "Key used: " << key << std::endl;

    strcpy_s(payload, 16, "test");
    std::cout << "New payload value: " << payload << std::endl;
}

DWORD WINAPI dwMainThread(LPVOID)
{
    // You might need to change the source function address if you recompile the
    // target program on your own machine.
    odecrypt = (tdecrypt)TrampHook32((char*)0x00FE12B0, (char*)hdecrypt, 6);
    return TRUE;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, dwMainThread, 0, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

