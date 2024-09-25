#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/process_hest_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PROCESS_HEST_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_hest_event_t                                  
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<char, 32>           error;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Error
        _m02 sdk::array<char, 32>           entry_type;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EntryType
        _m03 uint32_t                       entry_index;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .EntryIndex
        _m04 uint8_t                        hest_valid;            //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .HestValid
        _m05 uint32_t                       cmc_count;             //{ +0x0065    +0x0065    +0x0065    +0x0065    } | .CmcCount
        _m06 uint32_t                       mce_count;             //{ +0x0069    +0x0069    +0x0069    +0x0069    } | .MceCount
        _m07 uint32_t                       nmi_count;             //{ +0x006d    +0x006d    +0x006d    +0x006d    } | .NmiCount
        _m08 uint32_t                       aer_root_count;        //{ +0x0071    +0x0071    +0x0071    +0x0071    } | .AerRootCount
        _m09 uint32_t                       aer_bridge_count;      //{ +0x0075    +0x0075    +0x0075    +0x0075    } | .AerBridgeCount
        _m10 uint32_t                       aer_end_point_count;   //{ +0x0079    +0x0079    +0x0079    +0x0079    } | .AerEndPointCount
        _m11 uint32_t                       generic_v1_count;      //{ +0x007d    +0x007d    +0x007d    +0x007d    } | .GenericV1Count
        _m12 uint32_t                       generic_v2_count;      //{ +0x0081    +0x0081    +0x0081    +0x0081    } | .GenericV2Count
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_PROCESS_HEST_EVENT.$", 0x85, true, 0x656ddfacea878295 );                     
        SDK_FIXED_SIZE( process_hest_event_t, 0x85 );                     
    };                                                           
};
#include "magic/process_hest_event_t.end.hpp"
SDK_VERIFY( struct wheap::process_hest_event_t, 0x85 );
