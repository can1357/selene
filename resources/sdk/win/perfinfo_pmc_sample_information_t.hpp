#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_pmc_sample_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PMC_SAMPLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_pmc_sample_information_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 void*    instruction_pointer;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InstructionPointer
        _m01 uint32_t thread_id;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m02 uint16_t profile_source;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ProfileSource
                                            
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PMC_SAMPLE_INFORMATION.$", 0x10, true, 0xd45fcf78f4d9c84a );                    
        SDK_FIXED_SIZE( perfinfo_pmc_sample_information_t, 0x10 );                    
    };                                      
};
#include "magic/perfinfo_pmc_sample_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_pmc_sample_information_t, 0x10 );
