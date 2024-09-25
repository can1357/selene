#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_table_transfer_effect_marshaler
{
    // [GetType@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f730, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe88b0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee600, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb0c0, 0x243e0 bytes
    // win32kbase.sys .text:0x22fd38, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8e80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitTable@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee694, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb168, 0x243e0 bytes
    // win32kbase.sys .text:0x22fde0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8f28, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_table;
    
    // [EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee7d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb2b0, 0x243e0 bytes
    // win32kbase.sys .text:0x22ff30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9070, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee870, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb360, 0x243e0 bytes
    // win32kbase.sys .text:0x22ffe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9120, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee8c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb3c0, 0x243e0 bytes
    // win32kbase.sys .text:0x230050, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9180, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee8ec, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb3f4, 0x243e0 bytes
    // win32kbase.sys .text:0x2300a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e91b4, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) property_id_to_color_channel_and_index;
    
    // [SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee930, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb440, 0x243e0 bytes
    // win32kbase.sys .text:0x2300f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9200, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeea20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb540, 0x243e0 bytes
    // win32kbase.sys .text:0x230200, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9300, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeea90, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb5c0, 0x243e0 bytes
    // win32kbase.sys .text:0x230290, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9380, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CTableTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeeba0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb6d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2303a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9490, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
