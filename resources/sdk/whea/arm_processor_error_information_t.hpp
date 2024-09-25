#pragma once
#include <sdkgen/support_library.hpp>
#include "arm_processor_error_information_valid_bits_t.hpp"

#include "magic/arm_processor_error_information_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_PROCESSOR_ERROR_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_processor_error_information_t           
    {                                                  
        using validation_bit_t = union whea::arm_processor_error_information_valid_bits_t;                        
                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                             
        _m00 uint8_t           version;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t           length;                   //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 validation_bit_t  validation_bit;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ValidationBit
        _m03 uint8_t           type;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m04 uint16_t          multiple_error;           //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .MultipleError
        _m05 uint8_t           flags;                    //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .Flags
        _m06 uint64_t          error_information;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ErrorInformation
        _m07 uint64_t          virtual_fault_address;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .VirtualFaultAddress
                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                             
        _m08 uint64_t          physical_fault_address;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PhysicalFaultAddress
                                                       
        // Windows 10 v1607                            
        //                                             
        _m09 uint64_t          physical_fault_addresss;  //{ +0x0018    } | .PhysicalFaultAddresss
                                                       
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.$", 0x20, true, 0x6508fe2a729367f1 );                        
        SDK_FIXED_SIZE( arm_processor_error_information_t, 0x20 );                        
    };                                                 
};
#include "magic/arm_processor_error_information_t.end.hpp"
SDK_VERIFY( struct whea::arm_processor_error_information_t, 0x20 );
