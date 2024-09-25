#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"

#include "magic/usn_record_v3_t.start.hpp"
namespace win
{
    // [struct USN_RECORD_V3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_record_v3_t                                          
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                          
        _m00 uint32_t                  record_length;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RecordLength
        _m01 uint16_t                  major_version;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorVersion
        _m02 uint16_t                  minor_version;                 //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MinorVersion
        _m03 struct win::file_id_128_t file_reference_number;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileReferenceNumber
        _m04 struct win::file_id_128_t parent_file_reference_number;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ParentFileReferenceNumber
        _m05 int64_t                   usn;                           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Usn
        _m06 int64_t                   time_stamp;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TimeStamp
        _m07 uint32_t                  reason;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Reason
        _m08 uint32_t                  source_info;                   //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SourceInfo
        _m09 uint32_t                  security_id;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SecurityId
        _m10 uint32_t                  file_attributes;               //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .FileAttributes
        _m11 uint16_t                  file_name_length;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FileNameLength
        _m12 uint16_t                  file_name_offset;              //{ +0x004a    +0x004a    +0x004a    +0x004a    } | .FileNameOffset
        _m13 sdk::array<wchar_t, 1>    file_name;                     //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .FileName
                                                                    
        SDK_MAGIC_PROPERTIES( "USN_RECORD_V3.$", 0x50, true, 0x4cc377d66bad48fd );                             
        SDK_FIXED_SIZE( usn_record_v3_t, 0x50 );                             
    };                                                              
};
#include "magic/usn_record_v3_t.end.hpp"
SDK_VERIFY( struct win::usn_record_v3_t, 0x50 );
