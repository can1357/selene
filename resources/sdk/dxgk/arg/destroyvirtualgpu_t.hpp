#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroyvirtualgpu_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DESTROYVIRTUALGPU]
    // => WDK 10 (NV)
    //
    struct destroyvirtualgpu_t     
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t partition_id;  //{ +0x0000    } | .PartitionId
                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DESTROYVIRTUALGPU.$", 0x0, false, 0x722f6bde45b598f4 );             
        SDK_FIXED_SIZE( destroyvirtualgpu_t, 0x4 );             
    };                             
};
#include "magic/destroyvirtualgpu_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::destroyvirtualgpu_t, 0x4 );
