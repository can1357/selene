#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::hmgrtable
{
    // [??1HMGRTABLE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x30e1b8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [GetUsedEntryCount@HMGRTABLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4aa24, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5bcf0, 0x84380 bytes
    // dxgkrnl.sys .text:0x4ac74, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_used_entry_count;
    
    // [AllocHandle@HMGRTABLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79a70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf5d60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x192b70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x101d30, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) alloc_handle;
    
    // [BuildEntryHandle@HMGRTABLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79ce0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x148ad0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1defb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14c310, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) build_entry_handle;
    
    // [ExpandTable@HMGRTABLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79924, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1425ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ce440, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1454fc, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) expand_table;
    
    // [FreeHandle@HMGRTABLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79ba0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xfee10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a0380, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10ade0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) free_handle;
    
    // [GetEntryObject@HMGRTABLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79c6c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14c1ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e8d3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14edfc, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_entry_object;
    
    // [GetEntryType@HMGRTABLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79cac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x114c88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b029c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x121218, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_entry_type;
};
#include "magic/api.end.hpp"
