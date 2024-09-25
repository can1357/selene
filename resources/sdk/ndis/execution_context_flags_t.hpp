#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _EXECUTION_CONTEXT_FLAGS]
    //  Windows 11
    //
    enum class execution_context_flags_t : int32_t
    {                                             
        none =                            0x0,      // Windows 11
        run_dpc_for_first_loop =          0x1,      // Windows 11
        run_worker_thread_at_dispatch =   0x2,      // Windows 11
        try_extend_max_time_at_dispatch = 0x4,      // Windows 11
    };                                            
};
