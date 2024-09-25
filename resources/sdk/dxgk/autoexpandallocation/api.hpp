#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::autoexpandallocation
{
    // [??1AUTOEXPANDALLOCATION@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd1e3c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x154f18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e16fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14cec8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [GetActualBufferSize@AUTOEXPANDALLOCATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd1e64, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x155088, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4848, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1582a8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_actual_buffer_size;
    
    // [GetBuffer@AUTOEXPANDALLOCATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd1dc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15488c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e3148, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x157b3c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_buffer;
};
#include "magic/api.end.hpp"
