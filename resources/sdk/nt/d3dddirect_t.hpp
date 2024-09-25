#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dddirect_t.start.hpp"
namespace nt
{
    // [struct _D3DDDIRECT]
    // => WDK 10 (NV)
    //
    struct d3dddirect_t     
    {                       
        // WDK 10           
        //                  
        _m00 int32_t left;    //{ +0x0000    } | .left
        _m01 int32_t top;     //{ +0x0004    } | .top
        _m02 int32_t right;   //{ +0x0008    } | .right
        _m03 int32_t bottom;  //{ +0x000c    } | .bottom
                            
        SDK_NONVOL_PROPERTIES( "_D3DDDIRECT.$", 0x0, false, 0x4f33af1736c46c50 );       
        SDK_FIXED_SIZE( d3dddirect_t, 0x10 );       
    };                      
};
#include "magic/d3dddirect_t.end.hpp"
SDK_VERIFY( struct nt::d3dddirect_t, 0x10 );
