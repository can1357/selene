#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpnsourcemodeset
{
    // [AddMode@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x102820, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x10e7f0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_mode;
    
    // [??1DMMVIDPNSOURCEMODESET@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2864, 0x60098 bytes
    // dxgkrnl.sys .text:0x8a04, 0x762b0 bytes
    // dxgkrnl.sys .text:0x9914, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2768, 0x60098 bytes
    // dxgkrnl.sys .text:0x80ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b04, 0x84380 bytes
    // dxgkrnl.sys .text:0x9000, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2604, 0x60098 bytes
    // dxgkrnl.sys .text:0x8860, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5fd0, 0x84380 bytes
    // dxgkrnl.sys .text:0x9770, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance_;
    
    // [FindBestMatch@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x296c, 0x60098 bytes
    // dxgkrnl.sys .text:0x99e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x68e44, 0x84380 bytes
    // dxgkrnl.sys .text:0xa694, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) find_best_match;
    
    // [GetFirstMode@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2a10, 0x60098 bytes
    // dxgkrnl.sys .text:0x190f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1e020, 0x84380 bytes
    // dxgkrnl.sys .text:0x19560, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_first_mode;
    
    // [GetNextMode@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x9a80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5070, 0x84380 bytes
    // dxgkrnl.sys .text:0x23e0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_next_mode;
    
    // [GetPinnedMode@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12920, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a850, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20300, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aed0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_pinned_mode;
    
    // [PinMode@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x763c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11e94c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a030, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12608c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) pin_mode;
    
    // [ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x76330, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11f28c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a55c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1265cc, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) release_ddi_enumerator;
    
    // [Serialize@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab1b8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e49a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a92f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4710, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) serialize;
    
    // [UnpinMode@DMMVIDPNSOURCEMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2930, 0x60098 bytes
    // dxgkrnl.sys .text:0x17ed8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1eb90, 0x84380 bytes
    // dxgkrnl.sys .text:0x18668, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) unpin_mode;
};
#include "magic/api.end.hpp"
