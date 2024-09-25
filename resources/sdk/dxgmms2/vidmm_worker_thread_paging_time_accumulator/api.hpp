#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_worker_thread_paging_time_accumulator
{
    // [??0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xe1b08, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xe1b50, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
