#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorPinvokeMap]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_pinvoke_map_t : int32_t             
    {                                                  
        best_fit_use_assem =                 0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        char_set_not_spec =                  0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        throw_on_unmappable_char_use_assem = 0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_mangle =                          0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        char_set_ansi =                      0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        char_set_unicode =                   0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        char_set_auto =                      0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        char_set_mask =                      0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        best_fit_enabled =                   0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        best_fit_disabled =                  0x20,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        best_fit_mask =                      0x30,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supports_last_error =                0x40,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_conv_winapi =                   0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_conv_cdecl =                    0x200,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_conv_stdcall =                  0x300,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_conv_thiscall =                 0x400,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_conv_fastcall =                 0x500,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_conv_mask =                     0x700,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        throw_on_unmappable_char_enabled =   0x1000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        throw_on_unmappable_char_disabled =  0x2000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        throw_on_unmappable_char_mask =      0x3000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_value =                          0xffff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
