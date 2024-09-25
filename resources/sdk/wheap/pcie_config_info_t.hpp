#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/pcie_config_info_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PCIE_CONFIG_INFO]
    // => Windows 11
    //
    struct pcie_config_info_t                                    
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       segment;               //{ +0x0020    } | .Segment
        _m02 uint32_t                       bus;                   //{ +0x0024    } | .Bus
        _m03 uint32_t                       device;                //{ +0x0028    } | .Device
        _m04 uint32_t                       function;              //{ +0x002c    } | .Function
        _m05 uint32_t                       offset;                //{ +0x0030    } | .Offset
        _m06 uint32_t                       length;                //{ +0x0034    } | .Length
        _m07 uint64_t                       value;                 //{ +0x0038    } | .Value
        _m08 uint8_t                        succeeded;             //{ +0x0040    } | .Succeeded
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEAP_PCIE_CONFIG_INFO.$", 0x0, false, 0xe58bd90860d2dbaa );                     
        SDK_FIXED_SIZE( pcie_config_info_t, 0x44 );                     
    };                                                           
};
#include "magic/pcie_config_info_t.end.hpp"
SDK_VERIFY( struct wheap::pcie_config_info_t, 0x44 );
