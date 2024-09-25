#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace iov
{
    // [IovIsDisabledWithoutReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54bdbc, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) is_disabled_without_reboot;
    
    // [IovUtilGetBottomDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x710fec, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) util_get_bottom_device_object;
    
    // [IovUtilGetLowerDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x711044, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) util_get_lower_device_object;
    
    // [IovUtilGetUpperDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x711094, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) util_get_upper_device_object;
    
    // [IovUtilUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabee00, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) util_uninitialize;
    
    // [IovUtilGetBottomDeviceObjectWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d48e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabea00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d38e8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) util_get_bottom_device_object_with_tag;
    
    // [IovUtilGetLowerDeviceObjectWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d494c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabea64, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d394c, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) util_get_lower_device_object_with_tag;
    
    // [IovUtilGetUpperDeviceObjectWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d49a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabeac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d39a8, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) util_get_upper_device_object_with_tag;
    
    // [IovAllocateIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70366c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c27b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaacce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c17b0, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) allocate_irp;
    
    // [IovAllocateMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7037b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c28f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaacde0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c18f0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) allocate_mdl;
    
    // [IovAllocateWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703890, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c29f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaacf20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c19f0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) allocate_work_item;
    
    // [IovAttachDeviceToDeviceStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7038e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2a4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaacfa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c1a4c, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) attach_device_to_device_stack;
    
    // [IovBuildAsynchronousFsdRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703914, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad020, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c1ad0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) build_asynchronous_fsd_request;
    
    // [IovBuildDeviceIoControlRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703998, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c1b60, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) build_device_io_control_request;
    
    // [IovBuildSynchronousFsdRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703a44, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad150, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c1c20, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) build_synchronous_fsd_request;
    
    // [IovCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703ad4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2cb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c1cb4, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) call_driver;
    
    // [IovCancelIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703d64, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2f5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad448, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c1f5c, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) cancel_irp;
    
    // [IovCompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703da4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad48c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c1fa0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) complete_request;
    
    // [IovDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703f88, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3198, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad694, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2198, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) delete_device;
    
    // [IovDetachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703f90, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c31b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad6ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c21b0, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) detach_device;
    
    // [IovDriverListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321400, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45640, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d218, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc455d8, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) driver_list_head;
    
    // [IovFreeIrpPrivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703fa8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c31d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad6d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c21d0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) free_irp_private;
    
    // [IovInitializeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70401c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3258, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad758, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2258, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) initialize_irp;
    
    // [IovInitializeTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70403c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3280, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad780, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2280, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) initialize_timer;
    
    // [IovIrpTraces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d188, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ca78, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) irp_traces;
    
    // [IovIrpTracesIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d190, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ca80, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) irp_traces_index;
    
    // [IovIrpTracesLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c74, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12070, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120d0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) irp_traces_length;
    
    // [IovMdlInvariant10Milliseconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286740, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x3a318, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x46710, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3a658, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) mdl_invariant10_milliseconds;
    
    // [IovUnloadDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704070, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c32f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad7f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c22f0, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) unload_drivers;
    
    // [IovUtilFlushStackCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710fbc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d48b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe9cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d38b4, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) util_flush_stack_cache;
    
    // [IovUtilIsDeviceObjectMarked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7110dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d49fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabeb14, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d39fc, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) util_is_device_object_marked;
    
    // [IovUtilIsInFdoStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711128, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabeb68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3a50, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) util_is_in_fdo_stack;
    
    // [IovUtilIsVerifiedDeviceStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711188, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4ab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabebd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3ab8, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) util_is_verified_device_stack;
    
    // [IovUtilIsWdmStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711250, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4b98, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabecb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3b98, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) util_is_wdm_stack;
    
    // [IovUtilMarkDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22328c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bdac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bc2c, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) util_mark_device_object;
    
    // [IovUtilMarkStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3b70, 0x32828 bytes
    // ntoskrnl.exe .text:0x369a54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f2ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ae04, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) util_mark_stack;
    
    // [IovUtilMultipleDevicesSameDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71127c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabece8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3bd0, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) util_multiple_devices_same_driver;
    
    // [IovUtilRelateDeviceObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7112d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4c34, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabed4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3c34, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) util_relate_device_objects;
    
    // [IovUtilVerifierEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301694, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ccc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36ae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd24, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) util_verifier_enabled;
    
    // [IovUtilWatermarkIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93eb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21bb5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e977c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0d8c, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) util_watermark_irp;
};
#include "magic/api.end.hpp"
