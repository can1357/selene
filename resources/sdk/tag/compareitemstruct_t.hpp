#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/compareitemstruct_t.start.hpp"
namespace tag
{
    // [struct tagCOMPAREITEMSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct compareitemstruct_t                
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 uint32_t            ctl_type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CtlType
        _m01 uint32_t            ctl_id;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CtlID
        _m02 struct win::hwnd_t* hwnd_item;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndItem
        _m03 uint32_t            item_id1;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .itemID1
        _m04 uint64_t            item_data1;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .itemData1
        _m05 uint32_t            item_id2;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .itemID2
        _m06 uint64_t            item_data2;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .itemData2
        _m07 uint32_t            dw_locale_id;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwLocaleId
                                              
        SDK_MAGIC_PROPERTIES( "tagCOMPAREITEMSTRUCT.$", 0x38, true, 0xd2cfbcb957270125 );             
        SDK_FIXED_SIZE( compareitemstruct_t, 0x38 );             
    };                                        
};
#include "magic/compareitemstruct_t.end.hpp"
SDK_VERIFY( struct tag::compareitemstruct_t, 0x38 );
