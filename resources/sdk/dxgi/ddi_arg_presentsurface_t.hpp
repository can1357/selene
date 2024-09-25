#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_presentsurface_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_PRESENTSURFACE]
    // => WDK 10 (NV)
    //
    struct ddi_arg_presentsurface_t      
    {                                    
        // WDK 10                        
        //                               
        _m00 uint64_t h_surface;           //{ +0x0000    } | .hSurface
        _m01 uint32_t sub_resource_index;  //{ +0x0008    } | .SubResourceIndex
                                         
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_PRESENTSURFACE.$", 0x0, false, 0x521e295c3d9afdea );                   
        SDK_FIXED_SIZE( ddi_arg_presentsurface_t, 0x10 );                   
    };                                   
};
#include "magic/ddi_arg_presentsurface_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_presentsurface_t, 0x10 );
