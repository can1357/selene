#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/descriptor_sense_data_t.start.hpp"
namespace stor::port
{
    // [struct _DESCRIPTOR_SENSE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct descriptor_sense_data_t                                  
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                          
        _m00 uint7_t                error_code;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ErrorCode
        _m01 uint4_t                sense_key;                        //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .SenseKey
        _m02 uint8_t                additional_sense_code;            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .AdditionalSenseCode
        _m03 uint8_t                additional_sense_code_qualifier;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .AdditionalSenseCodeQualifier
        _m04 uint8_t                additional_sense_length;          //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AdditionalSenseLength
        _m05 sdk::array<uint8_t, 1> descriptor_buffer;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DescriptorBuffer
                                                                    
        SDK_NONVOL_PROPERTIES( "_DESCRIPTOR_SENSE_DATA.$", 0x9, true, 0x641964b060192c1c );                                
        SDK_FIXED_SIZE( descriptor_sense_data_t, 0x9 );                                
    };                                                              
};
#include "magic/descriptor_sense_data_t.end.hpp"
SDK_VERIFY( struct stor::port::descriptor_sense_data_t, 0x9 );
