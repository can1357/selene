#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_MDL_PAGE_CONTENTS_STATE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mdl_page_contents_state_t : int32_t
    {                                             
        dynamic =   0x0,                            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invariant = 0x1,                            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query =     0x2,                            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
