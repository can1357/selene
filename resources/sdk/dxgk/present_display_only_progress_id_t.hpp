#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_PRESENT_DISPLAY_ONLY_PROGRESS_ID]
    //  WDK 10
    //
    enum class present_display_only_progress_id_t : int32_t
    {                                                      
        complete = 0x0,                                      // WDK 10
        failed =   0x1,                                      // WDK 10
    };                                                     
};
