#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/outputduplpresentflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS]
    // => WDK 10 (NV)
    //
    struct outputduplpresentflags_t                 
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint1_t  protected_content_blanked_out;  //{ +0x0000@0  } | .ProtectedContentBlankedOut
        _m01 uint1_t  remote_session;                 //{ +0x0000@1  } | .RemoteSession
        _m02 uint1_t  full_screen_present;            //{ +0x0000@2  } | .FullScreenPresent
        _m03 uint1_t  present_indirect;               //{ +0x0000@3  } | .PresentIndirect
        _m04 uint32_t value;                          //{ +0x0000    } | .Value
                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPLPRESENTFLAGS.$", 0x0, false, 0xd2e4ad0de89f3504 );                              
        SDK_FIXED_SIZE( outputduplpresentflags_t, 0x4 );                              
    };                                              
};
#include "magic/outputduplpresentflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputduplpresentflags_t, 0x4 );
