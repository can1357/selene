#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_setresourcepriority_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_SETRESOURCEPRIORITY]
    // => WDK 10 (NV)
    //
    struct ddi_arg_setresourcepriority_t
    {                                   
        // WDK 10                
        //                       
        _m00 uint64_t h_device;           //{ +0x0000    } | .hDevice
        _m01 uint64_t h_resource;         //{ +0x0008    } | .hResource
        _m02 uint32_t priority;           //{ +0x0010    } | .Priority
                                        
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_SETRESOURCEPRIORITY.$", 0x0, false, 0x9581112219e827fb );           
        SDK_FIXED_SIZE( ddi_arg_setresourcepriority_t, 0x18 );           
    };                                  
};
#include "magic/ddi_arg_setresourcepriority_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_setresourcepriority_t, 0x18 );
