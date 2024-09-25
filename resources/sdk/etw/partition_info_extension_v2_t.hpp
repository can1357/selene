#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/partition_info_extension_v2_t.start.hpp"
namespace etw
{
    // [struct _ETW_PARTITION_INFO_EXTENSION_V2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_info_extension_v2_t   
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint16_t event_version;         //{ +0x0000    +0x0000    +0x0000    } | .EventVersion
        _m01 uint32_t partition_type;        //{ +0x0004    +0x0004    +0x0004    } | .PartitionType
        _m02 int64_t  qpc_offset_from_root;  //{ +0x0008    +0x0008    +0x0008    } | .QpcOffsetFromRoot
                                           
        SDK_MAGIC_PROPERTIES( "_ETW_PARTITION_INFO_EXTENSION_V2.$", 0x10, true, 0xc9d3d9c414570c6a );                     
        SDK_FIXED_SIZE( partition_info_extension_v2_t, 0x10 );                     
    };                                     
};
#include "magic/partition_info_extension_v2_t.end.hpp"
SDK_VERIFY( struct etw::partition_info_extension_v2_t, 0x10 );
