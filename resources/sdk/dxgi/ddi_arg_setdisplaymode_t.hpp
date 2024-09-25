#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_setdisplaymode_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_SETDISPLAYMODE]
    // => WDK 10 (NV)
    //
    struct ddi_arg_setdisplaymode_t      
    {                                    
        // WDK 10                        
        //                               
        _m00 uint64_t h_device;            //{ +0x0000    } | .hDevice
        _m01 uint64_t h_resource;          //{ +0x0008    } | .hResource
        _m02 uint32_t sub_resource_index;  //{ +0x0010    } | .SubResourceIndex
                                         
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_SETDISPLAYMODE.$", 0x0, false, 0xcf36ace057965f0b );                   
        SDK_FIXED_SIZE( ddi_arg_setdisplaymode_t, 0x18 );                   
    };                                   
};
#include "magic/ddi_arg_setdisplaymode_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_setdisplaymode_t, 0x18 );
