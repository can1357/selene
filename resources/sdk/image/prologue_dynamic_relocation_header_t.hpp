#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prologue_dynamic_relocation_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_PROLOGUE_DYNAMIC_RELOCATION_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct prologue_dynamic_relocation_header_t
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t prologue_byte_count;        //{ +0x0000    +0x0000    +0x0000    } | .PrologueByteCount
                                               
        SDK_MAGIC_PROPERTIES( "_IMAGE_PROLOGUE_DYNAMIC_RELOCATION_HEADER.$", 0x1, true, 0xf53654afdf37bf0a );                    
        SDK_FIXED_SIZE( prologue_dynamic_relocation_header_t, 0x1 );                    
    };                                         
};
#include "magic/prologue_dynamic_relocation_header_t.end.hpp"
SDK_VERIFY( struct image::prologue_dynamic_relocation_header_t, 0x1 );
