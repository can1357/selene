#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

namespace nt { struct irp_t; }

#include "magic/miniport_pnp_characteristics_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_PNP_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_pnp_characteristics_t                                                                   
    {                                                                                                       
        using miniport_filter_resource_requirements_handler_t = sdk::function<int32_t(void*, struct nt::irp_t*)>*;                                              
        using miniport_start_device_handler_t =                 sdk::function<int32_t(void*, struct nt::irp_t*)>*;                                              
                                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                                                  
        _m00 struct ndis::object_header_t                     header;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::function<int32_t(void*, void*)>*            miniport_add_device_handler;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniportAddDeviceHandler
        _m02 sdk::function<void(void*)>*                      miniport_remove_device_handler;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MiniportRemoveDeviceHandler
        _m03 miniport_filter_resource_requirements_handler_t  miniport_filter_resource_requirements_handler;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MiniportFilterResourceRequirementsHandler
        _m04 miniport_start_device_handler_t                  miniport_start_device_handler;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MiniportStartDeviceHandler
        _m05 uint32_t                                         flags;                                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
                                                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_PNP_CHARACTERISTICS.$", 0x30, true, 0xb12b6c9a3c0b3013 );                                              
        SDK_FIXED_SIZE( miniport_pnp_characteristics_t, 0x30 );                                              
    };                                                                                                      
};
#include "magic/miniport_pnp_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_pnp_characteristics_t, 0x30 );
