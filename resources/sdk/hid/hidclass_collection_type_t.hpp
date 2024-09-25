#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _HIDCLASS_COLLECTION_TYPE]
    //  Windows 11
    //
    enum class hidclass_collection_type_t : int32_t
    {                                              
        other =    0x0,                              // Windows 11
        mouse =    0x1,                              // Windows 11
        keyboard = 0x2,                              // Windows 11
    };                                             
};
