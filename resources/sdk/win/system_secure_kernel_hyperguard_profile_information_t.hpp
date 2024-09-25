#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_secure_kernel_hyperguard_profile_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_secure_kernel_hyperguard_profile_information_t
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t extent_count;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtentCount
        _m01 uint32_t valid_structure_size;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ValidStructureSize
        _m02 uint32_t next_extent_index;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextExtentIndex
        _m03 uint32_t extent_restart;                             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ExtentRestart
        _m04 uint32_t cycle_count;                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CycleCount
        _m05 uint32_t timeout_count;                              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TimeoutCount
        _m06 uint64_t cycle_time;                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CycleTime
        _m07 uint64_t cycle_time_max;                             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CycleTimeMax
        _m08 uint64_t extent_time;                                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ExtentTime
        _m09 uint32_t extent_time_index;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ExtentTimeIndex
        _m10 uint32_t extent_time_max_index;                      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ExtentTimeMaxIndex
        _m11 uint64_t extent_time_max;                            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ExtentTimeMax
        _m12 uint64_t hyper_flush_time_max;                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HyperFlushTimeMax
        _m13 uint64_t translate_va_time_max;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TranslateVaTimeMax
        _m14 uint64_t debug_exemption_count;                      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DebugExemptionCount
        _m15 uint64_t tb_hit_count;                               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .TbHitCount
        _m16 uint64_t tb_miss_count;                              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .TbMissCount
        _m17 uint64_t vina_pending_yield;                         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .VinaPendingYield
        _m18 uint64_t hash_cycles;                                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .HashCycles
        _m19 uint32_t histogram_offset;                           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .HistogramOffset
        _m20 uint32_t histogram_buckets;                          //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .HistogramBuckets
        _m21 uint32_t histogram_shift;                            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .HistogramShift
        _m22 uint64_t page_not_present_count;                     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PageNotPresentCount
                                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.$", 0x90, true, 0x4434090b122217b5 );                       
        SDK_FIXED_SIZE( system_secure_kernel_hyperguard_profile_information_t, 0x90 );                       
    };                                                          
};
#include "magic/system_secure_kernel_hyperguard_profile_information_t.end.hpp"
SDK_VERIFY( struct win::system_secure_kernel_hyperguard_profile_information_t, 0x90 );
