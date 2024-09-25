#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsrtl_per_stream_context_t.start.hpp"
namespace nt
{
    // [struct _FSRTL_PER_STREAM_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsrtl_per_stream_context_t                  
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 nt::list_entry_t            links;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 void*                       owner_id;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .OwnerId
        _m02 void*                       instance_id;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InstanceId
        _m03 sdk::function<void(void*)>* free_callback;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeCallback
                                                       
        SDK_NONVOL_PROPERTIES( "_FSRTL_PER_STREAM_CONTEXT.$", 0x28, true, 0xcd3836b4fad4b11 );              
        SDK_FIXED_SIZE( fsrtl_per_stream_context_t, 0x28 );              
    };                                                 
};
#include "magic/fsrtl_per_stream_context_t.end.hpp"
SDK_VERIFY( struct nt::fsrtl_per_stream_context_t, 0x28 );
