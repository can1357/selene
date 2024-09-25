#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kprofile_source_t.hpp"

namespace hal { struct pmc_counters_t; }

#include "magic/pmc_support_t.start.hpp"
namespace etw
{
    // [struct _ETW_PMC_SUPPORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pmc_support_t                                               
    {                                                                  
        using source_t = sdk::variant<sdk::array<enum nt::kprofile_source_t, 4>, enum nt::kprofile_source_t*>;               
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                             
        _m00 source_t                                   source;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Source
        _m01 volatile uint32_t                          hook_id_count;   //{ +0x0010    +0x0008    +0x0008    +0x0008    } | .HookIdCount
        _m02 sdk::array<uint16_t, 4>                    hook_id;         //{ +0x0014    +0x000c    +0x000c    +0x000c    } | .HookId
        _m03 volatile uint32_t                          counters_count;  //{ +0x001c    +0x0014    +0x0014    +0x0014    } | .CountersCount
        _m04 sdk::array<struct hal::pmc_counters_t*, 1> processor_ctrs;  //{ +0x0020    +0x0018    +0x0018    +0x0018    } | .ProcessorCtrs
                                                                       
        SDK_MAGIC_PROPERTIES( "_ETW_PMC_SUPPORT.$", 0x20, true, 0xe955e65206b25bc7 );               
        SDK_DYNAMIC_SIZE( pmc_support_t );                             
    };                                                                 
};
#include "magic/pmc_support_t.end.hpp"
