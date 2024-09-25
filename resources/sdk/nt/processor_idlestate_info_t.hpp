#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_idlestate_info_t.start.hpp"
namespace nt
{
    // [struct PROCESSOR_IDLESTATE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_idlestate_info_t 
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t time_check;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeCheck
        _m01 uint8_t  demote_percent;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DemotePercent
        _m02 uint8_t  promote_percent;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .PromotePercent
                                      
        SDK_MAGIC_PROPERTIES( "PROCESSOR_IDLESTATE_INFO.$", 0x8, true, 0x30ed644c77e7d2d0 );                
        SDK_FIXED_SIZE( processor_idlestate_info_t, 0x8 );                
    };                                
};
#include "magic/processor_idlestate_info_t.end.hpp"
SDK_VERIFY( struct nt::processor_idlestate_info_t, 0x8 );
