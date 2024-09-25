#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_cs_array_format_t.start.hpp"
namespace win
{
    // [struct _NDR_CS_ARRAY_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_cs_array_format_t         
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t  format_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint16_t user_type_size;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .UserTypeSize
        _m02 uint16_t cs_routine_index;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CSRoutineIndex
        _m03 int32_t  description_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DescriptionOffset
                                         
        SDK_MAGIC_PROPERTIES( "_NDR_CS_ARRAY_FORMAT.$", 0xc, true, 0x7732ec89043972b4 );                   
        SDK_FIXED_SIZE( ndr_cs_array_format_t, 0xc );                   
    };                                   
};
#include "magic/ndr_cs_array_format_t.end.hpp"
SDK_VERIFY( struct win::ndr_cs_array_format_t, 0xc );
