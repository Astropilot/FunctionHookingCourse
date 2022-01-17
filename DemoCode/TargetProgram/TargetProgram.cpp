// TargetProgram.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string.h>

void decrypt(char *payload, const char *key) {
    size_t payload_len = strlen(payload);
    size_t key_len = strlen(key);

    for (int i = 0; i < payload_len; i++) {
        payload[i] = payload[i] ^ key[i % key_len];
    }
}

int main() {
    char crypted_secret[] = "\x1e\x4a\x3c\x01\x46\x04\x16\x41\x3c\x01\x56\x17\x01\x56\x17";
    char secret_key[] = "s3cr3t";
    char password[255] = "";

    std::cout << "Please put the security password:" << std::endl;

    std::cin >> password;

    decrypt(crypted_secret, secret_key);

    if (strcmp(crypted_secret, password) == 0) {
        std::cout << "Access granted!" << std::endl;
    }
    else {
        std::cout << "Access denied: Wrong password!" << std::endl;
    }

    system("pause");
}