#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_ilmethod_sect_eh_clause_small_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_ilmethod_sect_eh_clause_small_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t flags;                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Flags
        _m01 uint16_t try_offset;               //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .TryOffset
        _m02 uint8_t  try_length;               //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .TryLength
        _m03 uint16_t handler_offset;           //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .HandlerOffset
        _m04 uint8_t  handler_length;           //{ +0x0004@24 +0x0004@24 +0x0004@24 +0x0004@24 } | .HandlerLength
        _m05 uint32_t class_token;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ClassToken
        _m06 uint32_t filter_offset;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FilterOffset
                                              
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL.$", 0xc, true, 0xb13913784cb452a4 );               
        SDK_FIXED_SIZE( cor_ilmethod_sect_eh_clause_small_t, 0xc );               
    };                                        
};
#include "magic/cor_ilmethod_sect_eh_clause_small_t.end.hpp"
SDK_VERIFY( struct image::cor_ilmethod_sect_eh_clause_small_t, 0xc );
