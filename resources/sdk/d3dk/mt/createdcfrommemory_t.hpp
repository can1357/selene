#pragma once
#include <sdkgen/support_library.hpp>
#include "../../kuser/d3dddiformat_t.hpp"

namespace tag { struct paletteentry_t; }
namespace win { struct hdc_t;          }

#include "magic/createdcfrommemory_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEDCFROMMEMORY]
    // => WDK 10 (NV)
    //
    struct createdcfrommemory_t                        
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 void*                       p_memory;       //{ +0x0000    } | .pMemory
        _m01 enum kuser::d3dddiformat_t  format;         //{ +0x0008    } | .Format
        _m02 uint32_t                    width;          //{ +0x000c    } | .Width
        _m03 uint32_t                    height;         //{ +0x0010    } | .Height
        _m04 uint32_t                    pitch;          //{ +0x0014    } | .Pitch
        _m05 struct win::hdc_t*          h_device_dc;    //{ +0x0018    } | .hDeviceDc
        _m06 struct tag::paletteentry_t* p_color_table;  //{ +0x0020    } | .pColorTable
        _m07 struct win::hdc_t*          h_dc;           //{ +0x0028    } | .hDc
        _m08 void*                       h_bitmap;       //{ +0x0030    } | .hBitmap
                                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEDCFROMMEMORY.$", 0x0, false, 0xa4b8e2541ad7c44c );              
        SDK_FIXED_SIZE( createdcfrommemory_t, 0x38 );              
    };                                                 
};
#include "magic/createdcfrommemory_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createdcfrommemory_t, 0x38 );
