#pragma once
#include <sdkgen/support_library.hpp>
#include "ksstate_t.hpp"

namespace nt { struct irp_t; }

#include "magic/kspin_dispatch_t.start.hpp"
namespace ndis
{
    struct kspin_t;
    union ksdataformat_t;
    struct ksmultiple_item_t;
    struct ksattribute_list_t;
    struct ksclock_dispatch_t;
    struct ksallocator_dispatch_t;

    // [struct _KSPIN_DISPATCH]
    // => Windows 10 v1607
    //
    struct kspin_dispatch_t                                                  
    {                                                                        
        using create_t =           sdk::function<int32_t(struct ndis::kspin_t*, struct nt::irp_t*)>*;                 
        using close_t =            sdk::function<int32_t(struct ndis::kspin_t*, struct nt::irp_t*)>*;                 
        using set_data_format_t =  sdk::function<int32_t(struct ndis::kspin_t*, union ndis::ksdataformat_t*, struct ndis::ksmultiple_item_t*, const union ndis::ksdataformat_t*, const struct ndis::ksattribute_list_t*)>*;                 
        using set_device_state_t = sdk::function<int32_t(struct ndis::kspin_t*, enum ndis::ksstate_t, enum ndis::ksstate_t)>*;                 
                                                                             
        // Windows 10 v1607                                                  
        //                                                                   
        _m00 create_t                                       create;            //{ +0x0000    } | .Create
        _m01 close_t                                        close;             //{ +0x0008    } | .Close
        _m02 sdk::function<int32_t(struct ndis::kspin_t*)>* process;           //{ +0x0010    } | .Process
        _m03 sdk::function<void(struct ndis::kspin_t*)>*    reset;             //{ +0x0018    } | .Reset
        _m04 set_data_format_t                              set_data_format;   //{ +0x0020    } | .SetDataFormat
        _m05 set_device_state_t                             set_device_state;  //{ +0x0028    } | .SetDeviceState
        _m06 sdk::function<int32_t(struct ndis::kspin_t*)>* connect;           //{ +0x0030    } | .Connect
        _m07 sdk::function<void(struct ndis::kspin_t*)>*    disconnect;        //{ +0x0038    } | .Disconnect
        _m08 const struct ndis::ksclock_dispatch_t*         clock;             //{ +0x0040    } | .Clock
        _m09 const struct ndis::ksallocator_dispatch_t*     allocator;         //{ +0x0048    } | .Allocator
                                                                             
        SDK_MAGIC_PROPERTIES( "_KSPIN_DISPATCH.$", 0x0, false, 0x314b4092bfc1eff0 );                 
        SDK_FIXED_SIZE( kspin_dispatch_t, 0x50 );                            
    };                                                                       
};
#include "magic/kspin_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::kspin_dispatch_t, 0x50 );
