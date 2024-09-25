#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _ENDPOINT_OFFLOAD_NOTIFICATION_EVENT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class endpoint_offload_notification_event_type_t : int32_t
    {                                                              
        no_event =                                      0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_due_to_pending_controller_reset_recovery = 0x1,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                             
};
