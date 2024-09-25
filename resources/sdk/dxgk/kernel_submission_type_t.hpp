#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_KERNEL_SUBMISSION_TYPE]
    //  WDK 10
    //
    enum class kernel_submission_type_t : int32_t
    {                                            
        build_paging_buffer = 0x0,                 // WDK 10
        rendergdi =           0x1,                 // WDK 10
        presentblt =          0x2,                 // WDK 10
    };                                           
};
