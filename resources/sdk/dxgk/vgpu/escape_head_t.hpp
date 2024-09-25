#pragma once
#include <sdkgen/support_library.hpp>
#include "escape_type_t.hpp"
#include "../../nt/gpup_driver_escape_input_t.hpp"

#include "magic/escape_head_t.start.hpp"
namespace dxgk::vgpu
{
    // [struct _DXGKVGPU_ESCAPE_HEAD]
    // => WDK 10 (NV)
    //
    struct escape_head_t                                
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 struct nt::gpup_driver_escape_input_t luid;  //{ +0x0000    } | .Luid
        _m01 enum dxgk::vgpu::escape_type_t        type;  //{ +0x0008    } | .Type
                                                        
        SDK_NONVOL_PROPERTIES( "_DXGKVGPU_ESCAPE_HEAD.$", 0x0, false, 0x3b0be5eb058360ec );     
        SDK_FIXED_SIZE( escape_head_t, 0xc );           
    };                                                  
};
#include "magic/escape_head_t.end.hpp"
SDK_VERIFY( struct dxgk::vgpu::escape_head_t, 0xc );
