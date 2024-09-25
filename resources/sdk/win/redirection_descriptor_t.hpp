#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/redirection_descriptor_t.start.hpp"
namespace win
{
    struct redirection_function_descriptor_t;

    // [struct _REDIRECTION_DESCRIPTOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct redirection_descriptor_t                              
    {                                                            
        using pcredirection_function_descriptor_t = const struct win::redirection_function_descriptor_t*;               
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                       
        _m00 uint32_t                             version;         //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                             function_count;  //{ +0x0004    +0x0004    +0x0004    } | .FunctionCount
        _m02 pcredirection_function_descriptor_t  redirections;    //{ +0x0008    +0x0008    +0x0008    } | .Redirections
                                                                 
        SDK_MAGIC_PROPERTIES( "_REDIRECTION_DESCRIPTOR.$", 0x10, true, 0x90a582de864ca204 );               
        SDK_FIXED_SIZE( redirection_descriptor_t, 0x10 );               
    };                                                           
};
#include "magic/redirection_descriptor_t.end.hpp"
SDK_VERIFY( struct win::redirection_descriptor_t, 0x10 );
