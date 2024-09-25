#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

#include "magic/lock_tracker_t.start.hpp"
namespace nt
{
    struct mdl_t;
    struct eprocess_t;

    // [struct _LOCK_TRACKER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lock_tracker_t                                  
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                 
        _m00 struct rtl::balanced_node_t lock_tracker_node;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LockTrackerNode
        _m01 struct nt::mdl_t*           mdl;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Mdl
        _m02 void*                       start_va;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StartVa
        _m03 uint64_t                    count;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Count
        _m04 uint32_t                    offset;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Offset
        _m05 uint32_t                    length;             //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Length
        _m06 uint32_t                    who;                //{ +0x0080    +0x0038    +0x0038    +0x0038    } | .Who
        _m07 uint64_t                    page;               //{ +0x0038    +0x0040    +0x0040    +0x0040    } | .Page
        _m08 sdk::array<void*, 8>        stack_trace;        //{ +0x0040    +0x0048    +0x0048    +0x0048    } | .StackTrace
        _m09 struct nt::eprocess_t*      process;            //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .Process
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                 
        _m10 uint32_t                    hash;               //{ +0x003c    +0x003c    +0x003c    } | .Hash
                                                           
        SDK_MAGIC_PROPERTIES( "_LOCK_TRACKER.$", 0x90, true, 0x2e9461097b44ba88 );                  
        SDK_FIXED_SIZE( lock_tracker_t, 0x90 );                  
    };                                                     
};
#include "magic/lock_tracker_t.end.hpp"
SDK_VERIFY( struct nt::lock_tracker_t, 0x90 );
