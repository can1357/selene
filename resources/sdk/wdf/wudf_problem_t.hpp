#pragma once
#include <sdkgen/support_library.hpp>
#include "wudfmessage_t.hpp"
#include "wudf_problem_t.hpp"
#include "component_type_t.hpp"
#include "host_exit_code_t.hpp"
#include "wudf_operation_type_t.hpp"
#include "device_start_state_type_t.hpp"

#include "magic/wudf_problem_t.start.hpp"
namespace wdf
{
    // [struct WUDF_PROBLEM]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudf_problem_t                                       
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                      
        _m00 enum wdf::wudf_problem_t            problem_code;    //{ +0x0000    +0x0000    +0x0000    } | .ProblemCode
        _m01 enum wdf::component_type_t          detector;        //{ +0x0004    +0x0004    +0x0004    } | .Detector
        _m02 enum wdf::host_exit_code_t          exit_code;       //{ +0x0008    +0x0008    +0x0008    } | .ExitCode
        _m03 enum wdf::wudf_operation_type_t     operation;       //{ +0x000c    +0x000c    +0x000c    } | .Operation
        _m04 enum wdf::wudfmessage_t             message;         //{ +0x0010    +0x0010    +0x0010    } | .Message
        _m05 uint16_t                            irp_info;        //{ +0x0012    +0x0012    +0x0012    } | .IrpInfo
        _m06 int32_t                             status;          //{ +0x0014    +0x0014    +0x0014    } | .Status
        _m07 enum wdf::device_start_state_type_t device_started;  //{ +0x0018    +0x0018    +0x0018    } | .DeviceStarted
                                                                
        SDK_MAGIC_PROPERTIES( "WUDF_PROBLEM.$", 0x1c, true, 0xf61a16385b944e2d );               
        SDK_FIXED_SIZE( wudf_problem_t, 0x1c );                 
    };                                                          
};
#include "magic/wudf_problem_t.end.hpp"
SDK_VERIFY( struct wdf::wudf_problem_t, 0x1c );
