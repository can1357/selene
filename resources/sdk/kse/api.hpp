#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kse
{
    // [KseUserCetBasicModeAllowRetTargetNotCetCompatHookDriverTargeted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56e720, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) user_cet_basic_mode_allow_ret_target_not_cet_compat_hook_driver_targeted;
    
    // [KseUserCetBasicModeAllowRetTargetNotCetCompatShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc04a68, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) user_cet_basic_mode_allow_ret_target_not_cet_compat_shim;
    
    // [KseUserCetBasicModeAllowRetTargetNotCetCompatShimGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cc40, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) user_cet_basic_mode_allow_ret_target_not_cet_compat_shim_guid;
    
    // [KseUserCetBasicModeAllowRetTargetNotCetCompatShimHookCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cc50, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) user_cet_basic_mode_allow_ret_target_not_cet_compat_shim_hook_collections;
    
    // [KseKasperskyInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa64f48, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa64628, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) kaspersky_initialize;
    
    // [KseKernelPadSectionsOverrideInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa36340, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa35bc4, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) kernel_pad_sections_override_initialize;
    
    // [KseMemcpyInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa64f1c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa645fc, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) memcpy_initialize;
    
    // [KseSkipDriverUnloadInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa64f74, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa64654, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) skip_driver_unload_initialize;
    
    // [KseZeroPoolInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa64e54, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa64534, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) zero_pool_initialize;
    
    // [KseClearPCIDBitsInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd268, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa64ef0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa645d0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) clear_pcid_bits_initialize;
    
    // [KseHookExAllocatePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x521430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ccd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521240, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) hook_ex_allocate_pool_with_tag;
    
    // [KseHookMemcpy_s]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x522b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e3d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x522940, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) hook_memcpy_s;
    
    // [KseHookQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8beb00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c0b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd2b0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) hook_query_value_key;
    
    // [KseKasperskyKernelHooks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04d90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07090, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04dd0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) kaspersky_kernel_hooks;
    
    // [KseKasperskyShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04568, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc045a8, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) kaspersky_shim;
    
    // [KseKasperskyShimGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11fc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cbf8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12028, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) kaspersky_shim_guid;
    
    // [KseKasperskyShimHookCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04f98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07288, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04fd8, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) kaspersky_shim_hook_collections;
    
    // [KseKernelPadSectionsOverrideHookCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11e60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cc18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11ec0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) kernel_pad_sections_override_hook_collections;
    
    // [KseKernelPadSectionsOverrideShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc01918, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc049f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc01918, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) kernel_pad_sections_override_shim;
    
    // [KseKernelPadSectionsOverrideShimGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11e50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cc08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11eb0, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) kernel_pad_sections_override_shim_guid;
    
    // [KseKPSOHookDriverTargeted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eb0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec6d0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) kpso_hook_driver_targeted;
    
    // [KseMemcpyKernelHooks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04d50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07050, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04d90, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) memcpy_kernel_hooks;
    
    // [KseMemcpyShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04530, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04570, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) memcpy_shim;
    
    // [KseMemcpyShimGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11fb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cbe8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12018, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) memcpy_shim_guid;
    
    // [KseMemcpyShimHookCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04f68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07258, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04fa8, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) memcpy_shim_hook_collections;
    
    // [KseUseVtHardware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9590, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xa4c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9590, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) use_vt_hardware;
    
    // [KseZeroPoolKernelHooks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04950, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06c50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04990, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) zero_pool_kernel_hooks;
    
    // [KseZeroPoolShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04418, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc064f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04458, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) zero_pool_shim;
    
    // [KseZeroPoolShimGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11f58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11fb8, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) zero_pool_shim_guid;
    
    // [KseZeroPoolShimHookCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc04e30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07118, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04e70, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) zero_pool_shim_hook_collections;
    
    // [KseAddHardwareId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497c1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73fb8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d4684, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7477cc, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) add_hardware_id;
    
    // [KseClearPCIDBitsKernelHooks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4cb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04cf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06ff0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04d30, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) clear_pcid_bits_kernel_hooks;
    
    // [KseClearPCIDBitsShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3e98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc044f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc065d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04538, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) clear_pcid_bits_shim;
    
    // [KseClearPCIDBitsShimGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11fa8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cbd8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12008, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) clear_pcid_bits_shim_guid;
    
    // [KseClearPCIDBitsShimHookCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4db0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04f38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07228, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04f78, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) clear_pcid_bits_shim_hook_collections;
    
    // [KseDriverLoadImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5009c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73ba5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x787104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74369c, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) driver_load_image;
    
    // [KseDriverScopeInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79ee6c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa64e80, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27354, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa64560, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) driver_scope_initialize;
    
    // [KseDriverUnloadImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536b14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7560f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb8ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75db44, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) driver_unload_image;
    
    // [KseDsCallbackHookAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de374, 0x32828 bytes
    // ntoskrnl.exe .text:0x521480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56cd20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521290, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) ds_callback_hook_add_device;
    
    // [KseDsCallbackHookDriverStartIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de444, 0x32828 bytes
    // ntoskrnl.exe .text:0x521570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ce10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521380, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) ds_callback_hook_driver_start_io;
    
    // [KseDsCallbackHookDriverUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de484, 0x32828 bytes
    // ntoskrnl.exe .text:0x5215d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ce70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5213e0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) ds_callback_hook_driver_unload;
    
    // [KseDsCallbackHookIrpDeviceControlFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de4b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x521610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ceb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521420, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) ds_callback_hook_irp_device_control_function;
    
    // [KseDsCallbackHookIrpFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de51c, 0x32828 bytes
    // ntoskrnl.exe .text:0x521690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56cf30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5214a0, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) ds_callback_hook_irp_function;
    
    // [KseDsCallbackHookIrpInternalDeviceControlFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de4b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x521610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ceb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521420, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) ds_callback_hook_irp_internal_device_control_function;
    
    // [KseDsCallbackHookIrpPnpFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de590, 0x32828 bytes
    // ntoskrnl.exe .text:0x521720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56cfc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521530, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) ds_callback_hook_irp_pnp_function;
    
    // [KseDsCallbackHookIrpPowerFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de624, 0x32828 bytes
    // ntoskrnl.exe .text:0x5217d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5215e0, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) ds_callback_hook_irp_power_function;
    
    // [KseDsCompletionHookForPowerDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de70c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5218d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5216e0, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) ds_completion_hook_for_power_device;
    
    // [KseDsCompletionHookForStartDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de720, 0x32828 bytes
    // ntoskrnl.exe .text:0x521900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521710, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) ds_completion_hook_for_start_device;
    
    // [KseDsCompletionHookForStopDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de734, 0x32828 bytes
    // ntoskrnl.exe .text:0x521930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d1d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521740, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) ds_completion_hook_for_stop_device;
    
    // [KseDsEventAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb98, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d928, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b8f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dc68, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) ds_event_add_device;
    
    // [KseDsEventCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb58, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f598, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3db28, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f8d8, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) ds_event_create_device;
    
    // [KseDsEventDataIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb48, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ddf8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bec0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e138, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) ds_event_data_irp;
    
    // [KseDsEventDevicePowerCompleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fad8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f518, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3da98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f858, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) ds_event_device_power_completed;
    
    // [KseDsEventDevicePowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27faf8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e678, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c8e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e9b8, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) ds_event_device_power_irp;
    
    // [KseDsEventDriverLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fbb8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e448, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c648, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e788, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) ds_event_driver_load;
    
    // [KseDsEventDriverUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fba8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ecf8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d038, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f038, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) ds_event_driver_unload;
    
    // [KseDsEventPnpIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb38, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2de80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bf78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e1c0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) ds_event_pnp_irp;
    
    // [KseDsEventPoolAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb88, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e378, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c560, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e6b8, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) ds_event_pool_allocate;
    
    // [KseDsEventPoolFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb78, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2da50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ba48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dd90, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) ds_event_pool_free;
    
    // [KseDsEventRequestPowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fae8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2df68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c090, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e2a8, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) ds_event_request_power_irp;
    
    // [KseDsEventStartDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb28, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e458, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c658, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e798, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) ds_event_start_device;
    
    // [KseDsEventStartIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb68, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f248, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d720, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f588, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) ds_event_start_io;
    
    // [KseDsEventStopDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb18, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d808, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b7d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2db48, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) ds_event_stop_device;
    
    // [KseDsEventSystemPowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fb08, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f040, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d510, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f380, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) ds_event_system_power_irp;
    
    // [KseDsHookDriverTargeted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de748, 0x32828 bytes
    // ntoskrnl.exe .text:0x521960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521770, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) ds_hook_driver_targeted;
    
    // [KseDsHookDriverUntargeted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de760, 0x32828 bytes
    // ntoskrnl.exe .text:0x521980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521790, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) ds_hook_driver_untargeted;
    
    // [KseDsHookExAllocatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de778, 0x32828 bytes
    // ntoskrnl.exe .text:0x5219a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5217b0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) ds_hook_ex_allocate_pool;
    
    // [KseDsHookExAllocatePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de7c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x521a00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d2a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521810, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) ds_hook_ex_allocate_pool_with_tag;
    
    // [KseDsHookExFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de818, 0x32828 bytes
    // ntoskrnl.exe .text:0x521a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521880, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) ds_hook_ex_free_pool;
    
    // [KseDsHookExFreePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de840, 0x32828 bytes
    // ntoskrnl.exe .text:0x521ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5218c0, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) ds_hook_ex_free_pool_with_tag;
    
    // [KseDsHookIoCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de870, 0x32828 bytes
    // ntoskrnl.exe .text:0x521af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x521900, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) ds_hook_io_create_device;
    
    // [KseDsHookPoRequestPowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1de8f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x521b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56d430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5219a0, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) ds_hook_po_request_power_irp;
    
    // [KseDsKernelHooks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5780, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04c10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06f10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04c50, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) ds_kernel_hooks;
    
    // [KseDsShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f47b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc03100, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc049c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc03140, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) ds_shim;
    
    // [KseDsShimGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cbc8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11ff8, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) ds_shim_guid;
    
    // [KseDsShimHookCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5940, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04ef0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc071e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04f30, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) ds_shim_hook_collections;
    
    // [KseDsShimIrpHooks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5620, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04ab0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06db0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04af0, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) ds_shim_irp_hooks;
    
    // [KseEngine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3271a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc503d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc647f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc503d0, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) engine;
    
    // [KseEtwHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341ed8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf42a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16b38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf42a0, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) etw_handle;
    
    // [KseFlagsApplied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260ae8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xe5b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11908, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe068, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) flags_applied;
    
    // [KseGetIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f018, 0x32828 bytes
    // ntoskrnl.exe .text:0x3616d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3916e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362af0, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) get_io_callbacks;
    
    // [KseHookMmGetVirtualForPhysical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df63c, 0x32828 bytes
    // ntoskrnl.exe .text:0x522ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5228c0, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) hook_mm_get_virtual_for_physical;
    
    // [KseHookMmMapIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df66c, 0x32828 bytes
    // ntoskrnl.exe .text:0x522af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x522900, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) hook_mm_map_io_space;
    
    // [KseInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7825d0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3896c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27a6c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa38e1c, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) initialize;
    
    // [KseLookupHardwareId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6586ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bdb24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bc2d4, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) lookup_hardware_id;
    
    // [KseQueryDeviceData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538f64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73f910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82aeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x747550, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) query_device_data;
    
    // [KseQueryDeviceDataList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x657000, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bc400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96a880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8babb0, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) query_device_data_list;
    
    // [KseQueryDeviceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538e44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73fed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82ad90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x747b10, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) query_device_flags;
    
    // [KseRegisterShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560e50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79f3b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b5c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a75d0, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) register_shim;
    
    // [KseRegisterShimEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560e58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79f3d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82b5e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a75f0, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) register_shim_ex;
    
    // [KseResetDeviceCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x657174, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bc56c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96aa2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bad1c, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) reset_device_cache;
    
    // [KseSetCompletionHook]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ddf2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x520fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3da200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x520db0, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) set_completion_hook;
    
    // [KseSetDeviceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6571dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bc600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96aab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8badb0, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) set_device_flags;
    
    // [KseShimDatabaseBootInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8580, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6ec84, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5e4c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e23c, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) shim_database_boot_initialize;
    
    // [KseShimDatabaseBootRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55ff38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x851064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a57a0, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) shim_database_boot_release;
    
    // [KseShimDatabaseClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff7d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78774c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740fa8, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) shim_database_close;
    
    // [KseShimDatabaseOpen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50055c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b5dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7875f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74321c, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) shim_database_open;
    
    // [KseShimDriverIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff3e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738b04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786748, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740744, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) shim_driver_io_callbacks;
    
    // [KseShimsApplied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fbe8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ebc8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12d90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ef08, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) shims_applied;
    
    // [KseSkipDriverUnloadCallbackHookDriverUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df69c, 0x32828 bytes
    // ntoskrnl.exe .text:0x522bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5229c0, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) skip_driver_unload_callback_hook_driver_unload;
    
    // [KseSkipDriverUnloadEventDriverLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fbd8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e9f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cca0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ed38, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) skip_driver_unload_event_driver_load;
    
    // [KseSkipDriverUnloadEventDriverUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fbc8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e368, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c550, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e6a8, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) skip_driver_unload_event_driver_unload;
    
    // [KseSkipDriverUnloadHookDriverTargeted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df6a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x522bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5229e0, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) skip_driver_unload_hook_driver_targeted;
    
    // [KseSkipDriverUnloadHookDriverUntargeted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1df6c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x522bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x522a00, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) skip_driver_unload_hook_driver_untargeted;
    
    // [KseSkipDriverUnloadShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f47e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc03138, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04a30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc03178, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) skip_driver_unload_shim;
    
    // [KseSkipDriverUnloadShimGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11fd8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cc30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12038, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) skip_driver_unload_shim_guid;
    
    // [KseSkipDriverUnloadShimHookCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5988, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04fc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc072b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc05008, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) skip_driver_unload_shim_hook_collections;
    
    // [KseSkipDriverUnloadShimIrpHooks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5860, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04dd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc070d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04e10, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) skip_driver_unload_shim_irp_hooks;
    
    // [KseUnregisterShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x657994, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bce40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96b020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bb5f0, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) unregister_shim;
    
    // [KseVersionLieInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79eed8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa64fa0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb273c4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa64680, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) version_lie_initialize;
};
#include "magic/api.end.hpp"
