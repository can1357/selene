#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_query_on_disk_vol_info_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_QUERY_ON_DISK_VOL_INFO_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_query_on_disk_vol_info_buffer_t                         
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                              
        _m00 int64_t                 directory_count;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DirectoryCount
        _m01 int64_t                 file_count;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileCount
        _m02 uint16_t                fs_format_maj_version;               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FsFormatMajVersion
        _m03 uint16_t                fs_format_min_version;               //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .FsFormatMinVersion
        _m04 sdk::array<wchar_t, 12> fs_format_name;                      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FsFormatName
        _m05 int64_t                 format_time;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FormatTime
        _m06 int64_t                 last_update_time;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .LastUpdateTime
        _m07 sdk::array<wchar_t, 34> copyright_info;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .CopyrightInfo
        _m08 sdk::array<wchar_t, 34> abstract_info;                       //{ +0x0084    +0x0084    +0x0084    +0x0084    +0x0084    } | .AbstractInfo
        _m09 sdk::array<wchar_t, 34> formatting_implementation_info;      //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .FormattingImplementationInfo
        _m10 sdk::array<wchar_t, 34> last_modifying_implementation_info;  //{ +0x010c    +0x010c    +0x010c    +0x010c    +0x010c    } | .LastModifyingImplementationInfo
                                                                        
        SDK_NONVOL_PROPERTIES( "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.$", 0x150, true, 0x2cabe6aa6f508e3c );                                   
        SDK_FIXED_SIZE( file_query_on_disk_vol_info_buffer_t, 0x150 );                                   
    };                                                                  
};
#include "magic/file_query_on_disk_vol_info_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_query_on_disk_vol_info_buffer_t, 0x150 );
