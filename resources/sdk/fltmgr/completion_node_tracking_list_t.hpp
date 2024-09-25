#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/completion_node_tracking_list_t.start.hpp"
namespace fltmgr
{
    struct track_completion_nodes_t;

    // [struct _COMPLETION_NODE_TRACKING_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct completion_node_tracking_list_t                         
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                         
        _m00 uint64_t                                 lock;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 nt::list_entry_t                         active_list;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActiveList
        _m02 nt::list_entry_t                         waiting_list;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WaitingList
        _m03 struct fltmgr::track_completion_nodes_t* track_ctrl;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TrackCtrl
                                                                   
        SDK_MAGIC_PROPERTIES( "_COMPLETION_NODE_TRACKING_LIST.$", 0x30, true, 0x1e264c3a60a19ea9 );             
        SDK_FIXED_SIZE( completion_node_tracking_list_t, 0x30 );             
    };                                                             
};
#include "magic/completion_node_tracking_list_t.end.hpp"
SDK_VERIFY( struct fltmgr::completion_node_tracking_list_t, 0x30 );
