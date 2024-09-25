#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::cserializedworkqueue
{
    // [??1CSERIALIZEDWORKQUEUE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x43654, 0x762b0 bytes
    // dxgkrnl.sys .text:0x535ac, 0x84380 bytes
    // dxgkrnl.sys .text:0x43844, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf144c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x176b28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2042b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16ab74, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) queue_serialized_work_item;
    
    // [SerializedQueueWorker@CSERIALIZEDWORKQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf22b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x182870, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x214fb0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x185c80, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) serialized_queue_worker;
};
#include "magic/api.end.hpp"
