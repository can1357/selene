#pragma once
#include <sdkgen/support_library.hpp>
#include "event_commit_decommit_t.hpp"
#include "../win/system_trace_header_t.hpp"

#include "magic/commit_decommit_t.start.hpp"
namespace heap
{
    // [struct _HEAP_COMMIT_DECOMMIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct commit_decommit_t                             
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                               
        _m00 struct win::system_trace_header_t    header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct heap::event_commit_decommit_t event;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Event
                                                         
        SDK_MAGIC_PROPERTIES( "_HEAP_COMMIT_DECOMMIT.$", 0x40, true, 0x253564329c2d7db3 );       
        SDK_FIXED_SIZE( commit_decommit_t, 0x40 );       
    };                                                   
};
#include "magic/commit_decommit_t.end.hpp"
SDK_VERIFY( struct heap::commit_decommit_t, 0x40 );
