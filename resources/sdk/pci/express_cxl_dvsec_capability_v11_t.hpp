#pragma once
#include <sdkgen/support_library.hpp>
#include "express_cxl_dvsec_lock_register_t.hpp"
#include "express_cxl_dvsec_status_register_t.hpp"
#include "express_cxl_dvsec_control_register_t.hpp"
#include "express_enhanced_capability_header_t.hpp"
#include "express_cxl_dvsec_capability_register_v11_t.hpp"
#include "express_cxl_dvsec_range_base_low_register_t.hpp"
#include "express_cxl_dvsec_range_base_high_register_t.hpp"
#include "express_cxl_dvsec_range_size_high_register_t.hpp"
#include "express_designated_vendor_specific_header_1_t.hpp"
#include "express_designated_vendor_specific_header_2_t.hpp"
#include "express_cxl_dvsec_range_size_low_register_v11_t.hpp"

#include "magic/express_cxl_dvsec_capability_v11_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11]
    // => Windows 11
    //
    struct express_cxl_dvsec_capability_v11_t                                  
    {                                                                          
        using dvsec_header1_t =                                     union pci::express_designated_vendor_specific_header_1_t;                 
        using dvsec_header2_t =                                     union pci::express_designated_vendor_specific_header_2_t;                 
        using pci_express_cxl_dvsec_capability_register_v11_t =     union pci::express_cxl_dvsec_capability_register_v11_t;                 
        using pci_express_cxl_dvsec_range_size_high_register_t =    struct pci::express_cxl_dvsec_range_size_high_register_t;                 
        using range1_size_high_t =                                  pci_express_cxl_dvsec_range_size_high_register_t ;                 
        using pci_express_cxl_dvsec_range_size_low_register_v11_t = union pci::express_cxl_dvsec_range_size_low_register_v11_t;                 
        using range1_size_low_t =                                   pci_express_cxl_dvsec_range_size_low_register_v11_t ;                 
        using pci_express_cxl_dvsec_range_base_high_register_t =    struct pci::express_cxl_dvsec_range_base_high_register_t;                 
        using range1_base_high_t =                                  pci_express_cxl_dvsec_range_base_high_register_t ;                 
        using pci_express_cxl_dvsec_range_base_low_register_t =     union pci::express_cxl_dvsec_range_base_low_register_t;                 
        using pci_express_cxl_dvsec_range_size_high_register_t =    struct pci::express_cxl_dvsec_range_size_high_register_t;                 
        using range2_size_high_t =                                  pci_express_cxl_dvsec_range_size_high_register_t ;                 
        using pci_express_cxl_dvsec_range_size_low_register_v11_t = union pci::express_cxl_dvsec_range_size_low_register_v11_t;                 
        using range2_size_low_t =                                   pci_express_cxl_dvsec_range_size_low_register_v11_t ;                 
        using pci_express_cxl_dvsec_range_base_high_register_t =    struct pci::express_cxl_dvsec_range_base_high_register_t;                 
        using range2_base_high_t =                                  pci_express_cxl_dvsec_range_base_high_register_t ;                 
        using pci_express_cxl_dvsec_range_base_low_register_t =     union pci::express_cxl_dvsec_range_base_low_register_t;                 
                                                                               
        // Windows 11                                                          
        //                                                                     
        _m00 struct pci::express_enhanced_capability_header_t header;            //{ +0x0000    } | .Header
        _m01 dvsec_header1_t                                  dvsec_header1;     //{ +0x0004    } | .DvsecHeader1
        _m02 dvsec_header2_t                                  dvsec_header2;     //{ +0x0008    } | .DvsecHeader2
        _m03 pci_express_cxl_dvsec_capability_register_v11_t  capability;        //{ +0x000a    } | .Capability
        _m04 union pci::express_cxl_dvsec_control_register_t  control;           //{ +0x000c    } | .Control
        _m05 union pci::express_cxl_dvsec_status_register_t   status;            //{ +0x000e    } | .Status
        _m06 uint16_t                                         control2;          //{ +0x0010    } | .Control2
        _m07 uint16_t                                         status2;           //{ +0x0012    } | .Status2
        _m08 union pci::express_cxl_dvsec_lock_register_t     lock;              //{ +0x0014    } | .Lock
        _m09 range1_size_high_t                               range1_size_high;  //{ +0x0018    } | .Range1SizeHigh
        _m10 range1_size_low_t                                range1_size_low;   //{ +0x001c    } | .Range1SizeLow
        _m11 range1_base_high_t                               range1_base_high;  //{ +0x0020    } | .Range1BaseHigh
        _m12 pci_express_cxl_dvsec_range_base_low_register_t  range1_base_low;   //{ +0x0024    } | .Range1BaseLow
        _m13 range2_size_high_t                               range2_size_high;  //{ +0x0028    } | .Range2SizeHigh
        _m14 range2_size_low_t                                range2_size_low;   //{ +0x002c    } | .Range2SizeLow
        _m15 range2_base_high_t                               range2_base_high;  //{ +0x0030    } | .Range2BaseHigh
        _m16 pci_express_cxl_dvsec_range_base_low_register_t  range2_base_low;   //{ +0x0034    } | .Range2BaseLow
                                                                               
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.$", 0x0, false, 0xcef3ffc0e9ea0db1 );                 
        SDK_FIXED_SIZE( express_cxl_dvsec_capability_v11_t, 0x38 );                 
    };                                                                         
};
#include "magic/express_cxl_dvsec_capability_v11_t.end.hpp"
SDK_VERIFY( struct pci::express_cxl_dvsec_capability_v11_t, 0x38 );
