#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MSV1_0_CREDENTIAL_KEY_TYPE]
    //  WDK 10
    //
    enum class msv1_0_credential_key_type_t : int32_t
    {                                                
        invalid_cred_key =             0x0,            // WDK 10
        deprecated_ium_cred_key =      0x1,            // WDK 10
        domain_user_cred_key =         0x2,            // WDK 10
        local_user_cred_key =          0x3,            // WDK 10
        externally_supplied_cred_key = 0x4,            // WDK 10
    };                                               
};
