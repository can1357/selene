#pragma once
#include <sdkgen/support_library.hpp>

namespace pshed
{
    // [enum _PSHED_PI_ERR_READING_PCIE_OVERRIDES]
    //  Windows 11
    //
    enum class pi_err_reading_pcie_overrides_t : int32_t
    {                                                   
        no_err =        0x0,                              // Windows 11
        no_memory =     0x1,                              // Windows 11
        query_err =     0x2,                              // Windows 11
        bad_size =      0x3,                              // Windows 11
        bad_signature = 0x4,                              // Windows 11
        no_cap_offset = 0x5,                              // Windows 11
        not_binary =    0x6,                              // Windows 11
    };                                                  
};
