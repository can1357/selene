#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"
#include "../whea/error_source_descriptor_t.hpp"

#include "magic/err_src_invalid_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_ERR_SRC_INVALID_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct err_src_invalid_event_t                                       
    {                                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                               
        _m00 struct whea::event_log_entry_t         whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 struct whea::error_source_descriptor_t err_descriptor;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrDescriptor
        _m02 sdk::array<char, 32>                   error;                 //{ +0x03ec    +0x03ec    +0x03ec    +0x03ec    } | .Error
                                                                         
        SDK_NONVOL_PROPERTIES( "_WHEAP_ERR_SRC_INVALID_EVENT.$", 0x40c, true, 0x4003463e750e8439 );                     
        SDK_FIXED_SIZE( err_src_invalid_event_t, 0x40c );                     
    };                                                                   
};
#include "magic/err_src_invalid_event_t.end.hpp"
SDK_VERIFY( struct wheap::err_src_invalid_event_t, 0x40c );
