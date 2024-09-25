#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_stat_lx_information_t.start.hpp"
namespace win
{
    // [struct _FILE_STAT_LX_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_stat_lx_information_t    
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 int64_t  file_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileId
        _m01 int64_t  creation_time;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CreationTime
        _m02 int64_t  last_access_time;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastAccessTime
        _m03 int64_t  last_write_time;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LastWriteTime
        _m04 int64_t  change_time;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ChangeTime
        _m05 int64_t  allocation_size;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AllocationSize
        _m06 int64_t  end_of_file;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EndOfFile
        _m07 uint32_t file_attributes;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FileAttributes
        _m08 uint32_t reparse_tag;         //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ReparseTag
        _m09 uint32_t number_of_links;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NumberOfLinks
        _m10 uint32_t effective_access;    //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .EffectiveAccess
        _m11 uint32_t lx_flags;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LxFlags
        _m12 uint32_t lx_uid;              //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .LxUid
        _m13 uint32_t lx_gid;              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LxGid
        _m14 uint32_t lx_mode;             //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .LxMode
        _m15 uint32_t lx_device_id_major;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LxDeviceIdMajor
        _m16 uint32_t lx_device_id_minor;  //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .LxDeviceIdMinor
                                         
        SDK_NONVOL_PROPERTIES( "_FILE_STAT_LX_INFORMATION.$", 0x60, true, 0x7dcf0525993942ed );                   
        SDK_FIXED_SIZE( file_stat_lx_information_t, 0x60 );                   
    };                                   
};
#include "magic/file_stat_lx_information_t.end.hpp"
SDK_VERIFY( struct win::file_stat_lx_information_t, 0x60 );
