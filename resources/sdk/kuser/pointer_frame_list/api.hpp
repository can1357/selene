#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pointer_frame_list
{
    // [CommitAndReferenceFrame@PointerFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c2bc0, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) commit_and_reference_frame;
    
    // [DelegateCoalesceQFrame@PointerFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c352c, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) delegate_coalesce_q_frame;
    
    // [FreePointerInfoNode@PointerFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c3a50, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) free_pointer_info_node;
    
    // [GetEarliestTPFrame@PointerFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c3b64, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) get_earliest_tp_frame;
    
    // [GetNextFrame@PointerFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c3ba4, 0x13864 bytes
    //
    _m4(sdk::unknown_ptr) get_next_frame;
    
    // [SetPointerInfoNodeDelegateAction@PointerFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c44d0, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) set_pointer_info_node_delegate_action;
    
    // [SetPointerInfoNodeMessagePosted@PointerFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c45ec, 0x13864 bytes
    //
    _m6(sdk::unknown_ptr) set_pointer_info_node_message_posted;
    
    // [SetPointerInfoNodeTarget@PointerFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c4724, 0x13864 bytes
    //
    _m7(sdk::unknown_ptr) set_pointer_info_node_target;
};
#include "magic/api.end.hpp"
