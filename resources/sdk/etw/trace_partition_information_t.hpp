#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/trace_partition_information_t.start.hpp"
namespace etw
{
    // [struct _ETW_TRACE_PARTITION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_partition_information_t            
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 struct nt::guid_t partition_id;          //{ +0x0000    +0x0000    +0x0000    } | .PartitionId
        _m01 struct nt::guid_t parent_id;             //{ +0x0010    +0x0010    +0x0010    } | .ParentId
        _m02 int64_t           qpc_offset_from_root;  //{ +0x0020    +0x0020    +0x0020    } | .QpcOffsetFromRoot
        _m03 uint32_t          partition_type;        //{ +0x0028    +0x0028    +0x0028    } | .PartitionType
                                                    
        SDK_MAGIC_PROPERTIES( "_ETW_TRACE_PARTITION_INFORMATION.$", 0x30, true, 0x7cfde096d5e1a1e6 );                     
        SDK_FIXED_SIZE( trace_partition_information_t, 0x30 );                     
    };                                              
};
#include "magic/trace_partition_information_t.end.hpp"
SDK_VERIFY( struct etw::trace_partition_information_t, 0x30 );
