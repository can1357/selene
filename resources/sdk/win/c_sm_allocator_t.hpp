#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CSmAllocator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_sm_allocator_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "CSmAllocator.$", 0x0, true, 0x78bc307a630361c6 );
        SDK_FIXED_SIZE( c_sm_allocator_t, 0x0 );
    };                    
};
SDK_VERIFY( class win::c_sm_allocator_t, 0x0 );
