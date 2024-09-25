#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usn_range_track_output_t.start.hpp"
namespace win
{
    // [struct USN_RANGE_TRACK_OUTPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_range_track_output_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //               
        _m00 int64_t usn;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Usn
                                   
        SDK_MAGIC_PROPERTIES( "USN_RANGE_TRACK_OUTPUT.$", 0x8, true, 0x1507326484906086 );    
        SDK_FIXED_SIZE( usn_range_track_output_t, 0x8 );    
    };                             
};
#include "magic/usn_range_track_output_t.end.hpp"
SDK_VERIFY( struct win::usn_range_track_output_t, 0x8 );
