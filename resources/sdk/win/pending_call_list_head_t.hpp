#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pending_call_list_head_t.start.hpp"
namespace win
{
    // [struct PendingCallListHead]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pending_call_list_head_t
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //             
        _m00 void* pv1;              //{ +0x0000    +0x0000    +0x0000    } | .pv1
        _m01 void* pv2;              //{ +0x0008    +0x0008    +0x0008    } | .pv2
                                   
        SDK_MAGIC_PROPERTIES( "PendingCallListHead.$", 0x10, true, 0x2ed2411d84252ca );    
        SDK_FIXED_SIZE( pending_call_list_head_t, 0x10 );    
    };                             
};
#include "magic/pending_call_list_head_t.end.hpp"
SDK_VERIFY( struct win::pending_call_list_head_t, 0x10 );
