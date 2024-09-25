#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SAM_GENERIC_OPERATION_TYPE]
    //  WDK 10
    //
    enum class sam_generic_operation_type_t : int32_t     
    {                                                     
        sam_object_change_notification_operation = 0x0,     // WDK 10
    };                                                    
};
