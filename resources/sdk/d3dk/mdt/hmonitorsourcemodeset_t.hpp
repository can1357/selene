#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HMONITORSOURCEMODESET__]
    // => WDK 10 (NV)
    //
    struct hmonitorsourcemodeset_t
    {                             
                                  
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HMONITORSOURCEMODESET__.$", 0x0, false, 0x846c415816b88279 );
        SDK_FIXED_SIZE( hmonitorsourcemodeset_t, 0x4 );
    };                            
};
SDK_VERIFY( struct d3dk::mdt::hmonitorsourcemodeset_t, 0x4 );
