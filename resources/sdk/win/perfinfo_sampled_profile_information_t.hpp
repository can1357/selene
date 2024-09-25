#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_sampled_profile_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SAMPLED_PROFILE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_sampled_profile_information_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 void*    instruction_pointer;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InstructionPointer
        _m01 uint32_t thread_id;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m02 uint16_t count;                       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Count
        _m03 uint1_t  executing_dpc;               //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .ExecutingDpc
        _m04 uint1_t  executing_isr;               //{ +0x000e@1  +0x000e@1  +0x000e@1  +0x000e@1  } | .ExecutingIsr
        _m05 uint5_t  priority;                    //{ +0x000e@3  +0x000e@3  +0x000e@3  +0x000e@3  } | .Priority
        _m06 uint8_t  flags;                       //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Flags
        _m07 uint8_t  rank;                        //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Rank
                                                 
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SAMPLED_PROFILE_INFORMATION.$", 0x10, true, 0xe3b3b6a2260cded6 );                    
        SDK_FIXED_SIZE( perfinfo_sampled_profile_information_t, 0x10 );                    
    };                                           
};
#include "magic/perfinfo_sampled_profile_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_sampled_profile_information_t, 0x10 );
