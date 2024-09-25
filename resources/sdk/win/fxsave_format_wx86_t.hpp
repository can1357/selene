#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fxsave_format_wx86_t.start.hpp"
namespace win
{
    // [struct _FXSAVE_FORMAT_WX86]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fxsave_format_wx86_t                      
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint16_t                 control_word;    //{ +0x0000    +0x0000    +0x0000    } | .ControlWord
        _m01 uint16_t                 status_word;     //{ +0x0002    +0x0002    +0x0002    } | .StatusWord
        _m02 uint16_t                 tag_word;        //{ +0x0004    +0x0004    +0x0004    } | .TagWord
        _m03 uint16_t                 error_opcode;    //{ +0x0006    +0x0006    +0x0006    } | .ErrorOpcode
        _m04 uint32_t                 error_offset;    //{ +0x0008    +0x0008    +0x0008    } | .ErrorOffset
        _m05 uint32_t                 error_selector;  //{ +0x000c    +0x000c    +0x000c    } | .ErrorSelector
        _m06 uint32_t                 data_offset;     //{ +0x0010    +0x0010    +0x0010    } | .DataOffset
        _m07 uint32_t                 data_selector;   //{ +0x0014    +0x0014    +0x0014    } | .DataSelector
        _m08 uint32_t                 mx_csr;          //{ +0x0018    +0x0018    +0x0018    } | .MXCsr
        _m09 uint32_t                 mx_csr_mask;     //{ +0x001c    +0x001c    +0x001c    } | .MXCsr_Mask
        _m10 sdk::array<uint8_t, 128> register_area;   //{ +0x0020    +0x0020    +0x0020    } | .RegisterArea
                                                     
        SDK_MAGIC_PROPERTIES( "_FXSAVE_FORMAT_WX86.$", 0x200, true, 0xd540365bdc02ca79 );               
        SDK_FIXED_SIZE( fxsave_format_wx86_t, 0x200 );               
    };                                               
};
#include "magic/fxsave_format_wx86_t.end.hpp"
SDK_VERIFY( struct win::fxsave_format_wx86_t, 0x200 );
