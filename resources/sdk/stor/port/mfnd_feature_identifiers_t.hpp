#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum MFND_FEATURE_IDENTIFIERS]
    //  Windows 11
    //
    enum class mfnd_feature_identifiers_t : int32_t
    {                                              
        operation =       0xd1,                      // Windows 11
        device_property = 0xd2,                      // Windows 11
    };                                             
};
