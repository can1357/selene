#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_ilmethod_fat_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_ILMETHOD_FAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_ilmethod_fat_t           
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint12_t flags;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Flags
        _m01 uint4_t  size;               //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Size
        _m02 uint16_t max_stack;          //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .MaxStack
        _m03 uint32_t code_size;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CodeSize
        _m04 uint32_t local_var_sig_tok;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LocalVarSigTok
                                        
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_FAT.$", 0xc, true, 0xf24ede74c8265567 );                  
        SDK_FIXED_SIZE( cor_ilmethod_fat_t, 0xc );                  
    };                                  
};
#include "magic/cor_ilmethod_fat_t.end.hpp"
SDK_VERIFY( struct image::cor_ilmethod_fat_t, 0xc );
