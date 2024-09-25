#pragma once
#include <sdkgen/support_library.hpp>
#include "arm_bus_error_valid_bits_t.hpp"

#include "magic/arm_bus_error_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_BUS_ERROR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_bus_error_t                                                    
    {                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                    
        _m00 union whea::arm_bus_error_valid_bits_t validation_bit;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidationBit
        _m01 uint2_t                                transaction_type;           //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .TransactionType
        _m02 uint4_t                                operation;                  //{ +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  } | .Operation
        _m03 uint3_t                                level;                      //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .Level
        _m04 uint1_t                                processor_context_corrupt;  //{ +0x0003@3  +0x0003@3  +0x0003@3  +0x0003@3  +0x0003@3  } | .ProcessorContextCorrupt
        _m05 uint1_t                                corrected;                  //{ +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  } | .Corrected
        _m06 uint1_t                                precise_pc;                 //{ +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  } | .PrecisePC
        _m07 uint1_t                                restartable_pc;             //{ +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  } | .RestartablePC
        _m08 uint1_t                                time_out;                   //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .TimeOut
        _m09 uint2_t                                address_space;              //{ +0x0004@3  +0x0004@3  +0x0004@3  +0x0004@3  +0x0004@3  } | .AddressSpace
        _m10 uint9_t                                memory_access_attributes;   //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .MemoryAccessAttributes
        _m11 uint1_t                                access_mode;                //{ +0x0007@0  +0x0007@0  +0x0007@0  +0x0007@0  +0x0007@0  } | .AccessMode
                                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                    
        _m12 uint2_t                                participation_type;         //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .ParticipationType
                                                                              
        // Windows 10 v1607                                                   
        //                                                                    
        _m13 uint2_t                                pariticpation_type;         //{ +0x0004@0  } | .PariticpationType
                                                                              
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_BUS_ERROR.$", 0xc, true, 0x15721360d7416041 );                          
        SDK_FIXED_SIZE( arm_bus_error_t, 0xc );                               
    };                                                                        
};
#include "magic/arm_bus_error_t.end.hpp"
SDK_VERIFY( struct whea::arm_bus_error_t, 0xc );
