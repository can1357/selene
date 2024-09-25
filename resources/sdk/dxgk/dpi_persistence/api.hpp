#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dpi_persistence
{
    // [AllocateMonitorSetIdFromAdapterSource@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1322dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1be824, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x135840, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) allocate_monitor_set_id_from_adapter_source;
    
    // [AppendMonitorId@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1335f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1be21c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x136b5c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) append_monitor_id;
    
    // [CreateMonitorSetId@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x133310, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1be2b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x136874, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_monitor_set_id;
    
    // [GetMonitorIdFromTargetId@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x13367c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bdf50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x136be0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_monitor_id_from_target_id;
    
    // [ReadDpiFromRegistry@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x131ef8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c111c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13545c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) read_dpi_from_registry;
    
    // [SaveHKCUPathInSessionData@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135fb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e41c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x139510, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) save_hkcu_path_in_session_data;
    
    // [SortMonitorSetIdAndAppendHash@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x132384, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1be8d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1358e8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) sort_monitor_set_id_and_append_hash;
    
    // [WriteDpiToHKLMRegistry@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a4264, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fad6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a4304, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) write_dpi_to_hklm_registry;
    
    // [WriteDpiToRegistry@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a4328, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fae64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a43c8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) write_dpi_to_registry;
    
    // [WriteDwordToParticularRegValue@DpiPersistence]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x131d94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0fa8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1352f8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) write_dword_to_particular_reg_value;
};
#include "magic/api.end.hpp"
