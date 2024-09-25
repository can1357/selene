#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/wnode_header_t.hpp"

#include "magic/wnode_too_small_t.start.hpp"
namespace tag
{
    // [struct tagWNODE_TOO_SMALL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnode_too_small_t                                
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                  
        _m00 struct stor::port::wnode_header_t wnode_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WnodeHeader
        _m01 uint32_t                          size_needed;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SizeNeeded
                                                            
        SDK_MAGIC_PROPERTIES( "tagWNODE_TOO_SMALL.$", 0x38, true, 0x96baf8d6b6a89dbf );             
        SDK_FIXED_SIZE( wnode_too_small_t, 0x38 );             
    };                                                      
};
#include "magic/wnode_too_small_t.end.hpp"
SDK_VERIFY( struct tag::wnode_too_small_t, 0x38 );
