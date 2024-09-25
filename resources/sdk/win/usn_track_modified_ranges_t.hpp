#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usn_track_modified_ranges_t.start.hpp"
namespace win
{
    // [struct USN_TRACK_MODIFIED_RANGES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usn_track_modified_ranges_t    
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint64_t chunk_size;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ChunkSize
        _m02 int64_t  file_size_threshold;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileSizeThreshold
                                          
        SDK_MAGIC_PROPERTIES( "USN_TRACK_MODIFIED_RANGES.$", 0x18, true, 0xd52dbb26b850574e );                    
        SDK_FIXED_SIZE( usn_track_modified_ranges_t, 0x18 );                    
    };                                    
};
#include "magic/usn_track_modified_ranges_t.end.hpp"
SDK_VERIFY( struct win::usn_track_modified_ranges_t, 0x18 );
