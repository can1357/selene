#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestBaseFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_base_flags_t : int32_t
    {                                        
        system_mdl_mapped =    0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        output_mdl_mapped =    0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sync_cleanup_context = 0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
