#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"
#include "usn_record_extent_t.hpp"
#include "usn_record_common_header_t.hpp"

#include "magic/usn_record_v4_t.start.hpp"
namespace win
{
    // [struct USN_RECORD_V4]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_record_v4_t                                                               
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                               
        _m00 struct win::usn_record_common_header_t         header;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct win::file_id_128_t                      file_reference_number;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileReferenceNumber
        _m02 struct win::file_id_128_t                      parent_file_reference_number;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ParentFileReferenceNumber
        _m03 int64_t                                        usn;                           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Usn
        _m04 uint32_t                                       reason;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Reason
        _m05 uint32_t                                       source_info;                   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .SourceInfo
        _m06 uint32_t                                       remaining_extents;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RemainingExtents
        _m07 uint16_t                                       number_of_extents;             //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .NumberOfExtents
        _m08 uint16_t                                       extent_size;                   //{ +0x003e    +0x003e    +0x003e    +0x003e    } | .ExtentSize
        _m09 sdk::array<struct win::usn_record_extent_t, 1> extents;                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Extents
                                                                                         
        SDK_MAGIC_PROPERTIES( "USN_RECORD_V4.$", 0x50, true, 0xdc8bae43a9d205bb );                             
        SDK_FIXED_SIZE( usn_record_v4_t, 0x50 );                                         
    };                                                                                   
};
#include "magic/usn_record_v4_t.end.hpp"
SDK_VERIFY( struct win::usn_record_v4_t, 0x50 );
