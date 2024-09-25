#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_status_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_STATUS_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_status_data_t     
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::unicode_view device_instance;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 uint32_t         operation;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Operation
        _m02 uint32_t         device_status;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DeviceStatus
        _m03 uint32_t         device_problem;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceProblem
        _m04 uint32_t         flags;            //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Flags
        _m05 int32_t          problem_status;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProblemStatus
                                              
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_STATUS_DATA.$", 0x28, true, 0x79aed1d004d0a17 );                
        SDK_FIXED_SIZE( plugplay_control_status_data_t, 0x28 );                
    };                                        
};
#include "magic/plugplay_control_status_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_status_data_t, 0x28 );
