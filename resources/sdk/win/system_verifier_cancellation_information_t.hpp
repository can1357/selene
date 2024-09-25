#pragma once
#include <sdkgen/support_library.hpp>
#include "system_verifier_issue_t.hpp"

#include "magic/system_verifier_cancellation_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VERIFIER_CANCELLATION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_verifier_cancellation_information_t 
    {                                                 
        using issues_t = sdk::array<struct win::system_verifier_issue_t, 128>;                               
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                            
        _m00 uint32_t  cancel_probability;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CancelProbability
        _m01 uint32_t  cancel_threshold;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CancelThreshold
        _m02 uint32_t  completion_threshold;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionThreshold
        _m03 uint32_t  cancellation_verifier_disabled;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CancellationVerifierDisabled
        _m04 uint32_t  available_issues;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AvailableIssues
        _m05 issues_t  issues;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Issues
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VERIFIER_CANCELLATION_INFORMATION.$", 0x1018, true, 0xf19e179defcb5b3a );                               
        SDK_FIXED_SIZE( system_verifier_cancellation_information_t, 0x1018 );                               
    };                                                
};
#include "magic/system_verifier_cancellation_information_t.end.hpp"
SDK_VERIFY( struct win::system_verifier_cancellation_information_t, 0x1018 );
