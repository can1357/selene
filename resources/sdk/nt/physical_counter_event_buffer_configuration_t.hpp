#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_counter_event_buffer_configuration_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct physical_counter_event_buffer_configuration_t        
    {                                                           
        using pphysical_counter_event_buffer_overflow_handler_t = sdk::function<void(void*, uint64_t, uint64_t, void*)>*;                               
        using overflow_handler_t =                                pphysical_counter_event_buffer_overflow_handler_t ;                               
                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                      
        _m00 overflow_handler_t  overflow_handler;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OverflowHandler
        _m01 uint32_t            custom_event_buffer_entry_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CustomEventBufferEntrySize
        _m02 uint32_t            event_threshold;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .EventThreshold
                                                                
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION.$", 0x10, true, 0xe006f4ed37331b86 );                               
        SDK_FIXED_SIZE( physical_counter_event_buffer_configuration_t, 0x10 );                               
    };                                                          
};
#include "magic/physical_counter_event_buffer_configuration_t.end.hpp"
SDK_VERIFY( struct nt::physical_counter_event_buffer_configuration_t, 0x10 );
