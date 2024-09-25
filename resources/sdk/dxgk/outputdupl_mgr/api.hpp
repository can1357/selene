#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::outputdupl_mgr
{
    // [CleanUpPendingList@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x31fffc, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) clean_up_pending_list;
    
    // [ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xc139c, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) process_release_vid_pn_ownership;
    
    // [GetDiagnosticBufferSize@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17d960, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2947fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x29489c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_diagnostic_buffer_size;
    
    // [IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x294fdc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3222fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29507c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) is_output_dupl_allowed_for_vid_pn;
    
    // [CompleteInitialization@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17cf60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2936a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x320668, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x293740, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) complete_initialization;
    
    // [??0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xee0b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1621cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20909c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x182a7c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [CreateOutputDuplication@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17cfe4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2937ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3207a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29384c, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) create_output_duplication;
    
    // [CreateSourceContextLists@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xede84, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x16201c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x208f20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1828cc, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) create_source_context_lists;
    
    // [??1OUTPUTDUPL_MGR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17c744, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x292d18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31fa08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x292db8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) destroy_instance;
    
    // [DestroySourceContextLists@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17d378, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x293b78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x320c84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x293c18, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) destroy_source_context_lists;
    
    // [FindContextForProcess@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17d464, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x294224, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x22094e, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2942c4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) find_context_for_process;
    
    // [GetAdapterLuid@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17d514, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2942ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32148c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29438c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) get_adapter_luid;
    
    // [GetDebugInfo@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17d714, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2945e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32186c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x294680, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) get_debug_info;
    
    // [GetDiagnosticBuffer@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17d8f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x294788, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x321a44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x294828, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) get_diagnostic_buffer;
    
    // [GetFrameInfo@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17d988, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x294828, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x321ac0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2948c8, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) get_frame_info;
    
    // [GetMetaData@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17daa0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29494c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x321be8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2949ec, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) get_meta_data;
    
    // [GetPointerShapeData@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17dc54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x294b28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x321e1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x294bc8, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) get_pointer_shape_data;
    
    // [Initialize@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xee024, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x161f50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x208e98, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x182800, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) initialize;
    
    // [InitializeDiagnosticBuffers@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17ddc4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x294d84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3220e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x294e24, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) initialize_diagnostic_buffers;
    
    // [InitializePacketHeader@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1638, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144eb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b02d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147dc8, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) initialize_packet_header;
    
    // [IsDiagRegKeyEnabled@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17de8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x294e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3221b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x294f30, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) is_diag_reg_key_enabled;
    
    // [IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17df20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x294f30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x322250, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x294fd0, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) is_high_freq_logging_enabled;
    
    // [LogEtw@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17df38, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x295084, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3223a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x295124, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) log_etw;
    
    // [LogEtwAndDiagnostics@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17e37c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2954c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3227e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x295560, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) log_etw_and_diagnostics;
    
    // [LogPointerPositionChangeParams@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17e3e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29552c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x220a40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2955cc, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) log_pointer_position_change_params;
    
    // [LogPresentParams@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17e480, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2955d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32285c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x295670, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) log_present_params;
    
    // [MoveContextToPendingDestroyList@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc13c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144d84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1af96c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147c94, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) move_context_to_pending_destroy_list;
    
    // [ProcessAdapterReset@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17f134, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296698, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x323b44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x296738, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) process_adapter_reset;
    
    // [ProcessDesktopSwitch@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1720, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144c70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e3ae0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147b80, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) process_desktop_switch;
    
    // [ProcessDestroyDevice@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1698, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144cfc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b12fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147c0c, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) process_destroy_device;
    
    // [ProcessLockScreenActive@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17f1b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296720, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x323bf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2967c0, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) process_lock_screen_active;
    
    // [ProcessPendingDestroy@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1540, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144f54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a0fe0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147e64, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) process_pending_destroy;
    
    // [ProcessPendingProcessTerminate@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc14e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144ca0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e0888, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147bb0, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) process_pending_process_terminate;
    
    // [ProcessPointerPositionChange@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1750, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14b670, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dcc50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14e7e0, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) process_pointer_position_change;
    
    // [ProcessPointerShapeChange@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc12b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x142aa0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ab0f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1459b0, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) process_pointer_shape_change;
    
    // [ProcessPresent@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4cc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296794, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x323c40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x296834, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) process_present;
    
    // [ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17f21c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296a78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x324020, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x296b18, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) process_remote_session_disconnect;
    
    // [QueryActiveContextCount@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4c28, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296ac4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32406c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x296b64, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) query_active_context_count;
    
    // [ReconfigureNumSources@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17f260, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296b14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3240c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x296bb4, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) reconfigure_num_sources;
    
    // [ReleaseFrame@OUTPUTDUPL_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17f5f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296f10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x324640, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x296fb0, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) release_frame;
};
#include "magic/api.end.hpp"
