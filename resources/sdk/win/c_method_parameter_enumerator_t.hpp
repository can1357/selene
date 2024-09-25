#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_method_parameter_enumerator_t.start.hpp"
namespace win
{
    // [class CMethodParameterEnumerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_method_parameter_enumerator_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t tk_method;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._tkMethod
                                         
        SDK_MAGIC_PROPERTIES( "CMethodParameterEnumerator.$", 0x20, true, 0x7e2bb0d02e86a5f0 );          
        SDK_FIXED_SIZE( c_method_parameter_enumerator_t, 0x20 );          
    };                                   
};
#include "magic/c_method_parameter_enumerator_t.end.hpp"
SDK_VERIFY( class win::c_method_parameter_enumerator_t, 0x20 );
