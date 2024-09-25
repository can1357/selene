#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fault_error_code_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_FAULT_ERROR_CODE]
    // => WDK 10 (NV)
    //
    struct fault_error_code_t                              
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint1_t  is_device_specific_code;               //{ +0x0000@0  } | .IsDeviceSpecificCode
        _m01 int31_t  general_error_code;                    //{ +0x0000@1  } | .GeneralErrorCode
        _m02 uint1_t  is_device_specific_code_reserved_bit;  //{ +0x0000@0  } | .IsDeviceSpecificCodeReservedBit
        _m03 uint31_t device_specific_code;                  //{ +0x0000@1  } | .DeviceSpecificCode
                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_FAULT_ERROR_CODE.$", 0x0, false, 0x44f6f0fdcab78046 );                                     
        SDK_FIXED_SIZE( fault_error_code_t, 0x4 );                                     
    };                                                     
};
#include "magic/fault_error_code_t.end.hpp"
SDK_VERIFY( struct dxgk::fault_error_code_t, 0x4 );
