#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_cs_tag_flags_t.hpp"

#include "magic/ndr_cs_tag_format_t.start.hpp"
namespace win
{
    // [struct _NDR_CS_TAG_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_cs_tag_format_t                                
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 uint8_t                        format_code;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 struct win::ndr_cs_tag_flags_t flags;              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 uint16_t                       tag_routine_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .TagRoutineIndex
                                                              
        SDK_MAGIC_PROPERTIES( "_NDR_CS_TAG_FORMAT.$", 0x4, true, 0x27a86133e2932d47 );                  
        SDK_FIXED_SIZE( ndr_cs_tag_format_t, 0x4 );                  
    };                                                        
};
#include "magic/ndr_cs_tag_format_t.end.hpp"
SDK_VERIFY( struct win::ndr_cs_tag_format_t, 0x4 );
