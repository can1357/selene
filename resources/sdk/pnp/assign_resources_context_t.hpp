#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/assign_resources_context_t.start.hpp"
namespace pnp
{
    // [struct _PNP_ASSIGN_RESOURCES_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct assign_resources_context_t                                          
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                     
        _m00 uint32_t                                   include_failed_devices;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IncludeFailedDevices
        _m01 uint32_t                                   device_count;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceCount
        _m02 sdk::array<struct nt::device_object_t*, 1> device_list;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceList
                                                                               
        SDK_MAGIC_PROPERTIES( "_PNP_ASSIGN_RESOURCES_CONTEXT.$", 0x10, true, 0xd4ac48e6a52b17da );                       
        SDK_FIXED_SIZE( assign_resources_context_t, 0x10 );                       
    };                                                                         
};
#include "magic/assign_resources_context_t.end.hpp"
SDK_VERIFY( struct pnp::assign_resources_context_t, 0x10 );
