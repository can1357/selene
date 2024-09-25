#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdxgikeyedmutex
{
    // [Initialize@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x294cb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x321fd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x294d58, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [Abandon@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17c7b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x292d9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31fa90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x292e3c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) abandon;
    
    // [AcquireCPU@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17c7d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x292dc8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31fabc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x292e68, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_cpu;
    
    // [CloseConsumerResources@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17cb98, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2931e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3200a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x293284, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) close_consumer_resources;
    
    // [CloseFromDevice@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17cc20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2932bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x320180, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29335c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) close_from_device;
    
    // [CloseLocalMutex@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17ce94, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29358c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32051c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29362c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) close_local_mutex;
    
    // [??1DXGDXGIKEYEDMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17c6c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x292c70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31f8e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x292d10, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17dd78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x294c58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x321f50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x294cf8, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) has_consumer_gpu_work_finished;
    
    // [OpenForDevice@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17e590, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2956e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32299c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x295788, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) open_for_device;
    
    // [OpenLocalMutex@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17e720, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2959e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x220ae4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x295a84, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) open_local_mutex;
    
    // [OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17e7d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x295ad0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x322e1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x295b70, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) open_shared_surf_for_device;
    
    // [Release@DXGDXGIKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17f31c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x296bf8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x324218, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x296c98, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
