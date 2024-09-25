#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flushheaptransitions_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FLUSHHEAPTRANSITIONS]
    // => WDK 10 (NV)
    //
    struct flushheaptransitions_t
    {                            
        // WDK 10               
        //                      
        _m00 uint32_t h_adapter;   //{ +0x0000    } | .hAdapter
                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FLUSHHEAPTRANSITIONS.$", 0x0, false, 0x592f70fdfc0b61f9 );          
        SDK_FIXED_SIZE( flushheaptransitions_t, 0x4 );          
    };                           
};
#include "magic/flushheaptransitions_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::flushheaptransitions_t, 0x4 );
