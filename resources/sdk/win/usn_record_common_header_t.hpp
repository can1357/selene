#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usn_record_common_header_t.start.hpp"
namespace win
{
    // [struct USN_RECORD_COMMON_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_record_common_header_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t record_length;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RecordLength
        _m01 uint16_t major_version;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorVersion
        _m02 uint16_t minor_version;   //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MinorVersion
                                     
        SDK_MAGIC_PROPERTIES( "USN_RECORD_COMMON_HEADER.$", 0x8, true, 0xabe17c90528213c3 );              
        SDK_FIXED_SIZE( usn_record_common_header_t, 0x8 );              
    };                               
};
#include "magic/usn_record_common_header_t.end.hpp"
SDK_VERIFY( struct win::usn_record_common_header_t, 0x8 );
