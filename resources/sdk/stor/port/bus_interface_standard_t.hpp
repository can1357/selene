#pragma once
#include <sdkgen/support_library.hpp>

namespace dma { struct adapter_t;            }
namespace nt  { struct device_description_t; }

#include "magic/bus_interface_standard_t.start.hpp"
namespace stor::port
{
    // [struct _BUS_INTERFACE_STANDARD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bus_interface_standard_t                            
    {                                                          
        using ptranslate_bus_address_t = sdk::function<uint8_t(void*, int64_t, uint32_t, uint32_t*, int64_t*)>*;                      
        using pget_dma_adapter_t =       sdk::function<struct dma::adapter_t*(void*, struct nt::device_description_t*, uint32_t*)>*;                      
        using pget_set_device_data_t =   sdk::function<uint32_t(void*, uint32_t, void*, uint32_t, uint32_t)>*;                      
        using pget_set_device_data_t =   sdk::function<uint32_t(void*, uint32_t, void*, uint32_t, uint32_t)>*;                      
                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                     
        _m00 uint16_t                    size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                    version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                       context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 ptranslate_bus_address_t    translate_bus_address;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TranslateBusAddress
        _m06 pget_dma_adapter_t          get_dma_adapter;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .GetDmaAdapter
        _m07 pget_set_device_data_t      set_bus_data;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SetBusData
        _m08 pget_set_device_data_t      get_bus_data;           //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .GetBusData
                                                               
        SDK_NONVOL_PROPERTIES( "_BUS_INTERFACE_STANDARD.$", 0x40, true, 0x318361d2b9413de8 );                      
        SDK_FIXED_SIZE( bus_interface_standard_t, 0x40 );                      
    };                                                         
};
#include "magic/bus_interface_standard_t.end.hpp"
SDK_VERIFY( struct stor::port::bus_interface_standard_t, 0x40 );
