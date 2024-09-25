#pragma once
#include <sdkgen/support_library.hpp>
#include "escape_head_t.hpp"

#include "magic/escape_read_vgpu_type_t.start.hpp"
namespace dxgk::vgpu
{
    // [struct _DXGKVGPU_ESCAPE_READ_VGPU_TYPE]
    // => WDK 10 (NV)
    //
    struct escape_read_vgpu_type_t                   
    {                                                
        // WDK 10                                    
        //                                           
        _m00 struct dxgk::vgpu::escape_head_t header;  //{ +0x0000    } | .Header
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKVGPU_ESCAPE_READ_VGPU_TYPE.$", 0x0, false, 0x316e11cbdfe144fc );       
        SDK_FIXED_SIZE( escape_read_vgpu_type_t, 0xc );       
    };                                               
};
#include "magic/escape_read_vgpu_type_t.end.hpp"
SDK_VERIFY( struct dxgk::vgpu::escape_read_vgpu_type_t, 0xc );
