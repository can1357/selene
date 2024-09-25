#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_unit_extension_per_processor_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_UNIT_EXTENSION_PER_PROCESSOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_unit_extension_per_processor_t
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 int32_t outstanding_count;         //{ +0x0000    +0x0000    +0x0000    } | .OutstandingCount
                                              
        SDK_MAGIC_PROPERTIES( "_RAID_UNIT_EXTENSION_PER_PROCESSOR.$", 0x40, true, 0x4a6a5f87f6770d26 );                  
        SDK_FIXED_SIZE( raid_unit_extension_per_processor_t, 0x40 );                  
    };                                        
};
#include "magic/raid_unit_extension_per_processor_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_unit_extension_per_processor_t, 0x40 );
