#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _VP_LOCK_OPERATION]
    //  WDK 10
    //
    enum class vp_lock_operation_t : int32_t
    {                                       
        read_access =   0x0,                  // WDK 10
        write_access =  0x1,                  // WDK 10
        modify_access = 0x2,                  // WDK 10
    };                                      
};
