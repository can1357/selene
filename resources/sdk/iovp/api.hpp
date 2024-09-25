#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace iovp
{
    // [IovpValidateStatusInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab915c, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) _validate_status_information;
    
    // [IovpAdvanceStackDownwards]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70d750, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdadc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7fe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ccadc, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) _advance_stack_downwards;
    
    // [IovpBuildDriverObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704188, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad8f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2410, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) _build_driver_object_list;
    
    // [IovpCallDriver1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70d8c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdc4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab8170, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ccc4c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) _call_driver1;
    
    // [IovpCallDriver2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ddd0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce144, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab86cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd144, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) _call_driver2;
    
    // [IovpCallDriverNoIrpTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7041f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3484, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad96c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2484, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) _call_driver_no_irp_tracking;
    
    // [IovpCallDriverWithStackBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70426c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c34f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaad9b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c24f4, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) _call_driver_with_stack_buffer;
    
    // [IovpCancelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e040, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce3d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabcbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd3d0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) _cancel_routine;
    
    // [IovpCheckIrpForCriticalTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e074, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce448, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab8954, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd448, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) _check_irp_for_critical_tracking;
    
    // [IovpCompleteRequest1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e0e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce4c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab89cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd4c0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) _complete_request1;
    
    // [IovpCompleteRequest2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e208, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab8afc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd5f0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) _complete_request2;
    
    // [IovpCompleteRequest3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e574, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce980, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab8e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd980, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) _complete_request3;
    
    // [IovpCompleteRequest4]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e5fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cea08, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab8e98, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cda08, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) _complete_request4;
    
    // [IovpDisabledWithoutReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5158, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17bdc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5154, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) _disabled_without_reboot;
    
    // [IovpEnabledInThePast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430dc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5154, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17be0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5158, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) _enabled_in_the_past;
    
    // [IovpExamineDevObjForwarding]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e6c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cead0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab8f60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdad0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) _examine_dev_obj_forwarding;
    
    // [IovpExamineIrpStackForwarding]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e750, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceb74, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9004, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdb74, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) _examine_irp_stack_forwarding;
    
    // [IovpInternalCompletionTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e880, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cecb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9140, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdcb0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) _internal_completion_trap;
    
    // [IovpLocalCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704424, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c36c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaadb60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c26c0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) _local_completion_routine;
    
    // [IovpLogStackCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704694, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaddd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2940, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) _log_stack_callout;
    
    // [IovpLogStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7046c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3978, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaade08, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2978, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) _log_stack_trace;
    
    // [IovpSessionDataCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a840, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9ea8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de7d0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) _session_data_create;
    
    // [IovpSessionDataDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a948, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df8e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9fb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de8e0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) _session_data_dereference;
    
    // [IovpSessionDataReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a9ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df948, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca01c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de948, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) _session_data_reference;
    
    // [IovpUnloadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70475c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3a18, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaadeb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2a18, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) _unload_driver;
    
    // [IovpUtilMarkDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711394, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4ce8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabee10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3ce8, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) _util_mark_device_object;
    
    // [IovpValidateDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704848, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3b24, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaadfc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2b24, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) _validate_device_object;
};
#include "magic/api.end.hpp"
