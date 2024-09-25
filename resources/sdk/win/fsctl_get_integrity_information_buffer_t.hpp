#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_get_integrity_information_buffer_t.start.hpp"
namespace win
{
    // [struct _FSCTL_GET_INTEGRITY_INFORMATION_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_get_integrity_information_buffer_t
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint16_t checksum_algorithm;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ChecksumAlgorithm
        _m01 uint32_t flags;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t checksum_chunk_size_in_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ChecksumChunkSizeInBytes
        _m03 uint32_t cluster_size_in_bytes;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ClusterSizeInBytes
                                                   
        SDK_NONVOL_PROPERTIES( "_FSCTL_GET_INTEGRITY_INFORMATION_BUFFER.$", 0x10, true, 0x3397babdf1b03f75 );                             
        SDK_FIXED_SIZE( fsctl_get_integrity_information_buffer_t, 0x10 );                             
    };                                             
};
#include "magic/fsctl_get_integrity_information_buffer_t.end.hpp"
SDK_VERIFY( struct win::fsctl_get_integrity_information_buffer_t, 0x10 );
