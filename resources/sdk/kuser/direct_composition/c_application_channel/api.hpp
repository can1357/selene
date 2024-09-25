#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_application_channel
{
    // [CheckAndAddHandoff@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x65484, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) check_and_add_handoff;
    
    // [DiscardRemovingBinding@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x30c8, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) discard_removing_binding;
    
    // [EmitDescriptionCommand@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2adac, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) emit_description_command;
    
    // [SetCallbackId@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x64b24, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) set_callback_id;
    
    // [SetResourceCallbackId@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6668c, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) set_resource_callback_id;
    
    // [SetResourceFloatProperty@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kbase.sys .text:0x66ff8, 0x1eb80 bytes
    // win32kbase.sys .text:0x2d758, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) set_resource_float_property;
    
    // [CheckForShellResourceAccess@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ebf8, 0x243e0 bytes
    // win32kbase.sys .text:0x9c8f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f51c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) check_for_shell_resource_access;
    
    // [NewAddingBinding@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e5e8, 0x243e0 bytes
    // win32kbase.sys .text:0x9c0e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f128, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) new_adding_binding;
    
    // [ReleaseShellResourceReference@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d958, 0x243e0 bytes
    // win32kbase.sys .text:0xa0cb8, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e8d8, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) release_shell_resource_reference;
    
    // [SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de8dc, 0x243e0 bytes
    // win32kbase.sys .text:0x22ce6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc69c, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_resource_handle_array_property;
    
    // [SetResourceReferenceProperty@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9fae0, 0x243e0 bytes
    // win32kbase.sys .text:0xb0bfc, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e8d0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_resource_reference_property;
    
    // [AddAnimationTimeListEntry@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x656b4, 0x1eb80 bytes
    // win32kbase.sys .text:0xacc8c, 0x243e0 bytes
    // win32kbase.sys .text:0xc3c38, 0x27ef0 bytes
    // win32kbase.sys .text:0xa33fc, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) add_animation_time_list_entry;
    
    // [AddCrossChannelVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e4b8, 0x1eb80 bytes
    // win32kbase.sys .text:0x2360, 0x243e0 bytes
    // win32kbase.sys .text:0x21f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2360, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) add_cross_channel_visual_child;
    
    // [AddVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66908, 0x1eb80 bytes
    // win32kbase.sys .text:0x47b84, 0x243e0 bytes
    // win32kbase.sys .text:0x2bc50, 0x27ef0 bytes
    // win32kbase.sys .text:0x38068, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) add_visual_child;
    
    // [BindAnimation@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66500, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e460, 0x243e0 bytes
    // win32kbase.sys .text:0x9be94, 0x27ef0 bytes
    // win32kbase.sys .text:0x7efa0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) bind_animation;
    
    // [BuildBatch@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x684e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x73df0, 0x243e0 bytes
    // win32kbase.sys .text:0x29b90, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf00, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) build_batch;
    
    // [CapturePointer@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8438, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dde78, 0x243e0 bytes
    // win32kbase.sys .text:0x22c7a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dbc38, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) capture_pointer;
    
    // [ClearAnimationTimeList@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6555c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d914, 0x243e0 bytes
    // win32kbase.sys .text:0xa0cf4, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e894, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) clear_animation_time_list;
    
    // [Commit@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x647e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x73884, 0x243e0 bytes
    // win32kbase.sys .text:0x29810, 0x27ef0 bytes
    // win32kbase.sys .text:0xb994, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) commit;
    
    // [CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x659a8, 0x1eb80 bytes
    // win32kbase.sys .text:0x24b4, 0x243e0 bytes
    // win32kbase.sys .text:0x2390, 0x27ef0 bytes
    // win32kbase.sys .text:0x24b4, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) complete_add_cross_channel_visual_child;
    
    // [CompleteDisconnection@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x65eb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d740, 0x243e0 bytes
    // win32kbase.sys .text:0xa0b00, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e6c0, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) complete_disconnection;
    
    // [CompleteReconnection@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x65820, 0x1eb80 bytes
    // win32kbase.sys .text:0xc6450, 0x243e0 bytes
    // win32kbase.sys .text:0xa07c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e2e0, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) complete_reconnection;
    
    // [CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x658d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ddfe8, 0x243e0 bytes
    // win32kbase.sys .text:0x2ab4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dbda8, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) complete_remove_cross_channel_visual_child;
    
    // [ConfirmFrame@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64cf0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9d70, 0x243e0 bytes
    // win32kbase.sys .text:0xdae10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8710, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) confirm_frame;
    
    // [Create@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e0d4, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ae04, 0x243e0 bytes
    // win32kbase.sys .text:0xa1d20, 0x27ef0 bytes
    // win32kbase.sys .text:0x80fe0, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) create;
    
    // [CreateAndBindSharedSection@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64a88, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1a5c, 0x243e0 bytes
    // win32kbase.sys .text:0xc3dec, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7e9c, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) create_and_bind_shared_section;
    
    // [CreateBatch@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x68270, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a038, 0x243e0 bytes
    // win32kbase.sys .text:0xa21c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7c4, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) create_batch;
    
    // [CreateInternalResource@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67398, 0x1eb80 bytes
    // win32kbase.sys .text:0x465a4, 0x243e0 bytes
    // win32kbase.sys .text:0x2c97c, 0x27ef0 bytes
    // win32kbase.sys .text:0x36204, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) create_internal_resource;
    
    // [CreateInternalSharedResource@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67230, 0x1eb80 bytes
    // win32kbase.sys .text:0x7eab4, 0x243e0 bytes
    // win32kbase.sys .text:0x9c7ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f3d8, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) create_internal_shared_resource;
    
    // [CreateResource@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67ce8, 0x1eb80 bytes
    // win32kbase.sys .text:0x46510, 0x243e0 bytes
    // win32kbase.sys .text:0x2c8e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x36170, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) create_resource;
    
    // [CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x65c48, 0x1eb80 bytes
    // win32kbase.sys .text:0x2754, 0x243e0 bytes
    // win32kbase.sys .text:0x2734, 0x27ef0 bytes
    // win32kbase.sys .text:0x2754, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) create_system_visual_for_cross_channel_visual_child;
    
    // [DeleteAddingBinding@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8530, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de168, 0x243e0 bytes
    // win32kbase.sys .text:0x22ca18, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dbf28, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) delete_adding_binding;
    
    // [EmitBindingAddCommands@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67f48, 0x1eb80 bytes
    // win32kbase.sys .text:0x74dc4, 0x243e0 bytes
    // win32kbase.sys .text:0x2aa8c, 0x27ef0 bytes
    // win32kbase.sys .text:0xced4, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) emit_binding_add_commands;
    
    // [EmitBindingRemovalCommands@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6818c, 0x1eb80 bytes
    // win32kbase.sys .text:0x74320, 0x243e0 bytes
    // win32kbase.sys .text:0x2a138, 0x27ef0 bytes
    // win32kbase.sys .text:0xc430, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) emit_binding_removal_commands;
    
    // [EmitCallbackIDCommand@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67d4c, 0x1eb80 bytes
    // win32kbase.sys .text:0xb41d0, 0x243e0 bytes
    // win32kbase.sys .text:0xcac3c, 0x27ef0 bytes
    // win32kbase.sys .text:0xac4d0, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) emit_callback_id_command;
    
    // [EmitCreationCommands@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x68030, 0x1eb80 bytes
    // win32kbase.sys .text:0x74f94, 0x243e0 bytes
    // win32kbase.sys .text:0x2ac5c, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0a4, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) emit_creation_commands;
    
    // [EmitDeletionCommands@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x68108, 0x1eb80 bytes
    // win32kbase.sys .text:0x74280, 0x243e0 bytes
    // win32kbase.sys .text:0x2a098, 0x27ef0 bytes
    // win32kbase.sys .text:0xc390, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) emit_deletion_commands;
    
    // [EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67e54, 0x1eb80 bytes
    // win32kbase.sys .text:0x74f20, 0x243e0 bytes
    // win32kbase.sys .text:0x2abe8, 0x27ef0 bytes
    // win32kbase.sys .text:0xd030, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) emit_shared_section_update_commands;
    
    // [EmitUpdateCommands@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67ed4, 0x1eb80 bytes
    // win32kbase.sys .text:0x74eac, 0x243e0 bytes
    // win32kbase.sys .text:0x2ab74, 0x27ef0 bytes
    // win32kbase.sys .text:0xcfbc, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) emit_update_commands;
    
    // [FindAndDequeue@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61f18, 0x1eb80 bytes
    // win32kbase.sys .text:0x47b50, 0x243e0 bytes
    // win32kbase.sys .text:0x2dbcc, 0x27ef0 bytes
    // win32kbase.sys .text:0x377b0, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) find_and_dequeue;
    
    // [GetAnimationTime@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66b18, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de1ec, 0x243e0 bytes
    // win32kbase.sys .text:0x22cae4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dbfac, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) get_animation_time;
    
    // [GetBatchFragment@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x682e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x7476c, 0x243e0 bytes
    // win32kbase.sys .text:0x2a5a8, 0x27ef0 bytes
    // win32kbase.sys .text:0xc87c, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) get_batch_fragment;
    
    // [GetBatchMinimumPayloadSize@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64ce0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9da0, 0x243e0 bytes
    // win32kbase.sys .text:0xdae40, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8740, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) get_batch_minimum_payload_size;
    
    // [GetChannelRDPHeaders@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x68f14, 0x1eb80 bytes
    // win32kbase.sys .text:0x9ac34, 0x243e0 bytes
    // win32kbase.sys .text:0xa06a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x83a34, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) get_channel_rdp_headers;
    
    // [GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x65dec, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de2bc, 0x243e0 bytes
    // win32kbase.sys .text:0x2bf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc07c, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) get_system_visual_from_cross_channel_visual_child;
    
    // [GetType@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _q5(sdk::unknown_ptr) get_type;
    
    // [GetWeakReferenceBase@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x655dc, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de384, 0x243e0 bytes
    // win32kbase.sys .text:0xb7254, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc144, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) get_weak_reference_base;
    
    // [Initialize@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6883c, 0x1eb80 bytes
    // win32kbase.sys .text:0x79d14, 0x243e0 bytes
    // win32kbase.sys .text:0xa1ea8, 0x27ef0 bytes
    // win32kbase.sys .text:0xa4a0, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) initialize;
    
    // [NewRemovingBinding@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66304, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e26c, 0x243e0 bytes
    // win32kbase.sys .text:0x9c070, 0x27ef0 bytes
    // win32kbase.sys .text:0x7edac, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) new_removing_binding;
    
    // [NotifyBatchProcessed@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x65704, 0x1eb80 bytes
    // win32kbase.sys .text:0x7f9e0, 0x243e0 bytes
    // win32kbase.sys .text:0x9fc00, 0x27ef0 bytes
    // win32kbase.sys .text:0x80060, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) notify_batch_processed;
    
    // [OpenInternalSharedResource@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6714c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e72c, 0x243e0 bytes
    // win32kbase.sys .text:0x9c5fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f1f0, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) open_internal_shared_resource;
    
    // [OpenSharedResource@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67c7c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e68c, 0x243e0 bytes
    // win32kbase.sys .text:0x9c55c, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f150, 0x243e0 bytes
    //
    _r1(sdk::unknown_ptr) open_shared_resource;
    
    // [OpenSharedResourceHandle@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67108, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1c9c, 0x243e0 bytes
    // win32kbase.sys .text:0xc3a68, 0x27ef0 bytes
    // win32kbase.sys .text:0xa80dc, 0x243e0 bytes
    //
    _r2(sdk::unknown_ptr) open_shared_resource_handle;
    
    // [PreallocateNextBatch@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x656d8, 0x1eb80 bytes
    // win32kbase.sys .text:0x73ac4, 0x243e0 bytes
    // win32kbase.sys .text:0x298b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbbd4, 0x243e0 bytes
    //
    _r3(sdk::unknown_ptr) preallocate_next_batch;
    
    // [ProcessCommandBufferIterator@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64d40, 0x1eb80 bytes
    // win32kbase.sys .text:0x45c40, 0x243e0 bytes
    // win32kbase.sys .text:0x2c084, 0x27ef0 bytes
    // win32kbase.sys .text:0x358a0, 0x243e0 bytes
    //
    _r4(sdk::unknown_ptr) process_command_buffer_iterator;
    
    // [ProcessReturnedBatches@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x660d8, 0x1eb80 bytes
    // win32kbase.sys .text:0x741b8, 0x243e0 bytes
    // win32kbase.sys .text:0x29fa0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc2c8, 0x243e0 bytes
    //
    _r5(sdk::unknown_ptr) process_returned_batches;
    
    // [PutResourceOnUpdatedList@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66070, 0x1eb80 bytes
    // win32kbase.sys .text:0x47cfc, 0x243e0 bytes
    // win32kbase.sys .text:0x2dd44, 0x27ef0 bytes
    // win32kbase.sys .text:0x381e0, 0x243e0 bytes
    //
    _r6(sdk::unknown_ptr) put_resource_on_updated_list;
    
    // [RedirectMouseToHwnd@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3100, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f10, 0x243e0 bytes
    // win32kbase.sys .text:0x22cc88, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f10, 0x243e0 bytes
    //
    _r7(sdk::unknown_ptr) redirect_mouse_to_hwnd;
    
    // [ReferenceHandleAndLock@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b154, 0x1eb80 bytes
    // win32kbase.sys .text:0x73af8, 0x243e0 bytes
    // win32kbase.sys .text:0x27ccc, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc08, 0x243e0 bytes
    //
    _r8(sdk::unknown_ptr) reference_handle_and_lock;
    
    // [RegisterResource@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x670c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7eba8, 0x243e0 bytes
    // win32kbase.sys .text:0x9c8a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f4cc, 0x243e0 bytes
    //
    _r9(sdk::unknown_ptr) register_resource;
    
    // [ReleaseAllResources@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x649f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e138, 0x243e0 bytes
    // win32kbase.sys .text:0x9c4b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x7ed08, 0x243e0 bytes
    //
    _s0(sdk::unknown_ptr) release_all_resources;
    
    // [ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x65be4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de5b8, 0x243e0 bytes
    // win32kbase.sys .text:0x5f64, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc378, 0x243e0 bytes
    //
    _s1(sdk::unknown_ptr) release_cross_channel_visual_child;
    
    // [ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81c94, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de63c, 0x243e0 bytes
    // win32kbase.sys .text:0x5edc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc3fc, 0x243e0 bytes
    //
    _s2(sdk::unknown_ptr) release_cross_channel_visuals;
    
    // [ReleaseResource@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64510, 0x1eb80 bytes
    // win32kbase.sys .text:0x47884, 0x243e0 bytes
    // win32kbase.sys .text:0x2d8d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x374e4, 0x243e0 bytes
    //
    _s3(sdk::unknown_ptr) release_resource;
    
    // [ReleaseWeakReference@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x65598, 0x1eb80 bytes
    // win32kbase.sys .text:0xa5dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xa8d40, 0x27ef0 bytes
    // win32kbase.sys .text:0x94de0, 0x243e0 bytes
    //
    _s4(sdk::unknown_ptr) release_weak_reference;
    
    // [RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x815e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de6bc, 0x243e0 bytes
    // win32kbase.sys .text:0x29b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc47c, 0x243e0 bytes
    //
    _s5(sdk::unknown_ptr) remove_cross_channel_visual_child;
    
    // [RemoveExpiredAnimations@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6636c, 0x1eb80 bytes
    // win32kbase.sys .text:0x750c8, 0x243e0 bytes
    // win32kbase.sys .text:0x2b0a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd1d8, 0x243e0 bytes
    //
    _s6(sdk::unknown_ptr) remove_expired_animations;
    
    // [RemoveFromBatchList@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x30e4, 0x1eb80 bytes
    // win32kbase.sys .text:0xc420c, 0x243e0 bytes
    // win32kbase.sys .text:0xd94d4, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd54c, 0x243e0 bytes
    //
    _s7(sdk::unknown_ptr) remove_from_batch_list;
    
    // [RemoveVisualChild@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x667ec, 0x1eb80 bytes
    // win32kbase.sys .text:0x43508, 0x243e0 bytes
    // win32kbase.sys .text:0x2ddb4, 0x27ef0 bytes
    // win32kbase.sys .text:0x38ab8, 0x243e0 bytes
    //
    _s8(sdk::unknown_ptr) remove_visual_child;
    
    // [ReturnProcessedBatch@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x65768, 0x1eb80 bytes
    // win32kbase.sys .text:0x7f870, 0x243e0 bytes
    // win32kbase.sys .text:0x9fa18, 0x27ef0 bytes
    // win32kbase.sys .text:0x7fef0, 0x243e0 bytes
    //
    _s9(sdk::unknown_ptr) return_processed_batch;
    
    // [SetCommitCompletionEvent@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64920, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d5ec, 0x243e0 bytes
    // win32kbase.sys .text:0xa0db8, 0x27ef0 bytes
    // win32kbase.sys .text:0x818f8, 0x243e0 bytes
    //
    _t0(sdk::unknown_ptr) set_commit_completion_event;
    
    // [SetResourceAnimationProperty@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66bbc, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e35c, 0x243e0 bytes
    // win32kbase.sys .text:0x9bd90, 0x27ef0 bytes
    // win32kbase.sys .text:0x7ee9c, 0x243e0 bytes
    //
    _t1(sdk::unknown_ptr) set_resource_animation_property;
    
    // [SetResourceBufferProperty@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66e14, 0x1eb80 bytes
    // win32kbase.sys .text:0xb5618, 0x243e0 bytes
    // win32kbase.sys .text:0xb4c0c, 0x27ef0 bytes
    // win32kbase.sys .text:0xaec98, 0x243e0 bytes
    //
    _t2(sdk::unknown_ptr) set_resource_buffer_property;
    
    // [SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66a78, 0x1eb80 bytes
    // win32kbase.sys .text:0xabd1c, 0x243e0 bytes
    // win32kbase.sys .text:0xbc258, 0x27ef0 bytes
    // win32kbase.sys .text:0xa19ec, 0x243e0 bytes
    //
    _t3(sdk::unknown_ptr) set_resource_deleted_notification_tag;
    
    // [SetResourceHandleProperty@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66f60, 0x1eb80 bytes
    // win32kbase.sys .text:0xaf604, 0x243e0 bytes
    // win32kbase.sys .text:0xc1360, 0x27ef0 bytes
    // win32kbase.sys .text:0xa565c, 0x243e0 bytes
    //
    _t4(sdk::unknown_ptr) set_resource_handle_property;
    
    // [SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66cb8, 0x1eb80 bytes
    // win32kbase.sys .text:0x43684, 0x243e0 bytes
    // win32kbase.sys .text:0x2bae4, 0x27ef0 bytes
    // win32kbase.sys .text:0x388cc, 0x243e0 bytes
    //
    _t5(sdk::unknown_ptr) set_resource_reference_array_property;
    
    // [SetVisualInputSink@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66e80, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1d40, 0x243e0 bytes
    // win32kbase.sys .text:0xb1ec0, 0x27ef0 bytes
    // win32kbase.sys .text:0x91180, 0x243e0 bytes
    //
    _t6(sdk::unknown_ptr) set_visual_input_sink;
    
    // [Shutdown@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x68ca0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7de60, 0x243e0 bytes
    // win32kbase.sys .text:0x9c240, 0x27ef0 bytes
    // win32kbase.sys .text:0x7ea30, 0x243e0 bytes
    //
    _t7(sdk::unknown_ptr) shutdown;
    
    // [SubmitBatch@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66184, 0x1eb80 bytes
    // win32kbase.sys .text:0x74574, 0x243e0 bytes
    // win32kbase.sys .text:0x2ae7c, 0x27ef0 bytes
    // win32kbase.sys .text:0xc684, 0x243e0 bytes
    //
    _t8(sdk::unknown_ptr) submit_batch;
    
    // [UnbindAllAnimations@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6641c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e2dc, 0x243e0 bytes
    // win32kbase.sys .text:0x9c000, 0x27ef0 bytes
    // win32kbase.sys .text:0x7ee1c, 0x243e0 bytes
    //
    _t9(sdk::unknown_ptr) unbind_all_animations;
    
    // [UnbindAnimation@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66494, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ee70, 0x243e0 bytes
    // win32kbase.sys .text:0x9e3a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f794, 0x243e0 bytes
    //
    _u0(sdk::unknown_ptr) unbind_animation;
    
    // [UnlockAndUnreference@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x68e50, 0x1eb80 bytes
    // win32kbase.sys .text:0x9a380, 0x243e0 bytes
    // win32kbase.sys .text:0xa3d10, 0x27ef0 bytes
    // win32kbase.sys .text:0x830a0, 0x243e0 bytes
    //
    _u1(sdk::unknown_ptr) unlock_and_unreference;
    
    // [VisualCaptureBits@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe897c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1debd4, 0x243e0 bytes
    // win32kbase.sys .text:0x22d194, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc994, 0x243e0 bytes
    //
    _u2(sdk::unknown_ptr) visual_capture_bits;
    
    // [WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64868, 0x1eb80 bytes
    // win32kbase.sys .text:0xb39b8, 0x243e0 bytes
    // win32kbase.sys .text:0xc9d64, 0x27ef0 bytes
    // win32kbase.sys .text:0xabeb8, 0x243e0 bytes
    //
    _u3(sdk::unknown_ptr) wait_for_pending_and_process_returned_batches;
};
#include "magic/api.end.hpp"
