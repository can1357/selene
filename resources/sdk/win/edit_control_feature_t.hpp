#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum EDIT_CONTROL_FEATURE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class edit_control_feature_t : int32_t           
    {                                                     
        enterprise_data_protection_paste_support = 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paste_notifications =                      0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
