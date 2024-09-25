#pragma once
#include <sdkgen/support_library.hpp>
#include "pcie_address_t.hpp"
#include "event_log_entry_t.hpp"

#include "magic/throttle_pcie_add_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_THROTTLE_PCIE_ADD_EVENT]
    // => Windows 11
    //
    struct throttle_pcie_add_event_t                             
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 struct whea::pcie_address_t    address;               //{ +0x0020    } | .Address
        _m02 uint32_t                       mask;                  //{ +0x0030    } | .Mask
        _m03 uint8_t                        updated;               //{ +0x0034    } | .Updated
        _m04 int32_t                        status;                //{ +0x0035    } | .Status
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_THROTTLE_PCIE_ADD_EVENT.$", 0x0, false, 0x8d3fa6e64d61ba63 );                     
        SDK_FIXED_SIZE( throttle_pcie_add_event_t, 0x39 );                     
    };                                                           
};
#include "magic/throttle_pcie_add_event_t.end.hpp"
SDK_VERIFY( struct whea::throttle_pcie_add_event_t, 0x39 );
