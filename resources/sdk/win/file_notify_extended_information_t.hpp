#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_notify_extended_information_t.start.hpp"
namespace win
{
    // [struct _FILE_NOTIFY_EXTENDED_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_notify_extended_information_t              
    {                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint32_t               next_entry_offset;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t               action;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Action
        _m02 int64_t                creation_time;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CreationTime
        _m03 int64_t                last_modification_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastModificationTime
        _m04 int64_t                last_change_time;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LastChangeTime
        _m05 int64_t                last_access_time;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LastAccessTime
        _m06 int64_t                allocated_length;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AllocatedLength
        _m07 int64_t                file_size;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FileSize
        _m08 uint32_t               file_attributes;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FileAttributes
        _m09 uint32_t               reparse_point_tag;       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ReparsePointTag
        _m10 int64_t                file_id;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .FileId
        _m11 int64_t                parent_file_id;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ParentFileId
        _m12 uint32_t               file_name_length;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FileNameLength
        _m13 sdk::array<wchar_t, 1> file_name;               //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .FileName
                                                           
        SDK_NONVOL_PROPERTIES( "_FILE_NOTIFY_EXTENDED_INFORMATION.$", 0x58, true, 0x9d3a7f42b2a9b28 );                       
        SDK_FIXED_SIZE( file_notify_extended_information_t, 0x58 );                       
    };                                                     
};
#include "magic/file_notify_extended_information_t.end.hpp"
SDK_VERIFY( struct win::file_notify_extended_information_t, 0x58 );
