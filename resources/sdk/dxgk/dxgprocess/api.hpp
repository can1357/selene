#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocess
{
    // [AddCopyProtection@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x453b4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_copy_protection;
    
    // [??0DXGPROCESS@@AEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xb30d8, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGPROCESS@@AEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xb2f60, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [GetCsStartRunningTime@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x57a38, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) get_cs_start_running_time;
    
    // [GetRenderAdapterInfo@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0xd3e8, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) get_render_adapter_info;
    
    // [ReportProcess@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x33779c, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) report_process;
    
    // [UpdateHandleInstance@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xac84, 0x60098 bytes
    //
    _m6(sdk::unknown_ptr) update_handle_instance;
    
    // [CreateResourceHandleSafe@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2f80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4320, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) create_resource_handle_safe;
    
    // [AcquireReference@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x22cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3244, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a9c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) acquire_reference;
    
    // [AddDevice@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdef34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b75f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe87f4, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) add_device;
    
    // [ApplyCsFunction@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27ea94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x22143c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27eae4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) apply_cs_function;
    
    // [CollectRunningTime@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27ee40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2214f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27ee90, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) collect_running_time;
    
    // [??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x10b3dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cf004, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11740c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) construct_instance_;
    
    // [DestroyAdapterInfo@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1070cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x171144, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1130fc, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) destroy_adapter_info;
    
    // [??1DXGPROCESS@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x106d68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18e770, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x112da0, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) destroy_instance_;
    
    // [GetDeviceRemovalSupport@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27f99c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x336a68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27fa1c, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) get_device_removal_support;
    
    // [GetGpuPreferenceDListState@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45ddc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57ad0, 0x84380 bytes
    // dxgkrnl.sys .text:0x45fcc, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) get_gpu_preference_d_list_state;
    
    // [GetHostProcess@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27fb04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x336c2c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27fb84, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) get_host_process;
    
    // [GetProcessSchedulingPriorityBand@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27fc90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x336db8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27fd10, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) get_process_scheduling_priority_band;
    
    // [GetVirtualGpuDevice@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27fce4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x336e34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27fd64, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) get_virtual_gpu_device;
    
    // [GetWin32kInterface@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x16fdc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7370, 0x84380 bytes
    // dxgkrnl.sys .text:0x1776c, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) get_win32k_interface;
    
    // [IsCurrentThreadAppContainer@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x280188, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3373f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x280208, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) is_current_thread_app_container;
    
    // [IsRemoteConnection@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9ea4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb424, 0x84380 bytes
    // dxgkrnl.sys .text:0x2700, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) is_remote_connection;
    
    // [IsVmProcessOrVmValidation@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7aa0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc274, 0x84380 bytes
    // dxgkrnl.sys .text:0x3a58, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) is_vm_process_or_vm_validation;
    
    // [NotifyProcessFreeze@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe0ec4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16a3e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd8244, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) notify_process_freeze;
    
    // [NotifyProcessThaw@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe0550, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15b734, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdba84, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) notify_process_thaw;
    
    // [OpenCurrentThreadToken@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28027c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3374e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2802fc, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) open_current_thread_token;
    
    // [ReferenceVailObject@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2803fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x337674, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28047c, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) reference_vail_object;
    
    // [SetCsStartRunningTime@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45e84, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57b68, 0x84380 bytes
    // dxgkrnl.sys .text:0x46074, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) set_cs_start_running_time;
    
    // [SetProcessSchedulingPriorityBand@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28082c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x337c08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2808ac, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) set_process_scheduling_priority_band;
    
    // [SetVailObject@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x280b74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x337ffc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x280bf4, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) set_vail_object;
    
    // [SetWin32kInterface@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x151068, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dffa4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x154348, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) set_win32k_interface;
    
    // [AcquireDeviceLockForAllDevices@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1755c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27e938, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21520c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27e988, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) acquire_device_lock_for_all_devices;
    
    // [AllocHandleSafe@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xabd8, 0x60098 bytes
    // dxgkrnl.sys .text:0x75d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc50c, 0x84380 bytes
    // dxgkrnl.sys .text:0x8934, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) alloc_handle_safe;
    
    // [CloseAdapter@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb34c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2f38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x170fac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd9b5c, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) close_adapter;
    
    // [CreateDxgProcess@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91704, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10b188, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ced78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1171b8, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) create_dxg_process;
    
    // [DeferredInitialize@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb33bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144228, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d2a24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147138, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) deferred_initialize;
    
    // [Destroy@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb2984, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10c358, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a07ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x118388, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) destroy;
    
    // [DestroyDxgProcess@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x92054, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1077b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a2334, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1137e0, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) destroy_dxg_process;
    
    // [EvictAllResources@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1759a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27f69c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3365a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27f71c, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) evict_all_resources;
    
    // [FlushAllDevice@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x175b54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27f8b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21531c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27f930, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) flush_all_device;
    
    // [FreeHandleSafe@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xad70, 0x60098 bytes
    // dxgkrnl.sys .text:0x26c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xbdf0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b8c, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) free_handle_safe;
    
    // [GetAllocationSafe@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xadc8, 0x60098 bytes
    // dxgkrnl.sys .text:0x140b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7280, 0x84380 bytes
    // dxgkrnl.sys .text:0x14840, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) get_allocation_safe;
    
    // [GetAllocationUnsafe@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x111b8, 0x60098 bytes
    // dxgkrnl.sys .text:0x239f4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b678, 0x84380 bytes
    // dxgkrnl.sys .text:0x24690, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) get_allocation_unsafe;
    
    // [GetByHandle@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8f6e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe0cd4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16a23c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd8054, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) get_by_handle;
    
    // [GetCurrent@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x975d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x109ce0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a0600, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x115d10, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) get_current;
    
    // [GetResourceSafe@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11080, 0x60098 bytes
    // dxgkrnl.sys .text:0x23a8c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b770, 0x84380 bytes
    // dxgkrnl.sys .text:0x24728, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) get_resource_safe;
    
    // [GetResourceUnsafe@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1113c, 0x60098 bytes
    // dxgkrnl.sys .text:0x23b70, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b8b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x2480c, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) get_resource_unsafe;
    
    // [Initialize@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb2d00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x100174, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19516c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10c144, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) initialize;
    
    // [OpenAdapter@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb3588, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x115384, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b4a74, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x121914, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) open_adapter;
    
    // [ProcessStatusChange@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb3234, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x112d98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1aa644, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11f388, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) process_status_change;
    
    // [ReleaseDeviceLockForAllDevices@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x175c24, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2804c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2153f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x280548, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) release_device_lock_for_all_devices;
    
    // [ReleaseReference@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xac48, 0x60098 bytes
    // dxgkrnl.sys .text:0x2250, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa77c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a20, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) release_reference;
    
    // [ReleaseVidPnSourceOwners@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb2800, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x150344, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7330, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x153388, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) release_vid_pn_source_owners;
    
    // [RemoveCopyProtection@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ea3c, 0x60098 bytes
    // dxgkrnl.sys .text:0x3830c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4552c, 0x84380 bytes
    // dxgkrnl.sys .text:0x3853c, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) remove_copy_protection;
    
    // [SendWnfNotification@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x175cc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2806fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x337ab0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28077c, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) send_wnf_notification;
    
    // [SetProcessSchedulingPriorityClass@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb270c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x152428, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d6fd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd6cbc, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) set_process_scheduling_priority_class;
    
    // [SuspendResumeEscapeAllDevices@DXGPROCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x175dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x280d30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33820c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x280db0, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) suspend_resume_escape_all_devices;
};
#include "magic/api.end.hpp"
