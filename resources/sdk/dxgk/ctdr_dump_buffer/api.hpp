#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ctdr_dump_buffer
{
    // [AddSegment@CTDR_DUMP_BUFFER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x168180, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25ea58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x305198, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25ebb8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_segment;
    
    // [??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x168028, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25e8b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x304fd4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25ea10, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [ShrinkLastSegment@CTDR_DUMP_BUFFER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1683e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25f13c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30590c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25f29c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) shrink_last_segment;
};
#include "magic/api.end.hpp"
