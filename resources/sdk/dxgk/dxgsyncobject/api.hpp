#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsyncobject
{
    // [??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x78ff0, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [GetRedirectedFlipFenceValue@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x59ea4, 0x84380 bytes
    // dxgkrnl.sys .text:0x46ba0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_redirected_flip_fence_value;
    
    // [??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x102c9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19a288, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10ec6c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [CreatePeriodicFrameNotification@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28a8d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33f8ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28a950, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) create_periodic_frame_notification;
    
    // [DestroyPeriodicFrameNotification@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28b194, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3402a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b214, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_periodic_frame_notification;
    
    // [FreeHostHandle@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28b29c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3403ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b31c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) free_host_handle;
    
    // [GetDxgAdapterSyncObject@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28b32c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34043c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b3ac, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_dxg_adapter_sync_object;
    
    // [GetHostHandle@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28b524, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x340680, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b5a4, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_host_handle;
    
    // [SetHostHandle@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28c6cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x341b9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28c74c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) set_host_handle;
    
    // [SetVmSyncObject@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28c7b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x341c9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28c830, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) set_vm_sync_object;
    
    // [SignalFence@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x158890, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x341f44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15b6e0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) signal_fence;
    
    // [Destroy@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x78d20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x106b24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19e1b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x112b5c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) destroy;
    
    // [??1DXGSYNCOBJECT@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x78c98, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x106cc4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19e354, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x112cfc, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) destroy_instance;
    
    // [FlagsDefault@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x37d54, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x79d38, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x91fb4, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x79d68, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) flags_default;
    
    // [GetMonitoredFenceStorage@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4c64, 0x60098 bytes
    // dxgkrnl.sys .text:0x6054, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa55c, 0x84380 bytes
    // dxgkrnl.sys .text:0x7404, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) get_monitored_fence_storage;
    
    // [GetVidSchSyncObject@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79080, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10c330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b1724, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x118360, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) get_vid_sch_sync_object;
    
    // [Initialize@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x78e68, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x102d68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x199c04, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10ed38, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) initialize;
    
    // [Open@DXGSYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x790b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x103150, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19955c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10f120, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) open;
};
#include "magic/api.end.hpp"
