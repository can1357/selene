#pragma once
#include <sdkgen/support_library.hpp>
#include "lock_t.hpp"
#include "data_scope_t.hpp"
#include "node_header_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../ex/rundown_ref_t.hpp"

#include "magic/scope_instance_t.start.hpp"
namespace wnf
{
    struct permanent_data_store_t;

    // [struct _WNF_SCOPE_INSTANCE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scope_instance_t                                                 
    {                                                                       
        using permanent_data_store_t =          sdk::variant<void*, struct wnf::permanent_data_store_t*>;                              
        using volatile_permanent_data_store_t = sdk::variant<void*, struct wnf::permanent_data_store_t*>;                              
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m00 struct wnf::node_header_t        header;                         //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ex::rundown_ref_t         run_ref;                        //{ +0x0008    +0x0008    +0x0008    } | .RunRef
        _m02 enum wnf::data_scope_t           data_scope;                     //{ +0x0010    +0x0010    +0x0010    } | .DataScope
        _m03 uint32_t                         instance_id_size;               //{ +0x0014    +0x0014    +0x0014    } | .InstanceIdSize
        _m04 void*                            instance_id_data;               //{ +0x0018    +0x0018    +0x0018    } | .InstanceIdData
        _m05 nt::list_entry_t                 resolver_list_entry;            //{ +0x0020    +0x0020    +0x0020    } | .ResolverListEntry
        _m06 struct wnf::lock_t               name_set_lock;                  //{ +0x0030    +0x0030    +0x0030    } | .NameSetLock
        _m07 struct rtl::avl_tree_t           name_set;                       //{ +0x0038    +0x0038    +0x0038    } | .NameSet
        _m08 permanent_data_store_t           permanent_data_store;           //{ +0x0040    +0x0040    +0x0040    } | .PermanentDataStore
        _m09 volatile_permanent_data_store_t  volatile_permanent_data_store;  //{ +0x0048    +0x0048    +0x0048    } | .VolatilePermanentDataStore
                                                                            
        SDK_MAGIC_PROPERTIES( "_WNF_SCOPE_INSTANCE.$", 0x50, true, 0xb3a78d69e384582 );                              
        SDK_FIXED_SIZE( scope_instance_t, 0x50 );                              
    };                                                                      
};
#include "magic/scope_instance_t.end.hpp"
SDK_VERIFY( struct wnf::scope_instance_t, 0x50 );
