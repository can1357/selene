#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_HARDWARE_CONTENT_PROTECTION_TEARDOWN_FLAGS]
    //  WDK 10
    //
    enum class hardware_content_protection_teardown_flags_t : int32_t      
    {                                                                      
        dxgk_hardware_content_protection_teardown_flag_preemptive = 0x1,     // WDK 10
    };                                                                     
};
