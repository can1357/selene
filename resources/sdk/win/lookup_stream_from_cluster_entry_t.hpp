#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lookup_stream_from_cluster_entry_t.start.hpp"
namespace win
{
    // [struct _LOOKUP_STREAM_FROM_CLUSTER_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct lookup_stream_from_cluster_entry_t      
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint32_t               offset_to_next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OffsetToNext
        _m01 uint32_t               flags;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 int64_t                cluster;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Cluster
        _m03 sdk::array<wchar_t, 1> file_name;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FileName
                                                   
        SDK_NONVOL_PROPERTIES( "_LOOKUP_STREAM_FROM_CLUSTER_ENTRY.$", 0x20, true, 0x88066642c2473500 );               
        SDK_FIXED_SIZE( lookup_stream_from_cluster_entry_t, 0x20 );               
    };                                             
};
#include "magic/lookup_stream_from_cluster_entry_t.end.hpp"
SDK_VERIFY( struct win::lookup_stream_from_cluster_entry_t, 0x20 );
