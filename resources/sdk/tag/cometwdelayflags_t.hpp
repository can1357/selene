#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCOMETWDELAYFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cometwdelayflags_t : int32_t
    {                                      
        uimsgsincml =   0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        droppedinput =  0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        newinputincml = 0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
