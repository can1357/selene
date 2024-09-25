#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_stat_information_t.start.hpp"
namespace win
{
    // [struct _FILE_STAT_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_stat_information_t     
    {                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 int64_t  file_id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileId
        _m01 int64_t  creation_time;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CreationTime
        _m02 int64_t  last_access_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastAccessTime
        _m03 int64_t  last_write_time;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LastWriteTime
        _m04 int64_t  change_time;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ChangeTime
        _m05 int64_t  allocation_size;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AllocationSize
        _m06 int64_t  end_of_file;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EndOfFile
        _m07 uint32_t file_attributes;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FileAttributes
        _m08 uint32_t reparse_tag;       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ReparseTag
        _m09 uint32_t number_of_links;   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NumberOfLinks
        _m10 uint32_t effective_access;  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .EffectiveAccess
                                       
        SDK_NONVOL_PROPERTIES( "_FILE_STAT_INFORMATION.$", 0x48, true, 0xf61b564f8d8d33c );                 
        SDK_FIXED_SIZE( file_stat_information_t, 0x48 );                 
    };                                 
};
#include "magic/file_stat_information_t.end.hpp"
SDK_VERIFY( struct win::file_stat_information_t, 0x48 );
