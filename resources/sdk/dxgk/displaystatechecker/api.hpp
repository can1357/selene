#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::displaystatechecker
{
    // [??0DISPLAYSTATECHECKER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x4cf98, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [NeedLidStateRecovery@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2f09d8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) need_lid_state_recovery;
    
    // [AddDisplayAdapter@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b4108, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ed890, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b41a8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_display_adapter;
    
    // [CheckPrimaryContentState@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b4834, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ee1c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b48d4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) check_primary_content_state;
    
    // [CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b50a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2eeac0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b5140, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) collect_display_adapters_callback;
    
    // [CreateBlackScreenLiveDump@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b5458, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2eef40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b54f8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) create_black_screen_live_dump;
    
    // [GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b184, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d0b4, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b3d4, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_black_screen_diag_data_size;
    
    // [GetBlackScreenDiagPacket@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b59c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ef554, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b5a68, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_black_screen_diag_packet;
    
    // [GetDisplayAdapterDiagData@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b1e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d110, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b430, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_display_adapter_diag_data;
    
    // [GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b5d58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ef92c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b5df8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_driver_whitebox_diag_data;
    
    // [GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b22c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d1a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b47c, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) get_driver_whitebox_diag_data_size;
    
    // [GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b5fcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2efba0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b606c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) get_total_num_of_vidpn_sources_across_adapters;
    
    // [Initialize@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b6024, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2efbf8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b60c4, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) initialize;
    
    // [LogAllDisplayDiagInfo@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b6418, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f00a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b64b8, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) log_all_display_diag_info;
    
    // [LogDisplayBlackBoxData@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b64d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0160, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b6570, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) log_display_black_box_data;
    
    // [LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b6674, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0330, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b6714, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) log_display_black_screen_diag_packet;
    
    // [LogDisplayTelemetryAdapterInfo@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b6728, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0440, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b67c8, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) log_display_telemetry_adapter_info;
    
    // [LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b682c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f056c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b68cc, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) log_display_telemetry_diag_data;
    
    // [LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b69a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f06d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b6a40, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) log_display_telemetry_source_info;
};
#include "magic/api.end.hpp"
