#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/err_src_array_invalid_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_ERR_SRC_ARRAY_INVALID_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct err_src_array_invalid_event_t                         
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       error_source_count;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrorSourceCount
        _m02 uint32_t                       reported_length;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ReportedLength
        _m03 uint32_t                       expected_length;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ExpectedLength
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_ERR_SRC_ARRAY_INVALID_EVENT.$", 0x2c, true, 0x9267c6b776c6c4f4 );                     
        SDK_FIXED_SIZE( err_src_array_invalid_event_t, 0x2c );                     
    };                                                           
};
#include "magic/err_src_array_invalid_event_t.end.hpp"
SDK_VERIFY( struct wheap::err_src_array_invalid_event_t, 0x2c );
