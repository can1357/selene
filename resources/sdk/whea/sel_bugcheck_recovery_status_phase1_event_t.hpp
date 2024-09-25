#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/sel_bugcheck_recovery_status_phase1_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sel_bugcheck_recovery_status_phase1_event_t           
    {                                                            
        struct u0_data_t                                         
        {                                                        
            // Windows 11                                        
            //                                                   
            _m04 uint8_t dump_policy;                              //{ +0x0000    } | .DumpPolicy
                                                                 
            SDK_MAGIC_PROPERTIES( "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT.Data.$", 0x0, false, 0xfc17ac337f37e8d0 );                                 
            SDK_FIXED_SIZE( u0_data_t, 0x4 );                                 
        };                                                       
                                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint8_t                        success;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Success
                                                                 
        // Windows 11                                            
        //                                                       
        _m02 uint8_t                        version;               //{ +0x0021    } | .Version
        _m03 uint16_t                       entry_count;           //{ +0x0022    } | .EntryCount
        _m05 u0_data_t                      data;                  //{ +0x0024    } | .Data
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT.$", 0x21, true, 0x787575670941227a );                     
        SDK_DYNAMIC_SIZE( sel_bugcheck_recovery_status_phase1_event_t );                     
    };                                                           
};
#include "magic/sel_bugcheck_recovery_status_phase1_event_t.end.hpp"
SDK_VERIFY( struct whea::sel_bugcheck_recovery_status_phase1_event_t::u0_data_t, 0x4 );
