#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace spi
{
    // [SpiInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c6148, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x666c98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c4fa8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) init;
    
    // [SpiMax311BufferRxData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c6264, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x666db4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c50c4, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) max311_buffer_rx_data;
    
    // [SpiMax311GetByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c62a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x666df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c5100, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) max311_get_byte;
    
    // [SpiMax311HardwareDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc05358, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc08c20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc05398, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) max311_hardware_driver;
    
    // [SpiMax311InitializePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c6340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x666e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c51a0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) max311_initialize_port;
    
    // [SpiMax311PutByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c6380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x666ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c51e0, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) max311_put_byte;
    
    // [SpiMax311RxReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c6410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x666f50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c5270, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) max311_rx_ready;
    
    // [SpiMax311SetBaud]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c6470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x666fb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c52d0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) max311_set_baud;
    
    // [SpiMax311TxEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c65c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x667104, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c5424, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) max311_tx_empty;
    
    // [SpiSend16]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c65fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x66713c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c545c, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) send16;
    
    // [SpiSetAccessTimeOut]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14a884, 0x243e0 bytes
    // win32kbase.sys .text:0x17d740, 0x27ef0 bytes
    // win32kbase.sys .text:0x147ea4, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_access_time_out;
    
    // [SpiSetFilterKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14ab24, 0x243e0 bytes
    // win32kbase.sys .text:0x17d990, 0x27ef0 bytes
    // win32kbase.sys .text:0x148144, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_filter_keys;
    
    // [SpiSetStickyKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14ac94, 0x243e0 bytes
    // win32kbase.sys .text:0x17dadc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1482b4, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_sticky_keys;
    
    // [SpiSetToggleKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14ae24, 0x243e0 bytes
    // win32kbase.sys .text:0x17dc90, 0x27ef0 bytes
    // win32kbase.sys .text:0x148444, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_toggle_keys;
    
    // [SPIBlockedByFiltering]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x105a68, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c338, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27ff08, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a378, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) blocked_by_filtering;
    
    // [SPISetIconMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1cff18, 0x13864 bytes
    // win32kfull.sys .text:0x1d7168, 0x1596d bytes
    // win32kfull.sys .text:0x1d4b84, 0x1659e bytes
    // win32kfull.sys .text:0x1d7008, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) set_icon_metrics;
    
    // [SPISetIconTitleFont]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d0008, 0x13864 bytes
    // win32kfull.sys .text:0x1d726c, 0x1596d bytes
    // win32kfull.sys .text:0x14a208, 0x1659e bytes
    // win32kfull.sys .text:0x1d710c, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) set_icon_title_font;
};
#include "magic/api.end.hpp"
