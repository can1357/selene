#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/overlayinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_OVERLAYINFO]
    // => WDK 10 (NV)
    //
    struct overlayinfo_t                                 
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 void*              h_allocation;              //{ +0x0000    } | .hAllocation
        _m01 int64_t            physical_address;          //{ +0x0008    } | .PhysicalAddress
        _m02 uint32_t           segment_id;                //{ +0x0010    } | .SegmentId
        _m03 struct tag::rect_t dst_rect;                  //{ +0x0014    } | .DstRect
        _m04 struct tag::rect_t src_rect;                  //{ +0x0024    } | .SrcRect
        _m05 void*              p_private_driver_data;     //{ +0x0038    } | .pPrivateDriverData
        _m06 uint32_t           private_driver_data_size;  //{ +0x0040    } | .PrivateDriverDataSize
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_OVERLAYINFO.$", 0x0, false, 0x946207e2e3aa566c );                         
        SDK_FIXED_SIZE( overlayinfo_t, 0x48 );                         
    };                                                   
};
#include "magic/overlayinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::overlayinfo_t, 0x48 );
