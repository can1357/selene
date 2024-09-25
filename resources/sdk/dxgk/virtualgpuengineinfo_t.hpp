#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualgpuengineinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIRTUALGPUENGINEINFO]
    // => WDK 10 (NV)
    //
    struct virtualgpuengineinfo_t         
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t min_partition_units;  //{ +0x0000    } | .MinPartitionUnits
        _m01 uint32_t max_partition_units;  //{ +0x0004    } | .MaxPartitionUnits
        _m02 uint32_t engine_id;            //{ +0x0008    } | .EngineId
                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_VIRTUALGPUENGINEINFO.$", 0x0, false, 0x8e45dcec535a18f7 );                    
        SDK_FIXED_SIZE( virtualgpuengineinfo_t, 0xc );                    
    };                                    
};
#include "magic/virtualgpuengineinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::virtualgpuengineinfo_t, 0xc );
