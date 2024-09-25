#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

namespace win { struct hdc_t; }

#include "magic/paintstruct_t.start.hpp"
namespace tag
{
    // [struct tagPAINTSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct paintstruct_t                          
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 struct win::hdc_t*      hdc;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hdc
        _m01 int32_t                 f_erase;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fErase
        _m02 struct tag::rect_t      rc_paint;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .rcPaint
        _m03 int32_t                 f_restore;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .fRestore
        _m04 int32_t                 f_inc_update;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .fIncUpdate
        _m05 sdk::array<uint8_t, 32> rgb_reserved;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .rgbReserved
                                                  
        SDK_MAGIC_PROPERTIES( "tagPAINTSTRUCT.$", 0x48, true, 0x7b20295c7dba8c24 );             
        SDK_FIXED_SIZE( paintstruct_t, 0x48 );             
    };                                            
};
#include "magic/paintstruct_t.end.hpp"
SDK_VERIFY( struct tag::paintstruct_t, 0x48 );
