#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"
#include "../whea/error_source_type_t.hpp"

#include "magic/dropped_corrected_error_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_DROPPED_CORRECTED_ERROR_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dropped_corrected_error_event_t                       
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 enum whea::error_source_type_t error_source_type;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrorSourceType
        _m02 uint32_t                       error_source_id;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ErrorSourceId
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_DROPPED_CORRECTED_ERROR_EVENT.$", 0x28, true, 0xe32d781ab26bc91c );                     
        SDK_FIXED_SIZE( dropped_corrected_error_event_t, 0x28 );                     
    };                                                           
};
#include "magic/dropped_corrected_error_event_t.end.hpp"
SDK_VERIFY( struct wheap::dropped_corrected_error_event_t, 0x28 );
