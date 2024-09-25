#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/logon_type_t.hpp"
#include "msv1_0_protocol_message_type_t.hpp"

#include "magic/msv1_0_getuserinfo_response_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_GETUSERINFO_RESPONSE]
    // => WDK 10 (NV)
    //
    struct msv1_0_getuserinfo_response_t                               
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 enum nt::msv1_0_protocol_message_type_t message_type;       //{ +0x0000    } | .MessageType
        _m01 void*                                   user_sid;           //{ +0x0008    } | .UserSid
        _m02 nt::unicode_view                        user_name;          //{ +0x0010    } | .UserName
        _m03 nt::unicode_view                        logon_domain_name;  //{ +0x0020    } | .LogonDomainName
        _m04 nt::unicode_view                        logon_server;       //{ +0x0030    } | .LogonServer
        _m05 enum sec::logon_type_t                  logon_type;         //{ +0x0040    } | .LogonType
                                                                       
        SDK_NONVOL_PROPERTIES( "_MSV1_0_GETUSERINFO_RESPONSE.$", 0x0, false, 0xdef6258c04afff05 );                  
        SDK_FIXED_SIZE( msv1_0_getuserinfo_response_t, 0x48 );                  
    };                                                                 
};
#include "magic/msv1_0_getuserinfo_response_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_getuserinfo_response_t, 0x48 );
