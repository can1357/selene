#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/freegpuvirtualaddress_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FREEGPUVIRTUALADDRESS]
    // => WDK 10 (NV)
    //
    struct freegpuvirtualaddress_t 
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t h_adapter;     //{ +0x0000    } | .hAdapter
        _m01 uint64_t base_address;  //{ +0x0008    } | .BaseAddress
        _m02 uint64_t size;          //{ +0x0010    } | .Size
                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FREEGPUVIRTUALADDRESS.$", 0x0, false, 0xcc76e5a5d32033e4 );             
        SDK_FIXED_SIZE( freegpuvirtualaddress_t, 0x18 );             
    };                             
};
#include "magic/freegpuvirtualaddress_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::freegpuvirtualaddress_t, 0x18 );
