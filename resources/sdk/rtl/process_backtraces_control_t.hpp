#pragma once
#include <sdkgen/support_library.hpp>
#include "stack_trace_database_create_t.hpp"

#include "magic/process_backtraces_control_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_BACKTRACES_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_backtraces_control_t                                
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                             
        _m00 uint32_t                                  control_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlCode
        _m01 uint32_t                                  control_size;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ControlSize
        _m02 sdk::array<uint8_t, 1>                    control_data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ControlData
        _m03 struct rtl::stack_trace_database_create_t database_create;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DatabaseCreate
                                                                       
        SDK_MAGIC_PROPERTIES( "_RTL_PROCESS_BACKTRACES_CONTROL.$", 0x20, true, 0x48a0089d33216a50 );                
        SDK_FIXED_SIZE( process_backtraces_control_t, 0x20 );                
    };                                                                 
};
#include "magic/process_backtraces_control_t.end.hpp"
SDK_VERIFY( struct rtl::process_backtraces_control_t, 0x20 );
