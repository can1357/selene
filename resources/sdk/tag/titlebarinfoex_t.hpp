#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/titlebarinfoex_t.start.hpp"
namespace tag
{
    // [struct tagTITLEBARINFOEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct titlebarinfoex_t                                 
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                  
        _m00 uint32_t                          cb_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t                rc_title_bar;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcTitleBar
        _m02 sdk::array<uint32_t, 6>           rgstate;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rgstate
        _m03 sdk::array<struct tag::rect_t, 6> rgrect;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .rgrect
                                                            
        SDK_MAGIC_PROPERTIES( "tagTITLEBARINFOEX.$", 0x8c, true, 0x517c89bf4f9627a0 );             
        SDK_FIXED_SIZE( titlebarinfoex_t, 0x8c );             
    };                                                      
};
#include "magic/titlebarinfoex_t.end.hpp"
SDK_VERIFY( struct tag::titlebarinfoex_t, 0x8c );
