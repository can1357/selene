#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ctdr_submit_report_thread
{
    // [Worker@CTDR_SUBMIT_REPORT_THREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16a010, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x260f40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3075f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2610a0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) worker;
};
#include "magic/api.end.hpp"
