#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxSelfManagedIoStates]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class self_managed_io_states_t : int32_t
    {                                            
        invalid =                  0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        created =                  0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init =                     0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init_failed =              0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init_started_failed_post = 0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =                  0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspending =               0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =                  0x7,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarting =               0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarted_failed_post =    0x9,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed =                   0xa,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flushing =                 0xb,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flushed =                  0xc,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cleanup =                  0xd,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        final =                    0xe,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                      0xf,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
