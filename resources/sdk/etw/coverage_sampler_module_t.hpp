#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_sampler_module_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_MODULE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_module_t      
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t path_offset;          //{ +0x0000    +0x0000    +0x0000    } | .PathOffset
        _m01 uint32_t path_length;          //{ +0x0004    +0x0004    +0x0004    } | .PathLength
        _m02 uint32_t debug_info_offset;    //{ +0x0008    +0x0008    +0x0008    } | .DebugInfoOffset
        _m03 uint32_t debug_info_length;    //{ +0x000c    +0x000c    +0x000c    } | .DebugInfoLength
        _m04 uint32_t time_date_stamp;      //{ +0x0010    +0x0010    +0x0010    } | .TimeDateStamp
        _m05 uint32_t image_checksum;       //{ +0x0014    +0x0014    +0x0014    } | .ImageChecksum
        _m06 uint32_t image_size;           //{ +0x0018    +0x0018    +0x0018    } | .ImageSize
        _m07 uint32_t module_id;            //{ +0x001c    +0x001c    +0x001c    } | .ModuleId
        _m08 uint32_t module_sequence;      //{ +0x0020    +0x0020    +0x0020    } | .ModuleSequence
        _m09 uint32_t exe_module_id;        //{ +0x0024    +0x0024    +0x0024    } | .ExeModuleId
        _m10 uint32_t exe_module_sequence;  //{ +0x0028    +0x0028    +0x0028    } | .ExeModuleSequence
        _m11 uint32_t exe_process_id;       //{ +0x002c    +0x002c    +0x002c    } | .ExeProcessId
                                          
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_MODULE.$", 0x30, true, 0x8646542415dfb4c5 );                    
        SDK_FIXED_SIZE( coverage_sampler_module_t, 0x30 );                    
    };                                    
};
#include "magic/coverage_sampler_module_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_module_t, 0x30 );
