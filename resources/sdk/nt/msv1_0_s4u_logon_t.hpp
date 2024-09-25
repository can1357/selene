#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_logon_submit_type_t.hpp"

#include "magic/msv1_0_s4u_logon_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_S4U_LOGON]
    // => WDK 10 (NV)
    //
    struct msv1_0_s4u_logon_t                                        
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 enum nt::msv1_0_logon_submit_type_t message_type;         //{ +0x0000    } | .MessageType
        _m01 uint32_t                            flags;                //{ +0x0004    } | .Flags
        _m02 nt::unicode_view                    user_principal_name;  //{ +0x0008    } | .UserPrincipalName
        _m03 nt::unicode_view                    domain_name;          //{ +0x0018    } | .DomainName
                                                                     
        SDK_NONVOL_PROPERTIES( "_MSV1_0_S4U_LOGON.$", 0x0, false, 0x8f79a3f401875885 );                    
        SDK_FIXED_SIZE( msv1_0_s4u_logon_t, 0x28 );                    
    };                                                               
};
#include "magic/msv1_0_s4u_logon_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_s4u_logon_t, 0x28 );
