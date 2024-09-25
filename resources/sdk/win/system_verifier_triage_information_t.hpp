#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_verifier_triage_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VERIFIER_TRIAGE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_verifier_triage_information_t        
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                             
        _m00 uint32_t                 action_taken;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ActionTaken
        _m01 sdk::array<uint64_t, 5>  crash_data;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CrashData
        _m02 uint32_t                 verifier_mode;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VerifierMode
        _m03 uint32_t                 verifier_flags;    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .VerifierFlags
        _m04 sdk::array<wchar_t, 256> verifier_targets;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .VerifierTargets
                                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VERIFIER_TRIAGE_INFORMATION.$", 0x238, true, 0x4bae7491a0fb180 );                 
        SDK_FIXED_SIZE( system_verifier_triage_information_t, 0x238 );                 
    };                                                 
};
#include "magic/system_verifier_triage_information_t.end.hpp"
SDK_VERIFY( struct win::system_verifier_triage_information_t, 0x238 );
