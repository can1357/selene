#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_idle_times_t.start.hpp"
namespace win
{
    // [struct PROCESSOR_IDLE_TIMES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_idle_times_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t start_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartTime
        _m01 uint64_t end_time;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EndTime
                                 
        SDK_MAGIC_PROPERTIES( "PROCESSOR_IDLE_TIMES.$", 0x20, true, 0x5d36a4454bf43cc6 );           
        SDK_FIXED_SIZE( processor_idle_times_t, 0x20 );           
    };                           
};
#include "magic/processor_idle_times_t.end.hpp"
SDK_VERIFY( struct win::processor_idle_times_t, 0x20 );
