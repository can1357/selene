#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nls
{
    // [NlsDefaultCasingTableSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a2f0, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) default_casing_table_size;
    
    // [NlsEmptyLeadByteInfoTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd51aa0, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) empty_lead_byte_info_table;
    
    // [NlsActiveCodePageIsUTF8]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2b040, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b040, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) active_code_page_is_utf8;
    
    // [NlsOemCodePageIsUTF8]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2b041, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b041, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) oem_code_page_is_utf8;
    
    // [NlsAnsiToUnicodeData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab70, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b108, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b108, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) ansi_to_unicode_data;
    
    // [NLS_DOWNCASE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x253990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x304ae8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3037d0, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) downcase;
    
    // [NlsLeadByteInfoTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74c0c0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2dc10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2dc10, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) lead_byte_info_table;
    
    // [NlsLocaleSectionPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a188, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b178, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b178, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) locale_section_pointer;
    
    // [NlsMbAnsiCodePageTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b028, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b218, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b220, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) mb_ansi_code_page_tables;
    
    // [NlsMbOemCodePageTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af78, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b220, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b218, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) mb_oem_code_page_tables;
    
    // [NlsOemLeadByteInfoTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74c2c0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2de10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2de10, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) oem_lead_byte_info_table;
    
    // [NlsOemToUnicodeData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab58, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b128, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b128, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) oem_to_unicode_data;
    
    // [NlsRegKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec9f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97f788, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) reg_key_name;
    
    // [NlsSectionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a260, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2a0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) section_lock;
    
    // [NlsTableVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a13c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b13c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b13c, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) table_version;
    
    // [NlsTableVersionKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec9e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980eb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97f798, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) table_version_key_name;
    
    // [NlsUnicodeToAnsiData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af70, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b180, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b180, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) unicode_to_ansi_data;
    
    // [NlsUnicodeToMbAnsiData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74add0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b130, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b130, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) unicode_to_mb_ansi_data;
    
    // [NlsUnicodeToMbOemData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac40, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0d0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) unicode_to_mb_oem_data;
    
    // [NlsUnicodeToOemData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac18, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b160, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b160, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) unicode_to_oem_data;
    
    // [NLS_UPCASE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2db070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2df530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c2b0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) upcase;
    
    // [NlsAnsiCodePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aca8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b090, 0x1fe000 bytes
    //
    _o1(uint16_t*) ansi_code_page;
    
    // [NlsDirectoryAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed8e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9820f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9809d0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) directory_attributes;
    
    // [NlsDirectoryName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec9d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ec8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f7a8, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) directory_name;
    
    // [NlsLeadByteInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec050, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980320, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec00, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) lead_byte_info;
    
    // [NlsLocaleFilePathName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eca00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64ca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f778, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) locale_file_path_name;
    
    // [NlsMbCodePageTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab01, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b001, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51036, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b001, 0x1fe000 bytes
    //
    _o6(uint8_t*) mb_code_page_tag;
    
    // [NlsMbOemCodePageTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab00, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51000, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b000, 0x1fe000 bytes
    //
    _o7(uint8_t*) mb_oem_code_page_tag;
    
    // [NlsOemCodePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aca4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b074, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b074, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) oem_code_page;
    
    // [NlsOemLeadByteInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec040, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980318, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ebf8, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) oem_lead_byte_info;
    
    // [NlsKbdSendIMENotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x107d10, 0x13864 bytes
    // win32kfull.sys .text:0x2080f0, 0x1596d bytes
    // win32kfull.sys .text:0x207f60, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) kbd_send_ime_notification;
    
    // [NlsKbdSendIMENotificationBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba1c0, 0x243e0 bytes
    // win32kbase.sys .text:0xcdee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3aa0, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) kbd_send_ime_notification_base;
    
    // [NlsAlphaNumMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x325634, 0x13864 bytes
    // win32kbase.sys .data:0x258994, 0x243e0 bytes
    // win32kbase.sys .data:0x2ad738, 0x27ef0 bytes
    // win32kbase.sys .data:0x2559a4, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) alpha_num_mode;
    
    // [NlsAlphanumericModeProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a390, 0x13864 bytes
    // win32kbase.sys .text:0x1b51d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2032a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b2f80, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) alphanumeric_mode_proc;
    
    // [NlsClearKeyStateToggle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a474, 0x13864 bytes
    // win32kbase.sys .text:0x1b52e8, 0x243e0 bytes
    // win32kbase.sys .text:0x2033b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3098, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) clear_key_state_toggle;
    
    // [NlsCodeInputMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x325628, 0x13864 bytes
    // win32kbase.sys .data:0x258988, 0x243e0 bytes
    // win32kbase.sys .data:0x2ad734, 0x27ef0 bytes
    // win32kbase.sys .data:0x255998, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) code_input_mode;
    
    // [NlsCodeInputToggleProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a4e0, 0x13864 bytes
    // win32kbase.sys .text:0x1b5350, 0x243e0 bytes
    // win32kbase.sys .text:0x203420, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3100, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) code_input_toggle_proc;
    
    // [NlsConvOrNonConvProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a5f0, 0x13864 bytes
    // win32kbase.sys .text:0x1b5470, 0x243e0 bytes
    // win32kbase.sys .text:0x203540, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3220, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) conv_or_non_conv_proc;
    
    // [NlsGetCurrentInputMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a61c, 0x13864 bytes
    // win32kbase.sys .text:0x1b54a4, 0x243e0 bytes
    // win32kbase.sys .text:0x203574, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3254, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) get_current_input_mode;
    
    // [NlsHelpOrEndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a650, 0x13864 bytes
    // win32kbase.sys .text:0x1b54f0, 0x243e0 bytes
    // win32kbase.sys .text:0x2035c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b32a0, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) help_or_end_proc;
    
    // [NlsHiraganaModeProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a6d0, 0x13864 bytes
    // win32kbase.sys .text:0x1b5590, 0x243e0 bytes
    // win32kbase.sys .text:0x203660, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3340, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) hiragana_mode_proc;
    
    // [NlsHomeOrClearProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a7c0, 0x13864 bytes
    // win32kbase.sys .text:0x1b5690, 0x243e0 bytes
    // win32kbase.sys .text:0x203760, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3440, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) home_or_clear_proc;
    
    // [NlsKanaEventProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a800, 0x13864 bytes
    // win32kbase.sys .text:0x1b56d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2037a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3480, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) kana_event_proc;
    
    // [NlsKanaModeToggleProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a850, 0x13864 bytes
    // win32kbase.sys .text:0x1b5720, 0x243e0 bytes
    // win32kbase.sys .text:0x2037f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b34d0, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) kana_mode_toggle_proc;
    
    // [NlsKatakanaModeProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a8b0, 0x13864 bytes
    // win32kbase.sys .text:0x1b5780, 0x243e0 bytes
    // win32kbase.sys .text:0x203850, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3530, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) katakana_mode_proc;
    
    // [NlsKbdInitializePerSystem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121420, 0x13864 bytes
    // win32kbase.sys .text:0xc1c50, 0x243e0 bytes
    // win32kbase.sys .text:0xd4570, 0x27ef0 bytes
    // win32kbase.sys .text:0xbb3a0, 0x243e0 bytes
    //
    _q5(sdk::unknown_ptr) kbd_initialize_per_system;
    
    // [NlsKbdSendIMEProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22adc8, 0x13864 bytes
    // win32kbase.sys .text:0x1b5cdc, 0x243e0 bytes
    // win32kbase.sys .text:0x203d44, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3a8c, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) kbd_send_ime_proc;
    
    // [NlsLapseProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) lapse_proc;
    
    // [NlsNullProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x127910, 0x13864 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) null_proc;
    
    // [NlsNumpadModeProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22a9a0, 0x13864 bytes
    // win32kbase.sys .text:0x1b5880, 0x243e0 bytes
    // win32kbase.sys .text:0x203950, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b3630, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) numpad_mode_proc;
    
    // [NlsRomanMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32562c, 0x13864 bytes
    // win32kbase.sys .data:0x25898c, 0x243e0 bytes
    // win32kbase.sys .data:0x2ad730, 0x27ef0 bytes
    // win32kbase.sys .data:0x25599c, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) roman_mode;
    
    // [NlsRomanToggleProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22ab00, 0x13864 bytes
    // win32kbase.sys .text:0x1b59f0, 0x243e0 bytes
    // win32kbase.sys .text:0x203ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b37a0, 0x243e0 bytes
    //
    _r1(sdk::unknown_ptr) roman_toggle_proc;
    
    // [NlsSbcsDbcsMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x325630, 0x13864 bytes
    // win32kbase.sys .data:0x258990, 0x243e0 bytes
    // win32kbase.sys .data:0x2ad73c, 0x27ef0 bytes
    // win32kbase.sys .data:0x2559a0, 0x243e0 bytes
    //
    _r2(sdk::unknown_ptr) sbcs_dbcs_mode;
    
    // [NlsSbcsDbcsToggleProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22ac10, 0x13864 bytes
    // win32kbase.sys .text:0x1b5b10, 0x243e0 bytes
    // win32kbase.sys .text:0x203be0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b38c0, 0x243e0 bytes
    //
    _r3(sdk::unknown_ptr) sbcs_dbcs_toggle_proc;
    
    // [NlsSendBaseVk]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x127910, 0x13864 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _r4(sdk::unknown_ptr) send_base_vk;
    
    // [NlsSendParamVk]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149e90, 0x13864 bytes
    // win32kbase.sys .text:0xc9b90, 0x243e0 bytes
    // win32kbase.sys .text:0xdaba0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8530, 0x243e0 bytes
    //
    _r5(sdk::unknown_ptr) send_param_vk;
    
    // [NlsSetKeyStateToggle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1215c8, 0x13864 bytes
    // win32kbase.sys .text:0xc1e80, 0x243e0 bytes
    // win32kbase.sys .text:0xd47a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbb5d0, 0x243e0 bytes
    //
    _r6(sdk::unknown_ptr) set_key_state_toggle;
    
    // [NlsTableUseCount]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3346bc, 0x13864 bytes
    // win32kfull.sys .data:0x341948, 0x1596d bytes
    // win32kfull.sys .data:0x33ecd8, 0x1659e bytes
    // win32kfull.sys .data:0x341908, 0x1596d bytes
    //
    _r7(sdk::unknown_ptr) table_use_count;
    
    // [NlsTestKeyStateToggle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22ad1c, 0x13864 bytes
    // win32kbase.sys .text:0x1b5c2c, 0x243e0 bytes
    // win32kbase.sys .text:0x203cfc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b39dc, 0x243e0 bytes
    //
    _r8(sdk::unknown_ptr) test_key_state_toggle;
};
#include "magic/api.end.hpp"
