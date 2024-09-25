#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_issue_t.start.hpp"
namespace ver
{
    // [struct _VI_VERIFIER_ISSUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_issue_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 uint64_t                issue_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IssueType
        _m01 void*                   address;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Address
        _m02 sdk::array<uint64_t, 2> parameters;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parameters
                                                
        SDK_MAGIC_PROPERTIES( "_VI_VERIFIER_ISSUE.$", 0x20, true, 0xa0ff2f126fe7a141 );           
        SDK_FIXED_SIZE( verifier_issue_t, 0x20 );           
    };                                          
};
#include "magic/verifier_issue_t.end.hpp"
SDK_VERIFY( struct ver::verifier_issue_t, 0x20 );
