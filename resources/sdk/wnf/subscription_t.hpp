#pragma once
#include <sdkgen/support_library.hpp>
#include "node_header_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "state_name_struct_t.hpp"
#include "subscription_state_t.hpp"

namespace nt { struct eprocess_t; }

#include "magic/subscription_t.start.hpp"
namespace wnf
{
    struct name_instance_t;

    // [struct _WNF_SUBSCRIPTION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct subscription_t                                                    
    {                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                   
        _m00 struct wnf::node_header_t       header;                           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ex::rundown_ref_t        run_ref;                          //{ +0x0008    +0x0008    +0x0008    } | .RunRef
        _m02 uint64_t                        subscription_id;                  //{ +0x0010    +0x0010    +0x0010    } | .SubscriptionId
        _m03 nt::list_entry_t                process_subscription_list_entry;  //{ +0x0018    +0x0018    +0x0018    } | .ProcessSubscriptionListEntry
        _m04 struct nt::eprocess_t*          process;                          //{ +0x0028    +0x0028    +0x0028    } | .Process
        _m05 struct wnf::name_instance_t*    name_instance;                    //{ +0x0030    +0x0030    +0x0030    } | .NameInstance
        _m06 struct wnf::state_name_struct_t state_name;                       //{ +0x0038    +0x0038    +0x0038    } | .StateName
        _m07 nt::list_entry_t                state_subscription_list_entry;    //{ +0x0040    +0x0040    +0x0040    } | .StateSubscriptionListEntry
        _m08 uint64_t                        callback_routine;                 //{ +0x0050    +0x0050    +0x0050    } | .CallbackRoutine
        _m09 void*                           callback_context;                 //{ +0x0058    +0x0058    +0x0058    } | .CallbackContext
        _m10 uint32_t                        current_change_stamp;             //{ +0x0060    +0x0060    +0x0060    } | .CurrentChangeStamp
        _m11 uint32_t                        subscribed_event_set;             //{ +0x0064    +0x0064    +0x0064    } | .SubscribedEventSet
        _m12 nt::list_entry_t                pending_subscription_list_entry;  //{ +0x0068    +0x0068    +0x0068    } | .PendingSubscriptionListEntry
        _m13 enum wnf::subscription_state_t  subscription_state;               //{ +0x0078    +0x0078    +0x0078    } | .SubscriptionState
        _m14 uint32_t                        signaled_event_set;               //{ +0x007c    +0x007c    +0x007c    } | .SignaledEventSet
        _m15 uint32_t                        in_delivery_event_set;            //{ +0x0080    +0x0080    +0x0080    } | .InDeliveryEventSet
                                                                             
        SDK_MAGIC_PROPERTIES( "_WNF_SUBSCRIPTION.$", 0x88, true, 0xd2224b2920b1f20d );                                
        SDK_FIXED_SIZE( subscription_t, 0x88 );                                
    };                                                                       
};
#include "magic/subscription_t.end.hpp"
SDK_VERIFY( struct wnf::subscription_t, 0x88 );
