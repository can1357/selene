#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usn_record_extent_t.start.hpp"
namespace win
{
    // [struct USN_RECORD_EXTENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_record_extent_t
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 int64_t offset;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 int64_t length;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                              
        SDK_MAGIC_PROPERTIES( "USN_RECORD_EXTENT.$", 0x10, true, 0x5e701f96c99e9520 );       
        SDK_FIXED_SIZE( usn_record_extent_t, 0x10 );       
    };                        
};
#include "magic/usn_record_extent_t.end.hpp"
SDK_VERIFY( struct win::usn_record_extent_t, 0x10 );
