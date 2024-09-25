#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocessvmwp
{
    // [ResetVirtualMachine@DXGPROCESSVMWP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x337860, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) reset_virtual_machine;
    
    // [DecrementNumVmProcesses@DXGPROCESSVMWP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45d68, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57838, 0x84380 bytes
    // dxgkrnl.sys .text:0x45f58, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) decrement_num_vm_processes;
    
    // [??1DXGPROCESSVMWP@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45c2c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57704, 0x84380 bytes
    // dxgkrnl.sys .text:0x45e1c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [InitializeVmwpProcess@DXGPROCESSVMWP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28001c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33722c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28009c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize_vmwp_process;
};
#include "magic/api.end.hpp"
