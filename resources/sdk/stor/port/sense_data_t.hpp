#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sense_data_t.start.hpp"
namespace stor::port
{
    // [struct _SENSE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sense_data_t                                             
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                          
        _m00 uint7_t                error_code;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ErrorCode
        _m01 uint1_t                valid;                            //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .Valid
        _m02 uint8_t                segment_number;                   //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .SegmentNumber
        _m03 uint4_t                sense_key;                        //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .SenseKey
        _m04 uint1_t                incorrect_length;                 //{ +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  } | .IncorrectLength
        _m05 uint1_t                end_of_media;                     //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .EndOfMedia
        _m06 uint1_t                file_mark;                        //{ +0x0002@7  +0x0002@7  +0x0002@7  +0x0002@7  +0x0002@7  } | .FileMark
        _m07 sdk::array<uint8_t, 4> information;                      //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Information
        _m08 uint8_t                additional_sense_length;          //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AdditionalSenseLength
        _m09 sdk::array<uint8_t, 4> command_specific_information;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CommandSpecificInformation
        _m10 uint8_t                additional_sense_code;            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .AdditionalSenseCode
        _m11 uint8_t                additional_sense_code_qualifier;  //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .AdditionalSenseCodeQualifier
        _m12 uint8_t                field_replaceable_unit_code;      //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .FieldReplaceableUnitCode
        _m13 sdk::array<uint8_t, 3> sense_key_specific;               //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .SenseKeySpecific
                                                                    
        SDK_NONVOL_PROPERTIES( "_SENSE_DATA.$", 0x12, true, 0xf8604ca2f02d8e2c );                                
        SDK_FIXED_SIZE( sense_data_t, 0x12 );                                
    };                                                              
};
#include "magic/sense_data_t.end.hpp"
SDK_VERIFY( struct stor::port::sense_data_t, 0x12 );
