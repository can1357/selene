#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ppm_perf_state_change_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PPM_PERF_STATE_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ppm_perf_state_change_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t type;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t new_state;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NewState
        _m02 uint32_t old_state;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OldState
        _m03 int32_t  result;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Result
        _m04 uint64_t processors;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Processors
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PPM_PERF_STATE_CHANGE.$", 0x18, true, 0xd4471f19dc502122 );           
        SDK_FIXED_SIZE( perfinfo_ppm_perf_state_change_t, 0x18 );           
    };                                     
};
#include "magic/perfinfo_ppm_perf_state_change_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ppm_perf_state_change_t, 0x18 );
