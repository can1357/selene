#pragma once
#include <sdkgen/support_library.hpp>
#include "process_working_set_operation_t.hpp"

#include "magic/process_working_set_control_t.start.hpp"
namespace win
{
    // [struct _PROCESS_WORKING_SET_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_working_set_control_t                         
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                       
        _m00 uint32_t                                  version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 enum win::process_working_set_operation_t operation;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Operation
        _m02 uint32_t                                  flags;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                                                 
        SDK_MAGIC_PROPERTIES( "_PROCESS_WORKING_SET_CONTROL.$", 0xc, true, 0x24081cafdb9d58ff );          
        SDK_FIXED_SIZE( process_working_set_control_t, 0xc );          
    };                                                           
};
#include "magic/process_working_set_control_t.end.hpp"
SDK_VERIFY( struct win::process_working_set_control_t, 0xc );
