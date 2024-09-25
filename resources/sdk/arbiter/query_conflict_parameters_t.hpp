#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct resource_descriptor_t; }
namespace nt { struct device_object_t;       }

#include "magic/query_conflict_parameters_t.start.hpp"
namespace arbiter
{
    struct conflict_info_t;

    // [struct _ARBITER_QUERY_CONFLICT_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_conflict_parameters_t                                
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 struct nt::device_object_t*       physical_device_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalDeviceObject
        _m01 struct io::resource_descriptor_t* conflicting_resource;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ConflictingResource
        _m02 uint32_t*                         conflict_count;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ConflictCount
        _m03 struct arbiter::conflict_info_t** conflicts;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Conflicts
                                                                      
        SDK_NONVOL_PROPERTIES( "_ARBITER_QUERY_CONFLICT_PARAMETERS.$", 0x20, true, 0xbe9b5c4f021739b1 );                       
        SDK_FIXED_SIZE( query_conflict_parameters_t, 0x20 );                       
    };                                                                
};
#include "magic/query_conflict_parameters_t.end.hpp"
SDK_VERIFY( struct arbiter::query_conflict_parameters_t, 0x20 );
