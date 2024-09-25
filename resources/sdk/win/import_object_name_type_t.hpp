#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum IMPORT_OBJECT_NAME_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class import_object_name_type_t : int32_t
    {                                             
        ordinal =         0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name =            0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name_no_prefix =  0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name_undecorate = 0x3,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name_exportas =   0x4,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
