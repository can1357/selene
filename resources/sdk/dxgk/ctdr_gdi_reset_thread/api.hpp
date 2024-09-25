#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ctdr_gdi_reset_thread
{
    // [??1CTDR_GDI_RESET_THREAD@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x30505c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [SwitchGdi@CTDR_GDI_RESET_THREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1684c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25f230, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x25f390, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) switch_gdi;
    
    // [GdiCalloutLoop@CTDR_GDI_RESET_THREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x168254, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25ef7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x305758, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25f0dc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) gdi_callout_loop;
    
    // [IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x168350, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25f0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x305870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25f200, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) is_tdr_adapter_used_in_session_callback;
    
    // [Worker@CTDR_GDI_RESET_THREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x169fc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x260ee0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x307580, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x261040, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) worker;
};
#include "magic/api.end.hpp"
