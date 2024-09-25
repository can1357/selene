#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_BUGCHECK_CODES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bugcheck_codes_t : int32_t           
    {                                               
        power_routine_timed_out =           0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        recursive_lock =                    0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verifier_fatal_error =              0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_parameter_is_null =        0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_handle =                    0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_fatal_error =               0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_error =                      0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_fatal_error =                   0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_interrupt =                 0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queue_fatal_error =                 0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_lock_operation =            0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_fatal_error =                   0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_multiple_ppo =                0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verifier_irql_mismatch =            0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verifier_critical_region_mismatch = 0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        api_unavailable =                   0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
