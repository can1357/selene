#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_ref_counted_buffer
{
    // [AllocateRefCountedBuffer@CRefCountedBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3dfe0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2ebc2, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e1d0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) allocate_ref_counted_buffer;
    
    // [RefCountedBufferRelease@CRefCountedBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c588, 0x60098 bytes
    // dxgkrnl.sys .text:0x1cfd4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd428, 0x84380 bytes
    // dxgkrnl.sys .text:0x1d654, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) ref_counted_buffer_release;
};
#include "magic/api.end.hpp"
