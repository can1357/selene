#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lookup_stream_from_cluster_output_t.start.hpp"
namespace win
{
    // [struct _LOOKUP_STREAM_FROM_CLUSTER_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct lookup_stream_from_cluster_output_t
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t offset;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint32_t number_of_matches;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfMatches
        _m02 uint32_t buffer_size_required;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BufferSizeRequired
                                              
        SDK_NONVOL_PROPERTIES( "_LOOKUP_STREAM_FROM_CLUSTER_OUTPUT.$", 0xc, true, 0xf26c5f07f8ae305d );                     
        SDK_FIXED_SIZE( lookup_stream_from_cluster_output_t, 0xc );                     
    };                                        
};
#include "magic/lookup_stream_from_cluster_output_t.end.hpp"
SDK_VERIFY( struct win::lookup_stream_from_cluster_output_t, 0xc );
