#pragma once
#include <sdkgen/support_library.hpp>
#include "disk_speed_policy_t.hpp"

#include "magic/disk_speed_info_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DISK_SPEED_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct disk_speed_info_t                      
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                        
        _m00 enum rtl::disk_speed_policy_t policy;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Policy
                                                  
        SDK_MAGIC_PROPERTIES( "_RTL_DISK_SPEED_INFO.$", 0x4, true, 0xe66717458e3f70f0 );       
        SDK_FIXED_SIZE( disk_speed_info_t, 0x4 );       
    };                                            
};
#include "magic/disk_speed_info_t.end.hpp"
SDK_VERIFY( struct rtl::disk_speed_info_t, 0x4 );
