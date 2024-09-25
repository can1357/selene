#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/hd_split_attributes_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_HD_SPLIT_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hd_split_attributes_t                                
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                      
        _m00 struct ndis::object_header_t header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     hardware_capabilities;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HardwareCapabilities
        _m02 uint32_t                     current_capabilities;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentCapabilities
        _m03 uint32_t                     hd_split_flags;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HDSplitFlags
        _m04 uint32_t                     backfill_size;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BackfillSize
        _m05 uint32_t                     max_header_size;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MaxHeaderSize
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_HD_SPLIT_ATTRIBUTES.$", 0x18, true, 0x901ecba52f0c00a9 );                      
        SDK_FIXED_SIZE( hd_split_attributes_t, 0x18 );                      
    };                                                          
};
#include "magic/hd_split_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::hd_split_attributes_t, 0x18 );
