#pragma once
#include <sdkgen/support_library.hpp>
#include "shrink_volume_request_types_t.hpp"

#include "magic/shrink_volume_information_t.start.hpp"
namespace win
{
    // [struct _SHRINK_VOLUME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct shrink_volume_information_t                                     
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                 
        _m00 enum win::shrink_volume_request_types_t shrink_request_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ShrinkRequestType
        _m01 uint64_t                                flags;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 int64_t                                 new_number_of_sectors;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NewNumberOfSectors
                                                                           
        SDK_NONVOL_PROPERTIES( "_SHRINK_VOLUME_INFORMATION.$", 0x18, true, 0xabf73bec0622c87 );                      
        SDK_FIXED_SIZE( shrink_volume_information_t, 0x18 );                      
    };                                                                     
};
#include "magic/shrink_volume_information_t.end.hpp"
SDK_VERIFY( struct win::shrink_volume_information_t, 0x18 );
