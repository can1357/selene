#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HVIDEOPRESENTSOURCESET__]
    // => WDK 10 (NV)
    //
    struct hvideopresentsourceset_t
    {                              
                                   
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HVIDEOPRESENTSOURCESET__.$", 0x0, false, 0x7c92b37e893d3d86 );
        SDK_FIXED_SIZE( hvideopresentsourceset_t, 0x4 );
    };                             
};
SDK_VERIFY( struct d3dk::mdt::hvideopresentsourceset_t, 0x4 );
