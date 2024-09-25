#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocessvm
{
    // [FlushDevicesForTermination@DXGPROCESSVM]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3368f0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) flush_devices_for_termination;
    
    // [??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45b58, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57628, 0x84380 bytes
    // dxgkrnl.sys .text:0x45d48, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGPROCESSVM@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45be8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x576c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x45dd8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyVmProcess@DXGPROCESSVM]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27f15c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x335c3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27f1ac, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_vm_process;
    
    // [SetVmProcessName@DXGPROCESSVM]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x280c74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x338150, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x280cf4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) set_vm_process_name;
};
#include "magic/api.end.hpp"
