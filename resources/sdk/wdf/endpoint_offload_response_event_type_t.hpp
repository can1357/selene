#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _ENDPOINT_OFFLOAD_RESPONSE_EVENT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class endpoint_offload_response_event_type_t : int32_t
    {                                                          
        no_pending_response = 0x0,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =             0x1,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
