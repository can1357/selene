#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualaddressflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_VIRTUALADDRESSFLAGS]
    // => WDK 10 (NV)
    //
    struct virtualaddressflags_t               
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint1_t virtual_address_supported;  //{ +0x0000@0  } | .VirtualAddressSupported
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_VIRTUALADDRESSFLAGS.$", 0x0, false, 0xaeff029101d5e99e );                          
        SDK_FIXED_SIZE( virtualaddressflags_t, 0x4 );                          
    };                                         
};
#include "magic/virtualaddressflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::virtualaddressflags_t, 0x4 );
