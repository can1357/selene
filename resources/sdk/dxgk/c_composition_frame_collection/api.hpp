#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_composition_frame_collection
{
    // [AddCompositionFrame@CCompositionFrameCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x14a80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x18fa0, 0x84380 bytes
    // dxgkrnl.sys .text:0x15210, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_composition_frame;
    
    // [AddRef@CCompositionFrameCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a8b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x203f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af30, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_ref;
    
    // [DiscardAllCompositionFrames@CCompositionFrameCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xce60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x148f0, 0x84380 bytes
    // dxgkrnl.sys .text:0xd2f0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) discard_all_composition_frames;
    
    // [DiscardPreviousFrames@CCompositionFrameCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x16090, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19040, 0x84380 bytes
    // dxgkrnl.sys .text:0x16820, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) discard_previous_frames;
    
    // [FindCompositionFrame@CCompositionFrameCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x139a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x160f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x14130, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) find_composition_frame;
    
    // [Release@CCompositionFrameCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc640, 0x762b0 bytes
    // dxgkrnl.sys .text:0x15170, 0x84380 bytes
    // dxgkrnl.sys .text:0xcad0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) release;
    
    // [RemoveCompositionFrame@CCompositionFrameCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x145d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x18a00, 0x84380 bytes
    // dxgkrnl.sys .text:0x14d60, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) remove_composition_frame;
};
#include "magic/api.end.hpp"
