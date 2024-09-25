#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/allocationinfoflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ALLOCATIONINFOFLAGS]
    // => WDK 10 (NV)
    //
    struct allocationinfoflags_t                      
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint1_t  cpu_visible;                      //{ +0x0000@0  } | .CpuVisible
        _m01 uint1_t  permanent_sys_mem;                //{ +0x0000@1  } | .PermanentSysMem
        _m02 uint1_t  cached;                           //{ +0x0000@2  } | .Cached
        _m03 uint1_t  _protected;                       //{ +0x0000@3  } | .Protected
        _m04 uint1_t  existing_sys_mem;                 //{ +0x0000@4  } | .ExistingSysMem
        _m05 uint1_t  existing_kernel_sys_mem;          //{ +0x0000@5  } | .ExistingKernelSysMem
        _m06 uint1_t  from_end_of_segment;              //{ +0x0000@6  } | .FromEndOfSegment
        _m07 uint1_t  swizzled;                         //{ +0x0000@7  } | .Swizzled
        _m08 uint1_t  overlay;                          //{ +0x0000@8  } | .Overlay
        _m09 uint1_t  capture;                          //{ +0x0000@9  } | .Capture
        _m10 uint1_t  use_alternate_va;                 //{ +0x0000@10 } | .UseAlternateVA
        _m11 uint1_t  synchronous_paging;               //{ +0x0000@11 } | .SynchronousPaging
        _m12 uint1_t  link_mirrored;                    //{ +0x0000@12 } | .LinkMirrored
        _m13 uint1_t  link_instanced;                   //{ +0x0000@13 } | .LinkInstanced
        _m14 uint1_t  history_buffer;                   //{ +0x0000@14 } | .HistoryBuffer
        _m15 uint1_t  accessed_physically;              //{ +0x0000@15 } | .AccessedPhysically
        _m16 uint1_t  explicit_residency_notification;  //{ +0x0000@16 } | .ExplicitResidencyNotification
        _m17 uint1_t  hardware_protected;               //{ +0x0000@17 } | .HardwareProtected
        _m18 uint1_t  cpu_visible_on_demand;            //{ +0x0000@18 } | .CpuVisibleOnDemand
        _m19 uint1_t  dxgk_alloc_reserved16;            //{ +0x0000@19 } | .DXGK_ALLOC_RESERVED16
        _m20 uint32_t value;                            //{ +0x0000    } | .Value
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_ALLOCATIONINFOFLAGS.$", 0x0, false, 0xb46f6453fc23537e );                                
        SDK_FIXED_SIZE( allocationinfoflags_t, 0x4 );                                
    };                                                
};
#include "magic/allocationinfoflags_t.end.hpp"
SDK_VERIFY( struct dxgk::allocationinfoflags_t, 0x4 );
