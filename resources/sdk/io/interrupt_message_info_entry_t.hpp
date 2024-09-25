#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kinterrupt_mode_t.hpp"
#include "../nt/kinterrupt_polarity_t.hpp"

namespace nt { struct kinterrupt_t; }

#include "magic/interrupt_message_info_entry_t.start.hpp"
namespace io
{
    // [struct _IO_INTERRUPT_MESSAGE_INFO_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct interrupt_message_info_entry_t                        
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 int64_t                        message_address;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MessageAddress
        _m01 uint64_t                       target_processor_set;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetProcessorSet
        _m02 struct nt::kinterrupt_t*       interrupt_object;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterruptObject
        _m03 uint32_t                       message_data;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MessageData
        _m04 uint32_t                       vector;                //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .Vector
        _m05 uint8_t                        irql;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Irql
        _m06 enum nt::kinterrupt_mode_t     mode;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Mode
        _m07 enum nt::kinterrupt_polarity_t polarity;              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Polarity
                                                                 
        SDK_NONVOL_PROPERTIES( "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.$", 0x30, true, 0xc41c1766a5139014 );                     
        SDK_FIXED_SIZE( interrupt_message_info_entry_t, 0x30 );                     
    };                                                           
};
#include "magic/interrupt_message_info_entry_t.end.hpp"
SDK_VERIFY( struct io::interrupt_message_info_entry_t, 0x30 );
