#pragma once
#include <sdkgen/support_library.hpp>
#include "link_tracking_information_type_t.hpp"

#include "magic/link_tracking_information_t.start.hpp"
namespace win
{
    // [struct _LINK_TRACKING_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct link_tracking_information_t                            
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                        
        _m00 enum win::link_tracking_information_type_t type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 sdk::array<uint8_t, 16>                    volume_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .VolumeId
                                                                  
        SDK_NONVOL_PROPERTIES( "_LINK_TRACKING_INFORMATION.$", 0x14, true, 0xfc5f94a62447bbb3 );          
        SDK_FIXED_SIZE( link_tracking_information_t, 0x14 );          
    };                                                            
};
#include "magic/link_tracking_information_t.end.hpp"
SDK_VERIFY( struct win::link_tracking_information_t, 0x14 );
