#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxEnhancedVerifierBitFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class enhanced_verifier_bit_flags_t : int32_t
    {                                                 
        callback_irql_and_cr_check =   0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        function_table_hook_mask =     0xffff,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forward_progress_fail_all =    0x10000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forward_progress_fail_random = 0x20000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forward_progress_mask =        0xf0000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        performance_analysis_mask =    0xf00000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
