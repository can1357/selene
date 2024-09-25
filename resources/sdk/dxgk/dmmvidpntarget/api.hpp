#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpntarget
{
    // [??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x41c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x3a80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x9250, 0x84380 bytes
    // dxgkrnl.sys .text:0x4e20, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3e24, 0x60098 bytes
    // dxgkrnl.sys .text:0x3210, 0x762b0 bytes
    // dxgkrnl.sys .text:0x9e14, 0x84380 bytes
    // dxgkrnl.sys .text:0x45b0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [CreateNewCofuncModeSet@DMMVIDPNTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4610, 0x60098 bytes
    // dxgkrnl.sys .text:0x941c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc8f0, 0x84380 bytes
    // dxgkrnl.sys .text:0xa2f4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_new_cofunc_mode_set;
    
    // [IsConstructed@DMMVIDPNTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3080, 0x60098 bytes
    // dxgkrnl.sys .text:0x17a00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c190, 0x84380 bytes
    // dxgkrnl.sys .text:0x18190, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) is_constructed;
    
    // [ReleaseModeSet@DMMVIDPNTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4818, 0x60098 bytes
    // dxgkrnl.sys .text:0x9638, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6bb0, 0x84380 bytes
    // dxgkrnl.sys .text:0x8f10, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) release_mode_set;
    
    // [SetCofuncModeSet@DMMVIDPNTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x46f8, 0x60098 bytes
    // dxgkrnl.sys .text:0x950c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc9e0, 0x84380 bytes
    // dxgkrnl.sys .text:0xa3e4, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) set_cofunc_mode_set;
    
    // [SetConstructionStatus@DMMVIDPNTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12b30, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a860, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20310, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aee0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) set_construction_status;
    
    // [_SetEmptyCofuncModeSet@DMMVIDPNTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x47a4, 0x60098 bytes
    // dxgkrnl.sys .text:0xb710, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5610, 0x84380 bytes
    // dxgkrnl.sys .text:0xa884, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) set_empty_cofunc_mode_set;
};
#include "magic/api.end.hpp"
