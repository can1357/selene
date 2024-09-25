#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum UniversalMarshalerType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class universal_marshaler_type_t : int32_t
    {                                              
        none =          0x0,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ps_automation = 0x1,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ps_dispatch =   0x2,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
