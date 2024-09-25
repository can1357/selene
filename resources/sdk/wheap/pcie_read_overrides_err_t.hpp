#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/pcie_read_overrides_err_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PCIE_READ_OVERRIDES_ERR]
    // => Windows 11
    //
    struct pcie_read_overrides_err_t                             
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       failure_reason;        //{ +0x0020    } | .FailureReason
        _m02 int32_t                        failure_status;        //{ +0x0024    } | .FailureStatus
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEAP_PCIE_READ_OVERRIDES_ERR.$", 0x0, false, 0xdf0bc48e95fb298a );                     
        SDK_FIXED_SIZE( pcie_read_overrides_err_t, 0x28 );                     
    };                                                           
};
#include "magic/pcie_read_overrides_err_t.end.hpp"
SDK_VERIFY( struct wheap::pcie_read_overrides_err_t, 0x28 );
