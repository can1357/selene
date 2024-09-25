#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setdisplayprivatedriverformat_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT]
    // => WDK 10 (NV)
    //
    struct setdisplayprivatedriverformat_t            
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t h_device;                         //{ +0x0000    } | .hDevice
        _m01 uint32_t vid_pn_source_id;                 //{ +0x0004    } | .VidPnSourceId
        _m02 uint32_t private_driver_format_attribute;  //{ +0x0008    } | .PrivateDriverFormatAttribute
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT.$", 0x0, false, 0x102647714b8df8d3 );                                
        SDK_FIXED_SIZE( setdisplayprivatedriverformat_t, 0xc );                                
    };                                                
};
#include "magic/setdisplayprivatedriverformat_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setdisplayprivatedriverformat_t, 0xc );
