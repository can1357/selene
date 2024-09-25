#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORPORT_CAPTURE_LIVEDUMP_TYPE]
    //  Windows 11
    //
    enum class storport_capture_livedump_type_t : int32_t
    {                                                    
        undefined = 0x0,                                   // Windows 11
        mini =      0x1,                                   // Windows 11
        full =      0x2,                                   // Windows 11
    };                                                   
};
