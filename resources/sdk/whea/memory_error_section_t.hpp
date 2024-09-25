#pragma once
#include <sdkgen/support_library.hpp>
#include "error_status_t.hpp"
#include "memory_error_section_validbits_t.hpp"

#include "magic/memory_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_MEMORY_ERROR_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct memory_error_section_t                                               
    {                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                      
        _m00 union whea::memory_error_section_validbits_t valid_bits;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
        _m01 union whea::error_status_t                   error_status;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ErrorStatus
        _m02 uint64_t                                     physical_address;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PhysicalAddress
        _m03 uint64_t                                     physical_address_mask;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PhysicalAddressMask
        _m04 uint16_t                                     node;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Node
        _m05 uint16_t                                     card;                   //{ +0x0022    +0x0022    +0x0022    +0x0022    +0x0022    } | .Card
        _m06 uint16_t                                     module;                 //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Module
        _m07 uint16_t                                     bank;                   //{ +0x0026    +0x0026    +0x0026    +0x0026    +0x0026    } | .Bank
        _m08 uint16_t                                     device;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Device
        _m09 uint16_t                                     row;                    //{ +0x002a    +0x002a    +0x002a    +0x002a    +0x002a    } | .Row
        _m10 uint16_t                                     column;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Column
        _m11 uint16_t                                     bit_position;           //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .BitPosition
        _m12 uint64_t                                     requester_id;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .RequesterId
        _m13 uint64_t                                     responder_id;           //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ResponderId
        _m14 uint64_t                                     target_id;              //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .TargetId
        _m15 uint8_t                                      error_type;             //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ErrorType
                                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                      
        _m16 uint8_t                                      extended;               //{ +0x0049    +0x0049    +0x0049    +0x0049    } | .Extended
        _m17 uint16_t                                     rank_number;            //{ +0x004a    +0x004a    +0x004a    +0x004a    } | .RankNumber
        _m18 uint16_t                                     card_handle;            //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .CardHandle
        _m19 uint16_t                                     module_handle;          //{ +0x004e    +0x004e    +0x004e    +0x004e    } | .ModuleHandle
                                                                                
        SDK_NONVOL_PROPERTIES( "_WHEA_MEMORY_ERROR_SECTION.$", 0x50, true, 0xd5af686a17f80da7 );                      
        SDK_DYNAMIC_SIZE( memory_error_section_t );                             
    };                                                                          
};
#include "magic/memory_error_section_t.end.hpp"
