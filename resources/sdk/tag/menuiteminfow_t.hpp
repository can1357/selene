#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hbitmap_t; }
namespace win { struct hmenu_t;   }

#include "magic/menuiteminfow_t.start.hpp"
namespace tag
{
    // [struct tagMENUITEMINFOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct menuiteminfow_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint32_t               cb_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t               f_mask;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fMask
        _m02 uint32_t               f_type;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fType
        _m03 uint32_t               f_state;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .fState
        _m04 uint32_t               w_id;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wID
        _m05 struct win::hmenu_t*   h_sub_menu;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hSubMenu
        _m06 struct win::hbitmap_t* hbmp_checked;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hbmpChecked
        _m07 struct win::hbitmap_t* hbmp_unchecked;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hbmpUnchecked
        _m08 uint64_t               dw_item_data;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwItemData
        _m09 wchar_t*               dw_type_data;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwTypeData
        _m10 uint32_t               cch;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .cch
        _m11 struct win::hbitmap_t* hbmp_item;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .hbmpItem
                                                   
        SDK_MAGIC_PROPERTIES( "tagMENUITEMINFOW.$", 0x50, true, 0xa07905179acdad60 );               
        SDK_FIXED_SIZE( menuiteminfow_t, 0x50 );               
    };                                             
};
#include "magic/menuiteminfow_t.end.hpp"
SDK_VERIFY( struct tag::menuiteminfow_t, 0x50 );
