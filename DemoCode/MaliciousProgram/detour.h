#pragma once
#include <cstdint>

bool DetourFunction(void* src, void* dst, int len);

char* TrampHook32(char* src, char* dst, const intptr_t len);