#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

namespace whea { struct error_packet_v2_t; }

#include "magic/started_report_hw_error_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_STARTED_REPORT_HW_ERROR]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct started_report_hw_error_t                              
    {                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                        
        _m00 struct whea::event_log_entry_t  whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 struct whea::error_packet_v2_t* error_packet;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrorPacket
                                                                  
        SDK_NONVOL_PROPERTIES( "_WHEAP_STARTED_REPORT_HW_ERROR.$", 0x28, true, 0x93ffb60dfcaaf59a );                     
        SDK_FIXED_SIZE( started_report_hw_error_t, 0x28 );                     
    };                                                            
};
#include "magic/started_report_hw_error_t.end.hpp"
SDK_VERIFY( struct wheap::started_report_hw_error_t, 0x28 );
