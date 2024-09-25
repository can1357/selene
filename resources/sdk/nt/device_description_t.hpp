#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/speed_t.hpp"
#include "../dma/width_t.hpp"
#include "interface_type_t.hpp"

#include "magic/device_description_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DESCRIPTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_description_t                                
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                     
        _m00 uint32_t                  version;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t                   master;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Master
        _m02 uint8_t                   scatter_gather;           //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .ScatterGather
        _m03 uint8_t                   demand_mode;              //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .DemandMode
        _m04 uint8_t                   auto_initialize;          //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AutoInitialize
        _m05 uint8_t                   dma32_bit_addresses;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Dma32BitAddresses
        _m06 uint8_t                   ignore_count;             //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .IgnoreCount
        _m07 uint8_t                   dma64_bit_addresses;      //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Dma64BitAddresses
        _m08 uint32_t                  bus_number;               //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .BusNumber
        _m09 uint32_t                  dma_channel;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DmaChannel
        _m10 enum nt::interface_type_t interface_type;           //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .InterfaceType
        _m11 enum dma::width_t         dma_width;                //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DmaWidth
        _m12 enum dma::speed_t         dma_speed;                //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .DmaSpeed
        _m13 uint32_t                  maximum_length;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MaximumLength
        _m14 uint32_t                  dma_port;                 //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .DmaPort
        _m15 uint32_t                  dma_address_width;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DmaAddressWidth
        _m16 uint32_t                  dma_controller_instance;  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .DmaControllerInstance
        _m17 uint32_t                  dma_request_line;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DmaRequestLine
        _m18 int64_t                   device_address;           //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .DeviceAddress
                                                               
        SDK_NONVOL_PROPERTIES( "_DEVICE_DESCRIPTION.$", 0x40, true, 0xf6c6c08d08ff9d8f );                        
        SDK_FIXED_SIZE( device_description_t, 0x40 );                        
    };                                                         
};
#include "magic/device_description_t.end.hpp"
SDK_VERIFY( struct nt::device_description_t, 0x40 );
