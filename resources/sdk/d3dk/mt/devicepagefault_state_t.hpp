#pragma once
#include <sdkgen/support_library.hpp>
#include "../../dxgk/fault_error_code_t.hpp"
#include "../../dxgk/page_fault_flags_t.hpp"
#include "../../dxgk/render_pipeline_stage_t.hpp"

#include "magic/devicepagefault_state_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DEVICEPAGEFAULT_STATE]
    // => WDK 10 (NV)
    //
    struct devicepagefault_state_t                                                    
    {                                                                                 
        // WDK 10                                                                     
        //                                                                            
        _m00 uint64_t                           faulted_primitive_api_sequence_number;  //{ +0x0000    } | .FaultedPrimitiveAPISequenceNumber
        _m01 enum dxgk::render_pipeline_stage_t faulted_pipeline_stage;                 //{ +0x0008    } | .FaultedPipelineStage
        _m02 uint32_t                           faulted_bind_table_entry;               //{ +0x000c    } | .FaultedBindTableEntry
        _m03 enum dxgk::page_fault_flags_t      page_fault_flags;                       //{ +0x0010    } | .PageFaultFlags
        _m04 struct dxgk::fault_error_code_t    fault_error_code;                       //{ +0x0014    } | .FaultErrorCode
        _m05 uint64_t                           faulted_virtual_address;                //{ +0x0018    } | .FaultedVirtualAddress
                                                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DEVICEPAGEFAULT_STATE.$", 0x0, false, 0xa00d50bc301fad80 );                                      
        SDK_FIXED_SIZE( devicepagefault_state_t, 0x20 );                                      
    };                                                                                
};
#include "magic/devicepagefault_state_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::devicepagefault_state_t, 0x20 );
