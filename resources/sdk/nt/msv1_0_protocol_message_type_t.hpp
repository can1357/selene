#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MSV1_0_PROTOCOL_MESSAGE_TYPE]
    //  WDK 10
    //
    enum class msv1_0_protocol_message_type_t : int32_t
    {                                                  
        v1_0_lm20_challenge_request =      0x0,          // WDK 10
        v1_0_lm20_get_challenge_response = 0x1,          // WDK 10
        v1_0_enumerate_users =             0x2,          // WDK 10
        v1_0_get_user_info =               0x3,          // WDK 10
        v1_0_re_logon_users =              0x4,          // WDK 10
        v1_0_change_password =             0x5,          // WDK 10
        v1_0_change_cached_password =      0x6,          // WDK 10
        v1_0_generic_passthrough =         0x7,          // WDK 10
        v1_0_cache_logon =                 0x8,          // WDK 10
        v1_0_sub_auth =                    0x9,          // WDK 10
        v1_0_derive_credential =           0xa,          // WDK 10
        v1_0_cache_lookup =                0xb,          // WDK 10
        v1_0_set_process_option =          0xc,          // WDK 10
        v1_0_config_local_aliases =        0xd,          // WDK 10
        v1_0_clear_cached_credentials =    0xe,          // WDK 10
        v1_0_lookup_token =                0xf,          // WDK 10
        v1_0_validate_auth =               0x10,         // WDK 10
        v1_0_cache_lookup_ex =             0x11,         // WDK 10
        v1_0_get_credential_key =          0x12,         // WDK 10
        v1_0_set_thread_option =           0x13,         // WDK 10
        v1_0_decrypt_dpapi_master_key =    0x14,         // WDK 10
        v1_0_get_strong_credential_key =   0x15,         // WDK 10
        v1_0_transfer_cred =               0x16,         // WDK 10
        v1_0_provision_tbal =              0x17,         // WDK 10
        v1_0_delete_tbal_secrets =         0x18,         // WDK 10
    };                                                 
};
