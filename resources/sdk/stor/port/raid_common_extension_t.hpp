#pragma once
#include <sdkgen/support_library.hpp>
#include "raid_object_type_t.hpp"

#include "magic/raid_common_extension_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_COMMON_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_common_extension_t                           
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                   
        _m00 enum stor::port::raid_object_type_t object_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
                                                             
        SDK_MAGIC_PROPERTIES( "_RAID_COMMON_EXTENSION.$", 0x4, true, 0x6d47ea6829599af1 );            
        SDK_FIXED_SIZE( raid_common_extension_t, 0x4 );            
    };                                                       
};
#include "magic/raid_common_extension_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_common_extension_t, 0x4 );
