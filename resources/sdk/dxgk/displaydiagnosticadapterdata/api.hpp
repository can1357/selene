#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::displaydiagnosticadapterdata
{
    // [GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x4d2a8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_vid_pn_target_info;
    
    // [NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2f0940, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) need_lid_state_recovery;
    
    // [GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24610, 0x762b0 bytes
    // dxgkrnl.sys .text:0x252b4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_next_vid_pn_target_info;
    
    // [AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b4034, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ed764, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b40d4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_dmm_segment_buffer;
    
    // [AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b41cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ed954, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b426c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) add_driver_blackbox_info;
    
    // [AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b43a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2edbc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b4448, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) add_driver_whitebox_info;
    
    // [AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b4470, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2edce4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b4510, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) add_vid_pn_source_info;
    
    // [AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b4560, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ede28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b4600, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) add_vid_pn_target_info;
    
    // [CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b4fb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ee924, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b5050, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) collect_display_adapter_diag_data;
    
    // [??0DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b010, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4ce80, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b260, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) construct_instance;
    
    // [CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b58f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ef458, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b5990, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) create_miniport_blackbox_live_dump;
    
    // [??1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b120, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d050, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b370, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) destroy_instance;
    
    // [GetNextVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x245e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2c110, 0x84380 bytes
    // dxgkrnl.sys .text:0x2528c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) get_next_vid_pn_source_info;
};
#include "magic/api.end.hpp"
