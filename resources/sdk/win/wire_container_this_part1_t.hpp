#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wire_container_this_part1_t.start.hpp"
namespace win
{
    // [struct WireContainerThisPart1]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_container_this_part1_t                                
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                            
        _m00 uint32_t          dcom_version_unused;                     //{ +0x0000    +0x0000    +0x0000    } | .dcomVersionUnused
        _m01 uint32_t          version;                                 //{ +0x0004    +0x0004    +0x0004    } | .version
        _m02 uint64_t          capability_flags;                        //{ +0x0008    +0x0008    +0x0008    } | .capabilityFlags
        _m03 uint64_t          request_flags;                           //{ +0x0010    +0x0010    +0x0010    } | .requestFlags
        _m04 struct nt::guid_t causality_id;                            //{ +0x0018    +0x0018    +0x0018    } | .causalityId
        _m05 struct nt::guid_t unassigned_sync_passthrough_guid;        //{ +0x0028    +0x0028    +0x0028    } | .unassignedSyncPassthroughGuid
        _m06 struct nt::guid_t passthrough_trace_activity;              //{ +0x0038    +0x0038    +0x0038    } | .passthroughTraceActivity
        _m07 struct nt::guid_t unassigned_always_passthrough_guid_2;    //{ +0x0048    +0x0048    +0x0048    } | .unassignedAlwaysPassthroughGuid_2
        _m08 struct nt::guid_t call_id;                                 //{ +0x0058    +0x0058    +0x0058    } | .callId
        _m09 struct nt::guid_t reserved_guid_2;                         //{ +0x0068    +0x0068    +0x0068    } | .reservedGuid_2
        _m10 struct nt::guid_t reserved_guid_3;                         //{ +0x0078    +0x0078    +0x0078    } | .reservedGuid_3
        _m11 struct nt::guid_t reserved_guid_4;                         //{ +0x0088    +0x0088    +0x0088    } | .reservedGuid_4
        _m12 uint64_t          unassigned_sync_passthrough_uint64_1;    //{ +0x0098    +0x0098    +0x0098    } | .unassignedSyncPassthroughUint64_1
        _m13 uint64_t          unassigned_sync_passthrough_uint64_2;    //{ +0x00a0    +0x00a0    +0x00a0    } | .unassignedSyncPassthroughUint64_2
        _m14 uint64_t          unassigned_always_passthrough_uint64_1;  //{ +0x00a8    +0x00a8    +0x00a8    } | .unassignedAlwaysPassthroughUint64_1
        _m15 uint64_t          unassigned_always_passthrough_uint64_2;  //{ +0x00b0    +0x00b0    +0x00b0    } | .unassignedAlwaysPassthroughUint64_2
        _m16 uint64_t          reserved_uint64_1;                       //{ +0x00b8    +0x00b8    +0x00b8    } | .reservedUint64_1
        _m17 uint64_t          reserved_uint64_2;                       //{ +0x00c0    +0x00c0    +0x00c0    } | .reservedUint64_2
        _m18 uint64_t          reserved_uint64_3;                       //{ +0x00c8    +0x00c8    +0x00c8    } | .reservedUint64_3
        _m19 uint64_t          reserved_uint64_4;                       //{ +0x00d0    +0x00d0    +0x00d0    } | .reservedUint64_4
        _m20 uint32_t          reserved_uint32;                         //{ +0x00d8    +0x00d8    +0x00d8    } | .reservedUint32
        _m21 uint32_t          unique;                                  //{ +0x00dc    +0x00dc    +0x00dc    } | .unique
                                                                      
        SDK_MAGIC_PROPERTIES( "WireContainerThisPart1.$", 0xe0, true, 0x88f30729458e0e6 );                                       
        SDK_FIXED_SIZE( wire_container_this_part1_t, 0xe0 );                                       
    };                                                                
};
#include "magic/wire_container_this_part1_t.end.hpp"
SDK_VERIFY( struct win::wire_container_this_part1_t, 0xe0 );
