#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bind_opts_t.start.hpp"
namespace tag
{
    // [struct tagBIND_OPTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_opts_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t cb_struct;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStruct
        _m01 uint32_t grf_flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .grfFlags
        _m02 uint32_t grf_mode;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .grfMode
        _m03 uint32_t dw_tick_count_deadline;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwTickCountDeadline
                                             
        SDK_MAGIC_PROPERTIES( "tagBIND_OPTS.$", 0x10, true, 0x711192e71f2c93d2 );                       
        SDK_FIXED_SIZE( bind_opts_t, 0x10 );                       
    };                                       
};
#include "magic/bind_opts_t.end.hpp"
SDK_VERIFY( struct tag::bind_opts_t, 0x10 );
