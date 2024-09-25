#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_data_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_USER_DATA]
    // => WDK 10 (NV)
    //
    struct user_data_t                          
    {                                           
        // WDK 10                               
        //                                      
        _m00 nt::unicode_view user_name;          //{ +0x0000    } | .UserName
        _m01 nt::unicode_view logon_domain_name;  //{ +0x0010    } | .LogonDomainName
        _m02 nt::unicode_view logon_server;       //{ +0x0020    } | .LogonServer
        _m03 void*            p_sid;              //{ +0x0030    } | .pSid
                                                
        SDK_NONVOL_PROPERTIES( "_SECURITY_USER_DATA.$", 0x0, false, 0x308e8898784085b );                  
        SDK_FIXED_SIZE( user_data_t, 0x38 );                  
    };                                          
};
#include "magic/user_data_t.end.hpp"
SDK_VERIFY( struct sec::user_data_t, 0x38 );
