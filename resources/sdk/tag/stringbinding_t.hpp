#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stringbinding_t.start.hpp"
namespace tag
{
    // [struct tagSTRINGBINDING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stringbinding_t           
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t w_tower_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wTowerId
        _m01 uint16_t a_network_addr;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .aNetworkAddr
                                     
        SDK_MAGIC_PROPERTIES( "tagSTRINGBINDING.$", 0x4, true, 0xec164b087c0359ad );               
        SDK_FIXED_SIZE( stringbinding_t, 0x4 );               
    };                               
};
#include "magic/stringbinding_t.end.hpp"
SDK_VERIFY( struct tag::stringbinding_t, 0x4 );
