#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct PrivMemAllocator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct priv_mem_allocator_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "PrivMemAllocator.$", 0x1, true, 0xa56ab3e632f3d7dd );
        SDK_FIXED_SIZE( priv_mem_allocator_t, 0x1 );
    };                         
};
SDK_VERIFY( struct win::priv_mem_allocator_t, 0x1 );
