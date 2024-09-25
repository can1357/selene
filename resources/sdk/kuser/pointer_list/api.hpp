#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pointer_list
{
    // [AddLostCaptureTarget@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f58f4, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) add_lost_capture_target;
    
    // [CreateAndReferenceMsgData@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f5a90, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) create_and_reference_msg_data;
    
    // [FreeMsgData@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f5d88, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) free_msg_data;
    
    // [GetPointerCapture@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f5fa0, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) get_pointer_capture;
    
    // [GetPointerOffset@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f6044, 0x13864 bytes
    //
    _m4(sdk::unknown_ptr) get_pointer_offset;
    
    // [GetPointerVisualization@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f6070, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) get_pointer_visualization;
    
    // [GetPrevMsgId@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f60c4, 0x13864 bytes
    //
    _m6(sdk::unknown_ptr) get_prev_msg_id;
    
    // [ReferenceMsgData@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f61f8, 0x13864 bytes
    //
    _m7(sdk::unknown_ptr) reference_msg_data;
    
    // [SetDelegateAction@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f6238, 0x13864 bytes
    //
    _m8(sdk::unknown_ptr) set_delegate_action;
    
    // [SetPointerCapture@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f63d8, 0x13864 bytes
    //
    _m9(sdk::unknown_ptr) set_pointer_capture;
    
    // [SetPointerInputCapture@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f6464, 0x13864 bytes
    //
    _n0(sdk::unknown_ptr) set_pointer_input_capture;
    
    // [SetPointerOffset@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f64b4, 0x13864 bytes
    //
    _n1(sdk::unknown_ptr) set_pointer_offset;
    
    // [SetPointerVisualization@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f64e4, 0x13864 bytes
    //
    _n2(sdk::unknown_ptr) set_pointer_visualization;
    
    // [UnreferenceMsgData@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f656c, 0x13864 bytes
    //
    _n3(sdk::unknown_ptr) unreference_msg_data;
    
    // [UpdateActivePointer@PointerList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f65b0, 0x13864 bytes
    //
    _n4(sdk::unknown_ptr) update_active_pointer;
};
#include "magic/api.end.hpp"
