#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/kinterrupt_mode_t.hpp"

#include "magic/message_interrupt_information_t.start.hpp"
namespace stor::port
{
    // [struct _MESSAGE_INTERRUPT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_interrupt_information_t               
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 uint32_t                   message_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MessageId
        _m01 uint32_t                   message_data;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MessageData
        _m02 int64_t                    message_address;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageAddress
        _m03 uint32_t                   interrupt_vector;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterruptVector
        _m04 uint32_t                   interrupt_level;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .InterruptLevel
        _m05 enum nt::kinterrupt_mode_t interrupt_mode;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterruptMode
                                                         
        SDK_MAGIC_PROPERTIES( "_MESSAGE_INTERRUPT_INFORMATION.$", 0x20, true, 0xad001ede84351cc5 );                 
        SDK_FIXED_SIZE( message_interrupt_information_t, 0x20 );                 
    };                                                   
};
#include "magic/message_interrupt_information_t.end.hpp"
SDK_VERIFY( struct stor::port::message_interrupt_information_t, 0x20 );
