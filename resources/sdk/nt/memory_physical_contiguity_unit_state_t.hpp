#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MEMORY_PHYSICAL_CONTIGUITY_UNIT_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_physical_contiguity_unit_state_t : int32_t
    {                                                           
        not_contiguous =                  0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        aligned_and_contiguous =          0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_resident =                    0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_eligible_to_make_contiguous = 0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        contiguity_state_max =            0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
