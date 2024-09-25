#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ink_processor
{
    // [??0InkProcessor@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124b8c, 0x1596d bytes
    // win32kfull.sys .text:0xec1f4, 0x1659e bytes
    // win32kfull.sys .text:0x125acc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1InkProcessor@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11fcac, 0x1596d bytes
    // win32kfull.sys .text:0xec2b4, 0x1659e bytes
    // win32kfull.sys .text:0x120bec, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [FindInkDeviceByRimDeviceObject@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x24fdc4, 0x1596d bytes
    // win32kfull.sys .text:0x24f734, 0x1659e bytes
    // win32kfull.sys .text:0x24fcd4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) find_ink_device_by_rim_device_object;
    
    // [IsEnabled@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7b20, 0x1596d bytes
    // win32kfull.sys .text:0x24f75c, 0x1659e bytes
    // win32kfull.sys .text:0xf89b0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) is_enabled;
    
    // [OnDeviceAttached@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x24fdec, 0x1596d bytes
    // win32kfull.sys .text:0x24f7bc, 0x1659e bytes
    // win32kfull.sys .text:0x24fcfc, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) on_device_attached;
    
    // [OnDeviceClosed@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x250054, 0x1596d bytes
    // win32kfull.sys .text:0x24fa24, 0x1659e bytes
    // win32kfull.sys .text:0x24ff64, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) on_device_closed;
    
    // [OnDeviceOpened@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x250168, 0x1596d bytes
    // win32kfull.sys .text:0x24fb40, 0x1659e bytes
    // win32kfull.sys .text:0x250078, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) on_device_opened;
    
    // [OnDeviceRemoved@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25027c, 0x1596d bytes
    // win32kfull.sys .text:0x24fc5c, 0x1659e bytes
    // win32kfull.sys .text:0x25018c, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) on_device_removed;
    
    // [OnPointerMessagePosted@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2503b8, 0x1596d bytes
    // win32kfull.sys .text:0x24fda0, 0x1659e bytes
    // win32kfull.sys .text:0x2502c8, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) on_pointer_message_posted;
    
    // [OnThreadExit@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7cf0, 0x1596d bytes
    // win32kfull.sys .text:0xec510, 0x1659e bytes
    // win32kfull.sys .text:0xf8b80, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) on_thread_exit;
    
    // [ProcessInkFeedbackCommand@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25049c, 0x1596d bytes
    // win32kfull.sys .text:0x24fe8c, 0x1659e bytes
    // win32kfull.sys .text:0x2503ac, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) process_ink_feedback_command;
    
    // [ProcessInput@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x250654, 0x1596d bytes
    // win32kfull.sys .text:0x250048, 0x1659e bytes
    // win32kfull.sys .text:0x250564, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) process_input;
    
    // [s_pInstance@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33aef0, 0x1596d bytes
    // win32kfull.sys .data:0x339270, 0x1659e bytes
    // win32kfull.sys .data:0x33af20, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) s_p_instance;
    
    // [UnlinkAndReleaseInkDevice@InkProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2506f0, 0x1596d bytes
    // win32kfull.sys .text:0x2500ec, 0x1659e bytes
    // win32kfull.sys .text:0x250600, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) unlink_and_release_ink_device;
};
#include "magic/api.end.hpp"
