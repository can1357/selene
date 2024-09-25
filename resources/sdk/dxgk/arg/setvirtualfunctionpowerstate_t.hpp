#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/device_power_state_t.hpp"

#include "magic/setvirtualfunctionpowerstate_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE]
    // => WDK 10 (NV)
    //
    struct setvirtualfunctionpowerstate_t                         
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                      virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 enum nt::device_power_state_t power_state;             //{ +0x0004    } | .PowerState
        _m02 uint8_t                       wake;                    //{ +0x0008    } | .Wake
                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE.$", 0x0, false, 0xddcf8b00a91ca058 );                       
        SDK_FIXED_SIZE( setvirtualfunctionpowerstate_t, 0xc );                       
    };                                                            
};
#include "magic/setvirtualfunctionpowerstate_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvirtualfunctionpowerstate_t, 0xc );
