#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mdl_t; }

#include "magic/mapmdltoiommu_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_MAPMDLTOIOMMU]
    // => WDK 10 (NV)
    //
    struct mapmdltoiommu_t                     
    {                                          
        // WDK 10                              
        //                                     
        _m00 struct nt::mdl_t* p_mdl;            //{ +0x0000    } | .pMdl
        _m01 void*             h_memory_handle;  //{ +0x0008    } | .hMemoryHandle
                                               
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_MAPMDLTOIOMMU.$", 0x0, false, 0x576f038d0bf4223c );                
        SDK_FIXED_SIZE( mapmdltoiommu_t, 0x10 );                
    };                                         
};
#include "magic/mapmdltoiommu_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::mapmdltoiommu_t, 0x10 );
