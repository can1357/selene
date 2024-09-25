#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SECURITY_DB_OBJECT_TYPE]
    //  WDK 10
    //
    enum class db_object_type_t : int32_t
    {                                    
        sam_domain =   0x1,                // WDK 10
        sam_user =     0x2,                // WDK 10
        sam_group =    0x3,                // WDK 10
        sam_alias =    0x4,                // WDK 10
        lsa_policy =   0x5,                // WDK 10
        lsa_t_domain = 0x6,                // WDK 10
        lsa_account =  0x7,                // WDK 10
        lsa_secret =   0x8,                // WDK 10
    };                                   
};
