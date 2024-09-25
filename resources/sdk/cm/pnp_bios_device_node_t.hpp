#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pnp_bios_device_node_t.start.hpp"
namespace cm
{
    // [struct _CM_PNP_BIOS_DEVICE_NODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pnp_bios_device_node_t                     
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint16_t               size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint8_t                node;               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Node
        _m02 uint32_t               product_id;         //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .ProductId
        _m03 sdk::array<uint8_t, 3> device_type;        //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .DeviceType
        _m04 uint16_t               device_attributes;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .DeviceAttributes
                                                      
        SDK_NONVOL_PROPERTIES( "_CM_PNP_BIOS_DEVICE_NODE.$", 0xc, true, 0xf0b02da275b0f07d );                  
        SDK_FIXED_SIZE( pnp_bios_device_node_t, 0xc );                  
    };                                                
};
#include "magic/pnp_bios_device_node_t.end.hpp"
SDK_VERIFY( struct cm::pnp_bios_device_node_t, 0xc );
