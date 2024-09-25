#pragma once
#include <sdkgen/support_library.hpp>

namespace se
{
    // [enum _SE_LEARNING_MODE_DATA_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class learning_mode_data_type_t : int32_t
    {                                             
        invalid_type = 0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        settings =     0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =          0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
