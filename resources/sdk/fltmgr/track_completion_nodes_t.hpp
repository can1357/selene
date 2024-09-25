#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/track_completion_nodes_t.start.hpp"
namespace fltmgr
{
    struct completion_node_tracking_list_t;

    // [struct _TRACK_COMPLETION_NODES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct track_completion_nodes_t                                             
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                      
        _m00 uint32_t                                        num_lists;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumLists
        _m01 uint32_t                                        draining_ref_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DrainingRefCount
        _m02 struct fltmgr::completion_node_tracking_list_t* tracking_lists;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TrackingLists
        _m03 void*                                           pointer_to_free;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PointerToFree
                                                                                
        SDK_MAGIC_PROPERTIES( "_TRACK_COMPLETION_NODES.$", 0x18, true, 0xba8fa8f04931f43 );                   
        SDK_FIXED_SIZE( track_completion_nodes_t, 0x18 );                       
    };                                                                          
};
#include "magic/track_completion_nodes_t.end.hpp"
SDK_VERIFY( struct fltmgr::track_completion_nodes_t, 0x18 );
