#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace hdlsp
{
    // [HdlspAddLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x725adc, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ecae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad5b20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ebae0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) add_log_entry;
    
    // [HdlspBugCheckProcessing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x725cbc, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ecd54, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad5d84, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ebd54, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) bug_check_processing;
    
    // [HdlspDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x725de0, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ece80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad5eb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ebe80, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) dispatch;
    
    // [HdlspEnableTerminal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x72638c, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed52c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad65c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ec52c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) enable_terminal;
    
    // [HdlspGetLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726450, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed5f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad6690, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ec5f8, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) get_line;
    
    // [HdlspKernelAddLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x72671c, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed9ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad6a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ec9ac, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) kernel_add_log_entry;
    
    // [HdlspProcessDumpCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726978, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9edc18, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad6cac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ecc18, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) process_dump_command;
    
    // [HdlspPutData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726ba4, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9edfd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad7068, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ecfd0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) put_data;
    
    // [HdlspPutMore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726bf0, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ee020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad70b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed020, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) put_more;
    
    // [HdlspPutString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726c8c, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ee0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad7194, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed0c0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) put_string;
    
    // [HdlspPutWideString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726dec, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ee1e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad730c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed1e8, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) put_wide_string;
    
    // [HdlspSendBlueScreenInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726ea8, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ee2ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad73d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed2ac, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) send_blue_screen_info;
    
    // [HdlspSendStringAtBaud]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726f44, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ee350, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad7474, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed350, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) send_string_at_baud;
    
    // [HdlspSetBlueScreenInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEHDLS:0x726f74, 0x32828 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ee384, 0x1fe000 bytes
    // ntoskrnl.exe PAGEHDLS:0xad74a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEHDLS:0x9ed384, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) set_blue_screen_information;
    
    // [HdlspUTF8Encode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22beac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ac8b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac734, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) utf8_encode;
};
#include "magic/api.end.hpp"
