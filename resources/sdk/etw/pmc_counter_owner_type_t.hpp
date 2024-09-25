#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_PMC_COUNTER_OWNER_TYPE]
    //  Windows 11
    //
    enum class pmc_counter_owner_type_t : int32_t
    {                                            
        free =               0x0,                  // Windows 11
        untagged =           0x1,                  // Windows 11
        tagged =             0x2,                  // Windows 11
        tagged_with_source = 0x3,                  // Windows 11
    };                                           
};
