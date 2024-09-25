#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_endpoint_resource_state_manager
{
    // [IsSimpleUpdatePresent@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7fad8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) is_simple_update_present;
    
    // [PrepareBufferSignals@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7faf8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) prepare_buffer_signals;
    
    // [PrepareIFlipInfo@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7fbf4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) prepare_i_flip_info;
    
    // [PrepareUpdateTokens@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x80960, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) prepare_update_tokens;
    
    // [CancelPendingUpdates@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69808, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69998, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) cancel_pending_updates;
    
    // [PrepareCSMBufferInfo@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69c38, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69dc8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) prepare_csm_buffer_info;
    
    // [PrepareUpdateTokensForDwm@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a558, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6a6e8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) prepare_update_tokens_for_dwm;
    
    // [ApplyIncrementalUpdate@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x694dc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f544, 0x84380 bytes
    // dxgkrnl.sys .text:0x6966c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) apply_incremental_update;
    
    // [ClearAllContentBindings@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69880, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f7a8, 0x84380 bytes
    // dxgkrnl.sys .text:0x69a10, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) clear_all_content_bindings;
    
    // [CommitPendingUpdates@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69904, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f834, 0x84380 bytes
    // dxgkrnl.sys .text:0x69a94, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) commit_pending_updates;
    
    // [DestroyAllResourceStates@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69a08, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f8a8, 0x84380 bytes
    // dxgkrnl.sys .text:0x69b98, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) destroy_all_resource_states;
    
    // [FindPoolBufferIndex@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69a78, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f918, 0x84380 bytes
    // dxgkrnl.sys .text:0x69c08, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) find_pool_buffer_index;
    
    // [FindResourceState@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69acc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f96c, 0x84380 bytes
    // dxgkrnl.sys .text:0x69c5c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) find_resource_state;
    
    // [PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69d18, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7fe14, 0x84380 bytes
    // dxgkrnl.sys .text:0x69ea8, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) prepare_incremental_update_for_state_manager;
    
    // [PrepareIncrementalUpdateForUser@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a008, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80414, 0x84380 bytes
    // dxgkrnl.sys .text:0x6a198, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) prepare_incremental_update_for_user;
    
    // [RemovePoolBufferState@CEndpointResourceStateManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a910, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80ae4, 0x84380 bytes
    // dxgkrnl.sys .text:0x6aaa0, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) remove_pool_buffer_state;
};
#include "magic/api.end.hpp"
