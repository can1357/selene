#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/profile_parameter_block_t.start.hpp"
namespace nt
{
    // [struct _PROFILE_PARAMETER_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct profile_parameter_block_t
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t status;         //{ +0x0000    +0x0000    +0x0000    } | .Status
        _m01 uint16_t docking_state;  //{ +0x0004    +0x0004    +0x0004    } | .DockingState
        _m02 uint16_t capabilities;   //{ +0x0006    +0x0006    +0x0006    } | .Capabilities
        _m03 uint32_t dock_id;        //{ +0x0008    +0x0008    +0x0008    } | .DockID
        _m04 uint32_t serial_number;  //{ +0x000c    +0x000c    +0x000c    } | .SerialNumber
                                    
        SDK_MAGIC_PROPERTIES( "_PROFILE_PARAMETER_BLOCK.$", 0x10, true, 0x8429f3a01183c23f );              
        SDK_FIXED_SIZE( profile_parameter_block_t, 0x10 );              
    };                              
};
#include "magic/profile_parameter_block_t.end.hpp"
SDK_VERIFY( struct nt::profile_parameter_block_t, 0x10 );
