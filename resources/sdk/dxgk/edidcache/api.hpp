#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::edidcache
{
    // [OpenEdidRegistryForTarget@EDIDCACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2710d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x271234, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) open_edid_registry_for_target;
    
    // [AddEdid@EDIDCACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf192c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1737dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x167ed4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_edid;
    
    // [??0EDIDCACHE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf1830, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a92c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b7dc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1EDIDCACHE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16dd10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270de0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270f40, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [FindEdidInCache@EDIDCACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf1adc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x173920, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x168018, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) find_edid_in_cache;
    
    // [GetEdidForTarget@EDIDCACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16dd38, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270e10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270f70, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_edid_for_target;
    
    // [GetEdids@EDIDCACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16dee4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270f98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2710f8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_edids;
    
    // [ReadEdidFromRegistry@EDIDCACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16e0a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x271258, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2713b8, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) read_edid_from_registry;
    
    // [SetPhysicalDimensionOfInternalPanel@EDIDCACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf18b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a9c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b878, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) set_physical_dimension_of_internal_panel;
    
    // [WriteEdidToRegistry@EDIDCACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16e254, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27142c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x27158c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) write_edid_to_registry;
};
#include "magic/api.end.hpp"
