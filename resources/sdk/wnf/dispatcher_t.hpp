#pragma once
#include <sdkgen/support_library.hpp>
#include "node_header_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/dispatcher_t.start.hpp"
namespace wnf
{
    // [struct _WNF_DISPATCHER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dispatcher_t                             
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 struct wnf::node_header_t    header;     //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct nt::work_queue_item_t work_item;  //{ +0x0008    +0x0008    +0x0008    } | .WorkItem
        _m02 int32_t                      state;      //{ +0x0028    +0x0028    +0x0028    } | .State
                                                    
        SDK_MAGIC_PROPERTIES( "_WNF_DISPATCHER.$", 0x30, true, 0x5f9896eeb7302b78 );          
        SDK_FIXED_SIZE( dispatcher_t, 0x30 );          
    };                                              
};
#include "magic/dispatcher_t.end.hpp"
SDK_VERIFY( struct wnf::dispatcher_t, 0x30 );
