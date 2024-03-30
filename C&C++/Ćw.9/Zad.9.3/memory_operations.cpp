#include "memory_operations.h"
#include <cstring>

int * get_left_fence_address(memory_sector_t * mem_sec)
{
    return &mem_sec->l_fence;
}

int * get_right_fence_address(memory_sector_t * mem_sec)
{
    return &mem_sec->r_fence;
}

size_t get_memory_buffer_size(memory_sector_t * mem_sec)
{
    return (&mem_sec->r_fence) - (&mem_sec->l_fence) - 1;
}

void initialize_memory(memory_sector_t * mem_sec)
{
    mem_sec->l_fence = FENCE_INITIALIZER;
    mem_sec->r_fence = FENCE_INITIALIZER;
    for (int i = 0; i < get_memory_buffer_size(mem_sec); i++)
    {
        mem_sec->buffer[i] = BUFFER_INITIALIZER;
    }
}

address_status_t validate_address(memory_sector_t * memory_sector, const int * address)
{
    if (address >= &memory_sector->l_fence && address <= &memory_sector->r_fence)
    {
        return NO_ERROR;
    }
    else
    {
        return ADDRESS_OUT_OF_RANGE;
    }
}

address_status_t read_memory(memory_sector_t * mem_sec, const int * address, int * buffer)
{
    if (validate_address(mem_sec, address) == ADDRESS_OUT_OF_RANGE)
    {
        return ADDRESS_OUT_OF_RANGE;
    }

    memset(buffer, *address, 1);
    return NO_ERROR;
}

address_status_t write_memory(memory_sector_t * mem_sec, int * address, int value)
{
    if (validate_address(mem_sec, address) == ADDRESS_OUT_OF_RANGE)
    {
        return ADDRESS_OUT_OF_RANGE;
    }
    memset(address, value, 1);
    return NO_ERROR;
}

//zad 3

address_status_t copy_memory(memory_sector_t * mem_sec, int * destination, int * source, size_t size)
{
    if (validate_address(mem_sec, destination) == ADDRESS_OUT_OF_RANGE)
    {
        return ADDRESS_OUT_OF_RANGE;
    }
    memcpy(destination, source, size);
    return NO_ERROR;
}
