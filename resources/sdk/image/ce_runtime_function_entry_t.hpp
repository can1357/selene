#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ce_runtime_function_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ce_runtime_function_entry_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t func_start;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FuncStart
        _m01 uint8_t  prolog_len;       //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .PrologLen
        _m02 uint22_t func_len;         //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .FuncLen
        _m03 uint1_t  thirty_two_bit;   //{ +0x0004@30 +0x0004@30 +0x0004@30 +0x0004@30 } | .ThirtyTwoBit
        _m04 uint1_t  exception_flag;   //{ +0x0004@31 +0x0004@31 +0x0004@31 +0x0004@31 } | .ExceptionFlag
                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_CE_RUNTIME_FUNCTION_ENTRY.$", 0x8, true, 0xf861024785f19bdb );               
        SDK_FIXED_SIZE( ce_runtime_function_entry_t, 0x8 );               
    };                                
};
#include "magic/ce_runtime_function_entry_t.end.hpp"
SDK_VERIFY( struct image::ce_runtime_function_entry_t, 0x8 );
