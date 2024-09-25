#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddirect_t.hpp"

#include "magic/kerneloverlayinfo_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_KERNELOVERLAYINFO]
    // => WDK 10 (NV)
    //
    struct kerneloverlayinfo_t                                
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint32_t                h_allocation;              //{ +0x0000    } | .hAllocation
        _m01 struct nt::d3dddirect_t dst_rect;                  //{ +0x0004    } | .DstRect
        _m02 struct nt::d3dddirect_t src_rect;                  //{ +0x0014    } | .SrcRect
        _m03 void*                   p_private_driver_data;     //{ +0x0028    } | .pPrivateDriverData
        _m04 uint32_t                private_driver_data_size;  //{ +0x0030    } | .PrivateDriverDataSize
                                                              
        SDK_NONVOL_PROPERTIES( "_D3DDDI_KERNELOVERLAYINFO.$", 0x0, false, 0x60c9927a58c17926 );                         
        SDK_FIXED_SIZE( kerneloverlayinfo_t, 0x38 );                         
    };                                                        
};
#include "magic/kerneloverlayinfo_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::kerneloverlayinfo_t, 0x38 );
