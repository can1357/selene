#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/cmci_initerr_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_CMCI_INITERR_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cmci_initerr_event_t                                  
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint64_t                       msr;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Msr
        _m02 uint32_t                       type;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Type
        _m03 uint32_t                       bank;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Bank
        _m04 uint32_t                       ep_index;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EpIndex
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_CMCI_INITERR_EVENT.$", 0x34, true, 0x2b760514337c93a3 );                     
        SDK_FIXED_SIZE( cmci_initerr_event_t, 0x34 );                     
    };                                                           
};
#include "magic/cmci_initerr_event_t.end.hpp"
SDK_VERIFY( struct wheap::cmci_initerr_event_t, 0x34 );
