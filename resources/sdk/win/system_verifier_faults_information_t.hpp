#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_verifier_faults_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VERIFIER_FAULTS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_verifier_faults_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 uint32_t         probability;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Probability
        _m01 uint32_t         max_probability;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxProbability
        _m02 nt::unicode_view pool_tags;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PoolTags
        _m03 nt::unicode_view applications;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Applications
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VERIFIER_FAULTS_INFORMATION.$", 0x28, true, 0x1ef57a2868a46ecb );                
        SDK_FIXED_SIZE( system_verifier_faults_information_t, 0x28 );                
    };                                         
};
#include "magic/system_verifier_faults_information_t.end.hpp"
SDK_VERIFY( struct win::system_verifier_faults_information_t, 0x28 );
