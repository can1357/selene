#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/wpp_registration_block_t.hpp"
#include "../pci/wpp_trace_control_block_t.hpp"

#include "magic/wpp_project_control_block_t.start.hpp"
namespace win
{
    // [union WPP_PROJECT_CONTROL_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union wpp_project_control_block_t                            
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                       
        _m00 struct wdf::wpp_registration_block_t  registration;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Registration
        _m01 struct pci::wpp_trace_control_block_t control;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Control
        _m02 sdk::array<uint8_t, 56>               reserve_space;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReserveSpace
                                                                 
        SDK_MAGIC_PROPERTIES( "WPP_PROJECT_CONTROL_BLOCK.$", 0x40, true, 0xd81257e4cf569d24 );              
        SDK_FIXED_SIZE( wpp_project_control_block_t, 0x40 );              
    };                                                           
};
#include "magic/wpp_project_control_block_t.end.hpp"
SDK_VERIFY( union win::wpp_project_control_block_t, 0x40 );
