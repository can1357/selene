#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidmmcaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIDMMCAPS]
    // => WDK 10 (NV)
    //
    struct vidmmcaps_t                                
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint1_t  out_of_order_lock;                //{ +0x0000@0  } | .OutOfOrderLock
        _m01 uint1_t  dedicated_paging_engine;          //{ +0x0000@1  } | .DedicatedPagingEngine
        _m02 uint1_t  paging_engine_can_swizzle;        //{ +0x0000@2  } | .PagingEngineCanSwizzle
        _m03 uint1_t  section_backed_primary;           //{ +0x0000@3  } | .SectionBackedPrimary
        _m04 uint1_t  cross_adapter_resource;           //{ +0x0000@4  } | .CrossAdapterResource
        _m05 uint1_t  virtual_addressing_supported;     //{ +0x0000@5  } | .VirtualAddressingSupported
        _m06 uint1_t  gpu_mmu_supported;                //{ +0x0000@6  } | .GpuMmuSupported
        _m07 uint1_t  io_mmu_supported;                 //{ +0x0000@7  } | .IoMmuSupported
        _m08 uint1_t  replicate_gdi_content;            //{ +0x0000@8  } | .ReplicateGdiContent
        _m09 uint1_t  non_cpu_visible_primary;          //{ +0x0000@9  } | .NonCpuVisiblePrimary
        _m10 uint1_t  paravirtualization_supported;     //{ +0x0000@10 } | .ParavirtualizationSupported
        _m11 uint1_t  io_mmu_secure_mode_supported;     //{ +0x0000@11 } | .IoMmuSecureModeSupported
        _m12 uint1_t  disable_self_refresh_vram_in_s3;  //{ +0x0000@12 } | .DisableSelfRefreshVRAMInS3
        _m13 uint1_t  io_mmu_secure_mode_required;      //{ +0x0000@13 } | .IoMmuSecureModeRequired
        _m14 uint32_t value;                            //{ +0x0000    } | .Value
        _m15 uint32_t paging_node;                      //{ +0x0004    } | .PagingNode
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_VIDMMCAPS.$", 0x0, false, 0x6a5caac4f9af6852 );                                
        SDK_FIXED_SIZE( vidmmcaps_t, 0x8 );                                
    };                                                
};
#include "magic/vidmmcaps_t.end.hpp"
SDK_VERIFY( struct dxgk::vidmmcaps_t, 0x8 );
