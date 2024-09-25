#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HVIDPNTARGETMODESET__]
    // => WDK 10 (NV)
    //
    struct hvidpntargetmodeset_t
    {                           
                                
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HVIDPNTARGETMODESET__.$", 0x0, false, 0xb34824177a2cb21c );
        SDK_FIXED_SIZE( hvidpntargetmodeset_t, 0x4 );
    };                          
};
SDK_VERIFY( struct d3dk::mdt::hvidpntargetmodeset_t, 0x4 );
