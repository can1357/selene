#pragma once
#include <sdkgen/support_library.hpp>
#include "../virtualgpumemoryresource_t.hpp"

#include "magic/setvirtualgpuresources_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIRTUALGPURESOURCES]
    // => WDK 10 (NV)
    //
    struct setvirtualgpuresources_t                
    {                                              
        using memory_info_t = sdk::array<struct dxgk::virtualgpumemoryresource_t, 1>;                       
                                                   
        // WDK 10                                  
        //                                         
        _m00 uint32_t       partition_id;            //{ +0x0000    } | .PartitionId
        _m01 uint32_t       num_memory_allocations;  //{ +0x0004    } | .NumMemoryAllocations
        _m02 memory_info_t  memory_info;             //{ +0x0008    } | .MemoryInfo
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIRTUALGPURESOURCES.$", 0x0, false, 0x85b2a953caaf3b2f );                       
        SDK_FIXED_SIZE( setvirtualgpuresources_t, 0x28 );                       
    };                                             
};
#include "magic/setvirtualgpuresources_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvirtualgpuresources_t, 0x28 );
