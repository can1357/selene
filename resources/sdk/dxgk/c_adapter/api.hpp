#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_adapter
{
    // [AddRef@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1aa20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x204a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b0a0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_ref;
    
    // [AddSignalToContext@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61b10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x765d0, 0x84380 bytes
    // dxgkrnl.sys .text:0x61ca0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_signal_to_context;
    
    // [AddSignalToContextByPtr@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61ba0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76670, 0x84380 bytes
    // dxgkrnl.sys .text:0x61d30, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_signal_to_context_by_ptr;
    
    // [AddWaitToContext@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61bc0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76690, 0x84380 bytes
    // dxgkrnl.sys .text:0x61d50, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_wait_to_context;
    
    // [AllocateCascadedSignalingResources@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61c30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76700, 0x84380 bytes
    // dxgkrnl.sys .text:0x61dc0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) allocate_cascaded_signaling_resources;
    
    // [Create@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc920, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14ec4, 0x84380 bytes
    // dxgkrnl.sys .text:0xcdb0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) create;
    
    // [CreateSyncObject@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61ec0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76990, 0x84380 bytes
    // dxgkrnl.sys .text:0x62050, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) create_sync_object;
    
    // [??1CAdapter@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc794, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14d34, 0x84380 bytes
    // dxgkrnl.sys .text:0xcc24, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) destroy_instance;
    
    // [FreeCascadedSignalingResources@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61f30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76a00, 0x84380 bytes
    // dxgkrnl.sys .text:0x620c0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) free_cascaded_signaling_resources;
    
    // [GetGenerationId@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1aa40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x204c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b0c0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_generation_id;
    
    // [Initialize@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc9ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14f84, 0x84380 bytes
    // dxgkrnl.sys .text:0xce7c, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) initialize;
    
    // [Release@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc730, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14cd0, 0x84380 bytes
    // dxgkrnl.sys .text:0xcbc0, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) release;
    
    // [SignalTokenSync@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4460, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7010, 0x84380 bytes
    // dxgkrnl.sys .text:0x5800, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) signal_token_sync;
    
    // [UpdateRenderFence@CAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd374, 0x762b0 bytes
    // dxgkrnl.sys .text:0x13d18, 0x84380 bytes
    // dxgkrnl.sys .text:0xd804, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) update_render_fence;
};
#include "magic/api.end.hpp"
