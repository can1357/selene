#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../ppm/engine_settings_t.hpp"

#include "magic/ppm_profile_t.start.hpp"
namespace pop
{
    // [struct _POP_PPM_PROFILE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ppm_profile_t                                                 
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                               
        _m00 wchar_t*                                     name;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 uint8_t                                      id;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Id
        _m02 struct nt::guid_t                            guid;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Guid
        _m03 uint32_t                                     flags;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Flags
        _m04 uint8_t                                      priority;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Priority
        _m05 sdk::array<struct ppm::engine_settings_t, 2> settings;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Settings
        _m06 uint64_t                                     start_time;      //{ +0x0b08    +0x1588    +0x0398    +0x1588    } | .StartTime
        _m07 uint64_t                                     count;           //{ +0x0b10    +0x1590    +0x03a0    +0x1590    } | .Count
        _m08 uint64_t                                     max_duration;    //{ +0x0b18    +0x1598    +0x03a8    +0x1598    } | .MaxDuration
        _m09 uint64_t                                     min_duration;    //{ +0x0b20    +0x15a0    +0x03b0    +0x15a0    } | .MinDuration
        _m10 uint64_t                                     total_duration;  //{ +0x0b28    +0x15a8    +0x03b8    +0x15a8    } | .TotalDuration
                                                                         
        SDK_MAGIC_PROPERTIES( "_POP_PPM_PROFILE.$", 0x15b0, true, 0x40552fdd232c6265 );               
        SDK_DYNAMIC_SIZE( ppm_profile_t );                               
    };                                                                   
};
#include "magic/ppm_profile_t.end.hpp"
