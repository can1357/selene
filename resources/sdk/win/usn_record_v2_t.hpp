#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usn_record_v2_t.start.hpp"
namespace win
{
    // [struct USN_RECORD_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_record_v2_t                                       
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                       
        _m00 uint32_t               record_length;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RecordLength
        _m01 uint16_t               major_version;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorVersion
        _m02 uint16_t               minor_version;                 //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MinorVersion
        _m03 uint64_t               file_reference_number;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileReferenceNumber
        _m04 uint64_t               parent_file_reference_number;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ParentFileReferenceNumber
        _m05 int64_t                usn;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Usn
        _m06 int64_t                time_stamp;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TimeStamp
        _m07 uint32_t               reason;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Reason
        _m08 uint32_t               source_info;                   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SourceInfo
        _m09 uint32_t               security_id;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SecurityId
        _m10 uint32_t               file_attributes;               //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .FileAttributes
        _m11 uint16_t               file_name_length;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FileNameLength
        _m12 uint16_t               file_name_offset;              //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .FileNameOffset
        _m13 sdk::array<wchar_t, 1> file_name;                     //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .FileName
                                                                 
        SDK_MAGIC_PROPERTIES( "USN_RECORD_V2.$", 0x40, true, 0x597c0a81edaf8cce );                             
        SDK_FIXED_SIZE( usn_record_v2_t, 0x40 );                             
    };                                                           
};
#include "magic/usn_record_v2_t.end.hpp"
SDK_VERIFY( struct win::usn_record_v2_t, 0x40 );
