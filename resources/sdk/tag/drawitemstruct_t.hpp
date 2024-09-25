#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

namespace win { struct hdc_t;  }
namespace win { struct hwnd_t; }

#include "magic/drawitemstruct_t.start.hpp"
namespace tag
{
    // [struct tagDRAWITEMSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct drawitemstruct_t                  
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 uint32_t            ctl_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CtlType
        _m01 uint32_t            ctl_id;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CtlID
        _m02 uint32_t            item_id;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .itemID
        _m03 uint32_t            item_action;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .itemAction
        _m04 uint32_t            item_state;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .itemState
        _m05 struct win::hwnd_t* hwnd_item;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hwndItem
        _m06 struct win::hdc_t*  h_dc;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hDC
        _m07 struct tag::rect_t  rc_item;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rcItem
        _m08 uint64_t            item_data;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .itemData
                                             
        SDK_MAGIC_PROPERTIES( "tagDRAWITEMSTRUCT.$", 0x40, true, 0x2ae640dca8a45e8a );            
        SDK_FIXED_SIZE( drawitemstruct_t, 0x40 );            
    };                                       
};
#include "magic/drawitemstruct_t.end.hpp"
SDK_VERIFY( struct tag::drawitemstruct_t, 0x40 );
