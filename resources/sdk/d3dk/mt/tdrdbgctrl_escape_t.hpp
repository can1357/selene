#pragma once
#include <sdkgen/support_library.hpp>
#include "tdrdbgctrltype_t.hpp"

#include "magic/tdrdbgctrl_escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_TDRDBGCTRL_ESCAPE]
    // => WDK 10 (NV)
    //
    struct tdrdbgctrl_escape_t                            
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 enum d3dk::mt::tdrdbgctrltype_t tdr_control;   //{ +0x0000    } | .TdrControl
        _m01 uint32_t                        node_ordinal;  //{ +0x0004    } | .NodeOrdinal
                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_TDRDBGCTRL_ESCAPE.$", 0x0, false, 0x295f8ffcd88e6409 );             
        SDK_FIXED_SIZE( tdrdbgctrl_escape_t, 0x8 );             
    };                                                    
};
#include "magic/tdrdbgctrl_escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::tdrdbgctrl_escape_t, 0x8 );
