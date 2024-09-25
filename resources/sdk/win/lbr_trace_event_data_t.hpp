#pragma once
#include <sdkgen/support_library.hpp>
#include "../etw/lbr_entry_t.hpp"

#include "magic/lbr_trace_event_data_t.start.hpp"
namespace win
{
    // [struct _LBR_TRACE_EVENT_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lbr_trace_event_data_t                              
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                     
        _m00 uint64_t                               time_stamp;  //{ +0x0000    +0x0000    +0x0000    } | .TimeStamp
        _m01 uint32_t                               process_id;  //{ +0x0008    +0x0008    +0x0008    } | .ProcessId
        _m02 uint32_t                               thread_id;   //{ +0x000c    +0x000c    +0x000c    } | .ThreadId
        _m03 uint32_t                               options;     //{ +0x0010    +0x0010    +0x0010    } | .Options
        _m04 sdk::array<struct etw::lbr_entry_t, 1> entries;     //{ +0x0018    +0x0018    +0x0018    } | .Entries
                                                               
        SDK_MAGIC_PROPERTIES( "_LBR_TRACE_EVENT_DATA.$", 0x30, true, 0x679fdf50d0aea812 );           
        SDK_FIXED_SIZE( lbr_trace_event_data_t, 0x30 );           
    };                                                         
};
#include "magic/lbr_trace_event_data_t.end.hpp"
SDK_VERIFY( struct win::lbr_trace_event_data_t, 0x30 );
