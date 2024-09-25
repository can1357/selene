#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_designated_vendor_specific_header_2_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_designated_vendor_specific_header_2_t
    {                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint16_t dvsec_id;                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DvsecId
        _m01 uint16_t as_ushort;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                       
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2.$", 0x2, true, 0x4ac7c67e687b8ffc );          
        SDK_FIXED_SIZE( express_designated_vendor_specific_header_2_t, 0x2 );          
    };                                                 
};
#include "magic/express_designated_vendor_specific_header_2_t.end.hpp"
SDK_VERIFY( union pci::express_designated_vendor_specific_header_2_t, 0x2 );
