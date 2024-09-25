#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdisplaycalloutqueue
{
    // [EndProcessingBatch@DXGDISPLAYCALLOUTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x263ecc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a818, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26402c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) end_processing_batch;
    
    // [RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x265fe8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30ce3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x266148, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) request_sync_callout;
    
    // [StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2666d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30d6cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x266830, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) start_processing_batch;
    
    // [SubmitBatch@DXGDISPLAYCALLOUTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x26676c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30d768, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2668cc, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) submit_batch;
    
    // [SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x266888, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30d8bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2669e8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) submit_single_entry;
};
#include "magic/api.end.hpp"
