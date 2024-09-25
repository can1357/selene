#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/titlebarinfo_t.start.hpp"
namespace tag
{
    // [struct tagTITLEBARINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct titlebarinfo_t                         
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 uint32_t                cb_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t      rc_title_bar;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcTitleBar
        _m02 sdk::array<uint32_t, 6> rgstate;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rgstate
                                                  
        SDK_MAGIC_PROPERTIES( "tagTITLEBARINFO.$", 0x2c, true, 0xdc6d0d82077b17a8 );             
        SDK_FIXED_SIZE( titlebarinfo_t, 0x2c );             
    };                                            
};
#include "magic/titlebarinfo_t.end.hpp"
SDK_VERIFY( struct tag::titlebarinfo_t, 0x2c );
