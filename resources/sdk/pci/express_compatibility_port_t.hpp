#pragma once
#include <sdkgen/support_library.hpp>
#include "npem_control_t.hpp"
#include "resizable_bar_info_t.hpp"
#include "express_device_type_t.hpp"
#include "npem_interface_context_t.hpp"
#include "express_link_status_register_t.hpp"
#include "express_link_control_register_t.hpp"
#include "express_device_control_register_t.hpp"
#include "express_link_capabilities_register_t.hpp"
#include "express_device_capabilities_register_t.hpp"

#include "magic/express_compatibility_port_t.start.hpp"
namespace pci
{
    struct device_t;

    // [struct _EXPRESS_COMPATIBILITY_PORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct express_compatibility_port_t                                                
    {                                                                                  
        using device_capabilities_t = union pci::express_device_capabilities_register_t;                          
                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                             
        _m00 enum pci::express_device_type_t                 device_type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceType
        _m01 struct pci::device_t*                           device;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Device
        _m02 union pci::express_device_control_register_t    device_control;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceControl
        _m03 device_capabilities_t                           device_capabilities;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DeviceCapabilities
        _m04 uint8_t                                         express_link_valid;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ExpressLinkValid
        _m05 union pci::express_link_capabilities_register_t link_capabilities;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .LinkCapabilities
        _m06 union pci::express_link_control_register_t      link_control;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LinkControl
        _m07 union pci::express_link_status_register_t       link_status;                //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .LinkStatus
        _m08 uint1_t                                         base_version11_or_greater;  //{ +0x0024@0  +0x0024@0  +0x0024@0  +0x0024@0  } | .BaseVersion11OrGreater
        _m09 uint16_t                                        aer_capability;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AerCapability
        _m10 uint16_t                                        thunderbolt_capability;     //{ +0x002a    +0x002c    +0x002c    +0x002c    } | .ThunderboltCapability
        _m11 struct pci::resizable_bar_info_t                resizable_bar;              //{ +0x002c    +0x0030    +0x0030    +0x0030    } | .ResizableBar
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                             
        _m12 uint16_t                                        express_pc_capability;      //{ +0x002a    +0x002a    +0x002a    } | .ExpressPcCapability
        _m13 uint16_t                                        npem_capability;            //{ +0x0054    +0x0054    +0x0054    } | .NpemCapability
        _m14 struct pci::npem_interface_context_t            npem_interface_context;     //{ +0x0058    +0x0058    +0x0058    } | .NpemInterfaceContext
        _m15 struct pci::npem_control_t                      npem_control_block;         //{ +0x0068    +0x0068    +0x0068    } | .NpemControlBlock
        _m16 uint16_t                                        l1_pm_ss_capability;        //{ +0x0090    +0x0090    +0x0090    } | .L1PmSsCapability
                                                                                       
        SDK_MAGIC_PROPERTIES( "_EXPRESS_COMPATIBILITY_PORT.$", 0x98, true, 0xad221501a3135e6f );                          
        SDK_DYNAMIC_SIZE( express_compatibility_port_t );                              
    };                                                                                 
};
#include "magic/express_compatibility_port_t.end.hpp"
