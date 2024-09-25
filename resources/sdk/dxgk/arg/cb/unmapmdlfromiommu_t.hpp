#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unmapmdlfromiommu_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_UNMAPMDLFROMIOMMU]
    // => WDK 10 (NV)
    //
    struct unmapmdlfromiommu_t     
    {                              
        // WDK 10                  
        //                         
        _m00 void* h_memory_handle;  //{ +0x0000    } | .hMemoryHandle
                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_UNMAPMDLFROMIOMMU.$", 0x0, false, 0x8bc2896b5eaf587a );                
        SDK_FIXED_SIZE( unmapmdlfromiommu_t, 0x8 );                
    };                             
};
#include "magic/unmapmdlfromiommu_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::unmapmdlfromiommu_t, 0x8 );
