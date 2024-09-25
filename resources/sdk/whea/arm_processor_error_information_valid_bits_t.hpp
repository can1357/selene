#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_processor_error_information_valid_bits_t.start.hpp"
namespace whea
{
    // [union _WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union arm_processor_error_information_valid_bits_t
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint1_t  multiple_error;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MultipleError
        _m01 uint1_t  flags;                            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Flags
        _m02 uint1_t  error_information;                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ErrorInformation
        _m03 uint1_t  virtual_fault_address;            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .VirtualFaultAddress
        _m04 uint16_t as_ushort;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m05 uint1_t  physical_fault_address;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PhysicalFaultAddress
                                                      
        // Windows 10 v1607                        
        //                                    
        _m06 uint1_t  physical_fault_addresss;          //{ +0x0000@4  } | .PhysicalFaultAddresss
                                                      
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS.$", 0x2, true, 0xb325837c4f2c3e3a );                        
        SDK_FIXED_SIZE( arm_processor_error_information_valid_bits_t, 0x2 );                        
    };                                                
};
#include "magic/arm_processor_error_information_valid_bits_t.end.hpp"
SDK_VERIFY( union whea::arm_processor_error_information_valid_bits_t, 0x2 );
