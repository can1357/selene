#pragma once
#include <sdkgen/support_library.hpp>
#include "../arbiter/request_source_t.hpp"

namespace cm { struct resource_list_t;              }
namespace io { struct resource_requirements_list_t; }
namespace nt { struct device_object_t;              }

#include "magic/resource_request_t.start.hpp"
namespace pnp
{
    // [struct _PNP_RESOURCE_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resource_request_t                                                        
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                           
        _m00 struct nt::device_object_t*              physical_device;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalDevice
        _m01 uint32_t                                 flags;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 enum arbiter::request_source_t           allocation_type;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AllocationType
        _m03 uint32_t                                 priority;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Priority
        _m04 uint32_t                                 position;                        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Position
        _m05 struct io::resource_requirements_list_t* resource_requirements;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ResourceRequirements
        _m06 void*                                    req_list;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReqList
        _m07 struct cm::resource_list_t*              resource_assignment;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ResourceAssignment
        _m08 struct cm::resource_list_t*              translated_resource_assignment;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TranslatedResourceAssignment
        _m09 int32_t                                  status;                          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Status
                                                                                     
        SDK_MAGIC_PROPERTIES( "_PNP_RESOURCE_REQUEST.$", 0x40, true, 0x64958139bd3cccbf );                               
        SDK_FIXED_SIZE( resource_request_t, 0x40 );                                  
    };                                                                               
};
#include "magic/resource_request_t.end.hpp"
SDK_VERIFY( struct pnp::resource_request_t, 0x40 );
