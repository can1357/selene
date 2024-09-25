#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hbitmap_t; }

#include "magic/imemenuiteminfow_t.start.hpp"
namespace tag
{
    // [struct tagIMEMENUITEMINFOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct imemenuiteminfow_t                       
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                cb_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                f_type;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fType
        _m02 uint32_t                f_state;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fState
        _m03 uint32_t                w_id;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .wID
        _m04 struct win::hbitmap_t*  hbmp_checked;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hbmpChecked
        _m05 struct win::hbitmap_t*  hbmp_unchecked;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hbmpUnchecked
        _m06 uint32_t                dw_item_data;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwItemData
        _m07 sdk::array<wchar_t, 80> sz_string;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .szString
        _m08 struct win::hbitmap_t*  hbmp_item;       //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .hbmpItem
                                                    
        SDK_MAGIC_PROPERTIES( "tagIMEMENUITEMINFOW.$", 0xd0, true, 0x33a8507d7529661a );               
        SDK_FIXED_SIZE( imemenuiteminfow_t, 0xd0 );               
    };                                              
};
#include "magic/imemenuiteminfow_t.end.hpp"
SDK_VERIFY( struct tag::imemenuiteminfow_t, 0xd0 );
