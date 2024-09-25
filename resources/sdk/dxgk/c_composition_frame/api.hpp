#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_composition_frame
{
    // [AddFlipManagerSignal@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x76114, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_flip_manager_signal;
    
    // [s_frameIdCounter@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .data:0xaf980, 0x762b0 bytes
    // dxgkrnl.sys .data:0xaf980, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) s_frame_id_counter;
    
    // [AddRef@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a8b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x203f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af30, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_ref;
    
    // [Confirm@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x15580, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14330, 0x84380 bytes
    // dxgkrnl.sys .text:0x15d10, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) confirm;
    
    // [Discard@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd5b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x13f40, 0x84380 bytes
    // dxgkrnl.sys .text:0xda40, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) discard;
    
    // [GetBatches@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a980, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20440, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b000, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_batches;
    
    // [GetFrameId@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a9a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20460, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b020, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_frame_id;
    
    // [GetNextLegacyTokenBlock@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x16000, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19870, 0x84380 bytes
    // dxgkrnl.sys .text:0x16790, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_next_legacy_token_block;
    
    // [GetSurfaceUpdates@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x103e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x11b30, 0x84380 bytes
    // dxgkrnl.sys .text:0x10870, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_surface_updates;
    
    // [Release@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x13710, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14170, 0x84380 bytes
    // dxgkrnl.sys .text:0x13ea0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) release;
    
    // [Retire@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x148d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x18af0, 0x84380 bytes
    // dxgkrnl.sys .text:0x15060, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) retire;
    
    // [ReturnLegacyTokenBuffer@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x13974, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14408, 0x84380 bytes
    // dxgkrnl.sys .text:0x14104, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) return_legacy_token_buffer;
    
    // [SetBatches@CCompositionFrame]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a9b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20470, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b030, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) set_batches;
};
#include "magic/api.end.hpp"
