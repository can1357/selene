#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HVIDPN__]
    // => WDK 10 (NV)
    //
    struct hvidpn_t
    {              
                   
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HVIDPN__.$", 0x0, false, 0xaf4b8f00896e6fbd );
        SDK_FIXED_SIZE( hvidpn_t, 0x4 );
    };             
};
SDK_VERIFY( struct d3dk::mdt::hvidpn_t, 0x4 );
