#pragma once
#include <sdkgen/support_library.hpp>
#include "express_enhanced_capability_header_t.hpp"
#include "express_designated_vendor_specific_header_1_t.hpp"
#include "express_designated_vendor_specific_header_2_t.hpp"

#include "magic/express_cxl_dvsec_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_CXL_DVSEC_CAPABILITY]
    // => Windows 11
    //
    struct express_cxl_dvsec_capability_t                                   
    {                                                                       
        using dvsec_header1_t = union pci::express_designated_vendor_specific_header_1_t;              
        using dvsec_header2_t = union pci::express_designated_vendor_specific_header_2_t;              
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m00 struct pci::express_enhanced_capability_header_t header;         //{ +0x0000    } | .Header
        _m01 dvsec_header1_t                                  dvsec_header1;  //{ +0x0004    } | .DvsecHeader1
        _m02 dvsec_header2_t                                  dvsec_header2;  //{ +0x0008    } | .DvsecHeader2
                                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY.$", 0x0, false, 0xb0502b2f3ed1b57a );              
        SDK_FIXED_SIZE( express_cxl_dvsec_capability_t, 0x38 );              
    };                                                                      
};
#include "magic/express_cxl_dvsec_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_cxl_dvsec_capability_t, 0x38 );
