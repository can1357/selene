#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_SLEEP_CHECKPOINT_STATUS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sleep_checkpoint_status_t : int32_t
    {                                             
        disabled =                      0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_due_to_dirty_shutdown = 0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_experiment =            0x4,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_manually =              0x4,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_max =                   0x7,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_not_efi_system =         0x8,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_insufficient_space =     0x9,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_too_slow =               0xa,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_other_error =            0xf,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                           0xf,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
