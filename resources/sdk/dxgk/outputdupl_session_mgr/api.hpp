#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::outputdupl_session_mgr
{
    // [??0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1c68b4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [AddDebugInfo@OUTPUTDUPL_SESSION_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17c8d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x292f04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31fc7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x292fa4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_debug_info;
    
    // [AddRef@OUTPUTDUPL_SESSION_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17c988, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x292fd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31fd6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x293070, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_ref;
    
    // [CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17d2b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x293a94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x320b2c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x293b34, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) create_remote_output_dupl_mgr;
    
    // [??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x913a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x155374, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e16b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14ce68, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@OUTPUTDUPL_SESSION_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91400, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1553d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c7288, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158b14, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91300, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x155dd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c71d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158c2c, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) initialize_max_active_output_dupl_apps;
    
    // [ProcessTerminated@OUTPUTDUPL_SESSION_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x9127c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10c92c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a22a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11895c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) process_terminated;
    
    // [Release@OUTPUTDUPL_SESSION_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17f498, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296da0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x324484, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x296e40, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) release;
    
    // [TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17fcac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x297664, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x324cc8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x297704, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) trigger_low_box_active_context_wnf;
};
#include "magic/api.end.hpp"
