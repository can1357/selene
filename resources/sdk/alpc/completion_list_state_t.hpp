#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/completion_list_state_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_COMPLETION_LIST_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct completion_list_state_t        
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint24_t head;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Head
        _m01 uint24_t tail;                 //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Tail
        _m02 uint16_t active_thread_count;  //{ +0x0000@48 +0x0000@48 +0x0000@48 +0x0000@48 +0x0000@48 } | .ActiveThreadCount
        _m03 uint64_t value;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                          
        SDK_NONVOL_PROPERTIES( "_ALPC_COMPLETION_LIST_STATE.$", 0x8, true, 0x1fd7cbae50d1ad56 );                    
        SDK_FIXED_SIZE( completion_list_state_t, 0x8 );                    
    };                                    
};
#include "magic/completion_list_state_t.end.hpp"
SDK_VERIFY( struct alpc::completion_list_state_t, 0x8 );
