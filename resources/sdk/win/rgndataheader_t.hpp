#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/rgndataheader_t.start.hpp"
namespace win
{
    // [struct _RGNDATAHEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rgndataheader_t                 
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                 
        _m00 uint32_t           dw_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint32_t           i_type;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .iType
        _m02 uint32_t           n_count;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .nCount
        _m03 uint32_t           n_rgn_size;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .nRgnSize
        _m04 struct tag::rect_t rc_bound;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .rcBound
                                           
        SDK_NONVOL_PROPERTIES( "_RGNDATAHEADER.$", 0x20, true, 0x6a46ac8e1069912c );           
        SDK_FIXED_SIZE( rgndataheader_t, 0x20 );           
    };                                     
};
#include "magic/rgndataheader_t.end.hpp"
SDK_VERIFY( struct win::rgndataheader_t, 0x20 );
