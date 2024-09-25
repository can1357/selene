#pragma once
#include <sdkgen/support_library.hpp>
#include "../../tag/point_t.hpp"
#include "outdupl_pointer_shape_type_t.hpp"

#include "magic/outdupl_pointer_shape_info_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTDUPL_POINTER_SHAPE_INFO]
    // => WDK 10 (NV)
    //
    struct outdupl_pointer_shape_info_t                           
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 enum d3dk::mt::outdupl_pointer_shape_type_t type;      //{ +0x0000    } | .Type
        _m01 uint32_t                                    width;     //{ +0x0004    } | .Width
        _m02 uint32_t                                    height;    //{ +0x0008    } | .Height
        _m03 uint32_t                                    pitch;     //{ +0x000c    } | .Pitch
        _m04 struct tag::point_t                         hot_spot;  //{ +0x0010    } | .HotSpot
                                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTDUPL_POINTER_SHAPE_INFO.$", 0x0, false, 0xcf9f45e95e465e7e );         
        SDK_FIXED_SIZE( outdupl_pointer_shape_info_t, 0x18 );         
    };                                                            
};
#include "magic/outdupl_pointer_shape_info_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outdupl_pointer_shape_info_t, 0x18 );
