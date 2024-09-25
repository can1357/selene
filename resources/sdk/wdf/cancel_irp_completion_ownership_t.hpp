#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum CancelIrpCompletionOwnership]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cancel_irp_completion_ownership_t : int32_t
    {                                                     
        unclaimed = 0x0,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        claimed =   0x1,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
