#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_bus_error_valid_bits_t.start.hpp"
namespace whea
{
    // [union _WHEA_ARM_BUS_ERROR_VALID_BITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union arm_bus_error_valid_bits_t            
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint1_t  transaction_type;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TransactionType
        _m01 uint1_t  operation;                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Operation
        _m02 uint1_t  level;                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Level
        _m03 uint1_t  processor_context_corrupt;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ProcessorContextCorrupt
        _m04 uint1_t  corrected;                  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Corrected
        _m05 uint1_t  precise_pc;                 //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PrecisePC
        _m06 uint1_t  restartable_pc;             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .RestartablePC
        _m07 uint1_t  participation_type;         //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .ParticipationType
        _m08 uint1_t  timeout;                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Timeout
        _m09 uint1_t  address_space;              //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .AddressSpace
        _m10 uint1_t  memory_attributes;          //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .MemoryAttributes
        _m11 uint1_t  access_mode;                //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .AccessMode
        _m12 uint16_t as_ushort;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_BUS_ERROR_VALID_BITS.$", 0x2, true, 0xbdd385b866128f92 );                          
        SDK_FIXED_SIZE( arm_bus_error_valid_bits_t, 0x2 );                          
    };                                          
};
#include "magic/arm_bus_error_valid_bits_t.end.hpp"
SDK_VERIFY( union whea::arm_bus_error_valid_bits_t, 0x2 );
