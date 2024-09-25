#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_designated_vendor_specific_usb_attribute_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_USB_ATTRIBUTE]
    // => Windows 11
    //
    union express_designated_vendor_specific_usb_attribute_t
    {                                                       
        // Windows 11           
        //                      
        _m00 uint3_t  port1_nhi;                              //{ +0x0000@0  } | .Port1Nhi
        _m01 uint3_t  port2_nhi;                              //{ +0x0000@4  } | .Port2Nhi
        _m02 uint3_t  port3_nhi;                              //{ +0x0000@8  } | .Port3Nhi
        _m03 uint3_t  port4_nhi;                              //{ +0x0000@12 } | .Port4Nhi
        _m04 uint3_t  port5_nhi;                              //{ +0x0000@16 } | .Port5Nhi
        _m05 uint3_t  port6_nhi;                              //{ +0x0000@20 } | .Port6Nhi
        _m06 uint3_t  port7_nhi;                              //{ +0x0000@24 } | .Port7Nhi
        _m07 uint3_t  port8_nhi;                              //{ +0x0000@28 } | .Port8Nhi
        _m08 uint32_t as_ulong;                               //{ +0x0000    } | .AsULONG
                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_USB_ATTRIBUTE.$", 0x0, false, 0x59ee014318de30f1 );          
        SDK_FIXED_SIZE( express_designated_vendor_specific_usb_attribute_t, 0x4 );          
    };                                                      
};
#include "magic/express_designated_vendor_specific_usb_attribute_t.end.hpp"
SDK_VERIFY( union pci::express_designated_vendor_specific_usb_attribute_t, 0x4 );
