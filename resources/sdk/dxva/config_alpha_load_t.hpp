#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/config_alpha_load_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_ConfigAlphaLoad]
    // => WDK 10 (NV)
    //
    struct config_alpha_load_t                          
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t                dw_function;         //{ +0x0000    } | .dwFunction
        _m01 sdk::array<uint32_t, 3> dw_reserved_bits;    //{ +0x0004    } | .dwReservedBits
        _m02 uint8_t                 b_config_data_type;  //{ +0x0010    } | .bConfigDataType
                                                        
        SDK_NONVOL_PROPERTIES( "_DXVA_ConfigAlphaLoad.$", 0x0, false, 0xe479b1151684e6d2 );                   
        SDK_FIXED_SIZE( config_alpha_load_t, 0x11 );                   
    };                                                  
};
#include "magic/config_alpha_load_t.end.hpp"
SDK_VERIFY( struct dxva::config_alpha_load_t, 0x11 );
