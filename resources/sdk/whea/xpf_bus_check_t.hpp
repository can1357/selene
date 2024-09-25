#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xpf_bus_check_t.start.hpp"
namespace whea
{
    // [union _WHEA_XPF_BUS_CHECK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union xpf_bus_check_t                             
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint1_t  transaction_type_valid;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TransactionTypeValid
        _m01 uint1_t  operation_valid;                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .OperationValid
        _m02 uint1_t  level_valid;                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .LevelValid
        _m03 uint1_t  processor_context_corrupt_valid;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ProcessorContextCorruptValid
        _m04 uint1_t  uncorrected_valid;                //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .UncorrectedValid
        _m05 uint1_t  precise_ip_valid;                 //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PreciseIPValid
        _m06 uint1_t  restartable_ip_valid;             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .RestartableIPValid
        _m07 uint1_t  overflow_valid;                   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .OverflowValid
        _m08 uint1_t  participation_valid;              //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ParticipationValid
        _m09 uint1_t  timeout_valid;                    //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TimeoutValid
        _m10 uint1_t  address_space_valid;              //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .AddressSpaceValid
        _m11 uint5_t  reserved_valid;                   //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .ReservedValid
        _m12 uint2_t  transaction_type;                 //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .TransactionType
        _m13 uint4_t  operation;                        //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .Operation
        _m14 uint3_t  level;                            //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .Level
        _m15 uint1_t  processor_context_corrupt;        //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .ProcessorContextCorrupt
        _m16 uint1_t  uncorrected;                      //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .Uncorrected
        _m17 uint1_t  precise_ip;                       //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .PreciseIP
        _m18 uint1_t  restartable_ip;                   //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .RestartableIP
        _m19 uint1_t  overflow;                         //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .Overflow
        _m20 uint2_t  participation;                    //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .Participation
        _m21 uint1_t  timeout;                          //{ +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 } | .Timeout
        _m22 uint2_t  address_space;                    //{ +0x0000@33 +0x0000@33 +0x0000@33 +0x0000@33 +0x0000@33 } | .AddressSpace
        _m23 uint64_t xpf_bus_check;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .XpfBusCheck
                                                      
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_BUS_CHECK.$", 0x8, true, 0x2a139e4bf5a04615 );                                
        SDK_FIXED_SIZE( xpf_bus_check_t, 0x8 );                                
    };                                                
};
#include "magic/xpf_bus_check_t.end.hpp"
SDK_VERIFY( union whea::xpf_bus_check_t, 0x8 );
