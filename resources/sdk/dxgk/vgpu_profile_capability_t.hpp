#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vgpu_profile_capability_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VGPU_PROFILE_CAPABILITY]
    // => WDK 10 (NV)
    //
    struct vgpu_profile_capability_t          
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint64_t total_value;              //{ +0x0000    } | .TotalValue
        _m01 uint64_t available_value;          //{ +0x0008    } | .AvailableValue
        _m02 uint64_t min_partition_value;      //{ +0x0010    } | .MinPartitionValue
        _m03 uint64_t max_partition_value;      //{ +0x0018    } | .MaxPartitionValue
        _m04 uint64_t optimal_partition_value;  //{ +0x0020    } | .OptimalPartitionValue
                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_VGPU_PROFILE_CAPABILITY.$", 0x0, false, 0x61664aaa82358678 );                        
        SDK_FIXED_SIZE( vgpu_profile_capability_t, 0x28 );                        
    };                                        
};
#include "magic/vgpu_profile_capability_t.end.hpp"
SDK_VERIFY( struct dxgk::vgpu_profile_capability_t, 0x28 );
