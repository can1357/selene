#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fnsave_format_t.start.hpp"
namespace win
{
    // [struct _FNSAVE_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fnsave_format_t                          
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                control_word;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlWord
        _m01 uint32_t                status_word;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StatusWord
        _m02 uint32_t                tag_word;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TagWord
        _m03 uint32_t                error_offset;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ErrorOffset
        _m04 uint32_t                error_selector;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorSelector
        _m05 uint32_t                data_offset;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DataOffset
        _m06 uint32_t                data_selector;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DataSelector
        _m07 sdk::array<uint8_t, 80> register_area;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RegisterArea
                                                    
        SDK_MAGIC_PROPERTIES( "_FNSAVE_FORMAT.$", 0x6c, true, 0x4b8b120319014bed );               
        SDK_FIXED_SIZE( fnsave_format_t, 0x6c );               
    };                                              
};
#include "magic/fnsave_format_t.end.hpp"
SDK_VERIFY( struct win::fnsave_format_t, 0x6c );
