#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::ndis::bind_state
{
    // [AddBindContext@BindState@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7bb8, 0x1c8a8 bytes
    // ndis.sys PAGE:0x102b5c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10a538, 0x1e858 bytes
    // ndis.sys PAGE:0x10307c, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) add_bind_context;
    
    // [GetActualBindingState@BindState@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7de4, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1224e4, 0x1d2c0 bytes
    // ndis.sys PAGE:0x108424, 0x1e858 bytes
    // ndis.sys PAGE:0x1229e4, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) get_actual_binding_state;
    
    // [GetBindContext@BindState@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7c74, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1023c0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x107ce8, 0x1e858 bytes
    // ndis.sys PAGE:0x1028e0, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) get_bind_context;
    
    // [IsAlive@BindState@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xc414c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1224fc, 0x1d2c0 bytes
    // ndis.sys PAGE:0x105450, 0x1e858 bytes
    // ndis.sys PAGE:0x1229fc, 0x1d2c0 bytes
    //
    _m3(sdk::unknown_ptr) is_alive;
    
    // [RemoveBindContext@BindState@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7b60, 0x1c8a8 bytes
    // ndis.sys PAGE:0x122518, 0x1d2c0 bytes
    // ndis.sys PAGE:0x103bbc, 0x1e858 bytes
    // ndis.sys PAGE:0x122a18, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) remove_bind_context;
    
    // [SetBinding@BindState@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7c04, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfcf7c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x108df8, 0x1e858 bytes
    // ndis.sys PAGE:0xfd4a4, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) set_binding;
    
    // [SetPause@BindState@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7d2c, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfd004, 0x1d2c0 bytes
    // ndis.sys PAGE:0x105f60, 0x1e858 bytes
    // ndis.sys PAGE:0xfd52c, 0x1d2c0 bytes
    //
    _m6(sdk::unknown_ptr) set_pause;
    
    // [SetSource@BindState@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7c8c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x103108, 0x1d2c0 bytes
    // ndis.sys PAGE:0x107ad0, 0x1e858 bytes
    // ndis.sys PAGE:0x103628, 0x1d2c0 bytes
    //
    _m7(sdk::unknown_ptr) set_source;
};
#include "magic/api.end.hpp"
