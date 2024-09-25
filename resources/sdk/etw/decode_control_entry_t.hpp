#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/decode_control_entry_t.start.hpp"
namespace etw
{
    struct decode_control_entry_t;

    // [struct _ETW_DECODE_CONTROL_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct decode_control_entry_t                                   
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 struct etw::decode_control_entry_t* next;                //{ +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::guid_t                   decode;              //{ +0x0008    +0x0008    +0x0008    } | .Decode
        _m02 struct nt::guid_t                   control;             //{ +0x0018    +0x0018    +0x0018    } | .Control
        _m03 uint8_t                             consumers_notified;  //{ +0x0028    +0x0028    +0x0028    } | .ConsumersNotified
                                                                    
        SDK_MAGIC_PROPERTIES( "_ETW_DECODE_CONTROL_ENTRY.$", 0x30, true, 0x16cdac014deb0db1 );                   
        SDK_FIXED_SIZE( decode_control_entry_t, 0x30 );                   
    };                                                              
};
#include "magic/decode_control_entry_t.end.hpp"
SDK_VERIFY( struct etw::decode_control_entry_t, 0x30 );
