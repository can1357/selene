#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WORKER_FACTORY_CALLBACK_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class worker_factory_callback_class_t : int32_t
    {                                                   
        normal =                       0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        long_running =                 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        independent =                  0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        detected_unrecoverable_error = 0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
