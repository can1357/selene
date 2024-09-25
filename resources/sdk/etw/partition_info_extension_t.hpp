#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/partition_info_extension_t.start.hpp"
namespace etw
{
    // [struct _ETW_PARTITION_INFO_EXTENSION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_info_extension_t               
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 uint16_t          event_version;         //{ +0x0000    +0x0000    +0x0000    } | .EventVersion
        _m01 uint32_t          partition_type;        //{ +0x0004    +0x0004    +0x0004    } | .PartitionType
        _m02 int64_t           qpc_offset_from_root;  //{ +0x0008    +0x0008    +0x0008    } | .QpcOffsetFromRoot
        _m03 struct nt::guid_t partition_id;          //{ +0x0010    +0x0010    +0x0010    } | .PartitionId
        _m04 struct nt::guid_t parent_id;             //{ +0x0020    +0x0020    +0x0020    } | .ParentId
                                                    
        SDK_MAGIC_PROPERTIES( "_ETW_PARTITION_INFO_EXTENSION.$", 0x30, true, 0x818141d266edfa22 );                     
        SDK_FIXED_SIZE( partition_info_extension_t, 0x30 );                     
    };                                              
};
#include "magic/partition_info_extension_t.end.hpp"
SDK_VERIFY( struct etw::partition_info_extension_t, 0x30 );
