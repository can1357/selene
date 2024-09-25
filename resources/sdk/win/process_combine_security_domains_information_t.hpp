#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_combine_security_domains_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_COMBINE_SECURITY_DOMAINS_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_combine_security_domains_information_t
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* process_handle;                         //{ +0x0000    +0x0000    +0x0000    } | .ProcessHandle
                                                         
        SDK_MAGIC_PROPERTIES( "_PROCESS_COMBINE_SECURITY_DOMAINS_INFORMATION.$", 0x8, true, 0x38455a6dfa14d1cf );               
        SDK_FIXED_SIZE( process_combine_security_domains_information_t, 0x8 );               
    };                                                   
};
#include "magic/process_combine_security_domains_information_t.end.hpp"
SDK_VERIFY( struct win::process_combine_security_domains_information_t, 0x8 );
