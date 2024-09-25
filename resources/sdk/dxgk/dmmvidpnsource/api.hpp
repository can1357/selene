#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpnsource
{
    // [??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x31b8, 0x60098 bytes
    // dxgkrnl.sys .text:0x84b4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5d68, 0x84380 bytes
    // dxgkrnl.sys .text:0x93c8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2ee8, 0x60098 bytes
    // dxgkrnl.sys .text:0x9804, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56fc, 0x84380 bytes
    // dxgkrnl.sys .text:0x8cf4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [CreateNewCofuncModeSet@DMMVIDPNSOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x338c, 0x60098 bytes
    // dxgkrnl.sys .text:0x18524, 0x762b0 bytes
    // dxgkrnl.sys .text:0x52c8, 0x84380 bytes
    // dxgkrnl.sys .text:0xaa24, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_new_cofunc_mode_set;
    
    // [??1DMMVIDPNSOURCE@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x30c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x8704, 0x762b0 bytes
    // dxgkrnl.sys .text:0x9c00, 0x84380 bytes
    // dxgkrnl.sys .text:0x9614, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [IsConstructed@DMMVIDPNSOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3080, 0x60098 bytes
    // dxgkrnl.sys .text:0x17a00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c190, 0x84380 bytes
    // dxgkrnl.sys .text:0x18190, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) is_constructed;
    
    // [ReleaseModeSet@DMMVIDPNSOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x35c4, 0x60098 bytes
    // dxgkrnl.sys .text:0x186f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1dc64, 0x84380 bytes
    // dxgkrnl.sys .text:0x195ac, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) release_mode_set;
    
    // [SetCofuncModeSet@DMMVIDPNSOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3474, 0x60098 bytes
    // dxgkrnl.sys .text:0x18614, 0x762b0 bytes
    // dxgkrnl.sys .text:0x53b8, 0x84380 bytes
    // dxgkrnl.sys .text:0xa948, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) set_cofunc_mode_set;
    
    // [SetConstructionStatus@DMMVIDPNSOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12b30, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a860, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20310, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aee0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) set_construction_status;
    
    // [_SetEmptyCofuncModeSet@DMMVIDPNSOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3550, 0x60098 bytes
    // dxgkrnl.sys .text:0x805c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5a6c, 0x84380 bytes
    // dxgkrnl.sys .text:0x8f70, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) set_empty_cofunc_mode_set;
    
    // [SetMultisamplingMethodSet@DMMVIDPNSOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab2cc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e4af0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a940c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4860, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) set_multisampling_method_set;
};
#include "magic/api.end.hpp"
