#pragma once
#include <sdkgen/support_library.hpp>
#include "../../dbg/log_reason_t.hpp"

#include "magic/raid_log_entry_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_LOG_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_log_entry_t                    
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 enum dbg::log_reason_t reason;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Reason
        _m01 uint64_t               parameter1;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Parameter1
        _m02 uint64_t               parameter2;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parameter2
        _m03 uint64_t               parameter3;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameter3
        _m04 uint64_t               parameter4;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Parameter4
        _m05 int64_t                timestamp;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Timestamp
                                               
        SDK_MAGIC_PROPERTIES( "_RAID_LOG_ENTRY.$", 0x30, true, 0xdaa255fddf7376e1 );           
        SDK_FIXED_SIZE( raid_log_entry_t, 0x30 );           
    };                                         
};
#include "magic/raid_log_entry_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_log_entry_t, 0x30 );
