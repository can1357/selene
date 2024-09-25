#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HVIDPNSOURCEMODESET__]
    // => WDK 10 (NV)
    //
    struct hvidpnsourcemodeset_t
    {                           
                                
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HVIDPNSOURCEMODESET__.$", 0x0, false, 0xb6308f846b2bd725 );
        SDK_FIXED_SIZE( hvidpnsourcemodeset_t, 0x4 );
    };                          
};
SDK_VERIFY( struct d3dk::mdt::hvidpnsourcemodeset_t, 0x4 );
