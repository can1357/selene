#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HMONITORDESCRIPTORSET__]
    // => WDK 10 (NV)
    //
    struct hmonitordescriptorset_t
    {                             
                                  
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HMONITORDESCRIPTORSET__.$", 0x0, false, 0x8fc1e03d8c2de429 );
        SDK_FIXED_SIZE( hmonitordescriptorset_t, 0x4 );
    };                            
};
SDK_VERIFY( struct d3dk::mdt::hmonitordescriptorset_t, 0x4 );
