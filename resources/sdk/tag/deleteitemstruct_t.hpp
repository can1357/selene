#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/deleteitemstruct_t.start.hpp"
namespace tag
{
    // [struct tagDELETEITEMSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct deleteitemstruct_t              
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                 
        _m00 uint32_t            ctl_type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CtlType
        _m01 uint32_t            ctl_id;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CtlID
        _m02 uint32_t            item_id;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .itemID
        _m03 struct win::hwnd_t* hwnd_item;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hwndItem
        _m04 uint64_t            item_data;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .itemData
                                           
        SDK_MAGIC_PROPERTIES( "tagDELETEITEMSTRUCT.$", 0x20, true, 0x76e85463f2f973ea );          
        SDK_FIXED_SIZE( deleteitemstruct_t, 0x20 );          
    };                                     
};
#include "magic/deleteitemstruct_t.end.hpp"
SDK_VERIFY( struct tag::deleteitemstruct_t, 0x20 );
