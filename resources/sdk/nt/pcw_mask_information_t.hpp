#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcw_mask_information_t.start.hpp"
namespace nt
{
    struct kevent_t;
    struct pcw_buffer_t;

    // [struct _PCW_MASK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcw_mask_information_t                      
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                             
        _m00 uint64_t                 counter_mask;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CounterMask
        _m01 const nt::unicode_view*  instance_mask;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InstanceMask
        _m02 uint32_t                 instance_id;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InstanceId
        _m03 uint8_t                  collect_multiple;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .CollectMultiple
        _m04 struct nt::pcw_buffer_t* buffer;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Buffer
        _m05 struct nt::kevent_t*     cancel_event;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CancelEvent
                                                       
        SDK_NONVOL_PROPERTIES( "_PCW_MASK_INFORMATION.$", 0x28, true, 0x8448c354c7d8e3ee );                 
        SDK_FIXED_SIZE( pcw_mask_information_t, 0x28 );                 
    };                                                 
};
#include "magic/pcw_mask_information_t.end.hpp"
SDK_VERIFY( struct nt::pcw_mask_information_t, 0x28 );
