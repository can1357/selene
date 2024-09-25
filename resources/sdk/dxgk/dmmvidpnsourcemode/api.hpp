#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpnsourcemode
{
    // [??0DMMVIDPNSOURCEMODE@@QEAA@I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d16c, 0x60098 bytes
    // dxgkrnl.sys .text:0x58158, 0x762b0 bytes
    // dxgkrnl.sys .text:0x67988, 0x84380 bytes
    // dxgkrnl.sys .text:0x582e8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [GetBitsPerPixel@DMMVIDPNSOURCEMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b48, 0x60098 bytes
    // dxgkrnl.sys .text:0x59494, 0x762b0 bytes
    // dxgkrnl.sys .text:0x68fac, 0x84380 bytes
    // dxgkrnl.sys .text:0x59624, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_bits_per_pixel;
    
    // [GetGraphicsInfo@DMMVIDPNSOURCEMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b18, 0x60098 bytes
    // dxgkrnl.sys .text:0x96b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6af4, 0x84380 bytes
    // dxgkrnl.sys .text:0xa530, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_graphics_info;
    
    // [GetTextInfo@DMMVIDPNSOURCEMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x32ddc, 0x60098 bytes
    // dxgkrnl.sys .text:0x59650, 0x762b0 bytes
    // dxgkrnl.sys .text:0x690c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x597e0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_text_info;
    
    // [Initialize@DMMVIDPNSOURCEMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d00c, 0x60098 bytes
    // dxgkrnl.sys .text:0x5985c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69264, 0x84380 bytes
    // dxgkrnl.sys .text:0x599ec, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [Serialize@DMMVIDPNSOURCEMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b90, 0x60098 bytes
    // dxgkrnl.sys .text:0x12ee0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6972c, 0x84380 bytes
    // dxgkrnl.sys .text:0x12fc4, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) serialize;
};
#include "magic/api.end.hpp"
