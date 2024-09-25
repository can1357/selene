#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _TRUSTEE_FORM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class trustee_form_t : int32_t
    {                                  
        is_sid =              0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_name =             0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_form =            0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_objects_and_sid =  0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_objects_and_name = 0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
