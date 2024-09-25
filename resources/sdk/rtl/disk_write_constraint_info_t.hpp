#pragma once
#include <sdkgen/support_library.hpp>
#include "disk_write_constraint_policy_t.hpp"

#include "magic/disk_write_constraint_info_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DISK_WRITE_CONSTRAINT_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct disk_write_constraint_info_t                      
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                   
        _m00 enum rtl::disk_write_constraint_policy_t policy;  //{ +0x0000    +0x0000    +0x0000    } | .Policy
                                                             
        SDK_MAGIC_PROPERTIES( "_RTL_DISK_WRITE_CONSTRAINT_INFO.$", 0x4, true, 0x469344d712591b58 );       
        SDK_FIXED_SIZE( disk_write_constraint_info_t, 0x4 );       
    };                                                       
};
#include "magic/disk_write_constraint_info_t.end.hpp"
SDK_VERIFY( struct rtl::disk_write_constraint_info_t, 0x4 );
