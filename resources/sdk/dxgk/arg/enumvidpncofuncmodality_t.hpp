#pragma once
#include <sdkgen/support_library.hpp>
#include "../enum_pivot_t.hpp"
#include "../../d3dk/mdt/enumcofuncmodality_pivot_type_t.hpp"

namespace d3dk::mdt { struct hvidpn_t; }

#include "magic/enumvidpncofuncmodality_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY]
    // => WDK 10 (NV)
    //
    struct enumvidpncofuncmodality_t                                               
    {                                                                              
        // WDK 10                                                                  
        //                                                                         
        _m00 struct d3dk::mdt::hvidpn_t*                     h_constraining_vid_pn;  //{ +0x0000    } | .hConstrainingVidPn
        _m01 enum d3dk::mdt::enumcofuncmodality_pivot_type_t enum_pivot_type;        //{ +0x0008    } | .EnumPivotType
        _m02 struct dxgk::enum_pivot_t                       enum_pivot;             //{ +0x000c    } | .EnumPivot
                                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARG_ENUMVIDPNCOFUNCMODALITY.$", 0x0, false, 0x8beb84ea8555fcfb );                      
        SDK_FIXED_SIZE( enumvidpncofuncmodality_t, 0x18 );                         
    };                                                                             
};
#include "magic/enumvidpncofuncmodality_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::enumvidpncofuncmodality_t, 0x18 );
