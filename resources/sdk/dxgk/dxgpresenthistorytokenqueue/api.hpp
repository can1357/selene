#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpresenthistorytokenqueue
{
    // [Destroy@DXGPRESENTHISTORYTOKENQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x153228, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2c58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156708, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy;
    
    // [GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27e674, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x335268, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27e6c4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_present_history_token_slot;
    
    // [CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd2380, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x153120, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2b50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156600, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) cleanup_present_history_token_queue_adapter;
    
    // [??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc7824, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x136584, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c60d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x139ab4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc77bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x153210, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2c40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1566f0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc7744, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1364f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c6040, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x139a28, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) grow_present_history_buffer;
    
    // [Initialize@DXGPRESENTHISTORYTOKENQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc7878, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x136398, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c5ee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1398c8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc4e0, 0x60098 bytes
    // dxgkrnl.sys .text:0xe590, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7720, 0x84380 bytes
    // dxgkrnl.sys .text:0xea20, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) read_present_history;
    
    // [RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc62c, 0x60098 bytes
    // dxgkrnl.sys .text:0xe514, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76a0, 0x84380 bytes
    // dxgkrnl.sys .text:0xe9a4, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) retire_present_history;
};
#include "magic/api.end.hpp"
