#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "kevent_t.hpp"
#include "kqueue_t.hpp"
#include "kmutant_t.hpp"
#include "ktmobject_namespace_t.hpp"
#include "kresourcemanager_state_t.hpp"
#include "ktmobject_namespace_link_t.hpp"
#include "kresourcemanager_completion_binding_t.hpp"

#include "magic/kresourcemanager_t.start.hpp"
namespace nt
{
    struct ktm_t;
    struct kenlistment_t;

    // [struct _KRESOURCEMANAGER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kresourcemanager_t                                                            
    {                                                                                    
        using notification_routine_t = sdk::function<int32_t(struct nt::kenlistment_t*, void*, void*, uint32_t, int64_t*, uint32_t, void*)>*;                           
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                               
        _m00 struct nt::kevent_t                              notification_available;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationAvailable
        _m01 uint32_t                                         cookie;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cookie
        _m02 enum nt::kresourcemanager_state_t                state;                       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .State
        _m03 uint32_t                                         flags;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m04 struct nt::kmutant_t                             mutex;                       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Mutex
        _m05 struct nt::ktmobject_namespace_link_t            namespace_link;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NamespaceLink
        _m06 struct nt::guid_t                                rm_id;                       //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .RmId
        _m07 struct nt::kqueue_t                              notification_queue;          //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .NotificationQueue
        _m08 struct nt::kmutant_t                             notification_mutex;          //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .NotificationMutex
        _m09 nt::list_entry_t                                 enlistment_head;             //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .EnlistmentHead
        _m10 uint32_t                                         enlistment_count;            //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .EnlistmentCount
        _m11 notification_routine_t                           notification_routine;        //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .NotificationRoutine
        _m12 void*                                            key;                         //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .Key
        _m13 nt::list_entry_t                                 protocol_list_head;          //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .ProtocolListHead
        _m14 nt::list_entry_t                                 pending_prop_req_list_head;  //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .PendingPropReqListHead
        _m15 nt::list_entry_t                                 crm_list_entry;              //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .CRMListEntry
        _m16 struct nt::ktm_t*                                tm;                          //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .Tm
        _m17 nt::unicode_view                                 description;                 //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .Description
        _m18 struct nt::ktmobject_namespace_t                 enlistments;                 //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .Enlistments
        _m19 struct nt::kresourcemanager_completion_binding_t completion_binding;          //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .CompletionBinding
                                                                                         
        SDK_MAGIC_PROPERTIES( "_KRESOURCEMANAGER.$", 0x250, true, 0x7f205f68b8424a8 );                           
        SDK_DYNAMIC_SIZE( kresourcemanager_t );                                          
    };                                                                                   
};
#include "magic/kresourcemanager_t.end.hpp"
