#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_designated_vendor_specific_header_1_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_designated_vendor_specific_header_1_t
    {                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint16_t dvsec_vendor_id;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DvsecVendorId
        _m01 uint4_t  dvsec_version;                     //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .DvsecVersion
        _m02 uint12_t dvsec_length;                      //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .DvsecLength
        _m03 uint32_t as_ulong;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                       
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1.$", 0x4, true, 0x9f0dbd7b69aeef23 );                
        SDK_FIXED_SIZE( express_designated_vendor_specific_header_1_t, 0x4 );                
    };                                                 
};
#include "magic/express_designated_vendor_specific_header_1_t.end.hpp"
SDK_VERIFY( union pci::express_designated_vendor_specific_header_1_t, 0x4 );
