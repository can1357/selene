#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::server_ports
{
    // [CreateAlpcPort@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9a10, 0x243e0 bytes
    // win32kbase.sys .text:0xbcdfc, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa338, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create_alpc_port;
    
    // [CreatePort@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb8f6c, 0x243e0 bytes
    // win32kbase.sys .text:0xbcc80, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa1bc, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create_port;
    
    // [DrainPort@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8fce0, 0x243e0 bytes
    // win32kbase.sys .text:0xbd8d8, 0x27ef0 bytes
    // win32kbase.sys .text:0xab0a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) drain_port;
    
    // [EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9b20, 0x243e0 bytes
    // win32kbase.sys .text:0xbe4ac, 0x27ef0 bytes
    // win32kbase.sys .text:0xab934, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) ensure_alpc_callback_registered;
    
    // [GetAlpcPortName@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb97c8, 0x243e0 bytes
    // win32kbase.sys .text:0xbe334, 0x27ef0 bytes
    // win32kbase.sys .text:0xab748, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_alpc_port_name;
    
    // [HandleClientDisconnect@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbe83c, 0x243e0 bytes
    // win32kbase.sys .text:0xbe54c, 0x27ef0 bytes
    // win32kbase.sys .text:0xab2f8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) handle_client_disconnect;
    
    // [HandleConnectionRequest@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb945c, 0x243e0 bytes
    // win32kbase.sys .text:0xbdfe0, 0x27ef0 bytes
    // win32kbase.sys .text:0xab3dc, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) handle_connection_request;
    
    // [OpenConnection@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8fa7c, 0x243e0 bytes
    // win32kbase.sys .text:0xbd67c, 0x27ef0 bytes
    // win32kbase.sys .text:0xaae3c, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) open_connection;
    
    // [PortSignaledCallback@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x929d0, 0x243e0 bytes
    // win32kbase.sys .text:0xbd460, 0x27ef0 bytes
    // win32kbase.sys .text:0xaac20, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) port_signaled_callback;
    
    // [s_PortInfos@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ae50, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc50, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e78, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) s_port_infos;
    
    // [Send@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8c328, 0x243e0 bytes
    // win32kbase.sys .text:0x239e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x699f8, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) send;
    
    // [Uninitialize@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc432c, 0x243e0 bytes
    // win32kbase.sys .text:0x89ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc3b80, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) uninitialize;
    
    // [UninitializeServerPort@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc2fbc, 0x243e0 bytes
    // win32kbase.sys .text:0xbc54c, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa770, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) uninitialize_server_port;
    
    // [s_CallbackObject@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x125248, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ae40, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc60, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e80, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) s_callback_object;
    
    // [s_CallbackRegistration@ServerPorts@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x124cf8, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ae48, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc58, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e70, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) s_callback_registration;
};
#include "magic/api.end.hpp"
