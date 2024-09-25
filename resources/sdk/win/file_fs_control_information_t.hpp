#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_control_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_CONTROL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_control_information_t         
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 int64_t  free_space_start_filtering;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeSpaceStartFiltering
        _m01 int64_t  free_space_threshold;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FreeSpaceThreshold
        _m02 int64_t  free_space_stop_filtering;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FreeSpaceStopFiltering
        _m03 int64_t  default_quota_threshold;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DefaultQuotaThreshold
        _m04 int64_t  default_quota_limit;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DefaultQuotaLimit
        _m05 uint32_t file_system_control_flags;   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .FileSystemControlFlags
                                                 
        SDK_NONVOL_PROPERTIES( "_FILE_FS_CONTROL_INFORMATION.$", 0x30, true, 0xef4a090675b39ffd );                           
        SDK_FIXED_SIZE( file_fs_control_information_t, 0x30 );                           
    };                                           
};
#include "magic/file_fs_control_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_control_information_t, 0x30 );
