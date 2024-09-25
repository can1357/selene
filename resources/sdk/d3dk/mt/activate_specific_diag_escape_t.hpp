#pragma once
#include <sdkgen/support_library.hpp>
#include "activate_specific_diag_type_t.hpp"

#include "magic/activate_specific_diag_escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ACTIVATE_SPECIFIC_DIAG_ESCAPE]
    // => WDK 10 (NV)
    //
    struct activate_specific_diag_escape_t                         
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 enum d3dk::mt::activate_specific_diag_type_t type;      //{ +0x0000    } | .Type
        _m01 int32_t                                      activate;  //{ +0x0004    } | .Activate
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ACTIVATE_SPECIFIC_DIAG_ESCAPE.$", 0x0, false, 0xf763f843f431f921 );         
        SDK_FIXED_SIZE( activate_specific_diag_escape_t, 0x8 );         
    };                                                             
};
#include "magic/activate_specific_diag_escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::activate_specific_diag_escape_t, 0x8 );
