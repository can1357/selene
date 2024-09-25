#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvailguestobject
{
    // [??1DXGVAILGUESTOBJECT@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5b70c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [AddReference@DXGVAILGUESTOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2aee38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x350968, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aeed8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_reference;
    
    // [CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2af818, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35132c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2af8b8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_vm_bus_guest_subscribers;
    
    // [DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2afdf4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3518a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2afe94, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_vm_bus_guest_subscribers;
    
    // [EnableVmBusChannel@DXGVAILGUESTOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4aa90, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b760, 0x84380 bytes
    // dxgkrnl.sys .text:0x4ace0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) enable_vm_bus_channel;
    
    // [Initialize@DXGVAILGUESTOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b01d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351d44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0270, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [ReleaseReference@DXGVAILGUESTOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b06c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352218, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0768, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) release_reference;
    
    // [SetVmBusChannel@DXGVAILGUESTOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4ac20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b980, 0x84380 bytes
    // dxgkrnl.sys .text:0x4ae70, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) set_vm_bus_channel;
};
#include "magic/api.end.hpp"
