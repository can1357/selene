#pragma once
#include <sdkgen/support_library.hpp>
#include "disk_san_policy_t.hpp"

#include "magic/disk_san_settings_t.start.hpp"
namespace nt
{
    // [struct _DISK_SAN_SETTINGS]
    // => WDK 10 (NV)
    //
    struct disk_san_settings_t                     
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint32_t                   version;     //{ +0x0000    } | .Version
        _m01 enum nt::disk_san_policy_t san_policy;  //{ +0x0004    } | .SanPolicy
                                                   
        SDK_NONVOL_PROPERTIES( "_DISK_SAN_SETTINGS.$", 0x0, false, 0xaa07a96eef1709a5 );           
        SDK_FIXED_SIZE( disk_san_settings_t, 0x8 );           
    };                                             
};
#include "magic/disk_san_settings_t.end.hpp"
SDK_VERIFY( struct nt::disk_san_settings_t, 0x8 );
