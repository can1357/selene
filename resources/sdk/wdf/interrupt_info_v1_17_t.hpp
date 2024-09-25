#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_polarity_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"

#include "magic/interrupt_info_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDF_INTERRUPT_INFO_V1_17]
    // => Windows 10 v1607
    //
    struct interrupt_info_v1_17_t                                
    {                                                            
        // Windows 10 v1607                                      
        //                                                       
        _m00 uint32_t                       size;                  //{ +0x0000    } | .Size
        _m01 uint64_t                       target_processor_set;  //{ +0x0010    } | .TargetProcessorSet
        _m02 uint32_t                       message_number;        //{ +0x001c    } | .MessageNumber
        _m03 uint32_t                       vector;                //{ +0x0020    } | .Vector
        _m04 uint8_t                        irql;                  //{ +0x0024    } | .Irql
        _m05 enum nt::kinterrupt_mode_t     mode;                  //{ +0x0028    } | .Mode
        _m06 enum wdf::interrupt_polarity_t polarity;              //{ +0x002c    } | .Polarity
        _m07 uint8_t                        message_signaled;      //{ +0x0030    } | .MessageSignaled
        _m08 uint8_t                        share_disposition;     //{ +0x0031    } | .ShareDisposition
        _m09 uint16_t                       group;                 //{ +0x0038    } | .Group
                                                                 
        SDK_MAGIC_PROPERTIES( "_WDF_INTERRUPT_INFO_V1_17.$", 0x0, false, 0xca950a6eeba85927 );                     
        SDK_FIXED_SIZE( interrupt_info_v1_17_t, 0x40 );                     
    };                                                           
};
#include "magic/interrupt_info_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::interrupt_info_v1_17_t, 0x40 );
