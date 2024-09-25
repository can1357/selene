#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_record_t.start.hpp"
namespace wmi
{
    // [struct _WMI_POWER_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_record_t      
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint8_t system_s1;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemS1
        _m01 uint8_t system_s2;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .SystemS2
        _m02 uint8_t system_s3;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SystemS3
        _m03 uint8_t system_s4;  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .SystemS4
        _m04 uint8_t system_s5;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemS5
        _m05 uint8_t ao_ac;      //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .AoAc
                               
        SDK_MAGIC_PROPERTIES( "_WMI_POWER_RECORD.$", 0x8, true, 0x56775336e688435a );          
        SDK_FIXED_SIZE( power_record_t, 0x8 );          
    };                         
};
#include "magic/power_record_t.end.hpp"
SDK_VERIFY( struct wmi::power_record_t, 0x8 );
