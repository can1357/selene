#pragma once
#include <sdkgen/support_library.hpp>
#include "../../tag/point_t.hpp"

#include "magic/outputdupl_pointer_position_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPL_POINTER_POSITION]
    // => WDK 10 (NV)
    //
    struct outputdupl_pointer_position_t  
    {                                     
        // WDK 10                         
        //                                
        _m00 struct tag::point_t position;  //{ +0x0000    } | .Position
        _m01 int32_t             visible;   //{ +0x0008    } | .Visible
                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPL_POINTER_POSITION.$", 0x0, false, 0xcb0f4002ed395f55 );         
        SDK_FIXED_SIZE( outputdupl_pointer_position_t, 0xc );         
    };                                    
};
#include "magic/outputdupl_pointer_position_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputdupl_pointer_position_t, 0xc );
