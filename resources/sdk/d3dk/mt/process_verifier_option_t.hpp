#pragma once
#include <sdkgen/support_library.hpp>
#include "verifier_option_mode_t.hpp"
#include "process_verifier_option_data_t.hpp"
#include "process_verifier_option_type_t.hpp"

#include "magic/process_verifier_option_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PROCESS_VERIFIER_OPTION]
    // => WDK 10 (NV)
    //
    struct process_verifier_option_t                                  
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 void*                                          h_process;  //{ +0x0000    } | .hProcess
        _m01 enum d3dk::mt::process_verifier_option_type_t  type;       //{ +0x0008    } | .Type
        _m02 enum d3dk::mt::verifier_option_mode_t          mode;       //{ +0x000c    } | .Mode
        _m03 union d3dk::mt::process_verifier_option_data_t data;       //{ +0x0010    } | .Data
                                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PROCESS_VERIFIER_OPTION.$", 0x0, false, 0x10af8b8c48e4d8d3 );          
        SDK_FIXED_SIZE( process_verifier_option_t, 0x20 );            
    };                                                                
};
#include "magic/process_verifier_option_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::process_verifier_option_t, 0x20 );
