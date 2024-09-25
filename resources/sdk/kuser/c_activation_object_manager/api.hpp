#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_activation_object_manager
{
    // [BringISMUptodate@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd8d04, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) bring_ism_uptodate;
    
    // [CreateActivationGroup@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004
    // win32kbase.sys .text:0x13a4ac, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create_activation_group;
    
    // [DestroyActivationGroup@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004
    // win32kbase.sys .text:0x13a548, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_activation_group;
    
    // [DestroyActivationObject@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15cbcc, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_activation_object;
    
    // [Initialize@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x85634, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [NotifySystemSateChanged@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xaaa38, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) notify_system_sate_changed;
    
    // [QueryActivationObjectData@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15cedc, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) query_activation_object_data;
    
    // [SetForegroundRedirectionLuid@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15d1d0, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) set_foreground_redirection_luid;
    
    // [ZapForeground@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15d348, 0x27ef0 bytes
    //
    _m8(sdk::unknown_ptr) zap_foreground;
    
    // [CleanUp@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xbeb58, 0x243e0 bytes
    // win32kbase.sys .text:0xb8158, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) clean_up;
    
    // [??0CActivationObjectManager@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc3908, 0x243e0 bytes
    // win32kbase.sys .text:0xbcc18, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) construct_instance;
    
    // [CreateActivationGroupWithId@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xbff24, 0x243e0 bytes
    // win32kbase.sys .text:0xb9908, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) create_activation_group_with_id;
    
    // [DestroyActivationObjectInternal@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x90ad0, 0x243e0 bytes
    // win32kbase.sys .text:0x6ddd0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) destroy_activation_object_internal;
    
    // [EnumerateAllGroups@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xbeee4, 0x243e0 bytes
    // win32kbase.sys .text:0xb84e4, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) enumerate_all_groups;
    
    // [GetContainingGroupIdFromActivationObject@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x9093c, 0x243e0 bytes
    // win32kbase.sys .text:0x6dc3c, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) get_containing_group_id_from_activation_object;
    
    // [GetForegroundWindowForGroup@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x13a80c, 0x243e0 bytes
    // win32kbase.sys .text:0x137f70, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) get_foreground_window_for_group;
    
    // [GetGroupFromGroupId@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x8ec34, 0x243e0 bytes
    // win32kbase.sys .text:0x6ccb4, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) get_group_from_group_id;
    
    // [NotifyActivationObjectStateOnCleanup@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x90810, 0x243e0 bytes
    // win32kbase.sys .text:0x6db10, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) notify_activation_object_state_on_cleanup;
    
    // [QueryActivationObject@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x9087c, 0x243e0 bytes
    // win32kbase.sys .text:0x6db7c, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) query_activation_object;
    
    // [SetState@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x13aa1c, 0x243e0 bytes
    // win32kbase.sys .text:0x138178, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) set_state;
    
    // [AddActivationObjectToHashTable@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ed64, 0x243e0 bytes
    // win32kbase.sys .text:0xaab20, 0x27ef0 bytes
    // win32kbase.sys .text:0x6cdc0, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) add_activation_object_to_hash_table;
    
    // [ConfigureActivationObject@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13a400, 0x243e0 bytes
    // win32kbase.sys .text:0xaa4f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x137db0, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) configure_activation_object;
    
    // [CreateActivationObject@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8eabc, 0x243e0 bytes
    // win32kbase.sys .text:0xaa904, 0x27ef0 bytes
    // win32kbase.sys .text:0x6cb4c, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) create_activation_object;
    
    // [ForEachActivatableQueue@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13a6f8, 0x243e0 bytes
    // win32kbase.sys .text:0x15cd9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x137e5c, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) for_each_activatable_queue;
    
    // [GetActivationObjectFromLuid@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x90964, 0x243e0 bytes
    // win32kbase.sys .text:0xaa7a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x6dc64, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) get_activation_object_from_luid;
    
    // [OnThreadTermination@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x90c74, 0x243e0 bytes
    // win32kbase.sys .text:0xaa5e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x6dfd4, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) on_thread_termination;
    
    // [SetForeground@CActivationObjectManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13a8a0, 0x243e0 bytes
    // win32kbase.sys .text:0x15cfe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x137ffc, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) set_foreground;
};
#include "magic/api.end.hpp"
