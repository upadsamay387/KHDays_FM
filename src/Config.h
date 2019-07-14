/*
    Copyright 2016-2020 Arisotura

    This file is part of melonDS.

    melonDS is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    melonDS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with melonDS. If not, see http://www.gnu.org/licenses/.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>

#include "types.h"

namespace Config
{

typedef struct
{
    char Name[32];
    int Type;
    void* Value;
    int DefaultInt;
    const char* DefaultStr;
    int StrLength; // should be set to actual array length minus one

} ConfigEntry;

FILE* GetConfigFile(const char* fileName, const char* permissions);
bool HasConfigFile(const char* fileName);
void Load();
void Save();

extern char BIOS9Path[1024];
extern char BIOS7Path[1024];
extern char FirmwarePath[1024];

extern char DSiBIOS9Path[1024];
extern char DSiBIOS7Path[1024];
extern char DSiFirmwarePath[1024];
extern char DSiNANDPath[1024];

extern bool JIT_Enable;
extern int JIT_MaxBlockSize;

}

#endif // CONFIG_H
