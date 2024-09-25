#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocessmutexbyhandle
{
    // [AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x49400, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) adjust_required_permission;
    
    // [AcquireInternal@DXGPROCESSMUTEXBYHANDLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8f5ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe0be0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16a140, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd7f60, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_internal;
    
    // [??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8f5d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe0b20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7310, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd7ea0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1481a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27e878, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3354f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27e8c8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetProcess@DXGPROCESSMUTEXBYHANDLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7ec4, 0x60098 bytes
    // dxgkrnl.sys .text:0x22f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ca84, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ac0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_process;
    
    // [Release@DXGPROCESSMUTEXBYHANDLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8f54c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe0b40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16a0b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd7ec0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
