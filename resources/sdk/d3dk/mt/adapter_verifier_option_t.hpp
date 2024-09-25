#pragma once
#include <sdkgen/support_library.hpp>
#include "verifier_option_mode_t.hpp"
#include "adapter_verifier_option_data_t.hpp"
#include "adapter_verifier_option_type_t.hpp"

#include "magic/adapter_verifier_option_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADAPTER_VERIFIER_OPTION]
    // => WDK 10 (NV)
    //
    struct adapter_verifier_option_t                             
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 enum d3dk::mt::adapter_verifier_option_type_t  type;  //{ +0x0000    } | .Type
        _m01 enum d3dk::mt::verifier_option_mode_t          mode;  //{ +0x0004    } | .Mode
        _m02 union d3dk::mt::adapter_verifier_option_data_t data;  //{ +0x0008    } | .Data
                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTER_VERIFIER_OPTION.$", 0x0, false, 0x93b64406374bedc3 );     
        SDK_FIXED_SIZE( adapter_verifier_option_t, 0x20 );       
    };                                                           
};
#include "magic/adapter_verifier_option_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adapter_verifier_option_t, 0x20 );
