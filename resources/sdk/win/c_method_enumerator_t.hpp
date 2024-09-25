#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_method_enumerator_t.start.hpp"
namespace win
{
    // [class CMethodEnumerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_method_enumerator_t
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t tk_type;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._tkType
                               
        SDK_MAGIC_PROPERTIES( "CMethodEnumerator.$", 0x20, true, 0x2348703a55adf0a8 );        
        SDK_FIXED_SIZE( c_method_enumerator_t, 0x20 );        
    };                         
};
#include "magic/c_method_enumerator_t.end.hpp"
SDK_VERIFY( class win::c_method_enumerator_t, 0x20 );
