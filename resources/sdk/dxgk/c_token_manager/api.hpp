#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_token_manager
{
    // [AddDisableScanoutToken@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x75a90, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_disable_scanout_token;
    
    // [CompleteIndependentFlipToken@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x18634, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) complete_independent_flip_token;
    
    // [CurrentThreadOwnsTokenManagerLock@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2c554, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) current_thread_owns_token_manager_lock;
    
    // [ReleaseTokenManagerLock@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1b020, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) release_token_manager_lock;
    
    // [PostFlipManagerProcessSummary@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61258, 0x762b0 bytes
    // dxgkrnl.sys .text:0x613e8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) post_flip_manager_process_summary;
    
    // [AddRef@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a8b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x203f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af30, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) add_ref;
    
    // [AddTokenToQueueAndSignalTokenEvent@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x60ce0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75b40, 0x84380 bytes
    // dxgkrnl.sys .text:0x60e70, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) add_token_to_queue_and_signal_token_event;
    
    // [AddUnBindToken@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ac10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x206c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b290, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) add_un_bind_token;
    
    // [ClearAnalogTokenQueue@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x60d30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75b90, 0x84380 bytes
    // dxgkrnl.sys .text:0x60ec0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) clear_analog_token_queue;
    
    // [CompleteFlipManagerToken@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x60d70, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75bd0, 0x84380 bytes
    // dxgkrnl.sys .text:0x60f00, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) complete_flip_manager_token;
    
    // [ConfirmOutstandingAnalogToken@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x60ec0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75e00, 0x84380 bytes
    // dxgkrnl.sys .text:0x61050, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) confirm_outstanding_analog_token;
    
    // [CreateCompositionFrame@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x13870, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14060, 0x84380 bytes
    // dxgkrnl.sys .text:0x14000, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) create_composition_frame;
    
    // [CreateCompositionFrameCollection@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc6b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x15100, 0x84380 bytes
    // dxgkrnl.sys .text:0xcb40, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) create_composition_frame_collection;
    
    // [DeleteAllFlipManagerTokens@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xcc88, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14a18, 0x84380 bytes
    // dxgkrnl.sys .text:0xd118, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) delete_all_flip_manager_tokens;
    
    // [DeleteAllTokens@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xcc10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x149a0, 0x84380 bytes
    // dxgkrnl.sys .text:0xd0a0, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) delete_all_tokens;
    
    // [DeleteOutstandingAnalogToken@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc480, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f7d0, 0x84380 bytes
    // dxgkrnl.sys .text:0xc910, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) delete_outstanding_analog_token;
    
    // [GetAnalogExclusiveTokenEvent@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x60f40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75e80, 0x84380 bytes
    // dxgkrnl.sys .text:0x610d0, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) get_analog_exclusive_token_event;
    
    // [GetAnalogSurfaceUpdates@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61010, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75f50, 0x84380 bytes
    // dxgkrnl.sys .text:0x611a0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) get_analog_surface_updates;
    
    // [GetCurrentAdapterSetGenerationId@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a8d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20410, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af50, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) get_current_adapter_set_generation_id;
    
    // [GetMappedSectionPointer@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x15a60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19840, 0x84380 bytes
    // dxgkrnl.sys .text:0x161f0, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) get_mapped_section_pointer;
    
    // [InitAdapterCollection@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd180, 0x762b0 bytes
    // dxgkrnl.sys .text:0x13b24, 0x84380 bytes
    // dxgkrnl.sys .text:0xd610, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) init_adapter_collection;
    
    // [IsTokenManagerReady@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x17bf0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ca70, 0x84380 bytes
    // dxgkrnl.sys .text:0x18380, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) is_token_manager_ready;
    
    // [Lock@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd720, 0x762b0 bytes
    // dxgkrnl.sys .text:0x144b0, 0x84380 bytes
    // dxgkrnl.sys .text:0xdbb0, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) lock;
    
    // [LockIfNotTokenThread@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x611d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14bf0, 0x84380 bytes
    // dxgkrnl.sys .text:0x61360, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) lock_if_not_token_thread;
    
    // [ReferenceAdapter@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x16b30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a3e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x172c0, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) reference_adapter;
    
    // [Release@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc410, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a790, 0x84380 bytes
    // dxgkrnl.sys .text:0xc8a0, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) release;
    
    // [ReleaseToFrame@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x13a80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x161d0, 0x84380 bytes
    // dxgkrnl.sys .text:0x14210, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) release_to_frame;
    
    // [ResetAdapterCollection@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc5c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x151a0, 0x84380 bytes
    // dxgkrnl.sys .text:0xca50, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) reset_adapter_collection;
    
    // [ReturnLegacyTokenBuffer@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd69c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14430, 0x84380 bytes
    // dxgkrnl.sys .text:0xdb2c, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) return_legacy_token_buffer;
    
    // [SetTokenThreadProcess@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd11c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1e648, 0x84380 bytes
    // dxgkrnl.sys .text:0xd5ac, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) set_token_thread_process;
    
    // [Unlock@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x16ff0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1b020, 0x84380 bytes
    // dxgkrnl.sys .text:0x17780, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) unlock;
    
    // [UnlockIfNotTokenThread@CTokenManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x613b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14c20, 0x84380 bytes
    // dxgkrnl.sys .text:0x61540, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) unlock_if_not_token_thread;
};
#include "magic/api.end.hpp"
