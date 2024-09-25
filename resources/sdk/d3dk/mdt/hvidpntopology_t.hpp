#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HVIDPNTOPOLOGY__]
    // => WDK 10 (NV)
    //
    struct hvidpntopology_t
    {                      
                           
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HVIDPNTOPOLOGY__.$", 0x0, false, 0x651797e414f7653c );
        SDK_FIXED_SIZE( hvidpntopology_t, 0x4 );
    };                     
};
SDK_VERIFY( struct d3dk::mdt::hvidpntopology_t, 0x4 );
