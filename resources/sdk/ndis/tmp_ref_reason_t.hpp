#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_TMP_REF_REASON]
    //  Windows 10 v1607
    //
    enum class tmp_ref_reason_t : int32_t
    {                                    
        none =         0x0,                // Windows 10 v1607
        init =         0x1,                // Windows 10 v1607
        pm_init =      0x2,                // Windows 10 v1607
        wake =         0x3,                // Windows 10 v1607
        last_deref =   0x4,                // Windows 10 v1607
        clear_stop =   0x5,                // Windows 10 v1607
        magic_packet = 0x6,                // Windows 10 v1607
    };                                   
};
