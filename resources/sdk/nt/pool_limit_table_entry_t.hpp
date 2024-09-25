#pragma once
#include <sdkgen/support_library.hpp>
#include "slist_entry_t.hpp"
#include "pool_limit_info_t.hpp"
#include "../rtl/hash_entry_t.hpp"
#include "../wnf/state_name_t.hpp"
#include "single_list_entry_t.hpp"

#include "magic/pool_limit_table_entry_t.start.hpp"
namespace nt
{
    // [struct _POOL_LIMIT_TABLE_ENTRY]
    // => Windows 11
    //
    struct pool_limit_table_entry_t                                          
    {                                                                        
        // Windows 11                                                        
        //                                                                   
        _m00 struct rtl::hash_entry_t                    hash_entry;           //{ +0x0000    } | .HashEntry
        _m01 struct nt::single_list_entry_t              s_list_entry;         //{ +0x0008    } | .SListEntry
        _m02 sdk::array<struct nt::pool_limit_info_t, 2> limit_info;           //{ +0x0010    } | .LimitInfo
        _m03 struct wnf::state_name_t                    notification_object;  //{ +0x0040    } | .NotificationObject
        _m04 struct nt::slist_entry_t                    notification_entry;   //{ +0x0050    } | .NotificationEntry
        _m05 uint32_t                                    scheduled;            //{ +0x0060    } | .Scheduled
                                                                             
        SDK_MAGIC_PROPERTIES( "_POOL_LIMIT_TABLE_ENTRY.$", 0x0, false, 0xb99fe7be39ca89ed );                    
        SDK_FIXED_SIZE( pool_limit_table_entry_t, 0x70 );                    
    };                                                                       
};
#include "magic/pool_limit_table_entry_t.end.hpp"
SDK_VERIFY( struct nt::pool_limit_table_entry_t, 0x70 );
