#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/redirection_function_descriptor_t.start.hpp"
namespace win
{
    // [struct _REDIRECTION_FUNCTION_DESCRIPTOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct redirection_function_descriptor_t
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                  
        _m00 const char* dll_name;            //{ +0x0000    +0x0000    +0x0000    } | .DllName
        _m01 const char* function_name;       //{ +0x0008    +0x0008    +0x0008    } | .FunctionName
        _m02 void*       redirection_target;  //{ +0x0010    +0x0010    +0x0010    } | .RedirectionTarget
                                            
        SDK_MAGIC_PROPERTIES( "_REDIRECTION_FUNCTION_DESCRIPTOR.$", 0x18, true, 0x3ad0d1f419e8289c );                   
        SDK_FIXED_SIZE( redirection_function_descriptor_t, 0x18 );                   
    };                                      
};
#include "magic/redirection_function_descriptor_t.end.hpp"
SDK_VERIFY( struct win::redirection_function_descriptor_t, 0x18 );
