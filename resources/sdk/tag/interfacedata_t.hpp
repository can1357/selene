#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interfacedata_t.start.hpp"
namespace tag
{
    struct methoddata_t;

    // [struct tagINTERFACEDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interfacedata_t                       
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                       
        _m00 struct tag::methoddata_t* pmethdata;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pmethdata
        _m01 uint32_t                  c_members;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cMembers
                                                 
        SDK_MAGIC_PROPERTIES( "tagINTERFACEDATA.$", 0x10, true, 0xbdf49bd84dfc0f43 );          
        SDK_FIXED_SIZE( interfacedata_t, 0x10 );          
    };                                           
};
#include "magic/interfacedata_t.end.hpp"
SDK_VERIFY( struct tag::interfacedata_t, 0x10 );
