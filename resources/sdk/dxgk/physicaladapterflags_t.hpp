#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physicaladapterflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PHYSICALADAPTERFLAGS]
    // => WDK 10 (NV)
    //
    struct physicaladapterflags_t                     
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint1_t  io_mmu_supported;                 //{ +0x0000@0  } | .IoMmuSupported
        _m01 uint1_t  gpu_mmu_supported;                //{ +0x0000@1  } | .GpuMmuSupported
        _m02 uint1_t  move_paging_supported;            //{ +0x0000@2  } | .MovePagingSupported
        _m03 uint1_t  vpr_paging_context_required;      //{ +0x0000@3  } | .VPRPagingContextRequired
        _m04 uint1_t  allow_hardware_protected_no_vpr;  //{ +0x0000@4  } | .AllowHardwareProtectedNoVpr
        _m05 uint1_t  virtual_copy_engine_supported;    //{ +0x0000@5  } | .VirtualCopyEngineSupported
        _m06 uint32_t value;                            //{ +0x0000    } | .Value
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_PHYSICALADAPTERFLAGS.$", 0x0, false, 0x7fa56315f285fb0a );                                
        SDK_FIXED_SIZE( physicaladapterflags_t, 0x4 );                                
    };                                                
};
#include "magic/physicaladapterflags_t.end.hpp"
SDK_VERIFY( struct dxgk::physicaladapterflags_t, 0x4 );
