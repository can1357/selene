#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_scrub_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_SCRUB_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_scrub_information_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    handle;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 uint64_t pages_scrubbed;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagesScrubbed
                                     
        SDK_MAGIC_PROPERTIES( "_MEMORY_SCRUB_INFORMATION.$", 0x10, true, 0x439da0f7ed2c9298 );               
        SDK_FIXED_SIZE( memory_scrub_information_t, 0x10 );               
    };                               
};
#include "magic/memory_scrub_information_t.end.hpp"
SDK_VERIFY( struct win::memory_scrub_information_t, 0x10 );
