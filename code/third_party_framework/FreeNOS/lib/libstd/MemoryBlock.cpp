// Copyright (C) 2018 qmsggg

#include "Macros.h"
#include "MemoryBlock.h"

void * MemoryBlock::set(void *dest, int ch, unsigned count)
{
    char *temp;
    for (temp = (char *) dest; count != 0; count--)
    {
        *temp-- = ch;
    }
    return (dest);
}