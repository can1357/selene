#pragma once
#include <sdkgen/support_library.hpp>
#include "express_error_source_id_t.hpp"
#include "express_aer_capabilities_t.hpp"
#include "express_root_error_status_t.hpp"
#include "express_root_error_command_t.hpp"
#include "express_correctable_error_mask_t.hpp"
#include "express_correctable_error_status_t.hpp"
#include "express_uncorrectable_error_mask_t.hpp"
#include "express_enhanced_capability_header_t.hpp"
#include "express_uncorrectable_error_status_t.hpp"
#include "express_uncorrectable_error_severity_t.hpp"

#include "magic/express_rootport_aer_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_ROOTPORT_AER_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_rootport_aer_capability_t                                               
    {                                                                                      
        using uncorrectable_error_severity_t = union pci::express_uncorrectable_error_severity_t;                             
                                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                 
        _m00 struct pci::express_enhanced_capability_header_t header;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_uncorrectable_error_status_t  uncorrectable_error_status;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .UncorrectableErrorStatus
        _m02 union pci::express_uncorrectable_error_mask_t    uncorrectable_error_mask;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .UncorrectableErrorMask
        _m03 uncorrectable_error_severity_t                   uncorrectable_error_severity;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .UncorrectableErrorSeverity
        _m04 union pci::express_correctable_error_status_t    correctable_error_status;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CorrectableErrorStatus
        _m05 union pci::express_correctable_error_mask_t      correctable_error_mask;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .CorrectableErrorMask
        _m06 union pci::express_aer_capabilities_t            capabilities_and_control;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CapabilitiesAndControl
        _m07 sdk::array<uint32_t, 4>                          header_log;                    //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .HeaderLog
        _m08 union pci::express_root_error_command_t          root_error_command;            //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .RootErrorCommand
        _m09 union pci::express_root_error_status_t           root_error_status;             //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .RootErrorStatus
        _m10 union pci::express_error_source_id_t             error_source_id;               //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .ErrorSourceId
                                                                                           
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.$", 0x38, true, 0x486f1897b1bd3404 );                             
        SDK_FIXED_SIZE( express_rootport_aer_capability_t, 0x38 );                             
    };                                                                                     
};
#include "magic/express_rootport_aer_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_rootport_aer_capability_t, 0x38 );
