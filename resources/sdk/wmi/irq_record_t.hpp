#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/irq_record_t.start.hpp"
namespace wmi
{
    // [struct _WMI_IRQ_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irq_record_t                                    
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint64_t               irq_affinity;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IRQAffinity
        _m01 uint16_t               irq_group;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IRQGroup
        _m02 uint32_t               irq_num;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IRQNum
        _m03 uint32_t               device_description_len;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceDescriptionLen
        _m04 sdk::array<wchar_t, 1> device_description;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DeviceDescription
                                                           
        SDK_MAGIC_PROPERTIES( "_WMI_IRQ_RECORD.$", 0x18, true, 0x219fe4fc4ad587f6 );                       
        SDK_FIXED_SIZE( irq_record_t, 0x18 );                       
    };                                                     
};
#include "magic/irq_record_t.end.hpp"
SDK_VERIFY( struct wmi::irq_record_t, 0x18 );
