#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::session_adapter
{
    // [AddDisplaySource@SESSION_ADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x90758, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d2c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db6fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd65d8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_display_source;
    
    // [Cleanup@SESSION_ADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x907b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d620, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dba48, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd6938, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) cleanup;
    
    // [CreateCddDevice@SESSION_ADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x90b88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13d458, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cfb0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14aee4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_cdd_device;
    
    // [DestroyCddDeviceAndContext@SESSION_ADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x90844, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d694, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dbacc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd69ac, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_cdd_device_and_context;
    
    // [??1SESSION_ADAPTER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x90eb8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d5b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db9dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd68d0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [GetCddDeviceAndContext@SESSION_ADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x90a70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xde5cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b9d38, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12cd84, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_cdd_device_and_context;
    
    // [GetDisplaySource@SESSION_ADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x906b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x116f88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ad320, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x123518, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_display_source;
    
    // [Initialize@SESSION_ADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x90dd0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d560, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db984, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd6878, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [RemoveDisplaySource@SESSION_ADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x906d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d4d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db8fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd67f0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) remove_display_source;
};
#include "magic/api.end.hpp"
