#pragma once
#include <sdkgen/support_library.hpp>
#include "express_enhanced_capability_header_t.hpp"
#include "express_designated_vendor_specific_header_1_t.hpp"
#include "express_designated_vendor_specific_header_2_t.hpp"

#include "magic/express_designated_vendor_specific_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_designated_vendor_specific_capability_t                    
    {                                                                         
        using dvsec_header1_t = union pci::express_designated_vendor_specific_header_1_t;                
        using dvsec_header2_t = union pci::express_designated_vendor_specific_header_2_t;                
                                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                    
        _m00 struct pci::express_enhanced_capability_header_t header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 dvsec_header1_t                                  dvsec_header1;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DvsecHeader1
        _m02 dvsec_header2_t                                  dvsec_header2;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DvsecHeader2
        _m03 sdk::array<uint16_t, 1>                          dvsec_registers;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .DvsecRegisters
                                                                              
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY.$", 0xc, true, 0x704363eb4547b697 );                
        SDK_FIXED_SIZE( express_designated_vendor_specific_capability_t, 0xc );                
    };                                                                        
};
#include "magic/express_designated_vendor_specific_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_designated_vendor_specific_capability_t, 0xc );
