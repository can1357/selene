#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/soundsentryw_t.start.hpp"
namespace tag
{
    // [struct tagSOUNDSENTRYW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct soundsentryw_t                         
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t cb_size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t i_fs_text_effect;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iFSTextEffect
        _m03 uint32_t i_fs_text_effect_m_sec;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .iFSTextEffectMSec
        _m04 uint32_t i_fs_text_effect_color_bits;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iFSTextEffectColorBits
        _m05 uint32_t i_fs_graf_effect;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .iFSGrafEffect
        _m06 uint32_t i_fs_graf_effect_m_sec;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .iFSGrafEffectMSec
        _m07 uint32_t i_fs_graf_effect_color;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .iFSGrafEffectColor
        _m08 uint32_t i_windows_effect;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .iWindowsEffect
        _m09 uint32_t i_windows_effect_m_sec;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .iWindowsEffectMSec
        _m10 wchar_t* lpsz_windows_effect_dll;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .lpszWindowsEffectDLL
        _m11 uint32_t i_windows_effect_ordinal;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .iWindowsEffectOrdinal
                                                  
        SDK_MAGIC_PROPERTIES( "tagSOUNDSENTRYW.$", 0x38, true, 0xda8daacb26a6632d );                            
        SDK_FIXED_SIZE( soundsentryw_t, 0x38 );                            
    };                                            
};
#include "magic/soundsentryw_t.end.hpp"
SDK_VERIFY( struct tag::soundsentryw_t, 0x38 );
