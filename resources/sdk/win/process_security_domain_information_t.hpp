#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_security_domain_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_SECURITY_DOMAIN_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_security_domain_information_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t security_domain;            //{ +0x0000    +0x0000    +0x0000    } | .SecurityDomain
                                                
        SDK_MAGIC_PROPERTIES( "_PROCESS_SECURITY_DOMAIN_INFORMATION.$", 0x8, true, 0xb073c017d0c6a861 );                
        SDK_FIXED_SIZE( process_security_domain_information_t, 0x8 );                
    };                                          
};
#include "magic/process_security_domain_information_t.end.hpp"
SDK_VERIFY( struct win::process_security_domain_information_t, 0x8 );
