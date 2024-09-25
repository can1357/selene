#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bcp
{
    // [BcpSetCursorPosition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x239c38, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) set_cursor_position;
    
    // [BcpConvertBugDataToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bf714, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65bf64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be584, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) convert_bug_data_to_string;
    
    // [BcpConvertProgressToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238f74, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf7ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65bffc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be61c, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) convert_progress_to_string;
    
    // [BcpCursor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359298, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c3d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64510, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c3b8, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) cursor;
    
    // [BcpCursorLessThan]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23903c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf888, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65c0d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be6f8, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) cursor_less_than;
    
    // [BcpDisplayCriticalCharacter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23905c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf8b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65c100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be720, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) display_critical_character;
    
    // [BcpDisplayCriticalString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239120, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf97c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65c1cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be7ec, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) display_critical_string;
    
    // [BcpDisplayEarlyBugCheckScreen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1720, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa95f78, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb899dc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95168, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) display_early_bug_check_screen;
    
    // [BcpDisplayErrorInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239464, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bfce8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65c534, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5beb58, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) display_error_information;
    
    // [BcpDisplayParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3592b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9ee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b9a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ed8, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) display_parameters;
    
    // [BcpDisplayProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239744, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bff70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65c7c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bede0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) display_progress;
    
    // [BcpErrorMessageOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faf00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13170, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e200, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc131b0, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) error_message_offset;
    
    // [BcpFindMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c06dc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa958c4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb88588, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa94ab4, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) find_message;
    
    // [BcpGetCharacterMaxResourceProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e734, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b79bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb5cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8880, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) get_character_max_resource_profile;
    
    // [BcpGetComponentOffsets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239930, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c017c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65c9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5befec, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) get_component_offsets;
    
    // [BcpGetDisplayType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239aac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c0308, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65cb60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bf178, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) get_display_type;
    
    // [BcpGetMaxResourceProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e678, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b78f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b87bc, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) get_max_resource_profile;
    
    // [BcpGetProgressMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e50c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b7778, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b863c, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) get_progress_messages;
    
    // [BcpLastProgressDisplayed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faf0c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1318c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e21c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc131f8, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) last_progress_displayed;
    
    // [BcpLastProgressUpdateTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faea0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13128, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e1c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc131a8, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) last_progress_update_ticks;
    
    // [BcpPrintSpaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239adc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c0344, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65cb9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bf1b4, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) print_spaces;
    
    // [BcpProgressEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faef0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e210, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc131c0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) progress_end;
    
    // [BcpProgressOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faee0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13160, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e1d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc131d0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) progress_offset;
    
    // [BcpSanitizeDriverName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239b84, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c03f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65cc50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bf268, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) sanitize_driver_name;
    
    // [BcpStartTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fae98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13120, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e1b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc131a0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) start_ticks;
    
    // [BcpStringsAndSizes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25c790, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x8330, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9050, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8320, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) strings_and_sizes;
    
    // [BcpTextBoxLeftEdgeOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359290, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9ed0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b998, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ec8, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) text_box_left_edge_override;
    
    // [BcpTextBoxRightEdgeOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3592a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9ed8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b9a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ed0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) text_box_right_edge_override;
    
    // [BcpWorkspace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faec0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13140, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e1e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc131e0, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) workspace;
};
#include "magic/api.end.hpp"
