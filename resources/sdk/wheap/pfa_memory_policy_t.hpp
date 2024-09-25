#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/pfa_memory_policy_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PFA_MEMORY_POLICY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pfa_memory_policy_t                                    
    {                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                        
        _m00 struct whea::event_log_entry_t whea_event_log_entry;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       registry_keys_present;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RegistryKeysPresent
        _m02 uint8_t                        disable_offline;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .DisableOffline
        _m03 uint8_t                        persist_offline;        //{ +0x0025    +0x0025    +0x0025    +0x0025    } | .PersistOffline
        _m04 uint8_t                        pfa_disabled;           //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .PfaDisabled
        _m05 uint32_t                       page_count;             //{ +0x0027    +0x0027    +0x0027    +0x0027    } | .PageCount
        _m06 uint32_t                       error_threshold;        //{ +0x002b    +0x002b    +0x002b    +0x002b    } | .ErrorThreshold
        _m07 uint32_t                       time_out;               //{ +0x002f    +0x002f    +0x002f    +0x002f    } | .TimeOut
                                                                  
        SDK_NONVOL_PROPERTIES( "_WHEAP_PFA_MEMORY_POLICY.$", 0x33, true, 0x904849e9a03373bc );                      
        SDK_FIXED_SIZE( pfa_memory_policy_t, 0x33 );                      
    };                                                            
};
#include "magic/pfa_memory_policy_t.end.hpp"
SDK_VERIFY( struct wheap::pfa_memory_policy_t, 0x33 );
