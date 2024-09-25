#pragma once
#include <sdkgen/support_library.hpp>

namespace pp
{
    // [enum _PP_NPAGED_LOOKASIDE_NUMBER]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class npaged_lookaside_number_t : int32_t
    {                                             
        small_irp_list =      0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_irp_list =     0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        large_irp_list =      0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mdl_list =            0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_info_list =    0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name_buffer_list =    0x5,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        twilight_list =       0x6,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completion_list =     0x7,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scratch_buffer_list = 0x8,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_list =        0x9,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
