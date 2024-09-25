#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/allocationinfo_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_ALLOCATIONINFO]
    // => WDK 10 (NV)
    //
    struct allocationinfo_t                                
    {                                                      
        union u0_flags_t                                   
        {                                                  
            // WDK 10                                      
            //                                             
            _m05 uint1_t  primary;                           //{ +0x0000@0  } | .Primary
            _m06 uint1_t  stereo;                            //{ +0x0000@1  } | .Stereo
            _m07 uint32_t value;                             //{ +0x0000    } | .Value
                                                           
            SDK_NONVOL_PROPERTIES( "_D3DDDI_ALLOCATIONINFO.Flags.$", 0x0, false, 0x7721a8d69f341ef8 );                                 
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                 
        };                                                 
                                                           
        // WDK 10                                          
        //                                                 
        _m00 uint32_t             h_allocation;              //{ +0x0000    } | .hAllocation
        _m01 const void*          p_system_mem;              //{ +0x0008    } | .pSystemMem
        _m02 void*                p_private_driver_data;     //{ +0x0010    } | .pPrivateDriverData
        _m03 uint32_t             private_driver_data_size;  //{ +0x0018    } | .PrivateDriverDataSize
        _m04 uint32_t             vid_pn_source_id;          //{ +0x001c    } | .VidPnSourceId
        _m08 u0_flags_t           flags;                     //{ +0x0020    } | .Flags
                                                           
        SDK_NONVOL_PROPERTIES( "_D3DDDI_ALLOCATIONINFO.$", 0x0, false, 0xcf412be6c389875a );                         
        SDK_FIXED_SIZE( allocationinfo_t, 0x28 );                         
    };                                                     
};
#include "magic/allocationinfo_t.end.hpp"
SDK_VERIFY( union d3d::ddi::allocationinfo_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct d3d::ddi::allocationinfo_t, 0x28 );
