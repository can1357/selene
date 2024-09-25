#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORAGE_DUMP_EVENT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storage_dump_event_t : int32_t
    {                                        
        dump_device_gone = 0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
