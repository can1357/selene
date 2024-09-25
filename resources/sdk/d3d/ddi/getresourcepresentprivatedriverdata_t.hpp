#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getresourcepresentprivatedriverdata_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA]
    // => WDK 10 (NV)
    //
    struct getresourcepresentprivatedriverdata_t
    {                                           
        // WDK 10                              
        //                                     
        _m00 uint32_t h_resource;                 //{ +0x0000    } | .hResource
        _m01 uint32_t private_driver_data_size;   //{ +0x0004    } | .PrivateDriverDataSize
        _m02 void*    p_private_driver_data;      //{ +0x0008    } | .pPrivateDriverData
                                                
        SDK_NONVOL_PROPERTIES( "_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA.$", 0x0, false, 0xf61bd59653064ae5 );                         
        SDK_FIXED_SIZE( getresourcepresentprivatedriverdata_t, 0x10 );                         
    };                                          
};
#include "magic/getresourcepresentprivatedriverdata_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::getresourcepresentprivatedriverdata_t, 0x10 );
