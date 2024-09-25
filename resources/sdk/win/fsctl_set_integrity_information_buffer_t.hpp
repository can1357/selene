#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_set_integrity_information_buffer_t.start.hpp"
namespace win
{
    // [struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_set_integrity_information_buffer_t
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint16_t checksum_algorithm;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ChecksumAlgorithm
        _m01 uint32_t flags;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                                   
        SDK_NONVOL_PROPERTIES( "_FSCTL_SET_INTEGRITY_INFORMATION_BUFFER.$", 0x8, true, 0x1ff389bdd502a243 );                   
        SDK_FIXED_SIZE( fsctl_set_integrity_information_buffer_t, 0x8 );                   
    };                                             
};
#include "magic/fsctl_set_integrity_information_buffer_t.end.hpp"
SDK_VERIFY( struct win::fsctl_set_integrity_information_buffer_t, 0x8 );
