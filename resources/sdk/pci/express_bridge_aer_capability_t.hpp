#pragma once
#include <sdkgen/support_library.hpp>
#include "express_aer_capabilities_t.hpp"
#include "express_sec_aer_capabilities_t.hpp"
#include "express_correctable_error_mask_t.hpp"
#include "express_correctable_error_status_t.hpp"
#include "express_uncorrectable_error_mask_t.hpp"
#include "express_enhanced_capability_header_t.hpp"
#include "express_uncorrectable_error_status_t.hpp"
#include "express_sec_uncorrectable_error_mask_t.hpp"
#include "express_uncorrectable_error_severity_t.hpp"
#include "express_sec_uncorrectable_error_status_t.hpp"
#include "express_sec_uncorrectable_error_severity_t.hpp"

#include "magic/express_bridge_aer_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_BRIDGE_AER_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_bridge_aer_capability_t                                                     
    {                                                                                          
        using uncorrectable_error_severity_t =     union pci::express_uncorrectable_error_severity_t;                                 
        using sec_uncorrectable_error_status_t =   union pci::express_sec_uncorrectable_error_status_t;                                 
        using sec_uncorrectable_error_mask_t =     union pci::express_sec_uncorrectable_error_mask_t;                                 
        using sec_uncorrectable_error_severity_t = union pci::express_sec_uncorrectable_error_severity_t;                                 
                                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                     
        _m00 struct pci::express_enhanced_capability_header_t header;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_uncorrectable_error_status_t  uncorrectable_error_status;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .UncorrectableErrorStatus
        _m02 union pci::express_uncorrectable_error_mask_t    uncorrectable_error_mask;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .UncorrectableErrorMask
        _m03 uncorrectable_error_severity_t                   uncorrectable_error_severity;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .UncorrectableErrorSeverity
        _m04 union pci::express_correctable_error_status_t    correctable_error_status;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CorrectableErrorStatus
        _m05 union pci::express_correctable_error_mask_t      correctable_error_mask;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .CorrectableErrorMask
        _m06 union pci::express_aer_capabilities_t            capabilities_and_control;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CapabilitiesAndControl
        _m07 sdk::array<uint32_t, 4>                          header_log;                        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .HeaderLog
        _m08 sec_uncorrectable_error_status_t                 sec_uncorrectable_error_status;    //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .SecUncorrectableErrorStatus
        _m09 sec_uncorrectable_error_mask_t                   sec_uncorrectable_error_mask;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SecUncorrectableErrorMask
        _m10 sec_uncorrectable_error_severity_t               sec_uncorrectable_error_severity;  //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .SecUncorrectableErrorSeverity
        _m11 union pci::express_sec_aer_capabilities_t        sec_capabilities_and_control;      //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .SecCapabilitiesAndControl
        _m12 sdk::array<uint32_t, 4>                          sec_header_log;                    //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .SecHeaderLog
                                                                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.$", 0x4c, true, 0x52fb6f060bbe22e2 );                                 
        SDK_FIXED_SIZE( express_bridge_aer_capability_t, 0x4c );                                 
    };                                                                                         
};
#include "magic/express_bridge_aer_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_bridge_aer_capability_t, 0x4c );
