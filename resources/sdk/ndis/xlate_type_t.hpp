#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_XLATE_TYPE]
    //  Windows 10 v1607
    //
    enum class xlate_type_t : int32_t
    {                                
        send =          0x0,           // Windows 10 v1607
        send_complete = 0x1,           // Windows 10 v1607
        receive =       0x2,           // Windows 10 v1607
        _return =       0x3,           // Windows 10 v1607
    };                               
};
