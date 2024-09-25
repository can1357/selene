#pragma once
#include <sdkgen/support_library.hpp>
#include "devicestate_type_t.hpp"
#include "devicereset_state_t.hpp"
#include "devicepresent_state_t.hpp"
#include "deviceexecution_state_t.hpp"
#include "devicepagefault_state_t.hpp"
#include "devicepresent_state_dwm_t.hpp"
#include "devicepresent_queue_state_t.hpp"

#include "magic/getdevicestate_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETDEVICESTATE]
    // => WDK 10 (NV)
    //
    struct getdevicestate_t                                                   
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                     h_device;             //{ +0x0000    } | .hDevice
        _m01 enum d3dk::mt::devicestate_type_t            state_type;           //{ +0x0004    } | .StateType
        _m02 enum d3dk::mt::deviceexecution_state_t       execution_state;      //{ +0x0008    } | .ExecutionState
        _m03 struct d3dk::mt::devicepresent_state_t       present_state;        //{ +0x0008    } | .PresentState
        _m04 struct d3dk::mt::devicereset_state_t         reset_state;          //{ +0x0008    } | .ResetState
        _m05 struct d3dk::mt::devicepresent_state_dwm_t   present_state_dwm;    //{ +0x0008    } | .PresentStateDWM
        _m06 struct d3dk::mt::devicepagefault_state_t     page_fault_state;     //{ +0x0008    } | .PageFaultState
        _m07 struct d3dk::mt::devicepresent_queue_state_t present_queue_state;  //{ +0x0008    } | .PresentQueueState
                                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETDEVICESTATE.$", 0x0, false, 0xf90a86db6be8a2f5 );                    
        SDK_FIXED_SIZE( getdevicestate_t, 0x38 );                             
    };                                                                        
};
#include "magic/getdevicestate_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getdevicestate_t, 0x38 );
