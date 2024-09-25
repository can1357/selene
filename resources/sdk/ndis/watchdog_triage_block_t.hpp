#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/watchdog_triage_block_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WATCHDOG_TRIAGE_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct watchdog_triage_block_t               
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t signature;                   //{ +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t timeout_milliseconds;        //{ +0x0004    +0x0004    +0x0004    } | .TimeoutMilliseconds
        _m02 uint64_t global_triage;               //{ +0x0008    +0x0008    +0x0008    } | .GlobalTriage
        _m03 uint64_t target_object;               //{ +0x0010    +0x0010    +0x0010    } | .TargetObject
        _m04 uint64_t start_time;                  //{ +0x0018    +0x0018    +0x0018    } | .StartTime
        _m05 uint64_t primary_thread;              //{ +0x0020    +0x0020    +0x0020    } | .PrimaryThread
        _m06 uint64_t extra_argument;              //{ +0x0028    +0x0028    +0x0028    } | .ExtraArgument
        _m07 uint8_t  pending9f_detected;          //{ +0x0030    +0x0030    +0x0030    } | .Pending9FDetected
        _m08 uint64_t target_instruction_pointer;  //{ +0x0038    +0x0038    +0x0038    } | .TargetInstructionPointer
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_WATCHDOG_TRIAGE_BLOCK.$", 0x40, true, 0xd800924f5b9f4c3f );                           
        SDK_FIXED_SIZE( watchdog_triage_block_t, 0x40 );                           
    };                                           
};
#include "magic/watchdog_triage_block_t.end.hpp"
SDK_VERIFY( struct ndis::watchdog_triage_block_t, 0x40 );
