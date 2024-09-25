#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum ICC_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class icc_flags_t : int32_t          
    {                                         
        skip_starting_node =         0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        skip_deref =                 0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        do_legacy_processing =       0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        do_skip =                    0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        targeted_name_providers =    0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested_fastio_operation =    0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        do_foctx_cleanup =           0x200,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_existing_starting_node = 0x400,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
