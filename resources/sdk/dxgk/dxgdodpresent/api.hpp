#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdodpresent
{
    // [NotifyHostMonitorPowerState@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bd404, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) notify_host_monitor_power_state;
    
    // [ReleaseVidPnSourceOwnership@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x185a90, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) release_vid_pn_source_ownership;
    
    // [CreatePeriodicFrameNotification@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f7fb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc86c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f7d20, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_periodic_frame_notification;
    
    // [NotifyGlobalVmBusStatusChange@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f8a88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bd3ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f87f8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) notify_global_vm_bus_status_change;
    
    // [??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xee4e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x161b7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x206edc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x184ee4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGDODPRESENT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184798, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f78f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc0dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f7664, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [Flush@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc48d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14db90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1daec8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14fe70, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) flush;
    
    // [GetAdapter@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc218, 0x60098 bytes
    // dxgkrnl.sys .text:0x19d94, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d7e4, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a4d4, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_adapter;
    
    // [NotifyDpc@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x275b8, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c298, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6cc3c, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c428, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) notify_dpc;
    
    // [NotifyInterrupt@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x27654, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c368, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6cd18, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c4f8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) notify_interrupt;
    
    // [PresentDisplayOnlySetProgress@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x27778, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c4cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6ce5c, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c65c, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) present_display_only_set_progress;
    
    // [StartHwVSync@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18653c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fae44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bfdbc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fabb4, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) start_hw_v_sync;
    
    // [StopHwVSync@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1865d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2faf0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bfed8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fac7c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) stop_hw_v_sync;
    
    // [TriggerDisplayOnlyTdr@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x186668, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fb054, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c00a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fadc4, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) trigger_display_only_tdr;
    
    // [UpdateDisplayModeInfo@DXGDODPRESENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1867c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fb1dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0228, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2faf4c, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) update_display_mode_info;
};
#include "magic/api.end.hpp"
