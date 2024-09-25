#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/throttle_add_err_src_failed_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_THROTTLE_ADD_ERR_SRC_FAILED_EVENT]
    // => Windows 11
    //
    struct throttle_add_err_src_failed_event_t                   
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_THROTTLE_ADD_ERR_SRC_FAILED_EVENT.$", 0x0, false, 0x4d02705629682404 );                     
        SDK_FIXED_SIZE( throttle_add_err_src_failed_event_t, 0x20 );                     
    };                                                           
};
#include "magic/throttle_add_err_src_failed_event_t.end.hpp"
SDK_VERIFY( struct whea::throttle_add_err_src_failed_event_t, 0x20 );
