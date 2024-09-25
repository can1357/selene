#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hardwareinput_t.start.hpp"
namespace tag
{
    // [struct tagHARDWAREINPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hardwareinput_t      
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t u_msg;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .uMsg
        _m01 uint16_t w_param_l;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wParamL
        _m02 uint16_t w_param_h;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wParamH
                                
        SDK_MAGIC_PROPERTIES( "tagHARDWAREINPUT.$", 0x8, true, 0x1bebb80265e5f919 );          
        SDK_FIXED_SIZE( hardwareinput_t, 0x8 );          
    };                          
};
#include "magic/hardwareinput_t.end.hpp"
SDK_VERIFY( struct tag::hardwareinput_t, 0x8 );
