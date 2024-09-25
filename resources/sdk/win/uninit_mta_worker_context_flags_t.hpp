#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum UNINIT_MTA_WORKER_CONTEXT_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class uninit_mta_worker_context_flags_t : int32_t
    {                                                     
        none =        0x0,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        host_thread = 0x1,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
