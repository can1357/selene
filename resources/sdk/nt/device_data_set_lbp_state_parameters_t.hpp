#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_data_set_lbp_state_parameters_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DATA_SET_LBP_STATE_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct device_data_set_lbp_state_parameters_t
    {                                            
        // WDK 10                    
        //                           
        _m00 uint32_t version;                     //{ +0x0000    } | .Version
        _m01 uint32_t size;                        //{ +0x0004    } | .Size
        _m02 uint32_t flags;                       //{ +0x0008    } | .Flags
        _m03 uint32_t output_version;              //{ +0x000c    } | .OutputVersion
                                                 
        SDK_NONVOL_PROPERTIES( "_DEVICE_DATA_SET_LBP_STATE_PARAMETERS.$", 0x0, false, 0x527030226e52eb85 );               
        SDK_FIXED_SIZE( device_data_set_lbp_state_parameters_t, 0x10 );               
    };                                           
};
#include "magic/device_data_set_lbp_state_parameters_t.end.hpp"
SDK_VERIFY( struct nt::device_data_set_lbp_state_parameters_t, 0x10 );
