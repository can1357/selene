#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/nccalcsize_params_t.start.hpp"
namespace tag
{
    struct windowpos_t;

    // [struct tagNCCALCSIZE_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nccalcsize_params_t                       
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                           
        _m00 sdk::array<struct tag::rect_t, 3> rgrc;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .rgrc
        _m01 struct tag::windowpos_t*          lppos;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .lppos
                                                     
        SDK_MAGIC_PROPERTIES( "tagNCCALCSIZE_PARAMS.$", 0x38, true, 0xe3bbbb9c64e6fd2e );      
        SDK_FIXED_SIZE( nccalcsize_params_t, 0x38 );      
    };                                               
};
#include "magic/nccalcsize_params_t.end.hpp"
SDK_VERIFY( struct tag::nccalcsize_params_t, 0x38 );
