#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_dif_volatile_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_DIF_VOLATILE_INFORMATION]
    // => Windows 11
    //
    struct system_dif_volatile_information_t         
    {                                                
        // Windows 11                                
        //                                           
        _m00 sdk::array<uint32_t, 2> rule_classes;     //{ +0x0000    } | .RuleClasses
        _m01 uint32_t                verifier_option;  //{ +0x0008    } | .VerifierOption
        _m02 uint32_t                triage_context;   //{ +0x000c    } | .TriageContext
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_DIF_VOLATILE_INFORMATION.$", 0x0, false, 0x37e20cec880a8a4a );                
        SDK_FIXED_SIZE( system_dif_volatile_information_t, 0x10 );                
    };                                               
};
#include "magic/system_dif_volatile_information_t.end.hpp"
SDK_VERIFY( struct win::system_dif_volatile_information_t, 0x10 );
