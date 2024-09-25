#pragma once
#include <sdkgen/support_library.hpp>
#include "lock_t.hpp"
#include "node_header_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "state_name_struct_t.hpp"
#include "../rtl/balanced_node_t.hpp"
#include "state_name_registration_t.hpp"

namespace nt { struct eprocess_t; }

#include "magic/name_instance_t.start.hpp"
namespace wnf
{
    struct state_data_t;
    struct scope_instance_t;
    struct permanent_data_store_t;

    // [struct _WNF_NAME_INSTANCE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_instance_t                                                      
    {                                                                           
        using permanent_data_store_t = sdk::variant<void*, struct wnf::permanent_data_store_t*>;                             
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                      
        _m00 struct wnf::node_header_t             header;                        //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ex::rundown_ref_t              run_ref;                       //{ +0x0008    +0x0008    +0x0008    } | .RunRef
        _m02 struct rtl::balanced_node_t           tree_links;                    //{ +0x0010    +0x0010    +0x0010    } | .TreeLinks
        _m03 struct wnf::state_name_struct_t       state_name;                    //{ +0x0028    +0x0028    +0x0028    } | .StateName
        _m04 struct wnf::scope_instance_t*         scope_instance;                //{ +0x0030    +0x0030    +0x0030    } | .ScopeInstance
        _m05 struct wnf::state_name_registration_t state_name_info;               //{ +0x0038    +0x0038    +0x0038    } | .StateNameInfo
        _m06 struct wnf::lock_t                    state_data_lock;               //{ +0x0050    +0x0050    +0x0050    } | .StateDataLock
        _m07 struct wnf::state_data_t*             state_data;                    //{ +0x0058    +0x0058    +0x0058    } | .StateData
        _m08 uint32_t                              current_change_stamp;          //{ +0x0060    +0x0060    +0x0060    } | .CurrentChangeStamp
        _m09 permanent_data_store_t                permanent_data_store;          //{ +0x0068    +0x0068    +0x0068    } | .PermanentDataStore
        _m10 struct wnf::lock_t                    state_subscription_list_lock;  //{ +0x0070    +0x0070    +0x0070    } | .StateSubscriptionListLock
        _m11 nt::list_entry_t                      state_subscription_list_head;  //{ +0x0078    +0x0078    +0x0078    } | .StateSubscriptionListHead
        _m12 nt::list_entry_t                      temporary_name_list_entry;     //{ +0x0088    +0x0088    +0x0088    } | .TemporaryNameListEntry
        _m13 struct nt::eprocess_t*                creator_process;               //{ +0x0098    +0x0098    +0x0098    } | .CreatorProcess
        _m14 int32_t                               data_subscribers_count;        //{ +0x00a0    +0x00a0    +0x00a0    } | .DataSubscribersCount
        _m15 int32_t                               current_delivery_count;        //{ +0x00a4    +0x00a4    +0x00a4    } | .CurrentDeliveryCount
                                                                                
        SDK_MAGIC_PROPERTIES( "_WNF_NAME_INSTANCE.$", 0xa8, true, 0xadb9b69ef8cfbd21 );                             
        SDK_FIXED_SIZE( name_instance_t, 0xa8 );                                
    };                                                                          
};
#include "magic/name_instance_t.end.hpp"
SDK_VERIFY( struct wnf::name_instance_t, 0xa8 );
