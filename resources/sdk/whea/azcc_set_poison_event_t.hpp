#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/azcc_set_poison_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_AZCC_SET_POISON_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct azcc_set_poison_event_t                               
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       bus;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Bus
        _m02 uint8_t                        read_success;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ReadSuccess
        _m03 uint8_t                        write_success;         //{ +0x0025    +0x0025    +0x0025    +0x0025    } | .WriteSuccess
        _m04 uint8_t                        is_enable;             //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .IsEnable
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_AZCC_SET_POISON_EVENT.$", 0x27, true, 0x253d050b531cfef8 );                     
        SDK_FIXED_SIZE( azcc_set_poison_event_t, 0x27 );                     
    };                                                           
};
#include "magic/azcc_set_poison_event_t.end.hpp"
SDK_VERIFY( struct whea::azcc_set_poison_event_t, 0x27 );
