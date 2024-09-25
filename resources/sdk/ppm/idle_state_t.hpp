#pragma once
#include <sdkgen/support_library.hpp>
#include "veto_accounting_t.hpp"
#include "../nt/kaffinity_ex_t.hpp"

#include "magic/idle_state_t.start.hpp"
namespace ppm
{
    // [struct _PPM_IDLE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_state_t                                        
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                     
        _m00 struct nt::kaffinity_ex_t     domain_members;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DomainMembers
        _m01 nt::unicode_view              name;                 //{ +0x00a8    +0x00a8    +0x0108    +0x00a8    } | .Name
        _m02 uint32_t                      latency;              //{ +0x00b8    +0x00b8    +0x0118    +0x00b8    } | .Latency
        _m03 uint32_t                      break_even_duration;  //{ +0x00bc    +0x00bc    +0x011c    +0x00bc    } | .BreakEvenDuration
        _m04 uint32_t                      power;                //{ +0x00c0    +0x00c0    +0x0120    +0x00c0    } | .Power
        _m05 uint32_t                      state_flags;          //{ +0x00c4    +0x00c4    +0x0124    +0x00c4    } | .StateFlags
        _m06 struct ppm::veto_accounting_t veto_accounting;      //{ +0x00c8    +0x00c8    +0x0128    +0x00c8    } | .VetoAccounting
        _m07 uint8_t                       state_type;           //{ +0x00f0    +0x00f0    +0x0150    +0x00f0    } | .StateType
        _m08 uint8_t                       interrupts_enabled;   //{ +0x00f1    +0x00f1    +0x0151    +0x00f1    } | .InterruptsEnabled
        _m09 uint8_t                       interruptible;        //{ +0x00f2    +0x00f2    +0x0152    +0x00f2    } | .Interruptible
        _m10 uint8_t                       context_retained;     //{ +0x00f3    +0x00f3    +0x0153    +0x00f3    } | .ContextRetained
        _m11 uint8_t                       cache_coherent;       //{ +0x00f4    +0x00f4    +0x0154    +0x00f4    } | .CacheCoherent
        _m12 uint8_t                       wakes_spuriously;     //{ +0x00f5    +0x00f5    +0x0155    +0x00f5    } | .WakesSpuriously
        _m13 uint8_t                       platform_only;        //{ +0x00f6    +0x00f6    +0x0156    +0x00f6    } | .PlatformOnly
        _m14 uint8_t                       no_c_state;           //{ +0x00f7    +0x00f7    +0x0157    +0x00f7    } | .NoCState
                                                               
        SDK_MAGIC_PROPERTIES( "_PPM_IDLE_STATE.$", 0xf8, true, 0x94bc850ca15ca388 );                    
        SDK_DYNAMIC_SIZE( idle_state_t );                      
    };                                                         
};
#include "magic/idle_state_t.end.hpp"
