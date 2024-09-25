#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trace_partition_information_v2_t.start.hpp"
namespace etw
{
    // [struct _ETW_TRACE_PARTITION_INFORMATION_V2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_partition_information_v2_t
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 int64_t  qpc_offset_from_root;  //{ +0x0000    +0x0000    +0x0000    } | .QpcOffsetFromRoot
        _m01 uint32_t partition_type;        //{ +0x0008    +0x0008    +0x0008    } | .PartitionType
        _m02 wchar_t* partition_id;          //{ +0x0010    +0x0010    +0x0010    } | .PartitionId
        _m03 wchar_t* parent_id;             //{ +0x0018    +0x0018    +0x0018    } | .ParentId
                                           
        SDK_MAGIC_PROPERTIES( "_ETW_TRACE_PARTITION_INFORMATION_V2.$", 0x20, true, 0xa4c0870e439ce953 );                     
        SDK_FIXED_SIZE( trace_partition_information_v2_t, 0x20 );                     
    };                                     
};
#include "magic/trace_partition_information_v2_t.end.hpp"
SDK_VERIFY( struct etw::trace_partition_information_v2_t, 0x20 );
