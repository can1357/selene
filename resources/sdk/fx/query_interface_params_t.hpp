#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_interface_params_t.start.hpp"
namespace fx
{
    // [struct FxQueryInterfaceParams]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_interface_params_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 void**   object;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint16_t type;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m02 uint16_t offset;        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Offset
                                   
        SDK_MAGIC_PROPERTIES( "FxQueryInterfaceParams.$", 0x10, true, 0x8f0890631ee0c2f0 );       
        SDK_FIXED_SIZE( query_interface_params_t, 0x10 );       
    };                             
};
#include "magic/query_interface_params_t.end.hpp"
SDK_VERIFY( struct fx::query_interface_params_t, 0x10 );
