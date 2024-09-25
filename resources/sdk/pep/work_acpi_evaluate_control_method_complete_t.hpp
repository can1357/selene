#pragma once
#include <sdkgen/support_library.hpp>

namespace acpi { struct method_argument_v1_t; }
namespace nt   { struct pohandle_t;           }

#include "magic/work_acpi_evaluate_control_method_complete_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_acpi_evaluate_control_method_complete_t                          
    {                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m00 struct nt::pohandle_t*                         device_handle;         //{ +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 uint32_t                                       completion_flags;      //{ +0x0008    +0x0008    +0x0008    } | .CompletionFlags
        _m02 int32_t                                        method_status;         //{ +0x000c    +0x000c    +0x000c    } | .MethodStatus
        _m03 void*                                          completion_context;    //{ +0x0010    +0x0010    +0x0010    } | .CompletionContext
        _m04 uint64_t                                       output_argument_size;  //{ +0x0018    +0x0018    +0x0018    } | .OutputArgumentSize
        _m05 __unaligned struct acpi::method_argument_v1_t* output_arguments;      //{ +0x0020    +0x0020    +0x0020    } | .OutputArguments
                                                                                 
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE.$", 0x28, true, 0xad6ca4e8cb1322a0 );                     
        SDK_FIXED_SIZE( work_acpi_evaluate_control_method_complete_t, 0x28 );                     
    };                                                                           
};
#include "magic/work_acpi_evaluate_control_method_complete_t.end.hpp"
SDK_VERIFY( struct pep::work_acpi_evaluate_control_method_complete_t, 0x28 );
