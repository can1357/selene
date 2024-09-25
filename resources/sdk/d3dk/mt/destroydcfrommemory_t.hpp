#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hdc_t; }

#include "magic/destroydcfrommemory_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYDCFROMMEMORY]
    // => WDK 10 (NV)
    //
    struct destroydcfrommemory_t         
    {                                    
        // WDK 10                        
        //                               
        _m00 struct win::hdc_t* h_dc;      //{ +0x0000    } | .hDc
        _m01 void*              h_bitmap;  //{ +0x0008    } | .hBitmap
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYDCFROMMEMORY.$", 0x0, false, 0x9b581da1f46ffbab );         
        SDK_FIXED_SIZE( destroydcfrommemory_t, 0x10 );         
    };                                   
};
#include "magic/destroydcfrommemory_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroydcfrommemory_t, 0x10 );
