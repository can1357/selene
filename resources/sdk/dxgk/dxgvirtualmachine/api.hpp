#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvirtualmachine
{
    // [AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3355b4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) acquire_virtual_gpu_by_luid;
    
    // [CancelTransaction@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x385604, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) cancel_transaction;
    
    // [FlushDevicesForTermination@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3369f8, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) flush_devices_for_termination;
    
    // [SetVmGuid@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3380fc, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) set_vm_guid;
    
    // [ActivateVirtualGpu@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d794, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5c374, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d984, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) activate_virtual_gpu;
    
    // [AddVirtualGpu@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d7dc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5c3bc, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d9cc, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) add_virtual_gpu;
    
    // [BeginTransaction@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b94cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x385580, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b959c, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) begin_transaction;
    
    // [CompleteTransaction@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9550, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x385674, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9620, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) complete_transaction;
    
    // [??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27e6d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3352c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27e724, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) construct_instance;
    
    // [DecrementNumVmProcesses@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27ef28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3359a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27ef78, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) decrement_num_vm_processes;
    
    // [??1DXGVIRTUALMACHINE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27e894, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x335510, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27e8e4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyVirtualMachine@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27efa8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x335a28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27eff8, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) destroy_virtual_machine;
    
    // [EndTransaction@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9680, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3857c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9750, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) end_transaction;
    
    // [GetNumStartedVirtualGpu@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4ab50, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b8b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x4ada0, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) get_num_started_virtual_gpu;
    
    // [IncrementNumVmProcesses@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27fdc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x336ef8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27fe40, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) increment_num_vm_processes;
    
    // [InitializeVirtualMachine@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27fec8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x337054, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27ff48, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) initialize_virtual_machine;
    
    // [IsVailEnabled@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28020c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x337470, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28028c, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) is_vail_enabled;
    
    // [OnVmwpDestruction@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45e24, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57b08, 0x84380 bytes
    // dxgkrnl.sys .text:0x46014, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) on_vmwp_destruction;
    
    // [PauseVmBusChannels@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28035c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3375c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2803dc, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) pause_vm_bus_channels;
    
    // [QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2359ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x366104, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235b1c, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) query_swap_chain_binding_status_from_vm;
    
    // [ReferenceVailObject@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x280464, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x337708, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2804e4, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) reference_vail_object;
    
    // [RemoveVirtualGpu@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d858, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5c438, 0x84380 bytes
    // dxgkrnl.sys .text:0x3da48, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) remove_virtual_gpu;
    
    // [ResetVirtualGpu@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d8cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5c4ac, 0x84380 bytes
    // dxgkrnl.sys .text:0x3dabc, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) reset_virtual_gpu;
    
    // [ResetVirtualMachine@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x280568, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3378f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2805e8, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) reset_virtual_machine;
    
    // [SetSharedPage@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x280a6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x337e44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x280aec, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) set_shared_page;
    
    // [SetVailObject@DXGVIRTUALMACHINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x280be8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x338070, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x280c68, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) set_vail_object;
};
#include "magic/api.end.hpp"
