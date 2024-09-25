#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace heap
{
    // [HeapGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260120, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa5f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11a50, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaab0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) guid;
    
    // [HeapRangeGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2718e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1da80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1ce98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1da00, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) range_guid;
    
    // [HeapSummaryGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2718d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1da70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1ce88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1d9f0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) summary_guid;
    
    // [HeapVidMemAllocAligned]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    // win32kfull.sys .text:0x278340, 0x1596d bytes
    // win32kfull.sys .text:0x277fd0, 0x1659e bytes
    // win32kfull.sys .text:0x2782b0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) vid_mem_alloc_aligned;
    
    // [HeapCommitFailAvoidTriageRules]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1076e0, 0x6fc38 bytes
    // ntdll.dll .text:0x114e90, 0x74648 bytes
    // ntdll.dll .text:0x107670, 0x6fc38 bytes
    //
    _m4(sdk::unknown_ptr) commit_fail_avoid_triage_rules;
    
    // [HeapSnapshotEnd]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x130528, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14baa8, 0x74648 bytes
    // ntdll.dll .rdata:0x130828, 0x6fc38 bytes
    //
    _m5(sdk::unknown_ptr) snapshot_end;
    
    // [HeapSnapshotSnap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x130578, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14baf8, 0x74648 bytes
    // ntdll.dll .rdata:0x130878, 0x6fc38 bytes
    //
    _m6(sdk::unknown_ptr) snapshot_snap;
};
#include "magic/api.end.hpp"
