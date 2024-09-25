#pragma once
#include <sdkgen/support_library.hpp>
#include "pcie_address_t.hpp"
#include "event_log_entry_t.hpp"

#include "magic/throttle_pcie_remove_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_THROTTLE_PCIE_REMOVE_EVENT]
    // => Windows 11
    //
    struct throttle_pcie_remove_event_t                          
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 struct whea::pcie_address_t    address;               //{ +0x0020    } | .Address
        _m02 uint32_t                       mask;                  //{ +0x0030    } | .Mask
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_THROTTLE_PCIE_REMOVE_EVENT.$", 0x0, false, 0x9d3ea76221894ec2 );                     
        SDK_FIXED_SIZE( throttle_pcie_remove_event_t, 0x34 );                     
    };                                                           
};
#include "magic/throttle_pcie_remove_event_t.end.hpp"
SDK_VERIFY( struct whea::throttle_pcie_remove_event_t, 0x34 );
