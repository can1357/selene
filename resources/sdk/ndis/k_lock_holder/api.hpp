#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_lock_holder
{
    // [AcquireExclusive@KLockHolder]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7e84, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfd9f8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10b588, 0x1e858 bytes
    // ndis.sys PAGE:0xfdf20, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_exclusive;
    
    // [AcquireShared@KLockHolder]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7e30, 0x1c8a8 bytes
    // ndis.sys PAGE:0x10525c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1047d8, 0x1e858 bytes
    // ndis.sys PAGE:0x10577c, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_shared;
    
    // [??1KLockHolder@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7ed8, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfded0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10b52c, 0x1e858 bytes
    // ndis.sys PAGE:0xfe3f0, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [ReleaseExclusive@KLockHolder]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7e5c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x109814, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10546c, 0x1e858 bytes
    // ndis.sys PAGE:0x109d34, 0x1d2c0 bytes
    //
    _m3(sdk::unknown_ptr) release_exclusive;
    
    // [ReleaseShared@KLockHolder]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7eb0, 0x1c8a8 bytes
    // ndis.sys PAGE:0x109e90, 0x1d2c0 bytes
    // ndis.sys PAGE:0x105654, 0x1e858 bytes
    // ndis.sys PAGE:0x10a3b0, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) release_shared;
};
#include "magic/api.end.hpp"
