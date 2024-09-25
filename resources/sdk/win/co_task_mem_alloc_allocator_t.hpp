#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CoTaskMemAllocAllocator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_task_mem_alloc_allocator_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "CoTaskMemAllocAllocator.$", 0x1, true, 0x9a6c22e742015952 );
        SDK_FIXED_SIZE( co_task_mem_alloc_allocator_t, 0x1 );
    };                                  
};
SDK_VERIFY( struct win::co_task_mem_alloc_allocator_t, 0x1 );
