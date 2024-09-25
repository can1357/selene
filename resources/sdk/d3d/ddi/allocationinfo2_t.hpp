#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/allocationinfo2_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_ALLOCATIONINFO2]
    // => WDK 10 (NV)
    //
    struct allocationinfo2_t                                         
    {                                                                
        union u0_flags_t                                             
        {                                                            
            // WDK 10                                                
            //                                                       
            _m06 uint1_t  primary;                                     //{ +0x0000@0  } | .Primary
            _m07 uint1_t  stereo;                                      //{ +0x0000@1  } | .Stereo
            _m08 uint1_t  override_priority;                           //{ +0x0000@2  } | .OverridePriority
            _m09 uint32_t value;                                       //{ +0x0000    } | .Value
                                                                     
            SDK_NONVOL_PROPERTIES( "_D3DDDI_ALLOCATIONINFO2.Flags.$", 0x0, false, 0x3296abb6f8f23cce );                                           
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                           
        };                                                           
                                                                     
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                       h_allocation;              //{ +0x0000    } | .hAllocation
        _m01 void*                          h_section;                 //{ +0x0008    } | .hSection
        _m02 const void*                    p_system_mem;              //{ +0x0008    } | .pSystemMem
        _m03 void*                          p_private_driver_data;     //{ +0x0010    } | .pPrivateDriverData
        _m04 uint32_t                       private_driver_data_size;  //{ +0x0018    } | .PrivateDriverDataSize
        _m05 uint32_t                       vid_pn_source_id;          //{ +0x001c    } | .VidPnSourceId
        _m10 u0_flags_t                     flags;                     //{ +0x0020    } | .Flags
        _m11 uint64_t                       gpu_virtual_address;       //{ +0x0028    } | .GpuVirtualAddress
        _m12 uint32_t                       priority;                  //{ +0x0030    } | .Priority
                                                                     
        SDK_NONVOL_PROPERTIES( "_D3DDDI_ALLOCATIONINFO2.$", 0x0, false, 0x3030c5a245fb8230 );                         
        SDK_FIXED_SIZE( allocationinfo2_t, 0x60 );                         
    };                                                               
};
#include "magic/allocationinfo2_t.end.hpp"
SDK_VERIFY( union d3d::ddi::allocationinfo2_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct d3d::ddi::allocationinfo2_t, 0x60 );
