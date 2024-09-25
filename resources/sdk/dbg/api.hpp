#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"
#include "../win/debug_event_t.hpp"
#include "../nt/dbgui_wait_state_change_t.hpp"
#include "../stor/port/raid_adapter_extension_t.hpp"

#include "magic/api.start.hpp"
namespace dbg
{
    // [DbgBreakPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1635d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbd20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd600, 0x1fe000 bytes
    //
    _m0(sdk::function<void()>*) break_point;
    
    // [DbgBreakPointWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1635f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbd40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4307a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd620, 0x1fe000 bytes
    //
    _m1(sdk::function<void(uint32_t)>*) break_point_with_status;
    
    // [DbgBreakPointWithStatusEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1635f2, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbd42, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4307a2, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd622, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) break_point_with_status_end;
    
    // [DbgCommandString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x147c88, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5926e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f460, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) command_string;
    
    // [DbgEnumerateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133d3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x390d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39cb50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391dd0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) enumerate_callback;
    
    // [DbgLoadImageSymbols]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79d38, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d8f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3399e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ec70, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) load_image_symbols;
    
    // [DbgLoadImageSymbolsUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79cf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d894, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3397cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ec14, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) load_image_symbols_unicode;
    
    // [DbgLoadUserImageSymbols]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a1e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c7748, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592744, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8618, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) load_user_image_symbols;
    
    // [DbgPrint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79a10, 0x32828 bytes
    // ntoskrnl.exe .text:0x216700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38a720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33c640, 0x1fe000 bytes
    //
    _m8(sdk::function<uint32_t(const char*, ...)>*) print;
    
    // [DbgPrintEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x799d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b1a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38a770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c520, 0x1fe000 bytes
    //
    _m9(sdk::function<uint32_t(uint32_t, uint32_t, const char*, ...)>*) print_ex;
    
    // [DbgPrintReturnControlC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21122c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f4d0, 0x1fe000 bytes
    //
    _n0(sdk::function<uint32_t(const char*, ...)>*) print_return_control_c;
    
    // [DbgPrompt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21126c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5927d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f520, 0x1fe000 bytes
    //
    _n1(sdk::function<uint32_t(const char*, char*, uint32_t)>*) prompt;
    
    // [DbgQueryDebugFilterState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2112a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f570, 0x1fe000 bytes
    //
    _n2(sdk::function<int32_t(uint32_t, uint32_t)>*) query_debug_filter_state;
    
    // [DbgSetDebugFilterState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13ddb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b1c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca4c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2510, 0x1fe000 bytes
    //
    _n3(sdk::function<int32_t(uint32_t, uint32_t, uint8_t)>*) set_debug_filter_state;
    
    // [DbgSetDebugPrintCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2112b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f590, 0x1fe000 bytes
    //
    _n4(sdk::function<int32_t(sdk::function<void(nt::ascii_view*, uint32_t, uint32_t)>*, uint8_t)>*) set_debug_print_callback;
    
    // [DbgUnLoadImageSymbols]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2112cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f5c0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) un_load_image_symbols;
    
    // [DbgUnLoadImageSymbolsUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e50c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36e5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f940, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) un_load_image_symbols_unicode;
    
    // [DbgUnicodeStringToAnsiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79d84, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d944, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339824, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ecc4, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) unicode_string_to_ansi_string;
    
    // [DbgUserBreakPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1635e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbd30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd610, 0x1fe000 bytes
    //
    _n8(sdk::function<void()>*) user_break_point;
    
    // [DbgDumpNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xf4d1e, 0x27ef0 bytes
    //
    _n9(sdk::unknown_ptr) dump_node;
    
    // [DbgLockQCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    //
    _o0(sdk::unknown_ptr) lock_q_cursor;
    
    // [DbgPrintRIM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x2cb98, 0x1eb80 bytes
    //
    _o1(sdk::unknown_ptr) print_rim;
    
    // [DbgPrintRIMAlways]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xc6540, 0x1eb80 bytes
    //
    _o2(sdk::unknown_ptr) print_rim_always;
    
    // [DbgPrintError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14cb60, 0x243e0 bytes
    // win32kbase.sys .text:0x17fcf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x14a180, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) print_error;
    
    // [DbgPrintWarning]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13dac, 0x243e0 bytes
    // win32kbase.sys .text:0x84ac4, 0x27ef0 bytes
    // win32kbase.sys .text:0x7395c, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) print_warning;
    
    // [DbgPrintGDI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc6540, 0x1eb80 bytes
    // win32kbase.sys .text:0x14cb60, 0x243e0 bytes
    // win32kbase.sys .text:0x17fcf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x14a180, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) print_gdi;
    
    // [DbgValidateHooks]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d560, 0x13864 bytes
    // win32kfull.sys .text:0x1291d0, 0x1596d bytes
    // win32kfull.sys .text:0x1198f0, 0x1659e bytes
    // win32kfull.sys .text:0x12a110, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) validate_hooks;
    
    // [DbgGetAddressLongFromXrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x26410, 0x1b430 bytes
    // storport.sys .text:0x27ca0, 0x2be18 bytes
    // storport.sys .text:0x30e98, 0x440c8 bytes
    // storport.sys .text:0x27ca0, 0x2be18 bytes
    //
    _o7(sdk::unknown_ptr) get_address_long_from_xrb;
    
    // [DbgLogRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xbafc, 0x1b430 bytes
    // storport.sys .text:0xe6e8, 0x2be18 bytes
    // storport.sys .text:0x117b0, 0x440c8 bytes
    // storport.sys .text:0xe6e8, 0x2be18 bytes
    //
    _o8(sdk::function<void(struct stor::port::raid_adapter_extension_t*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t, int64_t)>*) log_request;
    
    // [DbgUiConnectToDbg]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd14a0, 0x67960 bytes
    // ntdll.dll .text:0xcc460, 0x6fc38 bytes
    // ntdll.dll .text:0xd7fc0, 0x74648 bytes
    // ntdll.dll .text:0xcc3e0, 0x6fc38 bytes
    //
    _o9(sdk::function<int32_t()>*) ui_connect_to_dbg;
    
    // [DbgUiContinue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1510, 0x67960 bytes
    // ntdll.dll .text:0xcc4d0, 0x6fc38 bytes
    // ntdll.dll .text:0xd8030, 0x74648 bytes
    // ntdll.dll .text:0xcc450, 0x6fc38 bytes
    //
    _p0(sdk::function<int32_t(struct nt::client_id_t*, int32_t)>*) ui_continue;
    
    // [DbgUiConvertStateChangeStructure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1540, 0x67960 bytes
    // ntdll.dll .text:0xcc500, 0x6fc38 bytes
    // ntdll.dll .text:0xd8060, 0x74648 bytes
    // ntdll.dll .text:0xcc480, 0x6fc38 bytes
    //
    _p1(sdk::function<int32_t(struct nt::dbgui_wait_state_change_t*, struct win::debug_event_t*)>*) ui_convert_state_change_structure;
    
    // [DbgUiConvertStateChangeStructureEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1550, 0x67960 bytes
    // ntdll.dll .text:0xcc510, 0x6fc38 bytes
    // ntdll.dll .text:0xd8070, 0x74648 bytes
    // ntdll.dll .text:0xcc490, 0x6fc38 bytes
    //
    _p2(sdk::unknown_ptr) ui_convert_state_change_structure_ex;
    
    // [DbgUiConvertStateChangeStructureWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1560, 0x67960 bytes
    // ntdll.dll .text:0xcc520, 0x6fc38 bytes
    // ntdll.dll .text:0xd8080, 0x74648 bytes
    // ntdll.dll .text:0xcc4a0, 0x6fc38 bytes
    //
    _p3(sdk::unknown_ptr) ui_convert_state_change_structure_worker;
    
    // [DbgUiDebugActiveProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd17f0, 0x67960 bytes
    // ntdll.dll .text:0xcc7c0, 0x6fc38 bytes
    // ntdll.dll .text:0xd8320, 0x74648 bytes
    // ntdll.dll .text:0xcc740, 0x6fc38 bytes
    //
    _p4(sdk::function<int32_t(void*)>*) ui_debug_active_process;
    
    // [DbgUiGetThreadDebugObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1850, 0x67960 bytes
    // ntdll.dll .text:0xcc830, 0x6fc38 bytes
    // ntdll.dll .text:0xd8390, 0x74648 bytes
    // ntdll.dll .text:0xcc7b0, 0x6fc38 bytes
    //
    _p5(sdk::function<void*()>*) ui_get_thread_debug_object;
    
    // [DbgUiIssueRemoteBreakin]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1870, 0x67960 bytes
    // ntdll.dll .text:0xcc850, 0x6fc38 bytes
    // ntdll.dll .text:0xd83b0, 0x74648 bytes
    // ntdll.dll .text:0xcc7d0, 0x6fc38 bytes
    //
    _p6(sdk::function<int32_t(void*)>*) ui_issue_remote_breakin;
    
    // [DbgUiRemoteBreakin]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd18e0, 0x67960 bytes
    // ntdll.dll .text:0xcc8c0, 0x6fc38 bytes
    // ntdll.dll .text:0xd8420, 0x74648 bytes
    // ntdll.dll .text:0xcc840, 0x6fc38 bytes
    //
    _p7(sdk::function<void(void*)>*) ui_remote_breakin;
    
    // [DbgUiSetThreadDebugObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1940, 0x67960 bytes
    // ntdll.dll .text:0xcc920, 0x6fc38 bytes
    // ntdll.dll .text:0xd8480, 0x74648 bytes
    // ntdll.dll .text:0xcc8a0, 0x6fc38 bytes
    //
    _p8(sdk::function<void(void*)>*) ui_set_thread_debug_object;
    
    // [DbgUiStopDebugging]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1960, 0x67960 bytes
    // ntdll.dll .text:0xcc940, 0x6fc38 bytes
    // ntdll.dll .text:0xd84a0, 0x74648 bytes
    // ntdll.dll .text:0xcc8c0, 0x6fc38 bytes
    //
    _p9(sdk::function<int32_t(void*)>*) ui_stop_debugging;
    
    // [DbgUiWaitStateChange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1980, 0x67960 bytes
    // ntdll.dll .text:0xcc960, 0x6fc38 bytes
    // ntdll.dll .text:0xd84c0, 0x74648 bytes
    // ntdll.dll .text:0xcc8e0, 0x6fc38 bytes
    //
    _q0(sdk::function<int32_t(struct nt::dbgui_wait_state_change_t*, int64_t*)>*) ui_wait_state_change;
};
#include "magic/api.end.hpp"
