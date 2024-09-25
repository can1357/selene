#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_adapter
{
    // [??1CDXGIAdapter@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x5d984, 0x17e70 bytes
    // dxgi.dll .text:0x5da74, 0x17e70 bytes
    // dxgi.dll .text:0x5eea8, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [IsDesktopAccessible@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x4a054, 0x17e70 bytes
    // dxgi.dll .text:0x4a144, 0x17e70 bytes
    // dxgi.dll .text:0x4b5d4, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) is_desktop_accessible;
    
    // [CheckInterfaceSupport@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17320, 0x17e70 bytes
    // dxgi.dll .text:0x17580, 0x17e70 bytes
    // dxgi.dll .text:0x1b990, 0x18b10 bytes
    // dxgi.dll .text:0x12a90, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) check_interface_support;
    
    // [CloseKernelHandle@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17920, 0x17e70 bytes
    // dxgi.dll .text:0x17b80, 0x17e70 bytes
    // dxgi.dll .text:0x253d0, 0x18b10 bytes
    // dxgi.dll .text:0x13090, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) close_kernel_handle;
    
    // [EnumOutputs@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x16f40, 0x17e70 bytes
    // dxgi.dll .text:0x171a0, 0x17e70 bytes
    // dxgi.dll .text:0x25cc0, 0x18b10 bytes
    // dxgi.dll .text:0x126b0, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) enum_outputs;
    
    // [EnumOutputs2@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17620, 0x17e70 bytes
    // dxgi.dll .text:0x17880, 0x17e70 bytes
    // dxgi.dll .text:0x25be0, 0x18b10 bytes
    // dxgi.dll .text:0x12d90, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) enum_outputs2;
    
    // [EnumOutputsImpl@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x16524, 0x17e70 bytes
    // dxgi.dll .text:0x16784, 0x17e70 bytes
    // dxgi.dll .text:0x25d50, 0x18b10 bytes
    // dxgi.dll .text:0x11c94, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) enum_outputs_impl;
    
    // [ETWWrite@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x49e48, 0x17e70 bytes
    // dxgi.dll .text:0x49f38, 0x17e70 bytes
    // dxgi.dll .text:0x55174, 0x18b10 bytes
    // dxgi.dll .text:0x4b3c8, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) etw_write;
    
    // [FinalRelease@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1120c, 0x17e70 bytes
    // dxgi.dll .text:0x1123c, 0x17e70 bytes
    // dxgi.dll .text:0x13720, 0x18b10 bytes
    // dxgi.dll .text:0xc6ec, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) final_release;
    
    // [GetAdapterRole@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x49ef0, 0x17e70 bytes
    // dxgi.dll .text:0x49fe0, 0x17e70 bytes
    // dxgi.dll .text:0x55220, 0x18b10 bytes
    // dxgi.dll .text:0x4b470, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) get_adapter_role;
    
    // [GetDesc1@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x8ce0, 0x17e70 bytes
    // dxgi.dll .text:0x8ce0, 0x17e70 bytes
    // dxgi.dll .text:0x22b50, 0x18b10 bytes
    // dxgi.dll .text:0x1d560, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) get_desc1;
    
    // [GetDesc2@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa2a0, 0x17e70 bytes
    // dxgi.dll .text:0xa2a0, 0x17e70 bytes
    // dxgi.dll .text:0x24860, 0x18b10 bytes
    // dxgi.dll .text:0x1eab0, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) get_desc2;
    
    // [GetDesc3@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70f0, 0x17e70 bytes
    // dxgi.dll .text:0x70f0, 0x17e70 bytes
    // dxgi.dll .text:0x22890, 0x18b10 bytes
    // dxgi.dll .text:0x1bca0, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) get_desc3;
    
    // [GetRdpAdapter@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x268a0, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) get_rdp_adapter;
    
    // [NumOutputs@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x16730, 0x17e70 bytes
    // dxgi.dll .text:0x16990, 0x17e70 bytes
    // dxgi.dll .text:0x553f0, 0x18b10 bytes
    // dxgi.dll .text:0x11ea0, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) num_outputs;
    
    // [OpenAdapter@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x108c4, 0x17e70 bytes
    // dxgi.dll .text:0x108f4, 0x17e70 bytes
    // dxgi.dll .text:0x12ddc, 0x18b10 bytes
    // dxgi.dll .text:0xbda4, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) open_adapter;
    
    // [OpenKernelHandle@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa410, 0x17e70 bytes
    // dxgi.dll .text:0xa410, 0x17e70 bytes
    // dxgi.dll .text:0x24f80, 0x18b10 bytes
    // dxgi.dll .text:0x1ec20, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) open_kernel_handle;
    
    // [QIAdapterDwm@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa6d0, 0x17e70 bytes
    // dxgi.dll .text:0xa6d0, 0x17e70 bytes
    // dxgi.dll .text:0x252e0, 0x18b10 bytes
    // dxgi.dll .text:0x1eee0, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) qi_adapter_dwm;
    
    // [QueryVideoMemoryInfo@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3e00, 0x17e70 bytes
    // dxgi.dll .text:0x3e00, 0x17e70 bytes
    // dxgi.dll .text:0x88c0, 0x18b10 bytes
    // dxgi.dll .text:0x5c80, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) query_video_memory_info;
    
    // [RegisterHardwareContentProtectionTeardownStatusEvent@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2db0, 0x17e70 bytes
    // dxgi.dll .text:0x2db0, 0x17e70 bytes
    // dxgi.dll .text:0x7ec0, 0x18b10 bytes
    // dxgi.dll .text:0x4c30, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) register_hardware_content_protection_teardown_status_event;
    
    // [RegisterVideoMemoryBudgetChangeNotificationEvent@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6fc90, 0x17e70 bytes
    // dxgi.dll .text:0x6fda0, 0x17e70 bytes
    // dxgi.dll .text:0x7b4a0, 0x18b10 bytes
    // dxgi.dll .text:0x711d0, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) register_video_memory_budget_change_notification_event;
    
    // [RemoveOutput@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xe9a0, 0x17e70 bytes
    // dxgi.dll .text:0xe9d0, 0x17e70 bytes
    // dxgi.dll .text:0x15738, 0x18b10 bytes
    // dxgi.dll .text:0x9e80, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) remove_output;
    
    // [SetOrdinalAndTakeRef@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4a2ac, 0x17e70 bytes
    // dxgi.dll .text:0x4a39c, 0x17e70 bytes
    // dxgi.dll .text:0x55668, 0x18b10 bytes
    // dxgi.dll .text:0x4b82c, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) set_ordinal_and_take_ref;
    
    // [SetVideoMemoryReservation@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4a860, 0x17e70 bytes
    // dxgi.dll .text:0x4a950, 0x17e70 bytes
    // dxgi.dll .text:0x55c30, 0x18b10 bytes
    // dxgi.dll .text:0x4bde0, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) set_video_memory_reservation;
    
    // [UnregisterHardwareContentProtectionTeardownStatus@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70150, 0x17e70 bytes
    // dxgi.dll .text:0x70260, 0x17e70 bytes
    // dxgi.dll .text:0x7b980, 0x18b10 bytes
    // dxgi.dll .text:0x71690, 0x17e70 bytes
    //
    _o4(sdk::unknown_ptr) unregister_hardware_content_protection_teardown_status;
    
    // [UnregisterVideoMemoryBudgetChangeNotification@CDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x702a0, 0x17e70 bytes
    // dxgi.dll .text:0x703b0, 0x17e70 bytes
    // dxgi.dll .text:0x7bad0, 0x18b10 bytes
    // dxgi.dll .text:0x717e0, 0x17e70 bytes
    //
    _o5(sdk::unknown_ptr) unregister_video_memory_budget_change_notification;
};
#include "magic/api.end.hpp"
