#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "context_list_ctrl_t.hpp"
#include "section_conflict_queue_t.hpp"

namespace ex { struct rundown_ref_cache_aware_t; }

#include "magic/section_list_ctrl_t.start.hpp"
namespace fltmgr
{
    struct stream_list_ctrl_t;

    // [struct _SECTION_LIST_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_list_ctrl_t                                      
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 struct fltmgr::stream_list_ctrl_t*      stream_list;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamList
        _m01 struct ex::rundown_ref_cache_aware_t*   rundown_ref;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RundownRef
        _m02 struct nt::kevent_t                     event;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Event
        _m03 struct fltmgr::context_list_ctrl_t      ctx_list;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CtxList
        _m04 struct fltmgr::section_conflict_queue_t conflict_queue;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ConflictQueue
                                                                    
        SDK_MAGIC_PROPERTIES( "_SECTION_LIST_CTRL.$", 0xd0, true, 0x295482f843aa5c8d );               
        SDK_FIXED_SIZE( section_list_ctrl_t, 0xd0 );                
    };                                                              
};
#include "magic/section_list_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::section_list_ctrl_t, 0xd0 );
