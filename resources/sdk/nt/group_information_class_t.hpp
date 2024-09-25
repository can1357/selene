#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _GROUP_INFORMATION_CLASS]
    //  WDK 10
    //
    enum class group_information_class_t : int32_t
    {                                             
        general_information =       0x1,            // WDK 10
        name_information =          0x2,            // WDK 10
        attribute_information =     0x3,            // WDK 10
        admin_comment_information = 0x4,            // WDK 10
        replication_information =   0x5,            // WDK 10
    };                                            
};
