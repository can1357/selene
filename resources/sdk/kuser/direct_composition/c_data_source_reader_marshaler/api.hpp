#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_data_source_reader_marshaler
{
    // [EmitUpdateCommands@CDataSourceReaderMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fed20, 0x243e0 bytes
    // win32kbase.sys .text:0x24e3e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fcaf0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CDataSourceReaderMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fedb0, 0x243e0 bytes
    // win32kbase.sys .text:0x24e470, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fcb80, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CDataSourceReaderMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
