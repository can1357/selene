#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_record_section_descriptor_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union error_record_section_descriptor_validbits_t
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                    
        _m00 uint1_t fru_id;                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FRUId
        _m01 uint1_t fru_text;                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .FRUText
        _m02 uint8_t as_uchar;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUCHAR
                                                     
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS.$", 0x1, true, 0xee3b948fa9a95ccc );         
        SDK_FIXED_SIZE( error_record_section_descriptor_validbits_t, 0x1 );         
    };                                               
};
#include "magic/error_record_section_descriptor_validbits_t.end.hpp"
SDK_VERIFY( union whea::error_record_section_descriptor_validbits_t, 0x1 );
