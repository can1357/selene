#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wow64_floating_save_area_t.start.hpp"
namespace win
{
    // [struct _WOW64_FLOATING_SAVE_AREA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wow64_floating_save_area_t               
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                control_word;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlWord
        _m01 uint32_t                status_word;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .StatusWord
        _m02 uint32_t                tag_word;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TagWord
        _m03 uint32_t                error_offset;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ErrorOffset
        _m04 uint32_t                error_selector;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorSelector
        _m05 uint32_t                data_offset;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .DataOffset
        _m06 uint32_t                data_selector;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DataSelector
        _m07 sdk::array<uint8_t, 80> register_area;   //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .RegisterArea
        _m08 uint32_t                cr0_npx_state;   //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .Cr0NpxState
                                                    
        SDK_NONVOL_PROPERTIES( "_WOW64_FLOATING_SAVE_AREA.$", 0x70, true, 0x4ef71b80edc3b67a );               
        SDK_FIXED_SIZE( wow64_floating_save_area_t, 0x70 );               
    };                                              
};
#include "magic/wow64_floating_save_area_t.end.hpp"
SDK_VERIFY( struct win::wow64_floating_save_area_t, 0x70 );
