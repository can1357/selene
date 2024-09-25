#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FILE_ID_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_id_type_t : int32_t
    {                                  
        file_id_type =          0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_id_type =        0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extended_file_id_type = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_file_id_type =  0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
