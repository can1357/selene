#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace verifier
{
    // [VerifierIoAllocateIrpEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab6df0, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) io_allocate_irp_ex;
    
    // [VerifierIoOpenDriverRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabb100, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) io_open_driver_registry_key;
    
    // [VerifierIofCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x70f954, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) iof_call_driver;
    
    // [VerifierKeInsertQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac1560, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) ke_insert_queue_dpc;
    
    // [VerifierKeRemoveQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac16c0, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) ke_remove_queue_dpc;
    
    // [VerifierMmAllocateContiguousMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xace550, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) mm_allocate_contiguous_memory_ex;
    
    // [VerifierNtDeleteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabbb70, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) nt_delete_file;
    
    // [VerifierNtOpenFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabbb90, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) nt_open_file;
    
    // [VerifierRtlCheckRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabc090, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) rtl_check_registry_key;
    
    // [VerifierRtlQueryRegistryValueWithFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabc110, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) rtl_query_registry_value_with_fallback;
    
    // [VerifierRtlQueryRegistryValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabc150, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) rtl_query_registry_values;
    
    // [VerifierRtlQueryRegistryValuesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabc180, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) rtl_query_registry_values_ex;
    
    // [VerifierZwAccessCheckAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad10b0, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) zw_access_check_and_audit_alarm;
    
    // [VerifierZwAddBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1150, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) zw_add_boot_entry;
    
    // [VerifierZwAddDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1170, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) zw_add_driver_entry;
    
    // [VerifierZwAdjustPrivilegesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1190, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) zw_adjust_privileges_token;
    
    // [VerifierZwAllocateVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad11c0, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) zw_allocate_virtual_memory;
    
    // [VerifierZwAlpcAcceptConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad11f0, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) zw_alpc_accept_connect_port;
    
    // [VerifierZwAlpcConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1260, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) zw_alpc_connect_port;
    
    // [VerifierZwAlpcCreatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1300, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) zw_alpc_create_port;
    
    // [VerifierZwAlpcCreatePortSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1320, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) zw_alpc_create_port_section;
    
    // [VerifierZwAlpcCreateResourceReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1350, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) zw_alpc_create_resource_reserve;
    
    // [VerifierZwAlpcCreateSectionView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1370, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) zw_alpc_create_section_view;
    
    // [VerifierZwAlpcCreateSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1390, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) zw_alpc_create_security_context;
    
    // [VerifierZwAlpcQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad13b0, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) zw_alpc_query_information;
    
    // [VerifierZwAlpcSendWaitReceivePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad13e0, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) zw_alpc_send_wait_receive_port;
    
    // [VerifierZwAlpcSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1430, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) zw_alpc_set_information;
    
    // [VerifierZwCancelIoFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1450, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) zw_cancel_io_file;
    
    // [VerifierZwCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1470, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) zw_cancel_timer;
    
    // [VerifierZwCloseObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1490, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) zw_close_object_audit_alarm;
    
    // [VerifierZwCommitEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad14b0, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) zw_commit_enlistment;
    
    // [VerifierZwConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad14d0, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) zw_connect_port;
    
    // [VerifierZwCreateDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1520, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) zw_create_directory_object;
    
    // [VerifierZwCreateEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1540, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) zw_create_enlistment;
    
    // [VerifierZwCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1590, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) zw_create_event;
    
    // [VerifierZwCreateFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad15c0, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) zw_create_file;
    
    // [VerifierZwCreateJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1660, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) zw_create_job_object;
    
    // [VerifierZwCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1680, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) zw_create_key;
    
    // [VerifierZwCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad16c0, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) zw_create_section;
    
    // [VerifierZwCreateSymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1750, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) zw_create_symbolic_link_object;
    
    // [VerifierZwCreateTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1770, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) zw_create_timer;
    
    // [VerifierZwCreateTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1790, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) zw_create_transaction;
    
    // [VerifierZwCreateTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1810, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) zw_create_transaction_manager;
    
    // [VerifierZwDeleteBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1840, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) zw_delete_boot_entry;
    
    // [VerifierZwDeleteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1860, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) zw_delete_file;
    
    // [VerifierZwDeleteValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1880, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) zw_delete_value_key;
    
    // [VerifierZwDeviceIoControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad18a0, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) zw_device_io_control_file;
    
    // [VerifierZwDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1920, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) zw_display_string;
    
    // [VerifierZwDuplicateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1940, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) zw_duplicate_object;
    
    // [VerifierZwDuplicateToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1980, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) zw_duplicate_token;
    
    // [VerifierZwEnumerateBootEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad19b0, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) zw_enumerate_boot_entries;
    
    // [VerifierZwEnumerateDriverEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad19d0, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) zw_enumerate_driver_entries;
    
    // [VerifierZwEnumerateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad19f0, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) zw_enumerate_key;
    
    // [VerifierZwEnumerateValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1a20, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) zw_enumerate_value_key;
    
    // [VerifierZwFlushInstructionCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1a50, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) zw_flush_instruction_cache;
    
    // [VerifierZwFlushVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1a70, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) zw_flush_virtual_memory;
    
    // [VerifierZwFreeVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1a90, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) zw_free_virtual_memory;
    
    // [VerifierZwFsControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1ab0, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) zw_fs_control_file;
    
    // [VerifierZwLoadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1b30, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) zw_load_driver;
    
    // [VerifierZwLoadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1b50, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) zw_load_key;
    
    // [VerifierZwMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1b70, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) zw_map_view_of_section;
    
    // [VerifierZwModifyBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1c30, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) zw_modify_boot_entry;
    
    // [VerifierZwModifyDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1c50, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) zw_modify_driver_entry;
    
    // [VerifierZwNotifyChangeKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1c70, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) zw_notify_change_key;
    
    // [VerifierZwOpenDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1cf0, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) zw_open_directory_object;
    
    // [VerifierZwOpenEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1d10, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) zw_open_enlistment;
    
    // [VerifierZwOpenEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1d40, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) zw_open_event;
    
    // [VerifierZwOpenFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1d60, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) zw_open_file;
    
    // [VerifierZwOpenJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1d90, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) zw_open_job_object;
    
    // [VerifierZwOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1db0, 0x1fd000 bytes
    //
    _m69(sdk::unknown_ptr) zw_open_key;
    
    // [VerifierZwOpenProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1dd0, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) zw_open_process;
    
    // [VerifierZwOpenProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1df0, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) zw_open_process_token;
    
    // [VerifierZwOpenProcessTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1e10, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) zw_open_process_token_ex;
    
    // [VerifierZwOpenSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1e30, 0x1fd000 bytes
    //
    _m73(sdk::unknown_ptr) zw_open_section;
    
    // [VerifierZwOpenSymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1e50, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) zw_open_symbolic_link_object;
    
    // [VerifierZwOpenThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1e70, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) zw_open_thread;
    
    // [VerifierZwOpenThreadToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1e90, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) zw_open_thread_token;
    
    // [VerifierZwOpenThreadTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1eb0, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) zw_open_thread_token_ex;
    
    // [VerifierZwOpenTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1ee0, 0x1fd000 bytes
    //
    _m78(sdk::unknown_ptr) zw_open_timer;
    
    // [VerifierZwOpenTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1f00, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) zw_open_transaction;
    
    // [VerifierZwOpenTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1f30, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) zw_open_transaction_manager;
    
    // [VerifierZwPowerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1f60, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) zw_power_information;
    
    // [VerifierZwPrePrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1f90, 0x1fd000 bytes
    //
    _m82(sdk::unknown_ptr) zw_pre_prepare_enlistment;
    
    // [VerifierZwPrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1fb0, 0x1fd000 bytes
    //
    _m83(sdk::unknown_ptr) zw_prepare_complete;
    
    // [VerifierZwPrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1fd0, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) zw_prepare_enlistment;
    
    // [VerifierZwProtectVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad1ff0, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) zw_protect_virtual_memory;
    
    // [VerifierZwPulseEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2060, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) zw_pulse_event;
    
    // [VerifierZwQueryBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2080, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) zw_query_boot_entry_order;
    
    // [VerifierZwQueryBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad20a0, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) zw_query_boot_options;
    
    // [VerifierZwQueryDefaultLocale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad20c0, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) zw_query_default_locale;
    
    // [VerifierZwQueryDefaultUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad20e0, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) zw_query_default_ui_language;
    
    // [VerifierZwQueryDirectoryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2100, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) zw_query_directory_file;
    
    // [VerifierZwQueryDirectoryFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad21a0, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) zw_query_directory_file_ex;
    
    // [VerifierZwQueryDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2220, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) zw_query_directory_object;
    
    // [VerifierZwQueryDriverEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2260, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) zw_query_driver_entry_order;
    
    // [VerifierZwQueryEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2280, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) zw_query_ea_file;
    
    // [VerifierZwQueryFullAttributesFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad22f0, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) zw_query_full_attributes_file;
    
    // [VerifierZwQueryInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2310, 0x1fd000 bytes
    //
    _m97(sdk::unknown_ptr) zw_query_information_enlistment;
    
    // [VerifierZwQueryInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2340, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) zw_query_information_file;
    
    // [VerifierZwQueryInformationJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2370, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) zw_query_information_job_object;
    
    // [VerifierZwQueryInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad23a0, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) zw_query_information_process;
    
    // [VerifierZwQueryInformationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad23d0, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) zw_query_information_thread;
    
    // [VerifierZwQueryInformationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2400, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) zw_query_information_token;
    
    // [VerifierZwQueryInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2430, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) zw_query_information_transaction;
    
    // [VerifierZwQueryInformationTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2460, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) zw_query_information_transaction_manager;
    
    // [VerifierZwQueryInstallUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2490, 0x1fd000 bytes
    //
    _n05(sdk::unknown_ptr) zw_query_install_ui_language;
    
    // [VerifierZwQueryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad24b0, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) zw_query_key;
    
    // [VerifierZwQueryLicenseValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad24e0, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) zw_query_license_value;
    
    // [VerifierZwQueryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2510, 0x1fd000 bytes
    //
    _n08(sdk::unknown_ptr) zw_query_object;
    
    // [VerifierZwQuerySection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2540, 0x1fd000 bytes
    //
    _n09(sdk::unknown_ptr) zw_query_section;
    
    // [VerifierZwQuerySecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2570, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) zw_query_security_object;
    
    // [VerifierZwQuerySymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad25a0, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) zw_query_symbolic_link_object;
    
    // [VerifierZwQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad25c0, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) zw_query_system_information;
    
    // [VerifierZwQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad25e0, 0x1fd000 bytes
    //
    _n13(sdk::unknown_ptr) zw_query_value_key;
    
    // [VerifierZwQueryVolumeInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2610, 0x1fd000 bytes
    //
    _n14(sdk::unknown_ptr) zw_query_volume_information_file;
    
    // [VerifierZwReadFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2640, 0x1fd000 bytes
    //
    _n15(sdk::unknown_ptr) zw_read_file;
    
    // [VerifierZwRemoveIoCompletionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad26b0, 0x1fd000 bytes
    //
    _n16(sdk::unknown_ptr) zw_remove_io_completion_ex;
    
    // [VerifierZwReplaceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad26e0, 0x1fd000 bytes
    //
    _n17(sdk::unknown_ptr) zw_replace_key;
    
    // [VerifierZwRequestWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2700, 0x1fd000 bytes
    //
    _n18(sdk::unknown_ptr) zw_request_wait_reply_port;
    
    // [VerifierZwResetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2720, 0x1fd000 bytes
    //
    _n19(sdk::unknown_ptr) zw_reset_event;
    
    // [VerifierZwRestoreKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2740, 0x1fd000 bytes
    //
    _n20(sdk::unknown_ptr) zw_restore_key;
    
    // [VerifierZwRollbackEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2760, 0x1fd000 bytes
    //
    _n21(sdk::unknown_ptr) zw_rollback_enlistment;
    
    // [VerifierZwSetBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2780, 0x1fd000 bytes
    //
    _n22(sdk::unknown_ptr) zw_set_boot_entry_order;
    
    // [VerifierZwSetBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad27a0, 0x1fd000 bytes
    //
    _n23(sdk::unknown_ptr) zw_set_boot_options;
    
    // [VerifierZwSetDriverEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad27c0, 0x1fd000 bytes
    //
    _n24(sdk::unknown_ptr) zw_set_driver_entry_order;
    
    // [VerifierZwSetEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad27e0, 0x1fd000 bytes
    //
    _n25(sdk::unknown_ptr) zw_set_ea_file;
    
    // [VerifierZwSetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2800, 0x1fd000 bytes
    //
    _n26(sdk::unknown_ptr) zw_set_event;
    
    // [VerifierZwSetInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2820, 0x1fd000 bytes
    //
    _n27(sdk::unknown_ptr) zw_set_information_enlistment;
    
    // [VerifierZwSetInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2840, 0x1fd000 bytes
    //
    _n28(sdk::unknown_ptr) zw_set_information_file;
    
    // [VerifierZwSetInformationJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2870, 0x1fd000 bytes
    //
    _n29(sdk::unknown_ptr) zw_set_information_job_object;
    
    // [VerifierZwSetInformationObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2890, 0x1fd000 bytes
    //
    _n30(sdk::unknown_ptr) zw_set_information_object;
    
    // [VerifierZwSetInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad28b0, 0x1fd000 bytes
    //
    _n31(sdk::unknown_ptr) zw_set_information_process;
    
    // [VerifierZwSetInformationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad28d0, 0x1fd000 bytes
    //
    _n32(sdk::unknown_ptr) zw_set_information_thread;
    
    // [VerifierZwSetInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad28f0, 0x1fd000 bytes
    //
    _n33(sdk::unknown_ptr) zw_set_information_transaction;
    
    // [VerifierZwSetSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2910, 0x1fd000 bytes
    //
    _n34(sdk::unknown_ptr) zw_set_security_object;
    
    // [VerifierZwSetSystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2930, 0x1fd000 bytes
    //
    _n35(sdk::unknown_ptr) zw_set_system_information;
    
    // [VerifierZwSetSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2950, 0x1fd000 bytes
    //
    _n36(sdk::unknown_ptr) zw_set_system_time;
    
    // [VerifierZwSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2970, 0x1fd000 bytes
    //
    _n37(sdk::unknown_ptr) zw_set_timer;
    
    // [VerifierZwSetValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad29b0, 0x1fd000 bytes
    //
    _n38(sdk::unknown_ptr) zw_set_value_key;
    
    // [VerifierZwSetVolumeInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad29e0, 0x1fd000 bytes
    //
    _n39(sdk::unknown_ptr) zw_set_volume_information_file;
    
    // [VerifierZwTranslateFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2a10, 0x1fd000 bytes
    //
    _n40(sdk::unknown_ptr) zw_translate_file_path;
    
    // [VerifierZwUnloadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2a30, 0x1fd000 bytes
    //
    _n41(sdk::unknown_ptr) zw_unload_driver;
    
    // [VerifierZwUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2a50, 0x1fd000 bytes
    //
    _n42(sdk::unknown_ptr) zw_unload_key;
    
    // [VerifierZwWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2a70, 0x1fd000 bytes
    //
    _n43(sdk::unknown_ptr) zw_wait_for_multiple_objects;
    
    // [VerifierZwWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2aa0, 0x1fd000 bytes
    //
    _n44(sdk::unknown_ptr) zw_wait_for_single_object;
    
    // [VerifierZwWriteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad2ac0, 0x1fd000 bytes
    //
    _n45(sdk::unknown_ptr) zw_write_file;
    
    // [VerifierCrashEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59ab50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59a9d0, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) crash_event;
    
    // [VerifierCcCopyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9cf940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9e90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce940, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) cc_copy_write;
    
    // [VerifierCcCopyWriteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9cf970, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce970, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) cc_copy_write_ex;
    
    // [VerifierCcDeferWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9cf9a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9ef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce9a0, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) cc_defer_write;
    
    // [VerifierCcFastCopyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9cf9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce9d0, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) cc_fast_copy_write;
    
    // [VerifierExAcquireFastMutexNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d184, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2770, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1770, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) ex_acquire_fast_mutex_no_reboot;
    
    // [VerifierExAcquireFastMutexUnsafeNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d1c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2830, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1830, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) ex_acquire_fast_mutex_unsafe_no_reboot;
    
    // [VerifierExAcquireResourceExclusiveLiteNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ab44, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfb20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9deb20, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) ex_acquire_resource_exclusive_lite_no_reboot;
    
    // [VerifierExAcquireResourceSharedLiteNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71abec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfbf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9debf0, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) ex_acquire_resource_shared_lite_no_reboot;
    
    // [VerifierExAcquireSharedStarveExclusiveNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ac94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfcc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9decc0, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) ex_acquire_shared_starve_exclusive_no_reboot;
    
    // [VerifierExAcquireSharedWaitForExclusiveNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ad3c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfd90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ded90, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) ex_acquire_shared_wait_for_exclusive_no_reboot;
    
    // [VerifierExAllocatePool2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d29e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d19e0, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) ex_allocate_pool2;
    
    // [VerifierExAllocatePool3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d2ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabcb20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1ae0, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) ex_allocate_pool3;
    
    // [VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71aef0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9deff0, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) ex_enter_critical_region_and_acquire_resource_exclusive_no_reboot;
    
    // [VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71af40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df090, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) ex_enter_critical_region_and_acquire_resource_shared_no_reboot;
    
    // [VerifierExEnterPriorityRegionAndAcquireResourceExclusiveNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71af90, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0110, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df110, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) ex_enter_priority_region_and_acquire_resource_exclusive_no_reboot;
    
    // [VerifierExEnterPriorityRegionAndAcquireResourceSharedNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71afe0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0190, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df190, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) ex_enter_priority_region_and_acquire_resource_shared_no_reboot;
    
    // [VerifierExReleaseFastMutexNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d278, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2910, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1910, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) ex_release_fast_mutex_no_reboot;
    
    // [VerifierExReleaseFastMutexUnsafeNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d2e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e29a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e19a0, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) ex_release_fast_mutex_unsafe_no_reboot;
    
    // [VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b144, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0370, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df370, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) ex_release_resource_and_leave_critical_region_no_reboot;
    
    // [VerifierExReleaseResourceAndLeavePriorityRegionNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b164, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e03a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df3a0, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) ex_release_resource_and_leave_priority_region_no_reboot;
    
    // [VerifierExReleaseResourceForThreadLiteNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b184, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e03d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df3d0, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) ex_release_resource_for_thread_lite_no_reboot;
    
    // [VerifierExReleaseResourceLiteNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b1b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df410, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) ex_release_resource_lite_no_reboot;
    
    // [VerifierExTryToAcquireFastMutexNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d370, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1a40, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) ex_try_to_acquire_fast_mutex_no_reboot;
    
    // [VerifierIoCreateFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d0840, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabac50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf840, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) io_create_file_ex;
    
    // [VerifierIoCreateFileSpecifyDeviceObjectHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d08f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabad00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf8f0, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) io_create_file_specify_device_object_hint;
    
    // [VerifierIoFreeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70864c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7600, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6600, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) io_free_irp;
    
    // [VerifierIoGetDeviceDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d0b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb00, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) io_get_device_directory;
    
    // [VerifierIoGetDriverDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d0c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb020, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc30, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) io_get_driver_directory;
    
    // [VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714b48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8548, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7548, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_at_dpc_level_common;
    
    // [VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714bd0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8610, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7610, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_at_dpc_level_no_reboot;
    
    // [VerifierKeAcquireInStackQueuedSpinLockForDpcCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714ca8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8718, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7718, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_for_dpc_common;
    
    // [VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714d0c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8790, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7790, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_for_dpc_no_reboot;
    
    // [VerifierKeAcquireInStackQueuedSpinLockNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714d18, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d87b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d77b0, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_no_reboot;
    
    // [VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714d64, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8818, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7818, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_raise_to_synch_common;
    
    // [VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714df0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d88b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d78b0, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_raise_to_synch_no_reboot;
    
    // [VerifierKeAcquireSpinLockAtDpcLevelNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714e98, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8990, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7990, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) ke_acquire_spin_lock_at_dpc_level_no_reboot;
    
    // [VerifierKeAcquireSpinLockRaiseToDpcNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714ee8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7a00, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) ke_acquire_spin_lock_raise_to_dpc_no_reboot;
    
    // [VerifierKeInitializeMutantNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715024, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7be0, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) ke_initialize_mutant_no_reboot;
    
    // [VerifierKeInitializeMutexNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71504c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7c30, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) ke_initialize_mutex_no_reboot;
    
    // [VerifierKeRaiseIrqlToDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715198, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7e60, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) ke_raise_irql_to_dpc_level;
    
    // [VerifierKeReleaseInStackQueuedSpinLockCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715258, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7fa0, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock_common;
    
    // [VerifierKeReleaseInStackQueuedSpinLockForDpcCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7152f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8060, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock_for_dpc_common;
    
    // [VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71532c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d90d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d80d0, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock_for_dpc_no_reboot;
    
    // [VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71536c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9130, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8130, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock_from_dpc_level_common;
    
    // [VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7153a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d91a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d81a0, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock_from_dpc_level_no_reboot;
    
    // [VerifierKeReleaseInStackQueuedSpinLockNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7153b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d91c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d81c0, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock_no_reboot;
    
    // [VerifierKeReleaseMutantNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715428, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9260, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8260, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) ke_release_mutant_no_reboot;
    
    // [VerifierKeReleaseMutexNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7154c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9320, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8320, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) ke_release_mutex_no_reboot;
    
    // [VerifierKeReleaseSpinLockFromDpcLevelNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7155e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9480, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8480, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) ke_release_spin_lock_from_dpc_level_no_reboot;
    
    // [VerifierKeReleaseSpinLockNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71563c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9500, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8500, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) ke_release_spin_lock_no_reboot;
    
    // [VerifierKeRestoreExtendedProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d9580, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac16e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8580, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) ke_restore_extended_processor_state;
    
    // [VerifierKeSaveExtendedProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d95a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1700, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d85a0, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) ke_save_extended_processor_state;
    
    // [VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7158b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9870, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8870, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) ke_try_to_acquire_spin_lock_at_dpc_level_no_reboot;
    
    // [VerifierKeWaitForMultipleObjectsNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715964, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9970, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8970, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) ke_wait_for_multiple_objects_no_reboot;
    
    // [VerifierKeWaitForSingleObjectNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7159f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8a30, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) ke_wait_for_single_object_no_reboot;
    
    // [VerifierKfRaiseIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715a08, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8a50, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) kf_raise_irql;
    
    // [VerifierMmMapIoSpaceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9e4a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf120, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3a50, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) mm_map_io_space_ex;
    
    // [VerifierNewRuleWorkaround]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d19c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36614, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d024, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) new_rule_workaround;
    
    // [VerifierNtSetInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d1830, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbbc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0830, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) nt_set_information_file;
    
    // [VerifierRtlCreateRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d1d60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc0b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d60, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) rtl_create_registry_key;
    
    // [VerifierRtlCreateSystemVolumeInformationFolder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d1d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc0d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d80, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) rtl_create_system_volume_information_folder;
    
    // [VerifierRtlWriteRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d1dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc1b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0dc0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) rtl_write_registry_value;
    
    // [VerifierTipDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d1a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d028, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) tip_disable;
    
    // [VerifierZwFlushBuffersFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d2160, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc490, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1160, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) zw_flush_buffers_file_ex;
    
    // [VerifierZwMakeTemporaryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2250, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1250, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) zw_make_temporary_object;
    
    // [VerifierZwSetInformationKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d2490, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc700, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1490, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) zw_set_information_key;
    
    // [VerifierBugCheckIfAppropriate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f318, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ced54, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9284, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdd54, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) bug_check_if_appropriate;
    
    // [VerifierCcWaitForCurrentLazyWriterActivity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce9f0, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) cc_wait_for_current_lazy_writer_activity;
    
    // [VerifierCmRegisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9f60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cea10, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) cm_register_callback;
    
    // [VerifierCmRegisterCallbackEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cea30, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) cm_register_callback_ex;
    
    // [VerifierCmUnRegisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3c8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cea60, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) cm_un_register_callback;
    
    // [VerifierDbgBreakPointWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cea80, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) dbg_break_point_with_status;
    
    // [VerifierDdiDriverName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa198, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b91b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa21b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b81b8, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) ddi_driver_name;
    
    // [VerifierEtwRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ff6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacffc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4e40, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) etw_register;
    
    // [VerifierEtwRegisterClassicProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ffa0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5e80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0000, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4e80, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) etw_register_classic_provider;
    
    // [VerifierEtwUnregister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ffdc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0050, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4ed0, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) etw_unregister;
    
    // [VerifierExAcquireFastMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d140, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e26c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac91a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e16c0, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) ex_acquire_fast_mutex;
    
    // [VerifierExAcquireFastMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d18c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e27f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac91c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e17f0, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) ex_acquire_fast_mutex_unsafe;
    
    // [VerifierExAcquireResourceExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71aacc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfa90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad01f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dea90, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) ex_acquire_resource_exclusive_lite;
    
    // [VerifierExAcquireResourceSharedLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ab74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfb60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0210, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9deb60, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) ex_acquire_resource_shared_lite;
    
    // [VerifierExAcquireRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfaa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabcf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceaa0, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) ex_acquire_rundown_protection;
    
    // [VerifierExAcquireRundownProtectionCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabd10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceac0, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) ex_acquire_rundown_protection_cache_aware;
    
    // [VerifierExAcquireRundownProtectionCacheAwareEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabd30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceae0, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) ex_acquire_rundown_protection_cache_aware_ex;
    
    // [VerifierExAcquireRundownProtectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f3f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceb00, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) ex_acquire_rundown_protection_ex;
    
    // [VerifierExAcquireSharedStarveExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ac1c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfc30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0230, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dec30, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) ex_acquire_shared_starve_exclusive;
    
    // [VerifierExAcquireSharedWaitForExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71acc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfd00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0250, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ded00, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) ex_acquire_shared_wait_for_exclusive;
    
    // [VerifierExAllocateCacheAwareRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d1f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2870, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac91e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1870, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) ex_allocate_cache_aware_rundown_protection;
    
    // [VerifierExAllocatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7050d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d28f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc8c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d18f0, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) ex_allocate_pool;
    
    // [VerifierExAllocatePoolEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705334, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabcc40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1c00, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) ex_allocate_pool_ex;
    
    // [VerifierExAllocatePoolWithQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705150, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabccd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1cb0, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) ex_allocate_pool_with_quota;
    
    // [VerifierExAllocatePoolWithQuotaTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705240, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabcda0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1e20, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) ex_allocate_pool_with_quota_tag;
    
    // [VerifierExAllocatePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705334, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2f90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabfd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1f90, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) ex_allocate_pool_with_tag;
    
    // [VerifierExAllocatePoolWithTagPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705394, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabce80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2060, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) ex_allocate_pool_with_tag_priority;
    
    // [VerifierExConvertExclusiveToSharedLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f400, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba010, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceb20, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) ex_convert_exclusive_to_shared_lite;
    
    // [VerifierExCreateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f408, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba030, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceb40, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) ex_create_callback;
    
    // [VerifierExDeleteLookasideListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a1f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacde30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de0c0, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) ex_delete_lookaside_list_ex;
    
    // [VerifierExDeleteNPagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a210, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacde50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de0f0, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) ex_delete_n_paged_lookaside_list;
    
    // [VerifierExDeletePagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a230, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df120, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacde70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de120, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) ex_delete_paged_lookaside_list;
    
    // [VerifierExDeleteResourceLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ad6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfdd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0270, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dedd0, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) ex_delete_resource_lite;
    
    // [VerifierExEnterCriticalRegionAndAcquireResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71aea8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dff70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0290, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9def70, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) ex_enter_critical_region_and_acquire_resource_exclusive;
    
    // [VerifierExEnterCriticalRegionAndAcquireResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71aef8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0010, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad02b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df010, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) ex_enter_critical_region_and_acquire_resource_shared;
    
    // [VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f410, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba050, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceb60, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) ex_enter_critical_region_and_acquire_shared_wait_for_exclusive;
    
    // [VerifierExEnterPriorityRegionAndAcquireResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71af48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e00b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad02d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df0b0, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) ex_enter_priority_region_and_acquire_resource_exclusive;
    
    // [VerifierExEnterPriorityRegionAndAcquireResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71af98, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0130, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad02f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df130, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) ex_enter_priority_region_and_acquire_resource_shared;
    
    // [VerifierExFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705400, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3140, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac100, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2140, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) ex_free_pool;
    
    // [VerifierExFreePoolEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705418, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d31b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac150, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d21b0, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) ex_free_pool_ex;
    
    // [VerifierExFreePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705420, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d31d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac170, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d21d0, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) ex_free_pool_with_tag;
    
    // [VerifierExGetExclusiveWaiterCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f418, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba080, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceb90, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) ex_get_exclusive_waiter_count;
    
    // [VerifierExGetSharedWaiterCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f420, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfbb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cebb0, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) ex_get_shared_waiter_count;
    
    // [VerifierExInitializeLookasideListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a250, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df150, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacde90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de150, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) ex_initialize_lookaside_list_ex;
    
    // [VerifierExInitializeNPagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a390, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df2a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdfa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de2a0, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) ex_initialize_n_paged_lookaside_list;
    
    // [VerifierExInitializePagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a49c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df3c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xace0b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de3c0, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) ex_initialize_paged_lookaside_list;
    
    // [VerifierExInitializeResourceLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71afe8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e01b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0310, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df1b0, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) ex_initialize_resource_lite;
    
    // [VerifierExInterlockedAddLargeInteger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f428, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfbd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cebd0, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) ex_interlocked_add_large_integer;
    
    // [VerifierExInterlockedInsertHeadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f438, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfbf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba0e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cebf0, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) ex_interlocked_insert_head_list;
    
    // [VerifierExInterlockedInsertTailList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f440, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba100, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cec10, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) ex_interlocked_insert_tail_list;
    
    // [VerifierExInterlockedPopEntryList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f448, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba120, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cec30, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) ex_interlocked_pop_entry_list;
    
    // [VerifierExInterlockedPushEntryList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f450, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba140, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cec50, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) ex_interlocked_push_entry_list;
    
    // [VerifierExInterlockedRemoveHeadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f458, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba160, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cec70, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) ex_interlocked_remove_head_list;
    
    // [VerifierExIsProcessorFeaturePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f460, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba180, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cec90, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) ex_is_processor_feature_present;
    
    // [VerifierExIsResourceAcquiredExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f468, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfcb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabd50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cecb0, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) ex_is_resource_acquired_exclusive_lite;
    
    // [VerifierExIsResourceAcquiredSharedLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f470, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfcd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabd70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cecd0, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) ex_is_resource_acquired_shared_lite;
    
    // [VerifierExRaiseAccessViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f478, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfcf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cecf0, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) ex_raise_access_violation;
    
    // [VerifierExRaiseDatatypeMisalignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f480, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba1c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ced10, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) ex_raise_datatype_misalignment;
    
    // [VerifierExRaiseStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f488, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba1e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ced30, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) ex_raise_status;
    
    // [VerifierExRegisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f490, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba200, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ced50, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) ex_register_callback;
    
    // [VerifierExReinitializeResourceLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f498, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba220, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ced70, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) ex_reinitialize_resource_lite;
    
    // [VerifierExReleaseFastMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d228, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e28b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9220, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e18b0, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) ex_release_fast_mutex;
    
    // [VerifierExReleaseFastMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d298, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1940, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) ex_release_fast_mutex_unsafe;
    
    // [VerifierExReleaseResourceAndLeaveCriticalRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b144, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0330, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0330, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df330, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) ex_release_resource_and_leave_critical_region;
    
    // [VerifierExReleaseResourceAndLeavePriorityRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b164, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e03a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0350, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df3a0, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) ex_release_resource_and_leave_priority_region;
    
    // [VerifierExReleaseResourceForThreadLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b184, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e03d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0370, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df3d0, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) ex_release_resource_for_thread_lite;
    
    // [VerifierExReleaseResourceLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b1b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac980, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df410, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) ex_release_resource_lite;
    
    // [VerifierExReleaseRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ced90, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) ex_release_rundown_protection;
    
    // [VerifierExReleaseRundownProtectionCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfdb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabdb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cedb0, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) ex_release_rundown_protection_cache_aware;
    
    // [VerifierExReleaseRundownProtectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfdd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba240, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cedd0, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) ex_release_rundown_protection_ex;
    
    // [VerifierExSetResourceOwnerPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfdf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba260, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cedf0, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) ex_set_resource_owner_pointer;
    
    // [VerifierExSetResourceOwnerPointerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cee10, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) ex_set_resource_owner_pointer_ex;
    
    // [VerifierExSetTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4c8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba2a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cee30, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) ex_set_timer_resolution;
    
    // [VerifierExTryToAcquireFastMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d318, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e29e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac92a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e19e0, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) ex_try_to_acquire_fast_mutex;
    
    // [VerifierExUnregisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba2c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cee50, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) ex_unregister_callback;
    
    // [VerifierExUuidCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba2e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cee70, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) ex_uuid_create;
    
    // [VerifierExWaitForRundownProtectionRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba300, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cee90, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) ex_wait_for_rundown_protection_release;
    
    // [VerifierExWaitForRundownProtectionReleaseCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfeb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba320, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceeb0, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) ex_wait_for_rundown_protection_release_cache_aware;
    
    // [VerifierExfAcquirePushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d378, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac92c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1a60, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) exf_acquire_push_lock_exclusive;
    
    // [VerifierExfAcquirePushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d3ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac92e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1aa0, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) exf_acquire_push_lock_shared;
    
    // [VerifierExfReleasePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d3e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9300, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1ae0, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) exf_release_push_lock;
    
    // [VerifierExfReleasePushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d414, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9320, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1b20, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) exf_release_push_lock_shared;
    
    // [VerifierExfTryAcquirePushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d448, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9340, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1b60, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) exf_try_acquire_push_lock_shared;
    
    // [VerifierExfTryToWakePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d47c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9360, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1ba0, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) exf_try_to_wake_push_lock;
    
    // [VerifierExpInterlockedFlushSList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabdd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceed0, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) exp_interlocked_flush_s_list;
    
    // [VerifierExpInterlockedPopEntrySList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f4f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabdf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceef0, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) exp_interlocked_pop_entry_s_list;
    
    // [VerifierExpInterlockedPushEntrySList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22312c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59ba10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x464690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b890, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) exp_interlocked_push_entry_s_list;
    
    // [VerifierFaultApplicationsBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3013a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d1c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d040, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) fault_applications_buffer;
    
    // [VerifierFaultApplicationsBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c5c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12058, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120b8, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) fault_applications_buffer_size;
    
    // [VerifierFaultTagsBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3014a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d2c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36780, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d140, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) fault_tags_buffer;
    
    // [VerifierFaultTagsBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c58, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12054, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120b4, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) fault_tags_buffer_size;
    
    // [VerifierFilterDriverName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa1f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9218, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2210, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b81e8, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) filter_driver_name;
    
    // [VerifierFreeTrackedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1efed0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bcd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb0f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bb50, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) free_tracked_pool;
    
    // [VerifierFsRtlAllocateFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f500, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cff10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba340, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cef10, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) fs_rtl_allocate_file_lock;
    
    // [VerifierFsRtlAreNamesEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f508, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cff30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba360, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cef30, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) fs_rtl_are_names_equal;
    
    // [VerifierFsRtlBalanceReads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f510, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cff50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba380, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cef50, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) fs_rtl_balance_reads;
    
    // [VerifierFsRtlCancellableWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f518, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cff70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cef70, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) fs_rtl_cancellable_wait_for_multiple_objects;
    
    // [VerifierFsRtlCancellableWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f520, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cffa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cefa0, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) fs_rtl_cancellable_wait_for_single_object;
    
    // [VerifierFsRtlCheckLockForReadAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f528, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cffc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba3f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cefc0, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) fs_rtl_check_lock_for_read_access;
    
    // [VerifierFsRtlCheckLockForWriteAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f530, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cffe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba410, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cefe0, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) fs_rtl_check_lock_for_write_access;
    
    // [VerifierFsRtlCopyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f538, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba430, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf000, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) fs_rtl_copy_write;
    
    // [VerifierFsRtlDeregisterUncProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f540, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0050, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba480, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf050, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) fs_rtl_deregister_unc_provider;
    
    // [VerifierFsRtlDissectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f548, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0070, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba4a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf070, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) fs_rtl_dissect_name;
    
    // [VerifierFsRtlDoesNameContainWildCards]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f568, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d00a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf0a0, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) fs_rtl_does_name_contain_wild_cards;
    
    // [VerifierFsRtlFastCheckLockForRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f570, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d00c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf0c0, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) fs_rtl_fast_check_lock_for_read;
    
    // [VerifierFsRtlFastCheckLockForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f578, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d00f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf0f0, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) fs_rtl_fast_check_lock_for_write;
    
    // [VerifierFsRtlFastUnlockAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f580, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0120, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba550, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf120, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) fs_rtl_fast_unlock_all;
    
    // [VerifierFsRtlFastUnlockAllByKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f588, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0140, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba570, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf140, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) fs_rtl_fast_unlock_all_by_key;
    
    // [VerifierFsRtlFastUnlockSingle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f590, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0170, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba5a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf170, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) fs_rtl_fast_unlock_single;
    
    // [VerifierFsRtlFreeFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f598, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d01c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba5f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf1c0, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) fs_rtl_free_file_lock;
    
    // [VerifierFsRtlGetFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d01e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba610, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf1e0, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) fs_rtl_get_file_size;
    
    // [VerifierFsRtlGetNextFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0200, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba630, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf200, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) fs_rtl_get_next_file_lock;
    
    // [VerifierFsRtlIncrementCcFastReadNoWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0220, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf220, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) fs_rtl_increment_cc_fast_read_no_wait;
    
    // [VerifierFsRtlIncrementCcFastReadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0240, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba670, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf240, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) fs_rtl_increment_cc_fast_read_wait;
    
    // [VerifierFsRtlInitializeFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0260, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba690, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf260, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) fs_rtl_initialize_file_lock;
    
    // [VerifierFsRtlIsNameInExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5c8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0280, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf280, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) fs_rtl_is_name_in_expression;
    
    // [VerifierFsRtlMdlReadCompleteDev]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d02a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba6d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf2a0, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) fs_rtl_mdl_read_complete_dev;
    
    // [VerifierFsRtlMdlWriteCompleteDev]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d02c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba6f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf2c0, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) fs_rtl_mdl_write_complete_dev;
    
    // [VerifierFsRtlNotifyFilterChangeDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f5e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d02e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba710, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf2e0, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) fs_rtl_notify_filter_change_directory;
    
    // [VerifierFsRtlNotifyFilterReportChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f644, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0380, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba7b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf380, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) fs_rtl_notify_filter_report_change;
    
    // [VerifierFsRtlNotifyFullChangeDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f69c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0400, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba830, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf400, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) fs_rtl_notify_full_change_directory;
    
    // [VerifierFsRtlNotifyFullReportChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f6a4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0480, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba8b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf480, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) fs_rtl_notify_full_report_change;
    
    // [VerifierFsRtlPrivateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f6ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d04f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba920, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf4f0, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) fs_rtl_private_lock;
    
    // [VerifierFsRtlProcessFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f71c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d05a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba9d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf5a0, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) fs_rtl_process_file_lock;
    
    // [VerifierFsRtlRegisterUncProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f724, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d05c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaba9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf5c0, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) fs_rtl_register_unc_provider;
    
    // [VerifierFsRtlRegisterUncProviderEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223134, 0x32828 bytes
    // ntoskrnl.exe .text:0x59ba30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bae50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b8b0, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) fs_rtl_register_unc_provider_ex;
    
    // [VerifierFsRtlRemoveDotsFromPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f72c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d05e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaa10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf5e0, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) fs_rtl_remove_dots_from_path;
    
    // [VerifierFsRtlUninitializeFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f734, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0600, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaa30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf600, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) fs_rtl_uninitialize_file_lock;
    
    // [VerifierFsRtlValidateReparsePointBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f73c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0620, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaa50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf620, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) fs_rtl_validate_reparse_point_buffer;
    
    // [VerifierHalExamineMBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f744, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0640, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaa70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf640, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) hal_examine_mbr;
    
    // [VerifierInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a63dc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6c724, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2dc3c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6bef4, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) init_system;
    
    // [VerifierIoAcquireCancelSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f74c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0660, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabe10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf660, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) io_acquire_cancel_spin_lock;
    
    // [VerifierIoAcquireRemoveLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710b88, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d43e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe590, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d33e0, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) io_acquire_remove_lock_ex;
    
    // [VerifierIoAcquireVpbSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f754, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0680, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaa90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf680, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) io_acquire_vpb_spin_lock;
    
    // [VerifierIoAllocateController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f75c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d06a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf6a0, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) io_allocate_controller;
    
    // [VerifierIoAllocateDriverObjectExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708424, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7290, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6290, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) io_allocate_driver_object_extension;
    
    // [VerifierIoAllocateErrorLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708484, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7300, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6300, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) io_allocate_error_log_entry;
    
    // [VerifierIoAllocateIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7084b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7350, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6350, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) io_allocate_irp;
    
    // [VerifierIoAllocateMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708568, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6eb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6410, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) io_allocate_mdl;
    
    // [VerifierIoAllocateWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708598, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7490, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6490, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) io_allocate_work_item;
    
    // [VerifierIoAttachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f764, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d06c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf6c0, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) io_attach_device;
    
    // [VerifierIoAttachDeviceToDeviceStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f76c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d06e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaaf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf6e0, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) io_attach_device_to_device_stack;
    
    // [VerifierIoAttachDeviceToDeviceStackSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f774, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0700, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabab10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf700, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) io_attach_device_to_device_stack_safe;
    
    // [VerifierIoCancelIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f77c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0720, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabab30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf720, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) io_cancel_irp;
    
    // [VerifierIoCheckShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f784, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0740, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabab50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf740, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) io_check_share_access;
    
    // [VerifierIoConnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7085ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c74c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0710, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c64c0, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) io_connect_interrupt;
    
    // [VerifierIoConnectInterruptEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7085b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7530, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0810, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6530, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) io_connect_interrupt_ex;
    
    // [VerifierIoCreateController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f78c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0770, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabab80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf770, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) io_create_controller;
    
    // [VerifierIoCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71062c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabdfb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2e90, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) io_create_device;
    
    // [VerifierIoCreateFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f794, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0790, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xababa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf790, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) io_create_file;
    
    // [VerifierIoCreateNotificationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f79c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d09a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabadb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf9a0, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) io_create_notification_event;
    
    // [VerifierIoCreateSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7a4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d09c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabadd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf9c0, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) io_create_symbolic_link;
    
    // [VerifierIoCreateSynchronizationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d09e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabadf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf9e0, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) io_create_synchronization_event;
    
    // [VerifierIoCreateUnprotectedSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabae10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa00, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) io_create_unprotected_symbolic_link;
    
    // [VerifierIoDeleteController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabae30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa20, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) io_delete_controller;
    
    // [VerifierIoDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabae50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa40, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) io_delete_device;
    
    // [VerifierIoDeleteSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7cc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabae70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa60, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) io_delete_symbolic_link;
    
    // [VerifierIoDetachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabae90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfa80, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) io_detach_device;
    
    // [VerifierIoDisconnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7085bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7550, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad08f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6550, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) io_disconnect_interrupt;
    
    // [VerifierIoDisconnectInterruptEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7085f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7590, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0940, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6590, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) io_disconnect_interrupt_ex;
    
    // [VerifierIoFreeController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfaa0, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) io_free_controller;
    
    // [VerifierIoFreeMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708654, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7620, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6620, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) io_free_mdl;
    
    // [VerifierIoGetAttachedDeviceReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabe30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfac0, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) io_get_attached_device_reference;
    
    // [VerifierIoGetConfigurationInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaed0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfae0, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) io_get_configuration_information;
    
    // [VerifierIoGetDeviceInterfaceAlias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7f4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaf20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb30, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) io_get_device_interface_alias;
    
    // [VerifierIoGetDeviceInterfaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f7fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaf40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb50, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) io_get_device_interfaces;
    
    // [VerifierIoGetDeviceNumaNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f804, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaf60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb70, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) io_get_device_numa_node;
    
    // [VerifierIoGetDeviceObjectPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f80c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabaf80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfb90, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) io_get_device_object_pointer;
    
    // [VerifierIoGetDeviceProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f814, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabafa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfbb0, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) io_get_device_property;
    
    // [VerifierIoGetDevicePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f81c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabafd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfbe0, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) io_get_device_property_data;
    
    // [VerifierIoGetDeviceToVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22313c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59ba50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bae70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b8d0, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) io_get_device_to_verify;
    
    // [VerifierIoGetFileObjectGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f824, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb040, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc50, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) io_get_file_object_generic_mapping;
    
    // [VerifierIoGetInitialStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f82c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0c70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb060, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc70, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) io_get_initial_stack;
    
    // [VerifierIoInitializeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f834, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb080, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfc90, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) io_initialize_irp;
    
    // [VerifierIoInitializeRemoveLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710c0c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4470, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe620, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3470, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) io_initialize_remove_lock_ex;
    
    // [VerifierIoInitializeWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70869c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7680, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6680, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) io_initialize_work_item;
    
    // [VerifierIoInvalidateDeviceRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223144, 0x32828 bytes
    // ntoskrnl.exe .text:0x59ba70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bae90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b8f0, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) io_invalidate_device_relations;
    
    // [VerifierIoIsWdmVersionAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f83c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfcb0, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) io_is_wdm_version_available;
    
    // [VerifierIoOpenDeviceInterfaceRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f844, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfcd0, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) io_open_device_interface_registry_key;
    
    // [VerifierIoOpenDeviceRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f84c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb0e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfcf0, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) io_open_device_registry_key;
    
    // [VerifierIoRaiseHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f854, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb130, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd10, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) io_raise_hard_error;
    
    // [VerifierIoRaiseInformationalHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f85c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb150, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd30, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) io_raise_informational_hard_error;
    
    // [VerifierIoReadPartitionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f864, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb170, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd50, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) io_read_partition_table;
    
    // [VerifierIoReadPartitionTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f86c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb190, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd70, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) io_read_partition_table_ex;
    
    // [VerifierIoRegisterBootDriverReinitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f874, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb1b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfd90, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) io_register_boot_driver_reinitialization;
    
    // [VerifierIoRegisterDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f87c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfdb0, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) io_register_device_interface;
    
    // [VerifierIoRegisterDriverReinitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f884, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfdd0, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) io_register_driver_reinitialization;
    
    // [VerifierIoRegisterLastChanceShutdownNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f88c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb210, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfdf0, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) io_register_last_chance_shutdown_notification;
    
    // [VerifierIoRegisterPlugPlayNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f894, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb230, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe10, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) io_register_plug_play_notification;
    
    // [VerifierIoRegisterShutdownNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f89c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb270, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe50, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) io_register_shutdown_notification;
    
    // [VerifierIoReleaseCancelSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8a4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabe50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe70, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) io_release_cancel_spin_lock;
    
    // [VerifierIoReleaseRemoveLockAndWaitEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710d48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d45e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe790, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d35e0, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) io_release_remove_lock_and_wait_ex;
    
    // [VerifierIoReleaseRemoveLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710da4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4650, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe800, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3650, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) io_release_remove_lock_ex;
    
    // [VerifierIoReleaseVpbSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb290, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfe90, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) io_release_vpb_spin_lock;
    
    // [VerifierIoRemoveShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb2b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfeb0, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) io_remove_share_access;
    
    // [VerifierIoReplacePartitionUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb2d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfed0, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) io_replace_partition_unit;
    
    // [VerifierIoReportDetectedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb2f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cfef0, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) io_report_detected_device;
    
    // [VerifierIoReportTargetDeviceChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8cc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb340, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cff40, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) io_report_target_device_change;
    
    // [VerifierIoReportTargetDeviceChangeAsynchronous]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb360, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cff60, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) io_report_target_device_change_asynchronous;
    
    // [VerifierIoReuseIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabe70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cff80, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) io_reuse_irp;
    
    // [VerifierIoSetCompletionRoutineEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708728, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7730, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6730, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) io_set_completion_routine_ex;
    
    // [VerifierIoSetDeviceInterfaceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb380, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cffa0, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) io_set_device_interface_state;
    
    // [VerifierIoSetDevicePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0fc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cffc0, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) io_set_device_property_data;
    
    // [VerifierIoSetDeviceToVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22314c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59ba90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5baeb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b910, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) io_set_device_to_verify;
    
    // [VerifierIoSetPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8f4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb3e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0000, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) io_set_partition_information;
    
    // [VerifierIoSetPartitionInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f8fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb400, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0020, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) io_set_partition_information_ex;
    
    // [VerifierIoSetShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f904, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1040, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb420, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0040, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) io_set_share_access;
    
    // [VerifierIoSetStartIoAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f90c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb440, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0060, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) io_set_start_io_attributes;
    
    // [VerifierIoStartNextPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f914, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1080, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb460, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0080, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) io_start_next_packet;
    
    // [VerifierIoUnregisterPlugPlayNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f91c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d10a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb480, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d00a0, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) io_unregister_plug_play_notification;
    
    // [VerifierIoUnregisterPlugPlayNotificationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f924, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d10c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb4a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d00c0, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) io_unregister_plug_play_notification_ex;
    
    // [VerifierIoUnregisterShutdownNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f92c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d10e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d00e0, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) io_unregister_shutdown_notification;
    
    // [VerifierIoUpdateShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f934, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1100, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0100, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) io_update_share_access;
    
    // [VerifierIoVolumeDeviceToDosName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710680, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe020, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2f00, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) io_volume_device_to_dos_name;
    
    // [VerifierIoWMIAllocateInstanceIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f93c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1120, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb500, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0120, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) io_wmi_allocate_instance_ids;
    
    // [VerifierIoWMIRegistrationControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720000, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0080, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4f00, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) io_wmi_registration_control;
    
    // [VerifierIoWMIWriteEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7200d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0170, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4ff0, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) io_wmi_write_event;
    
    // [VerifierIoWriteErrorLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7087f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7810, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7080, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6810, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) io_write_error_log_entry;
    
    // [VerifierIoWritePartitionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f944, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1140, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0140, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) io_write_partition_table;
    
    // [VerifierIoWritePartitionTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f94c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1170, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb550, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0170, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) io_write_partition_table_ex;
    
    // [VerifierIofCompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7087f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7830, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6830, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) iof_complete_request;
    
    // [VerifierIsTrackingPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x307c68, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c904, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36504, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c964, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) is_tracking_pool;
    
    // [VerifierKeAcquireGuardedMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f974, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1190, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb570, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0190, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) ke_acquire_guarded_mutex;
    
    // [VerifierKeAcquireGuardedMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f97c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d11b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb590, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d01b0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) ke_acquire_guarded_mutex_unsafe;
    
    // [VerifierKeAcquireInStackQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714ac8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d84b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac260, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d74b0, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock;
    
    // [VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714b08, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8500, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1180, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7500, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_at_dpc_level;
    
    // [VerifierKeAcquireInStackQueuedSpinLockCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714bdc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8630, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac11e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7630, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_common;
    
    // [VerifierKeAcquireInStackQueuedSpinLockForDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714c68, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d86d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d76d0, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_for_dpc;
    
    // [VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714d24, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d87d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac12e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d77d0, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) ke_acquire_in_stack_queued_spin_lock_raise_to_synch;
    
    // [VerifierKeAcquireInterruptSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f984, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d11d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d01d0, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) ke_acquire_interrupt_spin_lock;
    
    // [VerifierKeAcquireQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f98c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d11f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb5d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d01f0, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) ke_acquire_queued_spin_lock;
    
    // [VerifierKeAcquireQueuedSpinLockRaiseToSynch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714dfc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d88d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1380, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d78d0, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) ke_acquire_queued_spin_lock_raise_to_synch;
    
    // [VerifierKeAcquireSpinLockAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714e5c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1410, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7940, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) ke_acquire_spin_lock_at_dpc_level;
    
    // [VerifierKeAcquireSpinLockForDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f9ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1270, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb660, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0270, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) ke_acquire_spin_lock_for_dpc;
    
    // [VerifierKeAcquireSpinLockRaiseToDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714ea4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d89b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d79b0, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) ke_acquire_spin_lock_raise_to_dpc;
    
    // [VerifierKeAreAllApcsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f9f4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1290, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb680, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0290, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) ke_are_all_apcs_disabled;
    
    // [VerifierKeAreApcsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f9fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d12b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb6a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d02b0, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) ke_are_apcs_disabled;
    
    // [VerifierKeCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714ef0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac2e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7a20, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) ke_cancel_timer;
    
    // [VerifierKeClearEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714ef8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac300, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7a40, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) ke_clear_event;
    
    // [VerifierKeDelayExecutionThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714f00, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1460, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7a60, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) ke_delay_execution_thread;
    
    // [VerifierKeDeregisterNmiCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d12d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb6c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d02d0, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) ke_deregister_nmi_callback;
    
    // [VerifierKeEnterCriticalRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714f48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac320, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7ac0, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) ke_enter_critical_region;
    
    // [VerifierKeEnterGuardedRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa0c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d12f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d02f0, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) ke_enter_guarded_region;
    
    // [VerifierKeFlushQueuedDpcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa14, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1310, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb700, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0310, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) ke_flush_queued_dpcs;
    
    // [VerifierKeInitializeDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa1c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1330, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb720, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0330, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) ke_initialize_device_queue;
    
    // [VerifierKeInitializeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714f90, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac340, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7b30, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) ke_initialize_event;
    
    // [VerifierKeInitializeGuardedMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa24, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1350, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb740, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0350, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) ke_initialize_guarded_mutex;
    
    // [VerifierKeInitializeMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714fd0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac14c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7b80, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) ke_initialize_mutant;
    
    // [VerifierKeInitializeMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71502c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac14e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7c00, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) ke_initialize_mutex;
    
    // [VerifierKeInitializeSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715054, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1500, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7c50, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) ke_initialize_semaphore;
    
    // [VerifierKeInitializeTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715094, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7ca0, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) ke_initialize_timer;
    
    // [VerifierKeInitializeTimerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71509c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1540, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7cc0, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) ke_initialize_timer_ex;
    
    // [VerifierKeInsertByKeyDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa2c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1370, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb760, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0370, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) ke_insert_by_key_device_queue;
    
    // [VerifierKeInsertDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa34, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1390, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb780, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0390, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) ke_insert_device_queue;
    
    // [VerifierKeInsertHeadQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa3c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d13b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb7a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d03b0, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) ke_insert_head_queue;
    
    // [VerifierKeInsertQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa44, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d13d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d03d0, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) ke_insert_queue;
    
    // [VerifierKeIsApcRunningThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7150d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1580, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7d20, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) ke_is_apc_running_thread;
    
    // [VerifierKeIsExecutingLegacyDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701494, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0070, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa93b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf070, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) ke_is_executing_legacy_dpc;
    
    // [VerifierKeLeaveCriticalRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7150e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac360, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7d40, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) ke_leave_critical_region;
    
    // [VerifierKeLeaveGuardedRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d13f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabe90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d03f0, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) ke_leave_guarded_region;
    
    // [VerifierKeLowerIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715154, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac380, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7df0, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) ke_lower_irql;
    
    // [VerifierKePulseEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715190, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac15a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7e40, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) ke_pulse_event;
    
    // [VerifierKeQueryPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa54, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb7e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0410, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) ke_query_priority_thread;
    
    // [VerifierKeQueryRuntimeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa5c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1430, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb800, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0430, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) ke_query_runtime_thread;
    
    // [VerifierKeReadStateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715200, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7ee0, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) ke_read_state_event;
    
    // [VerifierKeReadStateMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715208, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac15c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7f00, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) ke_read_state_mutex;
    
    // [VerifierKeReadStateSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715210, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac15e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7f20, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) ke_read_state_semaphore;
    
    // [VerifierKeReadStateTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715218, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1600, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7f40, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) ke_read_state_timer;
    
    // [VerifierKeRegisterNmiCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa64, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1450, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb820, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0450, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) ke_register_nmi_callback;
    
    // [VerifierKeReleaseGuardedMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1470, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0470, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) ke_release_guarded_mutex;
    
    // [VerifierKeReleaseGuardedMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1490, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb840, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0490, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) ke_release_guarded_mutex_unsafe;
    
    // [VerifierKeReleaseInStackQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715220, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac3f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7f60, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock;
    
    // [VerifierKeReleaseInStackQueuedSpinLockForDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7152b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1620, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8020, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock_for_dpc;
    
    // [VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715334, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d90f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1640, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d80f0, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) ke_release_in_stack_queued_spin_lock_from_dpc_level;
    
    // [VerifierKeReleaseInterruptSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa7c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d14b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb860, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d04b0, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) ke_release_interrupt_spin_lock;
    
    // [VerifierKeReleaseMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7153b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d91e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1660, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d81e0, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) ke_release_mutant;
    
    // [VerifierKeReleaseMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715478, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d92c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1680, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d82c0, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) ke_release_mutex;
    
    // [VerifierKeReleaseQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fa84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d14d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb880, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d04d0, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) ke_release_queued_spin_lock;
    
    // [VerifierKeReleaseSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7154f4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9360, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac450, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8360, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) ke_release_semaphore;
    
    // [VerifierKeReleaseSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7154fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9380, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac470, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8380, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) ke_release_spin_lock;
    
    // [VerifierKeReleaseSpinLockForDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb00, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1570, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0570, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) ke_release_spin_lock_for_dpc;
    
    // [VerifierKeReleaseSpinLockFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71555c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d93f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac16a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d83f0, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) ke_release_spin_lock_from_dpc_level;
    
    // [VerifierKeRemoveByKeyDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb08, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1590, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb8f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0590, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) ke_remove_by_key_device_queue;
    
    // [VerifierKeRemoveDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d15b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb910, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d05b0, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) ke_remove_device_queue;
    
    // [VerifierKeRemoveEntryDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb18, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d15d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb930, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d05d0, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) ke_remove_entry_device_queue;
    
    // [VerifierKeRemoveQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb20, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d15f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb950, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d05f0, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) ke_remove_queue;
    
    // [VerifierKeResetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715684, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9560, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8560, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) ke_reset_event;
    
    // [VerifierKeSetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71568c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d95c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d85c0, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) ke_set_event;
    
    // [VerifierKeSetSystemGroupAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb28, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1610, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb970, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0610, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) ke_set_system_group_affinity_thread;
    
    // [VerifierKeSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7156fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9640, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac500, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8640, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) ke_set_timer;
    
    // [VerifierKeSetTimerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71570c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9660, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8660, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) ke_set_timer_ex;
    
    // [VerifierKeSynchronizeExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71571c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9680, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1720, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8680, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) ke_synchronize_execution;
    
    // [VerifierKeTestSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb30, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1630, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabed0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0630, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) ke_test_spin_lock;
    
    // [VerifierKeTryToAcquireGuardedMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb38, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1650, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb990, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0650, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) ke_try_to_acquire_guarded_mutex;
    
    // [VerifierKeTryToAcquireQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715780, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9700, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac17a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8700, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) ke_try_to_acquire_queued_spin_lock;
    
    // [VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7157f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9790, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1840, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8790, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) ke_try_to_acquire_queued_spin_lock_raise_to_synch;
    
    // [VerifierKeTryToAcquireSpinLockAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715860, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9810, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac18e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8810, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) ke_try_to_acquire_spin_lock_at_dpc_level;
    
    // [VerifierKeWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7158bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9890, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1930, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8890, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) ke_wait_for_multiple_objects;
    
    // [VerifierKeWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7159a4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d99c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac540, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d89c0, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) ke_wait_for_single_object;
    
    // [VerifierMmAddPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1670, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb9b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0670, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) mm_add_physical_memory;
    
    // [VerifierMmAllocateContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e638, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xace440, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2d90, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) mm_allocate_contiguous_memory;
    
    // [VerifierMmAllocateContiguousMemorySpecifyCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e6e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3e80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xace5c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2e80, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) mm_allocate_contiguous_memory_specify_cache;
    
    // [VerifierMmAllocateContiguousMemorySpecifyCacheNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e7b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xace700, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2fa0, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) mm_allocate_contiguous_memory_specify_cache_node;
    
    // [VerifierMmAllocateContiguousNodeMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e888, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e40c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xace820, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e30c0, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) mm_allocate_contiguous_node_memory;
    
    // [VerifierMmAllocateMappingAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e938, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e41c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xace920, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e31c0, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) mm_allocate_mapping_address;
    
    // [VerifierMmAllocateNodePagesForMdlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e988, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4220, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xace970, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3220, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) mm_allocate_node_pages_for_mdl_ex;
    
    // [VerifierMmAllocateNonCachedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ea60, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4340, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacea80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3340, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) mm_allocate_non_cached_memory;
    
    // [VerifierMmAllocatePagesForMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ead8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e43c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaceaf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e33c0, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) mm_allocate_pages_for_mdl;
    
    // [VerifierMmAllocatePagesForMdlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71eb84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e44b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacec00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e34b0, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) mm_allocate_pages_for_mdl_ex;
    
    // [VerifierMmBuildMdlForNonPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ec54, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e45d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaced10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e35d0, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) mm_build_mdl_for_non_paged_pool;
    
    // [VerifierMmCreateMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71eca8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4690, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaced30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3690, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) mm_create_mdl;
    
    // [VerifierMmCreateMirror]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1690, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb9d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0690, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) mm_create_mirror;
    
    // [VerifierMmCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ed24, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4710, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacedc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3710, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) mm_create_section;
    
    // [VerifierMmDoesFileHaveUserWritableReferences]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb50, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d16b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabb9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d06b0, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) mm_does_file_have_user_writable_references;
    
    // [VerifierMmFreeContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ed84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e47b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacee60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e37b0, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) mm_free_contiguous_memory;
    
    // [VerifierMmFreeContiguousMemorySpecifyCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71edb4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e47f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaceea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e37f0, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) mm_free_contiguous_memory_specify_cache;
    
    // [VerifierMmFreeNonCachedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ee04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4850, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacef00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3850, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) mm_free_non_cached_memory;
    
    // [VerifierMmFreePagesFromMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ee44, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e48a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacef50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e38a0, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) mm_free_pages_from_mdl;
    
    // [VerifierMmGetPhysicalMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb58, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d16d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabba10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d06d0, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) mm_get_physical_memory_ranges;
    
    // [VerifierMmGetSystemRoutineAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ee94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4900, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacefb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3900, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) mm_get_system_routine_address;
    
    // [VerifierMmLockPagableDataSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb60, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d16f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabba30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d06f0, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) mm_lock_pagable_data_section;
    
    // [VerifierMmLockPagableSectionByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb68, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1710, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabba50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0710, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) mm_lock_pagable_section_by_handle;
    
    // [VerifierMmMapIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71eebc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaceff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3940, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) mm_map_io_space;
    
    // [VerifierMmMapLockedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71efc0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4ab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf180, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3ab0, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) mm_map_locked_pages;
    
    // [VerifierMmMapLockedPagesSpecifyCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f09c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf250, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3b90, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) mm_map_locked_pages_specify_cache;
    
    // [VerifierMmMapLockedPagesWithReservedMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb70, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1730, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabba70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0730, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) mm_map_locked_pages_with_reserved_mapping;
    
    // [VerifierMmMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f1c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf390, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3cb0, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) mm_map_view_of_section;
    
    // [VerifierMmPageEntireDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1750, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabba90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0750, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) mm_page_entire_driver;
    
    // [VerifierMmPrefetchPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb80, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1770, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0770, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) mm_prefetch_pages;
    
    // [VerifierMmProbeAndLockPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f228, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4d70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf450, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3d70, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) mm_probe_and_lock_pages;
    
    // [VerifierMmProbeAndLockProcessPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f310, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf540, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3e60, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) mm_probe_and_lock_process_pages;
    
    // [VerifierMmProtectMdlSystemAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f404, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf640, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3f60, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) mm_protect_mdl_system_address;
    
    // [VerifierMmRemovePhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb88, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1790, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0790, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) mm_remove_physical_memory;
    
    // [VerifierMmResetDriverPaging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb90, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d17b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbaf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d07b0, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) mm_reset_driver_paging;
    
    // [VerifierMmSecureVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fb98, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d17d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbb10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d07d0, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) mm_secure_virtual_memory;
    
    // [VerifierMmUnlockPagableImageSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fba0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d17f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d07f0, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) mm_unlock_pagable_image_section;
    
    // [VerifierMmUnlockPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f438, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf680, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3fa0, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) mm_unlock_pages;
    
    // [VerifierMmUnmapIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f56c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e50e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e40e0, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) mm_unmap_io_space;
    
    // [VerifierMmUnmapLockedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f5e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5170, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf850, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4170, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) mm_unmap_locked_pages;
    
    // [VerifierMmUnsecureVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fba8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1810, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbb50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0810, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) mm_unsecure_virtual_memory;
    
    // [VerifierModifyableOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cad4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36884, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb78, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) modifyable_options;
    
    // [VerifierNtCreateFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f968, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5670, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacfba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4670, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) nt_create_file;
    
    // [VerifierNtCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f6d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5340, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf870, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4340, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) nt_create_section;
    
    // [VerifierNtLockFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fa7c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e57a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacfcd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e47a0, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) nt_lock_file;
    
    // [VerifierNtMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f734, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e53d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf900, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e43d0, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) nt_map_view_of_section;
    
    // [VerifierNtReadFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fa84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5820, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacfd50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4820, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) nt_read_file;
    
    // [VerifierNtUnlockFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fb94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacfe70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4940, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) nt_unlock_file;
    
    // [VerifierNtWriteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fb9c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5970, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacfea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4970, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) nt_write_file;
    
    // [VerifierObGetObjectSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fcac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4a90, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) ob_get_object_security;
    
    // [VerifierObReferenceObjectByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fcf0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4ae0, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) ob_reference_object_by_handle;
    
    // [VerifierObReferenceObjectByHandleWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fdc0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4bc0, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) ob_reference_object_by_handle_with_tag;
    
    // [VerifierObReferenceObjectByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fdc8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4c00, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) ob_reference_object_by_pointer;
    
    // [VerifierObReferenceObjectByPointerWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fe3c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad1000, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4c90, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) ob_reference_object_by_pointer_with_tag;
    
    // [VerifierObReleaseObjectSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fe8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad1030, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4d00, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) ob_release_object_security;
    
    // [VerifierObfDereferenceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fe94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac9a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4d20, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) obf_dereference_object;
    
    // [VerifierObfDereferenceObjectWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71feb8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad1050, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4d50, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) obf_dereference_object_with_tag;
    
    // [VerifierObfReferenceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71fee8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad1070, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4d90, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) obf_reference_object;
    
    // [VerifierObfReferenceObjectWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ff3c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5e00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad1090, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4e00, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) obf_reference_object_with_tag;
    
    // [VerifierPoCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fbb0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1860, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0860, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) po_call_driver;
    
    // [VerifierPoFxActivateComponent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fbd0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d18a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d08a0, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) po_fx_activate_component;
    
    // [VerifierPoFxCompleteDevicePowerNotRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fbd8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d18c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbc30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d08c0, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) po_fx_complete_device_power_not_required;
    
    // [VerifierPoFxCompleteIdleCondition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fbe0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d18e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbc50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d08e0, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) po_fx_complete_idle_condition;
    
    // [VerifierPoFxCompleteIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fbe8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1900, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbc70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0900, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) po_fx_complete_idle_state;
    
    // [VerifierPoFxIdleComponent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fbf0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1920, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbc90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0920, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) po_fx_idle_component;
    
    // [VerifierPoFxNotifySurprisePowerOn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fbf8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbcb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0940, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) po_fx_notify_surprise_power_on;
    
    // [VerifierPoFxPowerControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc00, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1960, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbcd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0960, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) po_fx_power_control;
    
    // [VerifierPoFxRegisterDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc08, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d19a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbd10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d09a0, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) po_fx_register_device;
    
    // [VerifierPoFxReportDevicePoweredOn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d19c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbd30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d09c0, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) po_fx_report_device_powered_on;
    
    // [VerifierPoFxSetComponentLatency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc18, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d19e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbd50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d09e0, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) po_fx_set_component_latency;
    
    // [VerifierPoFxSetComponentResidency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc20, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbd70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a00, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) po_fx_set_component_residency;
    
    // [VerifierPoFxSetComponentWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc28, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a20, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) po_fx_set_component_wake;
    
    // [VerifierPoFxSetDeviceIdleTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc30, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbdb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a40, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) po_fx_set_device_idle_timeout;
    
    // [VerifierPoFxStartDevicePowerManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc38, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbdd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a60, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) po_fx_start_device_power_management;
    
    // [VerifierPoFxUnregisterDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbdf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0a80, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) po_fx_unregister_device;
    
    // [VerifierPoRequestPowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbe10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0aa0, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) po_request_power_irp;
    
    // [VerifierPortExAllocatePoolWithQuotaTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d4b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9380, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1be0, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) port_ex_allocate_pool_with_quota_tag;
    
    // [VerifierPortExAllocatePoolWithTagPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d5a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9490, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1ce0, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) port_ex_allocate_pool_with_tag_priority;
    
    // [VerifierPortIoAllocateIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708800, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7850, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab70a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6850, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) port_io_allocate_irp;
    
    // [VerifierPortIoAllocateMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7088b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7920, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7170, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6920, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) port_io_allocate_mdl;
    
    // [VerifierPortIoAllocateWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7088e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7990, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab71e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6990, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) port_io_allocate_work_item;
    
    // [VerifierPortKeAcquireSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715a78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac19e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8ae0, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) port_ke_acquire_spin_lock;
    
    // [VerifierPortKeAcquireSpinLockNoXdv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715af4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1a00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8b70, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) port_ke_acquire_spin_lock_no_xdv;
    
    // [VerifierPortKeReleaseSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71563c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9500, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8500, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) port_ke_release_spin_lock;
    
    // [VerifierPortKeReleaseSpinLockNoXdv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715b6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8c00, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) port_ke_release_spin_lock_no_xdv;
    
    // [VerifierProbeForRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabf10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0ad0, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) probe_for_read;
    
    // [VerifierProbeForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabf30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0af0, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) probe_for_write;
    
    // [VerifierPsAssignImpersonationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc7c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbe40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0b10, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) ps_assign_impersonation_token;
    
    // [VerifierPsCreateSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbe60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0b30, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) ps_create_system_thread;
    
    // [VerifierPsDereferenceImpersonationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0b70, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) ps_dereference_impersonation_token;
    
    // [VerifierPsDereferencePrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0b90, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) ps_dereference_primary_token;
    
    // [VerifierPsDisableImpersonation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fc9c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0bb0, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) ps_disable_impersonation;
    
    // [VerifierPsGetVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fca4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbf00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0bd0, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) ps_get_version;
    
    // [VerifierPsImpersonateClient]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbf20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0bf0, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) ps_impersonate_client;
    
    // [VerifierPsReferenceImpersonationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcb4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbf50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0c20, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) ps_reference_impersonation_token;
    
    // [VerifierPsReferencePrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcbc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbf70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0c40, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) ps_reference_primary_token;
    
    // [VerifierPsRemoveLoadImageNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbf90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0c60, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) ps_remove_load_image_notify_routine;
    
    // [VerifierPsRestoreImpersonation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fccc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbfb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0c80, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) ps_restore_impersonation;
    
    // [VerifierPsRevertToSelf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcd4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbfd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0ca0, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) ps_revert_to_self;
    
    // [VerifierPsSetCreateProcessNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcdc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabbff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0cc0, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) ps_set_create_process_notify_routine;
    
    // [VerifierPsSetCreateProcessNotifyRoutineEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fce4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc010, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0ce0, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) ps_set_create_process_notify_routine_ex;
    
    // [VerifierPsSetCreateThreadNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc030, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d00, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) ps_set_create_thread_notify_routine;
    
    // [VerifierPsSetLoadImageNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcf4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc050, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d20, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) ps_set_load_image_notify_routine;
    
    // [VerifierPsTerminateSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fcfc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc070, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0d40, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) ps_terminate_system_thread;
    
    // [VerifierRtlAnsiStringToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e1c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3720, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2720, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) rtl_ansi_string_to_unicode_string;
    
    // [VerifierRtlCompareUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e204, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3770, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac920, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2770, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) rtl_compare_unicode_string;
    
    // [VerifierRtlCreateUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e20c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3790, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdb50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2790, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) rtl_create_unicode_string;
    
    // [VerifierRtlDeleteRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc0f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0da0, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) rtl_delete_registry_value;
    
    // [VerifierRtlDowncaseUnicodeChar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e260, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e37f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdb70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e27f0, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) rtl_downcase_unicode_char;
    
    // [VerifierRtlDowncaseUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e268, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3810, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdb90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2810, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) rtl_downcase_unicode_string;
    
    // [VerifierRtlDuplicateUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e2ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3860, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdbb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2860, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) rtl_duplicate_unicode_string;
    
    // [VerifierRtlEqualUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e2e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e38a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac940, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e28a0, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) rtl_equal_unicode_string;
    
    // [VerifierRtlFreeUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e2e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e38c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdbd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e28c0, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) rtl_free_unicode_string;
    
    // [VerifierRtlGenerateClass5Guid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e2f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3900, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdc10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2900, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) rtl_generate_class5_guid;
    
    // [VerifierRtlGUIDFromString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e2f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e38e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e28e0, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) rtl_guid_from_string;
    
    // [VerifierRtlHashUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e300, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3920, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdc30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2920, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) rtl_hash_unicode_string;
    
    // [VerifierRtlOemStringToCountedUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e308, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdc50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2940, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) rtl_oem_string_to_counted_unicode_string;
    
    // [VerifierRtlOemStringToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e34c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3990, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdc70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2990, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) rtl_oem_string_to_unicode_string;
    
    // [VerifierRtlStringFromGUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e390, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e39e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdc90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e29e0, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) rtl_string_from_guid;
    
    // [VerifierRtlUnicodeStringToAnsiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e3a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2a30, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) rtl_unicode_string_to_ansi_string;
    
    // [VerifierRtlUnicodeStringToCountedOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e3e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdd00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2a80, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) rtl_unicode_string_to_counted_oem_string;
    
    // [VerifierRtlUnicodeStringToOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e428, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdd20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2ad0, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) rtl_unicode_string_to_oem_string;
    
    // [VerifierRtlUnicodeToUTF8N]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e46c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdd40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2b20, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) rtl_unicode_to_utf8n;
    
    // [VerifierRtlUpcaseUnicodeChar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e474, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac960, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2b50, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) rtl_upcase_unicode_char;
    
    // [VerifierRtlUpcaseUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e47c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdd70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2b70, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) rtl_upcase_unicode_string;
    
    // [VerifierRtlUpcaseUnicodeStringToAnsiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e4c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2bc0, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) rtl_upcase_unicode_string_to_ansi_string;
    
    // [VerifierRtlUpcaseUnicodeStringToCountedOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e504, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacddb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2c10, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) rtl_upcase_unicode_string_to_counted_oem_string;
    
    // [VerifierRtlUpcaseUnicodeStringToOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e548, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacddd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2c60, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) rtl_upcase_unicode_string_to_oem_string;
    
    // [VerifierRtlUTF8ToUnicodeN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e398, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdcb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2a00, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) rtl_utf8_to_unicode_n;
    
    // [VerifierRtlxAnsiStringToUnicodeSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e58c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacddf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2cb0, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) rtlx_ansi_string_to_unicode_size;
    
    // [VerifierRtlxUnicodeStringToAnsiSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e594, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacde10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2cd0, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) rtlx_unicode_string_to_ansi_size;
    
    // [VerifierSeAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd0c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc1e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0df0, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) se_access_check;
    
    // [VerifierSeAssignSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd64, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc260, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0e70, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) se_assign_security;
    
    // [VerifierSeAssignSecurityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc2a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0eb0, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) se_assign_security_ex;
    
    // [VerifierSeDeassignSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc310, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0f20, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) se_deassign_security;
    
    // [VerifierSeLockSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd7c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabf50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0f40, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) se_lock_subject_context;
    
    // [VerifierSeReleaseSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabf70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0f60, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) se_release_subject_context;
    
    // [VerifierSeSinglePrivilegeCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc330, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0f80, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) se_single_privilege_check;
    
    // [VerifierSeUnlockSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fd9c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabf90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0fa0, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) se_unlock_subject_context;
    
    // [VerifierSeValidSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fda4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1fc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc350, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0fc0, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) se_valid_security_descriptor;
    
    // [VerifierTriageActionTaken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b74, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d184, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e4c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ca74, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) triage_action_taken;
    
    // [VerifierZwAllocateLocallyUniqueId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc370, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d0fe0, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) zw_allocate_locally_unique_id;
    
    // [VerifierZwClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdb4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaabfb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1000, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) zw_close;
    
    // [VerifierZwCommitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdbc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc390, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1020, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) zw_commit_complete;
    
    // [VerifierZwCommitTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2040, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc3b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1040, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) zw_commit_transaction;
    
    // [VerifierZwCreateKeyTransacted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdcc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1060, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) zw_create_key_transacted;
    
    // [VerifierZwCreateResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdd4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d20b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bdc30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d10b0, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) zw_create_resource_manager;
    
    // [VerifierZwDeleteKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fddc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d20f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc420, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d10f0, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) zw_delete_key;
    
    // [VerifierZwEnumerateTransactionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fde4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2110, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc440, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1110, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) zw_enumerate_transaction_object;
    
    // [VerifierZwFlushBuffersFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2140, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc470, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1140, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) zw_flush_buffers_file;
    
    // [VerifierZwFlushKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223154, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5baed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b930, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) zw_flush_key;
    
    // [VerifierZwGetNotificationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdf4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bdc70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1190, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) zw_get_notification_resource_manager;
    
    // [VerifierZwLockFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fdfc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d21d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d11d0, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) zw_lock_file;
    
    // [VerifierZwOpenKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe0c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2270, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc540, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1270, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) zw_open_key_ex;
    
    // [VerifierZwOpenKeyTransacted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe14, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2290, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc560, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1290, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) zw_open_key_transacted;
    
    // [VerifierZwOpenKeyTransactedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe1c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d22b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc580, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d12b0, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) zw_open_key_transacted_ex;
    
    // [VerifierZwOpenResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe24, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d22e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bdcb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d12e0, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) zw_open_resource_manager;
    
    // [VerifierZwPrePrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe2c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2310, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1310, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) zw_pre_prepare_complete;
    
    // [VerifierZwQueryInformationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe34, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bdce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1330, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) zw_query_information_resource_manager;
    
    // [VerifierZwQueryQuotaInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe3c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2360, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc5d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1360, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) zw_query_quota_information_file;
    
    // [VerifierZwReadOnlyEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe44, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d23d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc640, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d13d0, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) zw_read_only_enlistment;
    
    // [VerifierZwRecoverEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d23f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc660, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d13f0, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) zw_recover_enlistment;
    
    // [VerifierZwRecoverTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe54, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc680, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1410, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) zw_recover_transaction_manager;
    
    // [VerifierZwRenameKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe5c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2430, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc6a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1430, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) zw_rename_key;
    
    // [VerifierZwRollbackComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe64, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2450, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc6c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1450, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) zw_rollback_complete;
    
    // [VerifierZwRollbackTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2470, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1470, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) zw_rollback_transaction;
    
    // [VerifierZwSetInformationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d24b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc720, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d14b0, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) zw_set_information_resource_manager;
    
    // [VerifierZwSetInformationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe7c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d24d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc740, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d14d0, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) zw_set_information_token;
    
    // [VerifierZwSetQuotaInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d24f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc760, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d14f0, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) zw_set_quota_information_file;
    
    // [VerifierZwSetTimerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2510, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc780, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1510, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) zw_set_timer_ex;
    
    // [VerifierZwTerminateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2530, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc7a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1530, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) zw_terminate_process;
    
    // [VerifierZwUnlockFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fe9c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2550, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1550, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) zw_unlock_file;
    
    // [VerifierZwUnmapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70fea4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2580, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc7f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d1580, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) zw_unmap_view_of_section;
    
    // [VerifierBRUSHOBJ_pvAllocRbrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290230, 0x13864 bytes
    // win32kfull.sys .text:0x29e140, 0x1596d bytes
    // win32kfull.sys .text:0x29f140, 0x1659e bytes
    // win32kfull.sys .text:0x29e0b0, 0x1596d bytes
    //
    _s85(sdk::unknown_ptr) brushobj_pv_alloc_rbrush;
    
    // [VerifierCLIPOBJ_ppoGetPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290270, 0x13864 bytes
    // win32kfull.sys .text:0x29e180, 0x1596d bytes
    // win32kfull.sys .text:0x29f180, 0x1659e bytes
    // win32kfull.sys .text:0x29e0f0, 0x1596d bytes
    //
    _s86(sdk::unknown_ptr) clipobj_ppo_get_path;
    
    // [VerifierEngAllocMem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2902a0, 0x13864 bytes
    // win32kfull.sys .text:0x29e1b0, 0x1596d bytes
    // win32kfull.sys .text:0x29f1b0, 0x1659e bytes
    // win32kfull.sys .text:0x29e120, 0x1596d bytes
    //
    _s87(sdk::unknown_ptr) eng_alloc_mem;
    
    // [VerifierEngAllocUserMem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2903f0, 0x13864 bytes
    // win32kfull.sys .text:0x29e330, 0x1596d bytes
    // win32kfull.sys .text:0x29f320, 0x1659e bytes
    // win32kfull.sys .text:0x29e2a0, 0x1596d bytes
    //
    _s88(sdk::unknown_ptr) eng_alloc_user_mem;
    
    // [VerifierEngCreateBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290430, 0x13864 bytes
    // win32kfull.sys .text:0x29e370, 0x1596d bytes
    // win32kfull.sys .text:0x29f360, 0x1659e bytes
    // win32kfull.sys .text:0x29e2e0, 0x1596d bytes
    //
    _s89(sdk::unknown_ptr) eng_create_bitmap;
    
    // [VerifierEngCreateClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290490, 0x13864 bytes
    // win32kfull.sys .text:0x29e3e0, 0x1596d bytes
    // win32kfull.sys .text:0x29f3d0, 0x1659e bytes
    // win32kfull.sys .text:0x29e350, 0x1596d bytes
    //
    _s90(sdk::unknown_ptr) eng_create_clip;
    
    // [VerifierEngCreateDeviceBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2904b0, 0x13864 bytes
    // win32kfull.sys .text:0x29e410, 0x1596d bytes
    // win32kfull.sys .text:0x29f400, 0x1659e bytes
    // win32kfull.sys .text:0x29e380, 0x1596d bytes
    //
    _s91(sdk::unknown_ptr) eng_create_device_bitmap;
    
    // [VerifierEngCreateDeviceSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2904f0, 0x13864 bytes
    // win32kfull.sys .text:0x29e470, 0x1596d bytes
    // win32kfull.sys .text:0x29f460, 0x1659e bytes
    // win32kfull.sys .text:0x29e3e0, 0x1596d bytes
    //
    _s92(sdk::unknown_ptr) eng_create_device_surface;
    
    // [VerifierEngCreateDriverObj]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290530, 0x13864 bytes
    // win32kfull.sys .text:0x29e4d0, 0x1596d bytes
    // win32kfull.sys .text:0x29f4c0, 0x1659e bytes
    // win32kfull.sys .text:0x29e440, 0x1596d bytes
    //
    _s93(sdk::unknown_ptr) eng_create_driver_obj;
    
    // [VerifierEngCreatePalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290580, 0x13864 bytes
    // win32kfull.sys .text:0x29e520, 0x1596d bytes
    // win32kfull.sys .text:0x29f510, 0x1659e bytes
    // win32kfull.sys .text:0x29e490, 0x1596d bytes
    //
    _s94(sdk::unknown_ptr) eng_create_palette;
    
    // [VerifierEngCreatePath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2905e0, 0x13864 bytes
    // win32kfull.sys .text:0x29e590, 0x1596d bytes
    // win32kfull.sys .text:0x29f580, 0x1659e bytes
    // win32kfull.sys .text:0x29e500, 0x1596d bytes
    //
    _s95(sdk::unknown_ptr) eng_create_path;
    
    // [VerifierEngCreateRedirectionDeviceBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290600, 0x13864 bytes
    // win32kfull.sys .text:0x29e5c0, 0x1596d bytes
    // win32kfull.sys .text:0x29f5b0, 0x1659e bytes
    // win32kfull.sys .text:0x29e530, 0x1596d bytes
    //
    _s96(sdk::unknown_ptr) eng_create_redirection_device_bitmap;
    
    // [VerifierEngCreateWnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290640, 0x13864 bytes
    // win32kfull.sys .text:0x29e620, 0x1596d bytes
    // win32kfull.sys .text:0x29f610, 0x1659e bytes
    // win32kfull.sys .text:0x29e590, 0x1596d bytes
    //
    _s97(sdk::unknown_ptr) eng_create_wnd;
    
    // [VerifierEngFreeMem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2906a0, 0x13864 bytes
    // win32kfull.sys .text:0x29e690, 0x1596d bytes
    // win32kfull.sys .text:0x29f680, 0x1659e bytes
    // win32kfull.sys .text:0x29e600, 0x1596d bytes
    //
    _s98(sdk::unknown_ptr) eng_free_mem;
    
    // [VerifierEngFreeUserMem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290730, 0x13864 bytes
    // win32kfull.sys .text:0x29e740, 0x1596d bytes
    // win32kfull.sys .text:0x29f730, 0x1659e bytes
    // win32kfull.sys .text:0x29e6b0, 0x1596d bytes
    //
    _s99(sdk::unknown_ptr) eng_free_user_mem;
    
    // [VerifierInitialization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys INIT:0x37e6d0, 0x13864 bytes
    // win32kfull.sys INIT:0x395e50, 0x1596d bytes
    // win32kfull.sys INIT:0x393ee0, 0x1659e bytes
    // win32kfull.sys INIT:0x395e50, 0x1596d bytes
    //
    _t00(sdk::unknown_ptr) initialization;
    
    // [VerifierRandomFailure]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2901ac, 0x13864 bytes
    // win32kfull.sys .text:0x29e0ac, 0x1596d bytes
    // win32kfull.sys .text:0x29f0b8, 0x1659e bytes
    // win32kfull.sys .text:0x29e01c, 0x1596d bytes
    //
    _t01(sdk::unknown_ptr) random_failure;
    
    // [VerifierRequiredTimeSinceBoot]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7aae8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xd3118, 0x1d2c0 bytes
    // ndis.sys .rdata:0xdb0a8, 0x1e858 bytes
    // ndis.sys .rdata:0xd3138, 0x1d2c0 bytes
    //
    _t02(sdk::unknown_ptr) required_time_since_boot;
    
    // [VerifierSystemSufficientlyBooted]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .data:0x8aef0, 0x1c8a8 bytes
    // ndis.sys .data:0xe616c, 0x1d2c0 bytes
    // ndis.sys .data:0xed6a4, 0x1e858 bytes
    // ndis.sys .data:0xe61bc, 0x1d2c0 bytes
    //
    _t03(sdk::unknown_ptr) system_sufficiently_booted;
    
    // [VerifierApiCodeSectionHandle]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e710, 0x1b430 bytes
    // storport.sys .data:0x67e40, 0x2be18 bytes
    // storport.sys .data:0x7a088, 0x440c8 bytes
    // storport.sys .data:0x67e40, 0x2be18 bytes
    //
    _t04(sdk::unknown_ptr) api_code_section_handle;
    
    // [VerifierObjectTypeNames]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x182f0, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c4f0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c510, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c4f0, 0x2428 bytes
    //
    _t05(sdk::unknown_ptr) object_type_names;
    
    // [VerifierDllString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10a3e0, 0x67960 bytes
    // ntdll.dll .rdata:0x11d4b8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132758, 0x74648 bytes
    // ntdll.dll .rdata:0x11d4d8, 0x6fc38 bytes
    //
    _t06(sdk::unknown_ptr) dll_string;
};
#include "magic/api.end.hpp"
