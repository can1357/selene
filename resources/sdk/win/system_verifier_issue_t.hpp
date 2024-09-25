#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_verifier_issue_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VERIFIER_ISSUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_verifier_issue_t              
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 uint64_t                issue_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IssueType
        _m01 void*                   address;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Address
        _m02 sdk::array<uint64_t, 2> parameters;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parameters
                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VERIFIER_ISSUE.$", 0x20, true, 0x86f9633b3e2a17bd );           
        SDK_FIXED_SIZE( system_verifier_issue_t, 0x20 );           
    };                                          
};
#include "magic/system_verifier_issue_t.end.hpp"
SDK_VERIFY( struct win::system_verifier_issue_t, 0x20 );
