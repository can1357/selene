#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/allocationinfoflags_wddm2_0_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0]
    // => WDK 10 (NV)
    //
    struct allocationinfoflags_wddm2_0_t              
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
        _m07 uint1_t  disable_large_page_mapping;       //{ +0x0000@7  } | .DisableLargePageMapping
        _m08 uint1_t  overlay;                          //{ +0x0000@8  } | .Overlay
        _m09 uint1_t  capture;                          //{ +0x0000@9  } | .Capture
        _m10 uint1_t  create_in_vpr;                    //{ +0x0000@10 } | .CreateInVpr
        _m11 uint1_t  dxgk_alloc_reserved17;            //{ +0x0000@11 } | .DXGK_ALLOC_RESERVED17
        _m12 uint1_t  history_buffer;                   //{ +0x0000@14 } | .HistoryBuffer
        _m13 uint1_t  accessed_physically;              //{ +0x0000@15 } | .AccessedPhysically
        _m14 uint1_t  explicit_residency_notification;  //{ +0x0000@16 } | .ExplicitResidencyNotification
        _m15 uint1_t  hardware_protected;               //{ +0x0000@17 } | .HardwareProtected
        _m16 uint1_t  cpu_visible_on_demand;            //{ +0x0000@18 } | .CpuVisibleOnDemand
        _m17 uint1_t  dxgk_alloc_reserved16;            //{ +0x0000@19 } | .DXGK_ALLOC_RESERVED16
        _m18 uint32_t value;                            //{ +0x0000    } | .Value
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.$", 0x0, false, 0xb6a3d9a7b2a7fcd8 );                                
        SDK_FIXED_SIZE( allocationinfoflags_wddm2_0_t, 0x4 );                                
    };                                                
};
#include "magic/allocationinfoflags_wddm2_0_t.end.hpp"
SDK_VERIFY( struct dxgk::allocationinfoflags_wddm2_0_t, 0x4 );
