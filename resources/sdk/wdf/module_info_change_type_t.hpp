#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WDF_MODULE_INFO_CHANGE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class module_info_change_type_t : int32_t
    {                                             
        loaded =   0x0,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unloaded = 0x1,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
