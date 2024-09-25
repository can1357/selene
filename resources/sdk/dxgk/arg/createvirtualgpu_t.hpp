#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/guid_t.hpp"
#include "../../nt/luid_t.hpp"
#include "../virtualgpuprofile_t.hpp"
#include "../virtualgpuengineinfo_t.hpp"
#include "../virtualgpusegmentinfo_t.hpp"

#include "magic/createvirtualgpu_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATEVIRTUALGPU]
    // => WDK 10 (NV)
    //
    struct createvirtualgpu_t                                                   
    {                                                                           
        using segment_info_t = sdk::array<struct dxgk::virtualgpusegmentinfo_t, 32>;                                  
        using engine_info_t =  sdk::array<struct dxgk::virtualgpuengineinfo_t, 64>;                                  
                                                                                
        // WDK 10                                                               
        //                                                                      
        _m00 uint32_t                         partition_id;                       //{ +0x0000    } | .PartitionId
        _m01 struct dxgk::virtualgpuprofile_t profile;                            //{ +0x0008    } | .Profile
        _m02 struct nt::guid_t                user_mode_virtual_device_provider;  //{ +0x0068    } | .UserModeVirtualDeviceProvider
        _m03 struct nt::luid_t                virtual_gpu_luid;                   //{ +0x0078    } | .VirtualGpuLuid
        _m04 uint32_t                         num_memory_segments;                //{ +0x0080    } | .NumMemorySegments
        _m05 segment_info_t                   segment_info;                       //{ +0x0088    } | .SegmentInfo
        _m06 uint32_t                         num_engines;                        //{ +0x0688    } | .NumEngines
        _m07 engine_info_t                    engine_info;                        //{ +0x068c    } | .EngineInfo
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATEVIRTUALGPU.$", 0x0, false, 0x96a61bc6d6dc1219 );                                  
        SDK_FIXED_SIZE( createvirtualgpu_t, 0x990 );                                  
    };                                                                          
};
#include "magic/createvirtualgpu_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createvirtualgpu_t, 0x990 );
