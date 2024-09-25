#pragma once
#include <sdkgen/support_library.hpp>
#include "kspin_descriptor_t.hpp"

namespace nt { struct irp_t; }

#include "magic/kspin_descriptor_ex_t.start.hpp"
namespace ndis
{
    struct ksp_pin_t;
    union ksdataformat_t;
    struct kspin_dispatch_t;
    struct ksautomation_table_t;
    struct ksallocator_framing_ex_t;

    // [struct _KSPIN_DESCRIPTOR_EX]
    // => Windows 10 v1607
    //
    struct kspin_descriptor_ex_t                                              
    {                                                                         
        using intersect_handler_t = sdk::function<int32_t(void*, struct nt::irp_t*, struct ndis::ksp_pin_t*, union ndis::ksdataformat_t*, union ndis::ksdataformat_t*, uint32_t, void*, uint32_t*)>*;                    
                                                                              
        // Windows 10 v1607                                                   
        //                                                                    
        _m00 const struct ndis::kspin_dispatch_t*         dispatch;             //{ +0x0000    } | .Dispatch
        _m01 const struct ndis::ksautomation_table_t*     automation_table;     //{ +0x0008    } | .AutomationTable
        _m02 struct ndis::kspin_descriptor_t              pin_descriptor;       //{ +0x0010    } | .PinDescriptor
        _m03 uint32_t                                     flags;                //{ +0x0068    } | .Flags
        _m04 uint32_t                                     instances_possible;   //{ +0x006c    } | .InstancesPossible
        _m05 uint32_t                                     instances_necessary;  //{ +0x0070    } | .InstancesNecessary
        _m06 const struct ndis::ksallocator_framing_ex_t* allocator_framing;    //{ +0x0078    } | .AllocatorFraming
        _m07 intersect_handler_t                          intersect_handler;    //{ +0x0080    } | .IntersectHandler
                                                                              
        SDK_MAGIC_PROPERTIES( "_KSPIN_DESCRIPTOR_EX.$", 0x0, false, 0xd1a11e07efee69d1 );                    
        SDK_FIXED_SIZE( kspin_descriptor_ex_t, 0x88 );                        
    };                                                                        
};
#include "magic/kspin_descriptor_ex_t.end.hpp"
SDK_VERIFY( struct ndis::kspin_descriptor_ex_t, 0x88 );
