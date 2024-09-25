#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ContainerProtocolVersion]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class container_protocol_version_t : int32_t
    {                                                
        earliest =                   0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_id =                    0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        passthrough_trace_activity = 0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        current =                    0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshaling_set_id =          0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
