#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/invalidateactivevidpn_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_INVALIDATEACTIVEVIDPN]
    // => WDK 10 (NV)
    //
    struct invalidateactivevidpn_t             
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t h_adapter;                 //{ +0x0000    } | .hAdapter
        _m01 void*    p_private_driver_data;     //{ +0x0008    } | .pPrivateDriverData
        _m02 uint32_t private_driver_data_size;  //{ +0x0010    } | .PrivateDriverDataSize
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_INVALIDATEACTIVEVIDPN.$", 0x0, false, 0x9210f8cbba9836d7 );                         
        SDK_FIXED_SIZE( invalidateactivevidpn_t, 0x18 );                         
    };                                         
};
#include "magic/invalidateactivevidpn_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::invalidateactivevidpn_t, 0x18 );
