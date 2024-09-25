#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_FX_WORK_POOL_QUEUE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fx_work_pool_queue_t : int32_t
    {                                        
        emergency = 0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        plugin =    0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
