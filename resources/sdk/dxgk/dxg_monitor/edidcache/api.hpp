#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::edidcache
{
    // [AddEdid@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x213f90, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_edid;
    
    // [DeleteGlobalCache@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b2438, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) delete_global_cache;
    
    // [GetEdidForTarget@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b2470, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) get_edid_for_target;
    
    // [GetEdids@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b25e0, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) get_edids;
    
    // [InitializeGlobalCache@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x205b04, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) initialize_global_cache;
    
    // [OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b2714, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) open_edid_registry_for_target;
    
    // [ReadEdidFromRegistry@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b2894, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) read_edid_from_registry;
    
    // [s_pEdidCache@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .data:0x130ce0, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) s_p_edid_cache;
    
    // [SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x205be0, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) set_physical_dimension_of_internal_panel;
    
    // [WriteEdidToRegistry@EDIDCACHE@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b2a70, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) write_edid_to_registry;
};
#include "magic/api.end.hpp"
