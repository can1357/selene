#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_commit_decommit_t.start.hpp"
namespace heap
{
    // [struct _HEAP_EVENT_COMMIT_DECOMMIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_commit_decommit_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    heap_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeapHandle
        _m01 void*    block;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Block
        _m02 uint64_t size;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m03 uint32_t caller;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Caller
                                  
        SDK_MAGIC_PROPERTIES( "_HEAP_EVENT_COMMIT_DECOMMIT.$", 0x20, true, 0x8d7e0dc7a682d62f );            
        SDK_FIXED_SIZE( event_commit_decommit_t, 0x20 );            
    };                            
};
#include "magic/event_commit_decommit_t.end.hpp"
SDK_VERIFY( struct heap::event_commit_decommit_t, 0x20 );
