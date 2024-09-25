#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HVIDEOPRESENTTARGETSET__]
    // => WDK 10 (NV)
    //
    struct hvideopresenttargetset_t
    {                              
                                   
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HVIDEOPRESENTTARGETSET__.$", 0x0, false, 0x2883e69887d6e65a );
        SDK_FIXED_SIZE( hvideopresenttargetset_t, 0x4 );
    };                             
};
SDK_VERIFY( struct d3dk::mdt::hvideopresenttargetset_t, 0x4 );
