#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/sense_data_t.hpp"

#include "magic/srb_history_item_t.start.hpp"
namespace nt
{
    // [struct _SRB_HISTORY_ITEM]
    // => WDK 10 (NV)
    //
    struct srb_history_item_t                                            
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 int64_t                         tick_count_sent;              //{ +0x0000    } | .TickCountSent
        _m01 int64_t                         tick_count_completed;         //{ +0x0008    } | .TickCountCompleted
        _m02 uint32_t                        milliseconds_delay_on_retry;  //{ +0x0010    } | .MillisecondsDelayOnRetry
        _m03 struct stor::port::sense_data_t normalized_sense_data;        //{ +0x0014    } | .NormalizedSenseData
        _m04 uint8_t                         srb_status;                   //{ +0x0026    } | .SrbStatus
        _m05 uint8_t                         class_driver_use;             //{ +0x0027    } | .ClassDriverUse
                                                                         
        SDK_NONVOL_PROPERTIES( "_SRB_HISTORY_ITEM.$", 0x0, false, 0x5893b0c5b9157970 );                            
        SDK_FIXED_SIZE( srb_history_item_t, 0x28 );                            
    };                                                                   
};
#include "magic/srb_history_item_t.end.hpp"
SDK_VERIFY( struct nt::srb_history_item_t, 0x28 );
