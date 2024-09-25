#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/policy_account_domain_info_t.start.hpp"
namespace win
{
    // [struct _POLICY_ACCOUNT_DOMAIN_INFO]
    // => Windows 11
    //
    struct policy_account_domain_info_t   
    {                                     
        // Windows 11                     
        //                                
        _m00 nt::unicode_view domain_name;  //{ +0x0000    } | .DomainName
        _m01 void*            domain_sid;   //{ +0x0010    } | .DomainSid
                                          
        SDK_MAGIC_PROPERTIES( "_POLICY_ACCOUNT_DOMAIN_INFO.$", 0x0, false, 0x81ec1407d403bdd );            
        SDK_FIXED_SIZE( policy_account_domain_info_t, 0x18 );            
    };                                    
};
#include "magic/policy_account_domain_info_t.end.hpp"
SDK_VERIFY( struct win::policy_account_domain_info_t, 0x18 );
