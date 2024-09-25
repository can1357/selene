#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CPrivAlloc]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_priv_alloc_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "CPrivAlloc.$", 0x1, true, 0xdc88ace04881b3c2 );
        SDK_FIXED_SIZE( c_priv_alloc_t, 0x1 );
    };                  
};
SDK_VERIFY( class win::c_priv_alloc_t, 0x1 );
