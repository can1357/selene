#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/port_message_t.hpp"

#include "magic/api.start.hpp"
namespace lpc
{
    // [LpcInitializeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f6be0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) initialize_process;
    
    // [LpcExitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9cc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x705c44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76755c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65ffa8, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) exit_process;
    
    // [LpcLegacyMaxMessageLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa25c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa230, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c278, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa230, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) legacy_max_message_length;
    
    // [LpcPortObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa208, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa260, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2a8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa260, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) port_object_type;
    
    // [LpcReplyWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x659434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _m4(sdk::function<int32_t(void*, char, struct nt::port_message_t*)>*) reply_wait_reply_port;
    
    // [LpcRequestPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41eb60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f4e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b4cc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x707060, 0x1fe000 bytes
    //
    _m5(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) request_port;
    
    // [LpcRequestWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538a58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bebd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8913a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd380, 0x1fe000 bytes
    //
    _m6(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*)>*) request_wait_reply_port;
    
    // [LpcRequestWaitReplyPortEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473bd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bebf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd3a0, 0x1fe000 bytes
    //
    _m7(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*)>*) request_wait_reply_port_ex;
    
    // [LpcSendWaitReceivePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x659448, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x668090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e63c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6db2b0, 0x1fe000 bytes
    //
    _m8(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*, uint64_t*, char, uint8_t, int64_t*)>*) send_wait_receive_port;
    
    // [LpcWaitablePortObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa550, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa398, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c470, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa398, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) waitable_port_object_type;
};
#include "magic/api.end.hpp"
