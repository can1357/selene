#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cptableinfo_t.start.hpp"
namespace nt
{
    // [struct _CPTABLEINFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cptableinfo_t                                    
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                  
        _m00 uint16_t                code_page;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CodePage
        _m01 uint16_t                maximum_character_size;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .MaximumCharacterSize
        _m02 uint16_t                default_char;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DefaultChar
        _m03 uint16_t                uni_default_char;        //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .UniDefaultChar
        _m04 uint16_t                trans_default_char;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TransDefaultChar
        _m05 uint16_t                trans_uni_default_char;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .TransUniDefaultChar
        _m06 uint16_t                dbcs_code_page;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DBCSCodePage
        _m07 sdk::array<uint8_t, 12> lead_byte;               //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .LeadByte
        _m08 wchar_t*                multi_byte_table;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MultiByteTable
        _m09 void*                   wide_char_table;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .WideCharTable
        _m10 wchar_t*                dbcs_ranges;             //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DBCSRanges
        _m11 wchar_t*                dbcs_offsets;            //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .DBCSOffsets
                                                            
        SDK_NONVOL_PROPERTIES( "_CPTABLEINFO.$", 0x40, true, 0x8a105d1a88aaf3cc );                       
        SDK_FIXED_SIZE( cptableinfo_t, 0x40 );                       
    };                                                      
};
#include "magic/cptableinfo_t.end.hpp"
SDK_VERIFY( struct nt::cptableinfo_t, 0x40 );
