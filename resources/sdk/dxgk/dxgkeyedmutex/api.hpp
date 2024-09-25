#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgkeyedmutex
{
    // [AcquireReference@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3dfa4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x557bc, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e194, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_reference;
    
    // [FreeHostHandle@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28b21c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34032c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b29c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) free_host_handle;
    
    // [GetHostHandle@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28b4bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x340618, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b53c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_host_handle;
    
    // [SetHostHandle@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28c5fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x341aac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28c67c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) set_host_handle;
    
    // [AcquireSync@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6eaa0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28a0e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33efd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28a168, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) acquire_sync;
    
    // [DestroyGlobal@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6ee50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28ad28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33fd70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28ada8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_global;
    
    // [DestroyHandle@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6e9dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28ae2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33feb8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28aeac, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_handle;
    
    // [??1DXGKEYEDMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6efa0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28a090, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33ef54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28a110, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyLocal@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6e41c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28b020, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3400b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b0a0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) destroy_local;
    
    // [Initialize@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6ef08, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28b59c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3406f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b61c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) initialize;
    
    // [IsOwner@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1104, 0x60098 bytes
    // dxgkrnl.sys .text:0x464e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x599d8, 0x84380 bytes
    // dxgkrnl.sys .text:0x466d8, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) is_owner;
    
    // [IsSameWaiter@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x258dc, 0x60098 bytes
    // dxgkrnl.sys .text:0x46528, 0x762b0 bytes
    // dxgkrnl.sys .text:0x59a18, 0x84380 bytes
    // dxgkrnl.sys .text:0x46718, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) is_same_waiter;
    
    // [Open@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6f02c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28b994, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x340bc4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28ba14, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) open;
    
    // [ReleaseReference@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x115c, 0x60098 bytes
    // dxgkrnl.sys .text:0x3e274, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5589c, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e464, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) release_reference;
    
    // [ReleaseSync@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6ec88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28c0a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x341418, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28c128, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) release_sync;
    
    // [SignalAbandoned@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6efd4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28c88c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x341db4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28c90c, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) signal_abandoned;
    
    // [SignalAbandonedInternal@DXGKEYEDMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6edb0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28c910, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x341e2c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28c990, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) signal_abandoned_internal;
};
#include "magic/api.end.hpp"
