#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_designated_vendor_specific_pci_attribute_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PCI_ATTRIBUTE]
    // => Windows 11
    //
    union express_designated_vendor_specific_pci_attribute_t
    {                                                       
        // Windows 11                          
        //                                     
        _m00 uint3_t  port_nhi_num;                           //{ +0x0000@0  } | .PortNhiNum
        _m01 uint2_t  port_expandability;                     //{ +0x0000@16 } | .PortExpandability
        _m02 uint2_t  host_router_indication;                 //{ +0x0000@18 } | .HostRouterIndication
        _m03 uint1_t  d3_code_wake_support;                   //{ +0x0000@20 } | .D3CodeWakeSupport
        _m04 uint8_t  bus_num_reservation_hint;               //{ +0x0000@24 } | .BusNumReservationHint
        _m05 uint32_t as_ulong;                               //{ +0x0000    } | .AsULONG
                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PCI_ATTRIBUTE.$", 0x0, false, 0xf8ada1c5ac8be2de );                         
        SDK_FIXED_SIZE( express_designated_vendor_specific_pci_attribute_t, 0x4 );                         
    };                                                      
};
#include "magic/express_designated_vendor_specific_pci_attribute_t.end.hpp"
SDK_VERIFY( union pci::express_designated_vendor_specific_pci_attribute_t, 0x4 );
