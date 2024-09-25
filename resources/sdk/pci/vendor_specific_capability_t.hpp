#pragma once
#include <sdkgen/support_library.hpp>
#include "capabilities_header_t.hpp"

#include "magic/vendor_specific_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_VENDOR_SPECIFIC_CAPABILITY]
    // => Windows 11
    //
    struct vendor_specific_capability_t                        
    {                                                          
        // Windows 11                                          
        //                                                     
        _m00 struct pci::capabilities_header_t header;           //{ +0x0000    } | .Header
        _m01 uint8_t                           vsc_length;       //{ +0x0002    } | .VscLength
        _m02 uint8_t                           vendor_specific;  //{ +0x0003    } | .VendorSpecific
                                                               
        SDK_MAGIC_PROPERTIES( "_PCI_VENDOR_SPECIFIC_CAPABILITY.$", 0x0, false, 0x82cae8e26ded6019 );                
        SDK_FIXED_SIZE( vendor_specific_capability_t, 0x4 );                
    };                                                         
};
#include "magic/vendor_specific_capability_t.end.hpp"
SDK_VERIFY( struct pci::vendor_specific_capability_t, 0x4 );
