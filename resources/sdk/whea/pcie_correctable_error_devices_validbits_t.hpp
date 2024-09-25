#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcie_correctable_error_devices_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS]
    // => Windows 11
    //
    union pcie_correctable_error_devices_validbits_t
    {                                               
        // Windows 11                         
        //                                    
        _m00 uint1_t  segment;                        //{ +0x0000@0  } | .Segment
        _m01 uint1_t  bus;                            //{ +0x0000@1  } | .Bus
        _m02 uint1_t  device;                         //{ +0x0000@2  } | .Device
        _m03 uint1_t  function;                       //{ +0x0000@3  } | .Function
        _m04 uint1_t  mask;                           //{ +0x0000@4  } | .Mask
        _m05 uint1_t  correctable_error_count;        //{ +0x0000@5  } | .CorrectableErrorCount
        _m06 uint64_t valid_bits;                     //{ +0x0000    } | .ValidBits
                                                    
        SDK_MAGIC_PROPERTIES( "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS.$", 0x0, false, 0x4d24e023aaeac6d1 );                        
        SDK_FIXED_SIZE( pcie_correctable_error_devices_validbits_t, 0x8 );                        
    };                                              
};
#include "magic/pcie_correctable_error_devices_validbits_t.end.hpp"
SDK_VERIFY( union whea::pcie_correctable_error_devices_validbits_t, 0x8 );
