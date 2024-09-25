#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/outputduplcreationflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS]
    // => WDK 10 (NV)
    //
    struct outputduplcreationflags_t              
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint1_t  composition_ui_capture_only;  //{ +0x0000@0  } | .CompositionUiCaptureOnly
        _m01 uint32_t value;                        //{ +0x0000    } | .Value
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPLCREATIONFLAGS.$", 0x0, false, 0xeb0f7551005d081c );                            
        SDK_FIXED_SIZE( outputduplcreationflags_t, 0x4 );                            
    };                                            
};
#include "magic/outputduplcreationflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputduplcreationflags_t, 0x4 );
