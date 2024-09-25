#pragma once
#include <sdkgen/support_library.hpp>
#include "net_luid_lh_t.hpp"
#include "object_header_t.hpp"

namespace cm { struct partial_resource_list_t; }

#include "magic/miniport_init_parameters_t.start.hpp"
namespace ndis
{
    struct pci_device_custom_properties_t;
    struct port_authentication_parameters_t;

    // [struct _NDIS_MINIPORT_INIT_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_init_parameters_t                                                    
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                               
        _m00 struct ndis::object_header_t                   header;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                       flags;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 struct cm::partial_resource_list_t*            allocated_resources;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatedResources
        _m03 void*                                          im_device_instance_context;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IMDeviceInstanceContext
        _m04 void*                                          miniport_add_device_context;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MiniportAddDeviceContext
        _m05 uint32_t                                       if_index;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IfIndex
        _m06 union ndis::net_luid_lh_t                      net_luid;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NetLuid
        _m07 struct ndis::port_authentication_parameters_t* default_port_auth_states;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DefaultPortAuthStates
        _m08 struct ndis::pci_device_custom_properties_t*   pci_device_custom_properties;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PciDeviceCustomProperties
                                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_INIT_PARAMETERS.$", 0x40, true, 0x1094cda6e3d2cae2 );                             
        SDK_FIXED_SIZE( miniport_init_parameters_t, 0x40 );                              
    };                                                                                   
};
#include "magic/miniport_init_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_init_parameters_t, 0x40 );
