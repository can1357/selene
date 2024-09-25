#pragma once
#include <sdkgen/support_library.hpp>

namespace fs
{
    // [enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE]
    //  WDK 10, Windows 10 v1607
    //
    enum class filter_stream_fo_notification_type_t : int32_t
    {                                                        
        create =  0x0,                                         // WDK 10, Windows 10 v1607
        retired = 0x1,                                         // WDK 10, Windows 10 v1607
    };                                                       
};
