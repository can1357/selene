#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::proxy_window
{
    // [CreateProxyWindow@ProxyWindow]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7ac84, 0x17e70 bytes
    // dxgi.dll .text:0x7adb4, 0x17e70 bytes
    // dxgi.dll .text:0x8631c, 0x18b10 bytes
    // dxgi.dll .text:0x7c1e4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) create_proxy_window;
    
    // [CreateProxyWindowImpl@ProxyWindow]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7ad68, 0x17e70 bytes
    // dxgi.dll .text:0x7ae98, 0x17e70 bytes
    // dxgi.dll .text:0x86400, 0x18b10 bytes
    // dxgi.dll .text:0x7c2c8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) create_proxy_window_impl;
    
    // [??1ProxyWindow@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7ac6c, 0x17e70 bytes
    // dxgi.dll .text:0x7ad9c, 0x17e70 bytes
    // dxgi.dll .text:0x86304, 0x18b10 bytes
    // dxgi.dll .text:0x7c1cc, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyProxyWindowImpl@ProxyWindow]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7b024, 0x17e70 bytes
    // dxgi.dll .text:0x7b154, 0x17e70 bytes
    // dxgi.dll .text:0x866bc, 0x18b10 bytes
    // dxgi.dll .text:0x7c584, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) destroy_proxy_window_impl;
    
    // [ProcessCommand@ProxyWindow]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7b0f0, 0x17e70 bytes
    // dxgi.dll .text:0x7b220, 0x17e70 bytes
    // dxgi.dll .text:0x86860, 0x18b10 bytes
    // dxgi.dll .text:0x7c650, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) process_command;
    
    // [PromoteWindowHelper@ProxyWindow]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7b12c, 0x17e70 bytes
    // dxgi.dll .text:0x7b25c, 0x17e70 bytes
    // dxgi.dll .text:0x8689c, 0x18b10 bytes
    // dxgi.dll .text:0x7c68c, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) promote_window_helper;
    
    // [ShouldExitThread@ProxyWindow]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7b3c0, 0x17e70 bytes
    // dxgi.dll .text:0x7b4f0, 0x17e70 bytes
    // dxgi.dll .text:0x86b40, 0x18b10 bytes
    // dxgi.dll .text:0x7c920, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) should_exit_thread;
};
#include "magic/api.end.hpp"
