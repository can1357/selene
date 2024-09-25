#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/pcie_override_info_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PCIE_OVERRIDE_INFO]
    // => Windows 11
    //
    struct pcie_override_info_t                                          
    {                                                                    
        // Windows 11                                                    
        //                                                               
        _m00 struct whea::event_log_entry_t whea_event_log_entry;          //{ +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       segment;                       //{ +0x0020    } | .Segment
        _m02 uint32_t                       bus;                           //{ +0x0024    } | .Bus
        _m03 uint32_t                       device;                        //{ +0x0028    } | .Device
        _m04 uint32_t                       function;                      //{ +0x002c    } | .Function
        _m05 uint8_t                        valid_bits;                    //{ +0x0030    } | .ValidBits
        _m06 uint32_t                       uncorrectable_error_mask;      //{ +0x0034    } | .UncorrectableErrorMask
        _m07 uint32_t                       uncorrectable_error_severity;  //{ +0x0038    } | .UncorrectableErrorSeverity
        _m08 uint32_t                       correctable_error_mask;        //{ +0x003c    } | .CorrectableErrorMask
        _m09 uint32_t                       cap_and_control;               //{ +0x0040    } | .CapAndControl
                                                                         
        SDK_MAGIC_PROPERTIES( "_WHEAP_PCIE_OVERRIDE_INFO.$", 0x0, false, 0xd477856a45251224 );                             
        SDK_FIXED_SIZE( pcie_override_info_t, 0x44 );                             
    };                                                                   
};
#include "magic/pcie_override_info_t.end.hpp"
SDK_VERIFY( struct wheap::pcie_override_info_t, 0x44 );
