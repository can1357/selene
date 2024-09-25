#pragma once
#include <sdkgen/support_library.hpp>
#include "work_type_t.hpp"
#include "work_idle_state_t.hpp"
#include "work_acpi_notify_t.hpp"
#include "work_device_idle_t.hpp"
#include "work_device_power_t.hpp"
#include "work_power_control_t.hpp"
#include "work_active_complete_t.hpp"
#include "work_complete_idle_state_t.hpp"
#include "work_complete_perf_state_t.hpp"
#include "work_acpi_evaluate_control_method_complete_t.hpp"

#include "magic/work_information_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_information_t                                               
    {                                                                       
        using control_method_complete_t = struct pep::work_acpi_evaluate_control_method_complete_t;                        
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                  
        _m00 enum pep::work_type_t                  work_type;                //{ +0x0000    +0x0000    +0x0000    } | .WorkType
        _m01 struct pep::work_active_complete_t     active_complete;          //{ +0x0008    +0x0008    +0x0008    } | .ActiveComplete
        _m02 struct pep::work_idle_state_t          idle_state;               //{ +0x0008    +0x0008    +0x0008    } | .IdleState
        _m03 struct pep::work_device_power_t        device_power;             //{ +0x0008    +0x0008    +0x0008    } | .DevicePower
        _m04 struct pep::work_power_control_t       power_control;            //{ +0x0008    +0x0008    +0x0008    } | .PowerControl
        _m05 struct pep::work_device_idle_t         device_idle;              //{ +0x0008    +0x0008    +0x0008    } | .DeviceIdle
        _m06 struct pep::work_complete_idle_state_t complete_idle_state;      //{ +0x0008    +0x0008    +0x0008    } | .CompleteIdleState
        _m07 struct pep::work_complete_perf_state_t complete_perf_state;      //{ +0x0008    +0x0008    +0x0008    } | .CompletePerfState
        _m08 struct pep::work_acpi_notify_t         acpi_notify;              //{ +0x0008    +0x0008    +0x0008    } | .AcpiNotify
        _m09 control_method_complete_t              control_method_complete;  //{ +0x0008    +0x0008    +0x0008    } | .ControlMethodComplete
                                                                            
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_INFORMATION.$", 0x40, true, 0x569ee619ff91965c );                        
        SDK_FIXED_SIZE( work_information_t, 0x40 );                         
    };                                                                      
};
#include "magic/work_information_t.end.hpp"
SDK_VERIFY( struct pep::work_information_t, 0x40 );
