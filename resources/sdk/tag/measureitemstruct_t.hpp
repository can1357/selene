#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/measureitemstruct_t.start.hpp"
namespace tag
{
    // [struct tagMEASUREITEMSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct measureitemstruct_t    
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t ctl_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CtlType
        _m01 uint32_t ctl_id;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CtlID
        _m02 uint32_t item_id;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .itemID
        _m03 uint32_t item_width;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .itemWidth
        _m04 uint32_t item_height;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .itemHeight
        _m05 uint64_t item_data;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .itemData
                                  
        SDK_MAGIC_PROPERTIES( "tagMEASUREITEMSTRUCT.$", 0x20, true, 0x90cc92444e25c60c );            
        SDK_FIXED_SIZE( measureitemstruct_t, 0x20 );            
    };                            
};
#include "magic/measureitemstruct_t.end.hpp"
SDK_VERIFY( struct tag::measureitemstruct_t, 0x20 );
