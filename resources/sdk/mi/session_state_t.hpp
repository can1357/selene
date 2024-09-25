#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/mmsession_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "huge_system_view_head_t.hpp"

namespace nt { struct eprocess_t;       }
namespace nt { struct mmwsl_full_t;     }
namespace nt { struct mmwsl_instance_t; }
namespace nt { struct mmwsle_hash_t;    }

#include "magic/session_state_t.start.hpp"
namespace mi
{
    // [struct _MI_SESSION_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_state_t                                                  
    {                                                                       
        using working_set_list_t =    sdk::variant<struct nt::mmwsl_full_t*, struct nt::mmwsl_instance_t*>;                            
        using system_view_buckets_t = sdk::array<struct mi::huge_system_view_head_t, 256>;                            
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                  
        _m00 void*                              image_va_start;               //{ +0x0048    +0x0040    +0x0028    +0x0040    } | .ImageVaStart
        _m01 struct ex::push_lock_t             id_lock;                      //{ +0x0058    +0x1050    +0x0000    +0x1050    } | .IdLock
        _m02 struct nt::eprocess_t*             leader_process;               //{ +0x0068    +0x1058    +0x0008    +0x1058    } | .LeaderProcess
        _m03 struct ex::push_lock_t             initialize_lock;              //{ +0x0070    +0x1060    +0x0010    +0x1060    } | .InitializeLock
        _m04 void*                              session_base;                 //{ +0x0090    +0x1070    +0x0018    +0x1070    } | .SessionBase
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                            
        //                                                                  
        _m05 struct nt::mmsession_t             system_session;               //{ +0x0000    +0x0000    +0x0000    } | .SystemSession
        _m06 uint8_t                            code_page_edited;             //{ +0x0020    +0x0020    +0x0020    } | .CodePageEdited
        _m07 sdk::variant<uint32_t*, uint64_t*> dynamic_va_bit_buffer;        //{ +0x0030    +0x0028    +0x0028    } | .DynamicVaBitBuffer
        _m08 uint64_t                           dynamic_va_bit_buffer_pages;  //{ +0x0038    +0x0030    +0x0030    } | .DynamicVaBitBufferPages
        _m09 void*                              dynamic_va_start;             //{ +0x0040    +0x0038    +0x0038    } | .DynamicVaStart
        _m10 uint32_t*                          dynamic_ptes_bit_buffer;      //{ +0x0050    +0x1048    +0x1048    } | .DynamicPtesBitBuffer
        _m11 working_set_list_t                 working_set_list;             //{ +0x0078    +0x1068    +0x1068    } | .WorkingSetList
        _m12 void*                              session_core;                 //{ +0x0098    +0x1078    +0x1078    } | .SessionCore
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                  
        _m13 struct rtl::avl_tree_t             session_id_nodes;             //{ +0x1080    +0x0020    +0x1080    } | .SessionIdNodes
                                                                            
        // Windows 10 v2004, Windows 10 v20H2                               
        //                                                                  
        _m14 system_view_buckets_t              system_view_buckets;          //{ +0x0048    +0x0048    } | .SystemViewBuckets
        _m15 struct nt::kevent_t                delete_in_progress_event;     //{ +0x1088    +0x1088    } | .DeleteInProgressEvent
        _m16 uint32_t                           delete_in_progress_count;     //{ +0x10a0    +0x10a0    } | .DeleteInProgressCount
                                                                            
        // Windows 10 v1607                                                 
        //                                                                  
        _m17 uint32_t*                          dynamic_pool_bit_buffer;      //{ +0x0028    } | .DynamicPoolBitBuffer
        _m18 uint32_t                           detach_time_stamp;            //{ +0x0060    } | .DetachTimeStamp
        _m19 struct nt::mmwsle_hash_t*          ws_hash_start;                //{ +0x0080    } | .WsHashStart
        _m20 struct nt::mmwsle_hash_t*          ws_hash_end;                  //{ +0x0088    } | .WsHashEnd
                                                                            
        SDK_MAGIC_PROPERTIES( "_MI_SESSION_STATE.$", 0x10a8, true, 0x6b42f39819bdf472 );                            
        SDK_DYNAMIC_SIZE( session_state_t );                                
    };                                                                      
};
#include "magic/session_state_t.end.hpp"
