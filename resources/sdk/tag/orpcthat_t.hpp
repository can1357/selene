#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/orpcthat_t.start.hpp"
namespace tag
{
    struct orpc_extent_array_t;

    // [struct tagORPCTHAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct orpcthat_t                                    
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                               
        _m00 uint32_t                         flags;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .flags
        _m01 struct tag::orpc_extent_array_t* extensions;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .extensions
                                                         
        SDK_MAGIC_PROPERTIES( "tagORPCTHAT.$", 0x10, true, 0xebcb26957956769d );           
        SDK_FIXED_SIZE( orpcthat_t, 0x10 );              
    };                                                   
};
#include "magic/orpcthat_t.end.hpp"
SDK_VERIFY( struct tag::orpcthat_t, 0x10 );
