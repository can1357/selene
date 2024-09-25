#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_application_channel::wait_for_commit_completion_data
{
    // [Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb3ac0, 0x243e0 bytes
    // win32kbase.sys .text:0xabfc0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [RecordBatchDeferred@WaitForCommitCompletionData@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x7facc, 0x243e0 bytes
    // win32kbase.sys .text:0x8133c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) record_batch_deferred;
};
#include "magic/api.end.hpp"
