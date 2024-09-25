#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ctdr_dump_buffer_canary
{
    // [Check@CTDR_DUMP_BUFFER_CANARY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x168220, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25eaec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30522c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25ec4c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) check;
    
    // [??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x168094, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25e91c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x305038, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25ea7c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
