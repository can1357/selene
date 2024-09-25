#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/containerthat_t.start.hpp"
namespace win
{
    struct container_extent_array_t;

    // [struct CONTAINERTHAT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct containerthat_t                                                         
    {                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                         
        _m00 uint64_t                              response_flags;                   //{ +0x0000    +0x0000    +0x0000    } | .responseFlags
        _m01 struct nt::guid_t                     unassigned_passthrough_guid_1;    //{ +0x0008    +0x0008    +0x0008    } | .unassignedPassthroughGuid_1
        _m02 struct nt::guid_t                     unassigned_passthrough_guid_2;    //{ +0x0018    +0x0018    +0x0018    } | .unassignedPassthroughGuid_2
        _m03 struct nt::guid_t                     unassigned_passthrough_guid_3;    //{ +0x0028    +0x0028    +0x0028    } | .unassignedPassthroughGuid_3
        _m04 struct nt::guid_t                     unassigned_passthrough_guid_4;    //{ +0x0038    +0x0038    +0x0038    } | .unassignedPassthroughGuid_4
        _m05 struct nt::guid_t                     reserved_guid_1;                  //{ +0x0048    +0x0048    +0x0048    } | .reservedGuid_1
        _m06 struct nt::guid_t                     reserved_guid_2;                  //{ +0x0058    +0x0058    +0x0058    } | .reservedGuid_2
        _m07 struct nt::guid_t                     reserved_guid_3;                  //{ +0x0068    +0x0068    +0x0068    } | .reservedGuid_3
        _m08 struct nt::guid_t                     reserved_guid_4;                  //{ +0x0078    +0x0078    +0x0078    } | .reservedGuid_4
        _m09 uint64_t                              unassigned_passthrough_uint64_1;  //{ +0x0088    +0x0088    +0x0088    } | .unassignedPassthroughUint64_1
        _m10 uint64_t                              unassigned_passthrough_uint64_2;  //{ +0x0090    +0x0090    +0x0090    } | .unassignedPassthroughUint64_2
        _m11 uint64_t                              unassigned_passthrough_uint64_3;  //{ +0x0098    +0x0098    +0x0098    } | .unassignedPassthroughUint64_3
        _m12 uint64_t                              unassigned_passthrough_uint64_4;  //{ +0x00a0    +0x00a0    +0x00a0    } | .unassignedPassthroughUint64_4
        _m13 uint64_t                              marshaling_set_id;                //{ +0x00a8    +0x00a8    +0x00a8    } | .marshalingSetId
        _m14 uint64_t                              reserved_uint64_2;                //{ +0x00b0    +0x00b0    +0x00b0    } | .reservedUint64_2
        _m15 uint64_t                              reserved_uint64_3;                //{ +0x00b8    +0x00b8    +0x00b8    } | .reservedUint64_3
        _m16 uint64_t                              reserved_uint64_4;                //{ +0x00c0    +0x00c0    +0x00c0    } | .reservedUint64_4
        _m17 uint32_t                              reserved_uint32;                  //{ +0x00c8    +0x00c8    +0x00c8    } | .reservedUint32
        _m18 struct win::container_extent_array_t* extensions;                       //{ +0x00d0    +0x00d0    +0x00d0    } | .extensions
                                                                                   
        SDK_MAGIC_PROPERTIES( "CONTAINERTHAT.$", 0xd8, true, 0xd3319a75b3a7ce13 );                                
        SDK_FIXED_SIZE( containerthat_t, 0xd8 );                                   
    };                                                                             
};
#include "magic/containerthat_t.end.hpp"
SDK_VERIFY( struct win::containerthat_t, 0xd8 );
