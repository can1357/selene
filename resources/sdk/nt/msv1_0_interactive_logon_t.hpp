#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_logon_submit_type_t.hpp"

#include "magic/msv1_0_interactive_logon_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_INTERACTIVE_LOGON]
    // => WDK 10 (NV)
    //
    struct msv1_0_interactive_logon_t                              
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 enum nt::msv1_0_logon_submit_type_t message_type;       //{ +0x0000    } | .MessageType
        _m01 nt::unicode_view                    logon_domain_name;  //{ +0x0008    } | .LogonDomainName
        _m02 nt::unicode_view                    user_name;          //{ +0x0018    } | .UserName
        _m03 nt::unicode_view                    password;           //{ +0x0028    } | .Password
                                                                   
        SDK_NONVOL_PROPERTIES( "_MSV1_0_INTERACTIVE_LOGON.$", 0x0, false, 0x6a275fc1f741e4a );                  
        SDK_FIXED_SIZE( msv1_0_interactive_logon_t, 0x38 );                  
    };                                                             
};
#include "magic/msv1_0_interactive_logon_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_interactive_logon_t, 0x38 );
