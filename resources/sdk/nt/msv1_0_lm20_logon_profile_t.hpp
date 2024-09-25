#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_profile_buffer_type_t.hpp"

#include "magic/msv1_0_lm20_logon_profile_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_LM20_LOGON_PROFILE]
    // => WDK 10 (NV)
    //
    struct msv1_0_lm20_logon_profile_t                                
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 enum nt::msv1_0_profile_buffer_type_t message_type;        //{ +0x0000    } | .MessageType
        _m01 int64_t                               kick_off_time;       //{ +0x0008    } | .KickOffTime
        _m02 int64_t                               logoff_time;         //{ +0x0010    } | .LogoffTime
        _m03 uint32_t                              user_flags;          //{ +0x0018    } | .UserFlags
        _m04 sdk::array<uint8_t, 16>               user_session_key;    //{ +0x001c    } | .UserSessionKey
        _m05 nt::unicode_view                      logon_domain_name;   //{ +0x0030    } | .LogonDomainName
        _m06 sdk::array<uint8_t, 8>                lanman_session_key;  //{ +0x0040    } | .LanmanSessionKey
        _m07 nt::unicode_view                      logon_server;        //{ +0x0048    } | .LogonServer
        _m08 nt::unicode_view                      user_parameters;     //{ +0x0058    } | .UserParameters
                                                                      
        SDK_NONVOL_PROPERTIES( "_MSV1_0_LM20_LOGON_PROFILE.$", 0x0, false, 0x954c0b80793bb938 );                   
        SDK_FIXED_SIZE( msv1_0_lm20_logon_profile_t, 0x68 );                   
    };                                                                
};
#include "magic/msv1_0_lm20_logon_profile_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_lm20_logon_profile_t, 0x68 );
