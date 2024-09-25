#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/packedeventinfo_t.start.hpp"
namespace win
{
    // [struct _PACKEDEVENTINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packedeventinfo_t                                 
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                   
        _m00 uint32_t             ul_size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulSize
        _m01 uint32_t             ul_num_events_for_log_file;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulNumEventsForLogFile
        _m02 sdk::array<uint32_t> ul_offsets;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulOffsets
                                                             
        SDK_MAGIC_PROPERTIES( "_PACKEDEVENTINFO.$", 0x8, true, 0xde6c82e2c1968b3 );                           
        SDK_FIXED_SIZE( packedeventinfo_t, 0x8 );                           
    };                                                       
};
#include "magic/packedeventinfo_t.end.hpp"
SDK_VERIFY( struct win::packedeventinfo_t, 0x8 );
