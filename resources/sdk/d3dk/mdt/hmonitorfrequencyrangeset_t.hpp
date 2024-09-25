#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [struct D3DKMDT_HMONITORFREQUENCYRANGESET__]
    // => WDK 10 (NV)
    //
    struct hmonitorfrequencyrangeset_t
    {                                 
                                      
        SDK_NONVOL_PROPERTIES( "D3DKMDT_HMONITORFREQUENCYRANGESET__.$", 0x0, false, 0xd95455e5e30e1ea5 );
        SDK_FIXED_SIZE( hmonitorfrequencyrangeset_t, 0x4 );
    };                                
};
SDK_VERIFY( struct d3dk::mdt::hmonitorfrequencyrangeset_t, 0x4 );
