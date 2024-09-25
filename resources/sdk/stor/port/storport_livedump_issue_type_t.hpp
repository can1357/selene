#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORPORT_LIVEDUMP_ISSUE_TYPE]
    //  Windows 11
    //
    enum class storport_livedump_issue_type_t : int32_t
    {                                                  
        undefined =    0x0,                              // Windows 11
        device_panic = 0x1,                              // Windows 11
    };                                                 
};
