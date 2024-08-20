#include <dark/darkstar.h>

int main()
{
    Dark_Allocator* const allocator = dark_os_allocator_new();

    dark_os_allocator_delete(allocator);

    return DARK_EXIT_SUCCESS;
}
