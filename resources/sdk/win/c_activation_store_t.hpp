#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_activation_store_t.start.hpp"
namespace win
{
    // [class CActivationStore]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_activation_store_t
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int32_t c_ref;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRef
                              
        SDK_MAGIC_PROPERTIES( "CActivationStore.$", 0x10, true, 0xe61e239a764453bf );      
        SDK_FIXED_SIZE( c_activation_store_t, 0x10 );      
    };                        
};
#include "magic/c_activation_store_t.end.hpp"
SDK_VERIFY( class win::c_activation_store_t, 0x10 );
