#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::registrar_client
{
    // [Connect@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb90e8, 0x243e0 bytes
    // win32kbase.sys .text:0xbcf0c, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa4f4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) connect;
    
    // [InitializeMessageAttributes@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb92f4, 0x243e0 bytes
    // win32kbase.sys .text:0xbd124, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa700, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize_message_attributes;
    
    // [InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9668, 0x243e0 bytes
    // win32kbase.sys .text:0xbe140, 0x27ef0 bytes
    // win32kbase.sys .text:0xab5e8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_security_descriptor;
    
    // [PrepareConnection@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8fe44, 0x243e0 bytes
    // win32kbase.sys .text:0xbda3c, 0x27ef0 bytes
    // win32kbase.sys .text:0xab204, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) prepare_connection;
    
    // [RegisterPort@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9364, 0x243e0 bytes
    // win32kbase.sys .text:0xbd250, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa8e4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) register_port;
    
    // [s_Reply_Parameter1@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ae28, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc38, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e58, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) s_reply_parameter1;
    
    // [s_Reply_Result@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x255198, 0x243e0 bytes
    // win32kbase.sys .data:0x2a8738, 0x27ef0 bytes
    // win32kbase.sys .data:0x2521a8, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) s_reply_result;
    
    // [UnregisterObject@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc3144, 0x243e0 bytes
    // win32kbase.sys .text:0xbc604, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa9dc, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) unregister_object;
    
    // [UnregisterPort@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc3074, 0x243e0 bytes
    // win32kbase.sys .text:0xbc6c8, 0x27ef0 bytes
    // win32kbase.sys .text:0xaaaa8, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) unregister_port;
    
    // [Initialize@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x99ac, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3bec, 0x243e0 bytes
    // win32kbase.sys .text:0xbd3b8, 0x27ef0 bytes
    // win32kbase.sys .text:0xaab78, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) initialize;
    
    // [s_MaxReceiveMessagePayloadSize@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9f4, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ae34, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc40, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e64, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) s_max_receive_message_payload_size;
    
    // [s_MaxSendMessagePayloadSize@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9f0, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ae30, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc30, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e60, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) s_max_send_message_payload_size;
    
    // [s_Port@RegistrarClient@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x124cf0, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ae20, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc28, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e50, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) s_port;
};
#include "magic/api.end.hpp"
