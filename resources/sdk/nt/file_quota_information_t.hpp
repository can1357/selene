#pragma once
#include <sdkgen/support_library.hpp>
#include "sid_t.hpp"

#include "magic/file_quota_information_t.start.hpp"
namespace nt
{
    // [struct _FILE_QUOTA_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_quota_information_t             
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                      
        _m00 uint32_t         next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t         sid_length;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SidLength
        _m02 int64_t          change_time;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ChangeTime
        _m03 int64_t          quota_used;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .QuotaUsed
        _m04 int64_t          quota_threshold;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .QuotaThreshold
        _m05 int64_t          quota_limit;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .QuotaLimit
        _m06 struct nt::sid_t sid;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Sid
                                                
        SDK_NONVOL_PROPERTIES( "_FILE_QUOTA_INFORMATION.$", 0x38, true, 0xe2da0ca7d489f71 );                  
        SDK_FIXED_SIZE( file_quota_information_t, 0x38 );                  
    };                                          
};
#include "magic/file_quota_information_t.end.hpp"
SDK_VERIFY( struct nt::file_quota_information_t, 0x38 );
