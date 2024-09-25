#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvailobject
{
    // [AllocateDefaultSecurityDescriptor@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2aee8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3509e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aef2c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) allocate_default_security_descriptor;
    
    // [AllocateResourceSecurityDescriptor@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2af074, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x350bd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2af114, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) allocate_resource_security_descriptor;
    
    // [??0DXGVAILOBJECT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2aeb24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x350674, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aebc4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [Create@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2af668, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351190, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2af708, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) create;
    
    // [CreateVmBusHostSubscribers@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2af9d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35149c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2afa70, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) create_vm_bus_host_subscribers;
    
    // [??1DXGVAILOBJECT@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2aec28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35077c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aecc8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyVmBusHostSubscribers@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2afe6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351918, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aff0c, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_vm_bus_host_subscribers;
    
    // [DisableVmBusChannel@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45d84, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57998, 0x84380 bytes
    // dxgkrnl.sys .text:0x45f74, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) disable_vm_bus_channel;
    
    // [EnableVmBusChannel@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4aaf0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b808, 0x84380 bytes
    // dxgkrnl.sys .text:0x4ad40, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) enable_vm_bus_channel;
    
    // [GetHandleProcessSession@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0154, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351cc8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b01f4, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_handle_process_session;
    
    // [InitializeDWMSid@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0274, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351dd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0314, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) initialize_dwm_sid;
    
    // [InitializeVmBus@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0374, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351e74, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0414, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) initialize_vm_bus;
    
    // [IsFeatureEnabled@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b041c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351f14, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b04bc, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) is_feature_enabled;
    
    // [IsIFlipFeatureEnabled@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0474, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351f6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0514, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) is_i_flip_feature_enabled;
    
    // [NotifyVailAdapter@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b04e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351fe8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0588, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) notify_vail_adapter;
    
    // [NotifyVailSessionCallback@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0560, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352060, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0600, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) notify_vail_session_callback;
    
    // [ObjectInit@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352140, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b06f0, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) object_init;
    
    // [ResolveHandle@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b078c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3522f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b082c, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) resolve_handle;
    
    // [SetHandleProcess@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0804, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352360, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b08a4, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) set_handle_process;
    
    // [SetVmBusChannel@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4ac54, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b9b4, 0x84380 bytes
    // dxgkrnl.sys .text:0x4aea4, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) set_vm_bus_channel;
    
    // [UpdateVmBus@DXGVAILOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b089c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3523f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b093c, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) update_vm_bus;
};
#include "magic/api.end.hpp"
