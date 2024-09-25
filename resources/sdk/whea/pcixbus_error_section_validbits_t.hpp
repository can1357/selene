#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcixbus_error_section_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pcixbus_error_section_validbits_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint1_t  error_status;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ErrorStatus
        _m01 uint1_t  error_type;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ErrorType
        _m02 uint1_t  bus_id;                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .BusId
        _m03 uint1_t  bus_address;           //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .BusAddress
        _m04 uint1_t  bus_data;              //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .BusData
        _m05 uint1_t  bus_command;           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .BusCommand
        _m06 uint1_t  requester_id;          //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .RequesterId
        _m07 uint1_t  completer_id;          //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .CompleterId
        _m08 uint1_t  target_id;             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .TargetId
        _m09 uint64_t valid_bits;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
                                           
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.$", 0x8, true, 0xec852a025309cf61 );             
        SDK_FIXED_SIZE( pcixbus_error_section_validbits_t, 0x8 );             
    };                                     
};
#include "magic/pcixbus_error_section_validbits_t.end.hpp"
SDK_VERIFY( union whea::pcixbus_error_section_validbits_t, 0x8 );
