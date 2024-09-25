#pragma once
#include <sdkgen/support_library.hpp>
#include "express_designated_vendor_specific_nhi_attribute_t.hpp"
#include "express_designated_vendor_specific_pci_attribute_t.hpp"
#include "express_designated_vendor_specific_usb_attribute_t.hpp"

#include "magic/express_designated_vendor_specific_port_specific_attribute_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PORT_SPECIFIC_ATTRIBUTE]
    // => Windows 11
    //
    union express_designated_vendor_specific_port_specific_attribute_t
    {                                                                 
        using nhi_attribute_t = union pci::express_designated_vendor_specific_nhi_attribute_t;              
        using pci_attribute_t = union pci::express_designated_vendor_specific_pci_attribute_t;              
        using usb_attribute_t = union pci::express_designated_vendor_specific_usb_attribute_t;              
                                                                      
        // Windows 11                       
        //                                  
        _m00 nhi_attribute_t  nhi_attribute;                            //{ +0x0000    } | .NhiAttribute
        _m01 pci_attribute_t  pci_attribute;                            //{ +0x0000    } | .PciAttribute
        _m02 usb_attribute_t  usb_attribute;                            //{ +0x0000    } | .UsbAttribute
                                                                      
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PORT_SPECIFIC_ATTRIBUTE.$", 0x0, false, 0x576acd4c128dc7c7 );              
        SDK_FIXED_SIZE( express_designated_vendor_specific_port_specific_attribute_t, 0x4 );              
    };                                                                
};
#include "magic/express_designated_vendor_specific_port_specific_attribute_t.end.hpp"
SDK_VERIFY( union pci::express_designated_vendor_specific_port_specific_attribute_t, 0x4 );
