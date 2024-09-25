#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct file_object_t; }
namespace nt { struct irp_t;         }

#include "magic/ksevent_item_t.start.hpp"
namespace ndis
{
    struct kseventdata_t;
    struct ksidentifier_t;
    struct ksevent_entry_t;

    // [struct KSEVENT_ITEM]
    // => Windows 10 v1607
    //
    struct ksevent_item_t                        
    {                                            
        using add_handler_t =     sdk::function<int32_t(struct nt::irp_t*, struct ndis::kseventdata_t*, struct ndis::ksevent_entry_t*)>*;                 
        using remove_handler_t =  sdk::function<void(struct nt::file_object_t*, struct ndis::ksevent_entry_t*)>*;                 
        using support_handler_t = sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*;                 
                                                 
        // Windows 10 v1607                      
        //                                       
        _m00 uint32_t           event_id;          //{ +0x0000    } | .EventId
        _m01 uint32_t           data_input;        //{ +0x0004    } | .DataInput
        _m02 uint32_t           extra_entry_data;  //{ +0x0008    } | .ExtraEntryData
        _m03 add_handler_t      add_handler;       //{ +0x0010    } | .AddHandler
        _m04 remove_handler_t   remove_handler;    //{ +0x0018    } | .RemoveHandler
        _m05 support_handler_t  support_handler;   //{ +0x0020    } | .SupportHandler
                                                 
        SDK_MAGIC_PROPERTIES( "KSEVENT_ITEM.$", 0x0, false, 0x773d6579019a001b );                 
        SDK_FIXED_SIZE( ksevent_item_t, 0x28 );                 
    };                                           
};
#include "magic/ksevent_item_t.end.hpp"
SDK_VERIFY( struct ndis::ksevent_item_t, 0x28 );
