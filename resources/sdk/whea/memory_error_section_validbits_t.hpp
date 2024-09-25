#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_error_section_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union memory_error_section_validbits_t  
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint1_t  error_status;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ErrorStatus
        _m01 uint1_t  physical_address;       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PhysicalAddress
        _m02 uint1_t  physical_address_mask;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PhysicalAddressMask
        _m03 uint1_t  node;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Node
        _m04 uint1_t  card;                   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Card
        _m05 uint1_t  module;                 //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Module
        _m06 uint1_t  bank;                   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Bank
        _m07 uint1_t  device;                 //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .Device
        _m08 uint1_t  row;                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Row
        _m09 uint1_t  column;                 //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .Column
        _m10 uint1_t  bit_position;           //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .BitPosition
        _m11 uint1_t  requester_id;           //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .RequesterId
        _m12 uint1_t  responder_id;           //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .ResponderId
        _m13 uint1_t  target_id;              //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .TargetId
        _m14 uint1_t  error_type;             //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .ErrorType
        _m15 uint64_t valid_bits;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m16 uint1_t  rank_number;            //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .RankNumber
        _m17 uint1_t  card_handle;            //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .CardHandle
        _m18 uint1_t  module_handle;          //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .ModuleHandle
        _m19 uint1_t  extended_row;           //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .ExtendedRow
        _m20 uint1_t  bank_group;             //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .BankGroup
        _m21 uint1_t  bank_address;           //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .BankAddress
        _m22 uint1_t  chip_identification;    //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .ChipIdentification
                                            
        SDK_NONVOL_PROPERTIES( "_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.$", 0x8, true, 0xebb74048d242e88f );                      
        SDK_FIXED_SIZE( memory_error_section_validbits_t, 0x8 );                      
    };                                      
};
#include "magic/memory_error_section_validbits_t.end.hpp"
SDK_VERIFY( union whea::memory_error_section_validbits_t, 0x8 );
