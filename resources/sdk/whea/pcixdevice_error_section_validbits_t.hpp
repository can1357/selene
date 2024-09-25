#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcixdevice_error_section_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pcixdevice_error_section_validbits_t
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint1_t  error_status;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ErrorStatus
        _m01 uint1_t  id_info;                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IdInfo
        _m02 uint1_t  memory_number;            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MemoryNumber
        _m03 uint1_t  io_number;                //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .IoNumber
        _m04 uint1_t  register_data_pairs;      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RegisterDataPairs
        _m05 uint64_t valid_bits;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
                                              
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS.$", 0x8, true, 0x88cb3c0e01e9482d );                    
        SDK_FIXED_SIZE( pcixdevice_error_section_validbits_t, 0x8 );                    
    };                                        
};
#include "magic/pcixdevice_error_section_validbits_t.end.hpp"
SDK_VERIFY( union whea::pcixdevice_error_section_validbits_t, 0x8 );
