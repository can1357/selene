#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/guid_t.hpp"
#include "../../nt/luid_t.hpp"
#include "../../boot/entry_t.hpp"
#include "../../wnf/type_id_t.hpp"
#include "../../boot/options_t.hpp"
#include "../../nt/client_id_t.hpp"
#include "../../nt/wait_type_t.hpp"
#include "../../power/action_t.hpp"
#include "../../nt/event_type_t.hpp"
#include "../../nt/timer_type_t.hpp"
#include "../../nt/token_type_t.hpp"
#include "../../win/file_path_t.hpp"
#include "../../win/port_view_t.hpp"
#include "../../nt/file_object_t.hpp"
#include "../../ps/create_info_t.hpp"
#include "../../win/token_user_t.hpp"
#include "../../wnf/data_scope_t.hpp"
#include "../../wnf/state_name_t.hpp"
#include "../../io/status_block_t.hpp"
#include "../../nt/port_message_t.hpp"
#include "../../nt/token_groups_t.hpp"
#include "../../nt/token_source_t.hpp"
#include "../../win/initial_teb_t.hpp"
#include "../../win/token_owner_t.hpp"
#include "../../efi/driver_entry_t.hpp"
#include "../../io/session_event_t.hpp"
#include "../../io/session_state_t.hpp"
#include "../../nt/privilege_set_t.hpp"
#include "../../alpc/context_attr_t.hpp"
#include "../../nt/apphelpcommand_t.hpp"
#include "../../nt/group_affinity_t.hpp"
#include "../../nt/ktmobject_type_t.hpp"
#include "../../ps/attribute_list_t.hpp"
#include "../../win/job_set_array_t.hpp"
#include "../../alpc/security_attr_t.hpp"
#include "../../nt/generic_mapping_t.hpp"
#include "../../nt/kprofile_source_t.hpp"
#include "../../nt/section_inherit_t.hpp"
#include "../../nt/threadinfoclass_t.hpp"
#include "../../nt/vdmserviceclass_t.hpp"
#include "../../win/sysdbg_command_t.hpp"
#include "../../alpc/data_view_attr_t.hpp"
#include "../../nt/audit_event_type_t.hpp"
#include "../../nt/exception_record_t.hpp"
#include "../../nt/ktmobject_cursor_t.hpp"
#include "../../nt/object_type_list_t.hpp"
#include "../../nt/remote_port_view_t.hpp"
#include "../../nt/token_privileges_t.hpp"
#include "../../win/key_value_entry_t.hpp"
#include "../../win/shutdown_action_t.hpp"
#include "../../alpc/port_attributes_t.hpp"
#include "../../fs/information_class_t.hpp"
#include "../../nt/object_attributes_t.hpp"
#include "../../win/processinfoclass_t.hpp"
#include "../../nt/device_power_state_t.hpp"
#include "../../nt/jobobjectinfoclass_t.hpp"
#include "../../nt/memory_range_entry_t.hpp"
#include "../../nt/sid_and_attributes_t.hpp"
#include "../../nt/system_power_state_t.hpp"
#include "../../sec/quality_of_service_t.hpp"
#include "../../win/token_default_dacl_t.hpp"
#include "../../alpc/message_attributes_t.hpp"
#include "../../nt/debugobjectinfoclass_t.hpp"
#include "../../nt/file_segment_element_t.hpp"
#include "../../power/information_level_t.hpp"
#include "../../win/memory_reserve_type_t.hpp"
#include "../../win/token_primary_group_t.hpp"
#include "../../wnf/delivery_descriptor_t.hpp"
#include "../../wnf/state_name_lifetime_t.hpp"
#include "../../nt/key_information_class_t.hpp"
#include "../../win/t2_set_parameters_v0_t.hpp"
#include "../../nt/file_basic_information_t.hpp"
#include "../../nt/file_information_class_t.hpp"
#include "../../nt/mem_extended_parameter_t.hpp"
#include "../../nt/token_mandatory_policy_t.hpp"
#include "../../nt/dbgui_wait_state_change_t.hpp"
#include "../../nt/token_information_class_t.hpp"
#include "../../win/atom_information_class_t.hpp"
#include "../../win/plugplay_control_class_t.hpp"
#include "../../win/port_information_class_t.hpp"
#include "../../win/workerfactoryinfoclass_t.hpp"
#include "../../wnf/state_name_information_t.hpp"
#include "../../alpc/port_information_class_t.hpp"
#include "../../nt/memory_information_class_t.hpp"
#include "../../nt/object_information_class_t.hpp"
#include "../../nt/transaction_notification_t.hpp"
#include "../../win/event_information_class_t.hpp"
#include "../../win/timer_information_class_t.hpp"
#include "../../nt/key_set_information_class_t.hpp"
#include "../../win/mutant_information_class_t.hpp"
#include "../../win/system_information_class_t.hpp"
#include "../../win/section_information_class_t.hpp"
#include "../../alpc/message_information_class_t.hpp"
#include "../../nt/key_value_information_class_t.hpp"
#include "../../io/completion_information_class_t.hpp"
#include "../../nt/enlistment_information_class_t.hpp"
#include "../../trace/control_information_class_t.hpp"
#include "../../win/semaphore_information_class_t.hpp"
#include "../../win/timer_set_information_class_t.hpp"
#include "../../nt/file_network_open_information_t.hpp"
#include "../../nt/transaction_information_class_t.hpp"
#include "../../win/filter_boot_option_operation_t.hpp"
#include "../../win/file_io_completion_information_t.hpp"
#include "../../nt/virtual_memory_information_class_t.hpp"
#include "../../nt/resourcemanager_information_class_t.hpp"
#include "../../nt/directory_notify_information_class_t.hpp"
#include "../../nt/memory_partition_information_class_t.hpp"
#include "../../nt/transactionmanager_information_class_t.hpp"
#include "../../win/token_security_attributes_information_t.hpp"

#include "magic/api.start.hpp"
namespace os::km
{
    // [ZwChangeProcessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4256c0, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) change_process_state;
    
    // [ZwChangeThreadState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4256e0, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) change_thread_state;
    
    // [ZwCopyFileChunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4258a0, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) copy_file_chunk;
    
    // [ZwCreateCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4258c0, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) create_cpu_partition;
    
    // [ZwCreateIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x425a20, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) create_io_ring;
    
    // [ZwCreateProcessStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x425be0, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) create_process_state_change;
    
    // [ZwCreateThreadStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x425d00, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) create_thread_state_change;
    
    // [ZwOpenCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x426880, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) open_cpu_partition;
    
    // [ZwQueryInformationCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x426e40, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) query_information_cpu_partition;
    
    // [ZwQueryIoRingCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x426fa0, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) query_io_ring_capabilities;
    
    // [ZwQueueApcThreadEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x427220, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) queue_apc_thread_ex2;
    
    // [ZwReadVirtualMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4272a0, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) read_virtual_memory_ex;
    
    // [ZwSetInformationCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x427840, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) set_information_cpu_partition;
    
    // [ZwSetInformationIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4278a0, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) set_information_io_ring;
    
    // [ZwSubmitIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x427d20, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) submit_io_ring;
    
    // [ZwAcquireCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f1070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4250e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2950, 0x1fe000 bytes
    //
    _m15(sdk::unknown_ptr) acquire_cross_vm_mutant;
    
    // [ZwAcquireProcessActivityReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f1090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2970, 0x1fe000 bytes
    //
    _m16(sdk::unknown_ptr) acquire_process_activity_reference;
    
    // [ZwAllocateUserPhysicalPagesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f1210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2af0, 0x1fe000 bytes
    //
    _m17(sdk::unknown_ptr) allocate_user_physical_pages_ex;
    
    // [ZwAllocateVirtualMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f1250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4252c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2b30, 0x1fe000 bytes
    //
    _m18(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t, uint32_t, struct nt::mem_extended_parameter_t*, uint32_t)>*) allocate_virtual_memory_ex;
    
    // [ZwCallEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f15b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2e90, 0x1fe000 bytes
    //
    _m19(sdk::function<int32_t(sdk::function<void*(void*)>*, void*, uint8_t, void**)>*) call_enclave;
    
    // [ZwCompareSigningLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f1710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4257c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2ff0, 0x1fe000 bytes
    //
    _m20(sdk::unknown_ptr) compare_signing_levels;
    
    // [ZwContinueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f17b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3090, 0x1fe000 bytes
    //
    _m21(sdk::unknown_ptr) continue_ex;
    
    // [ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f17d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f30b0, 0x1fe000 bytes
    //
    _m22(sdk::unknown_ptr) convert_between_auxiliary_counter_and_performance_counter;
    
    // [ZwCreateCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f17f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4258e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f30d0, 0x1fe000 bytes
    //
    _m23(sdk::unknown_ptr) create_cross_vm_event;
    
    // [ZwCreateCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f1810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f30f0, 0x1fe000 bytes
    //
    _m24(sdk::unknown_ptr) create_cross_vm_mutant;
    
    // [ZwCreateSectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f1b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3430, 0x1fe000 bytes
    //
    _m25(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::mem_extended_parameter_t*, uint32_t)>*) create_section_ex;
    
    // [ZwDirectGraphicsCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f1eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3790, 0x1fe000 bytes
    //
    _m26(sdk::unknown_ptr) direct_graphics_call;
    
    // [ZwLoadKey3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f3e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5730, 0x1fe000 bytes
    //
    _m27(sdk::unknown_ptr) load_key3;
    
    // [ZwManageHotPatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f2590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3e70, 0x1fe000 bytes
    //
    _m28(sdk::unknown_ptr) manage_hot_patch;
    
    // [ZwMapViewOfSectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f2610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3ef0, 0x1fe000 bytes
    //
    _m29(sdk::unknown_ptr) map_view_of_section_ex;
    
    // [ZwNotifyChangeDirectoryFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f2690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3f70, 0x1fe000 bytes
    //
    _m30(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, uint32_t, uint8_t, enum nt::directory_notify_information_class_t)>*) notify_change_directory_file_ex;
    
    // [ZwPssCaptureVaSpaceBulk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f2b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f43f0, 0x1fe000 bytes
    //
    _m31(sdk::unknown_ptr) pss_capture_va_space_bulk;
    
    // [ZwQueryAuxiliaryCounterFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f2b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4430, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) query_auxiliary_counter_frequency;
    
    // [ZwQueryDirectoryFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f2bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f44b0, 0x1fe000 bytes
    //
    _m33(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t, uint32_t, nt::unicode_view*)>*) query_directory_file_ex;
    
    // [ZwQueryInformationByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f2c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4570, 0x1fe000 bytes
    //
    _m34(sdk::function<int32_t(struct nt::object_attributes_t*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*) query_information_by_name;
    
    // [ZwTerminateEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f3b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5430, 0x1fe000 bytes
    //
    _m35(sdk::function<int32_t(void*, uint8_t)>*) terminate_enclave;
    
    // [ZwAcceptConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157ea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f03d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1cb0, 0x1fe000 bytes
    //
    _m36(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint8_t, struct win::port_view_t*, struct nt::remote_port_view_t*)>*) accept_connect_port;
    
    // [ZwAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157e60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1c70, 0x1fe000 bytes
    //
    _m37(sdk::function<int32_t(void*, void*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*) access_check;
    
    // [ZwAccessCheckAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158380, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f08b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2190, 0x1fe000 bytes
    //
    _m38(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*) access_check_and_audit_alarm;
    
    // [ZwAccessCheckByType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f28d0, 0x1fe000 bytes
    //
    _m39(sdk::function<int32_t(void*, void*, void*, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*) access_check_by_type;
    
    // [ZwAccessCheckByTypeAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158980, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2790, 0x1fe000 bytes
    //
    _m40(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*) access_check_by_type_and_audit_alarm;
    
    // [ZwAccessCheckByTypeResultList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158ae0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f28f0, 0x1fe000 bytes
    //
    _m41(sdk::function<int32_t(void*, void*, void*, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*) access_check_by_type_result_list;
    
    // [ZwAccessCheckByTypeResultListAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158b00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4250a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2910, 0x1fe000 bytes
    //
    _m42(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*) access_check_by_type_result_list_and_audit_alarm;
    
    // [ZwAccessCheckByTypeResultListAndAuditAlarmByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158b20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4250c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2930, 0x1fe000 bytes
    //
    _m43(sdk::function<int32_t(nt::unicode_view*, void*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*) access_check_by_type_result_list_and_audit_alarm_by_handle;
    
    // [ZwAddAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158740, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2550, 0x1fe000 bytes
    //
    _m44(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*)>*) add_atom;
    
    // [ZwAddAtomEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158b40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f10b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2990, 0x1fe000 bytes
    //
    _m45(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*, uint32_t)>*) add_atom_ex;
    
    // [ZwAddBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158b60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f10d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f29b0, 0x1fe000 bytes
    //
    _m46(sdk::function<int32_t(struct boot::entry_t*, uint32_t*)>*) add_boot_entry;
    
    // [ZwAddDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158b80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f10f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f29d0, 0x1fe000 bytes
    //
    _m47(sdk::function<int32_t(struct efi::driver_entry_t*, uint32_t*)>*) add_driver_entry;
    
    // [ZwAdjustGroupsToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158ba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f29f0, 0x1fe000 bytes
    //
    _m48(sdk::function<int32_t(void*, uint8_t, struct nt::token_groups_t*, uint32_t, struct nt::token_groups_t*, uint32_t*)>*) adjust_groups_token;
    
    // [ZwAdjustPrivilegesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158680, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2490, 0x1fe000 bytes
    //
    _m49(sdk::function<int32_t(void*, uint8_t, struct nt::token_privileges_t*, uint32_t, struct nt::token_privileges_t*, uint32_t*)>*) adjust_privileges_token;
    
    // [ZwAdjustTokenClaimsAndDeviceGroups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158bc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4251a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2a10, 0x1fe000 bytes
    //
    _m50(sdk::function<int32_t(void*, uint8_t, uint8_t, uint8_t, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, uint32_t, struct win::token_security_attributes_information_t*, uint32_t, struct win::token_security_attributes_information_t*, uint32_t, struct nt::token_groups_t*, uint32_t*, uint32_t*, uint32_t*)>*) adjust_token_claims_and_device_groups;
    
    // [ZwAlertResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158be0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4251c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2a30, 0x1fe000 bytes
    //
    _m51(sdk::function<int32_t(void*, uint32_t*)>*) alert_resume_thread;
    
    // [ZwAlertThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4251e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2a50, 0x1fe000 bytes
    //
    _m52(sdk::function<int32_t(void*)>*) alert_thread;
    
    // [ZwAlertThreadByThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158c20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2a70, 0x1fe000 bytes
    //
    _m53(sdk::function<int32_t(void*)>*) alert_thread_by_thread_id;
    
    // [ZwAllocateLocallyUniqueId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158c40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f11b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2a90, 0x1fe000 bytes
    //
    _m54(sdk::function<int32_t(struct nt::luid_t*)>*) allocate_locally_unique_id;
    
    // [ZwAllocateReserveObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158c60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f11d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2ab0, 0x1fe000 bytes
    //
    _m55(sdk::function<int32_t(void**, struct nt::object_attributes_t*, enum win::memory_reserve_type_t)>*) allocate_reserve_object;
    
    // [ZwAllocateUserPhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158c80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f11f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2ad0, 0x1fe000 bytes
    //
    _m56(sdk::function<int32_t(void*, uint64_t*, uint64_t*)>*) allocate_user_physical_pages;
    
    // [ZwAllocateUuids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158ca0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4252a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2b10, 0x1fe000 bytes
    //
    _m57(sdk::function<int32_t(uint64_t*, uint32_t*, uint32_t*, char*)>*) allocate_uuids;
    
    // [ZwAllocateVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158160, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1f70, 0x1fe000 bytes
    //
    _m58(sdk::function<int32_t(void*, void**, uint64_t, uint64_t*, uint32_t, uint32_t)>*) allocate_virtual_memory;
    
    // [ZwAlpcAcceptConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158cc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4252e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2b50, 0x1fe000 bytes
    //
    _m59(sdk::function<int32_t(void**, void*, uint32_t, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, void*, struct nt::port_message_t*, struct alpc::message_attributes_t*, uint8_t)>*) alpc_accept_connect_port;
    
    // [ZwAlpcCancelMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158ce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2b70, 0x1fe000 bytes
    //
    _m60(sdk::function<int32_t(void*, uint32_t, struct alpc::context_attr_t*)>*) alpc_cancel_message;
    
    // [ZwAlpcConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158d00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f12b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2b90, 0x1fe000 bytes
    //
    _m61(sdk::function<int32_t(void**, nt::unicode_view*, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, uint32_t, void*, struct nt::port_message_t*, uint32_t*, struct alpc::message_attributes_t*, struct alpc::message_attributes_t*, int64_t*)>*) alpc_connect_port;
    
    // [ZwAlpcConnectPortEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158d20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f12d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2bb0, 0x1fe000 bytes
    //
    _m62(sdk::function<int32_t(void**, struct nt::object_attributes_t*, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, uint32_t, void*, struct nt::port_message_t*, uint64_t*, struct alpc::message_attributes_t*, struct alpc::message_attributes_t*, int64_t*)>*) alpc_connect_port_ex;
    
    // [ZwAlpcCreatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158d40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f12f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2bd0, 0x1fe000 bytes
    //
    _m63(sdk::function<int32_t(void**, struct nt::object_attributes_t*, struct alpc::port_attributes_t*)>*) alpc_create_port;
    
    // [ZwAlpcCreatePortSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158d60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2bf0, 0x1fe000 bytes
    //
    _m64(sdk::function<int32_t(void*, uint32_t, void*, uint64_t, void**, uint64_t*)>*) alpc_create_port_section;
    
    // [ZwAlpcCreateResourceReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4253a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2c10, 0x1fe000 bytes
    //
    _m65(sdk::function<int32_t(void*, uint32_t, uint64_t, void**)>*) alpc_create_resource_reserve;
    
    // [ZwAlpcCreateSectionView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158da0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4253c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2c30, 0x1fe000 bytes
    //
    _m66(sdk::function<int32_t(void*, uint32_t, struct alpc::data_view_attr_t*)>*) alpc_create_section_view;
    
    // [ZwAlpcCreateSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4253e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2c50, 0x1fe000 bytes
    //
    _m67(sdk::function<int32_t(void*, uint32_t, struct alpc::security_attr_t*)>*) alpc_create_security_context;
    
    // [ZwAlpcDeletePortSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158de0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2c70, 0x1fe000 bytes
    //
    _m68(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_delete_port_section;
    
    // [ZwAlpcDeleteResourceReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158e00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f13b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2c90, 0x1fe000 bytes
    //
    _m69(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_delete_resource_reserve;
    
    // [ZwAlpcDeleteSectionView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f13d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2cb0, 0x1fe000 bytes
    //
    _m70(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_delete_section_view;
    
    // [ZwAlpcDeleteSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158e40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f13f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2cd0, 0x1fe000 bytes
    //
    _m71(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_delete_security_context;
    
    // [ZwAlpcDisconnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158e60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2cf0, 0x1fe000 bytes
    //
    _m72(sdk::function<int32_t(void*, uint32_t)>*) alpc_disconnect_port;
    
    // [ZwAlpcImpersonateClientContainerOfPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158e80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4254a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2d10, 0x1fe000 bytes
    //
    _m73(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t)>*) alpc_impersonate_client_container_of_port;
    
    // [ZwAlpcImpersonateClientOfPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158ea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4254c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2d30, 0x1fe000 bytes
    //
    _m74(sdk::function<int32_t(void*, struct nt::port_message_t*, void*)>*) alpc_impersonate_client_of_port;
    
    // [ZwAlpcOpenSenderProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158ec0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4254e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2d50, 0x1fe000 bytes
    //
    _m75(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint32_t, uint32_t, struct nt::object_attributes_t*)>*) alpc_open_sender_process;
    
    // [ZwAlpcOpenSenderThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2d70, 0x1fe000 bytes
    //
    _m76(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint32_t, uint32_t, struct nt::object_attributes_t*)>*) alpc_open_sender_thread;
    
    // [ZwAlpcQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f14b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2d90, 0x1fe000 bytes
    //
    _m77(sdk::function<int32_t(void*, enum alpc::port_information_class_t, void*, uint32_t, uint32_t*)>*) alpc_query_information;
    
    // [ZwAlpcQueryInformationMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158f20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f14d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2db0, 0x1fe000 bytes
    //
    _m78(sdk::function<int32_t(void*, struct nt::port_message_t*, enum alpc::message_information_class_t, void*, uint32_t, uint32_t*)>*) alpc_query_information_message;
    
    // [ZwAlpcRevokeSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f14f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2dd0, 0x1fe000 bytes
    //
    _m79(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_revoke_security_context;
    
    // [ZwAlpcSendWaitReceivePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158f60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2df0, 0x1fe000 bytes
    //
    _m80(sdk::function<int32_t(void*, uint32_t, struct nt::port_message_t*, struct alpc::message_attributes_t*, struct nt::port_message_t*, uint64_t*, struct alpc::message_attributes_t*, int64_t*)>*) alpc_send_wait_receive_port;
    
    // [ZwAlpcSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158f80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4255a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2e10, 0x1fe000 bytes
    //
    _m81(sdk::function<int32_t(void*, enum alpc::port_information_class_t, void*, uint32_t)>*) alpc_set_information;
    
    // [ZwApphelpCacheControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1587e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f25f0, 0x1fe000 bytes
    //
    _m82(sdk::function<int32_t(enum nt::apphelpcommand_t, void*)>*) apphelp_cache_control;
    
    // [ZwAreMappedFilesTheSame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4255c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2e30, 0x1fe000 bytes
    //
    _m83(sdk::function<int32_t(void*, void*)>*) are_mapped_files_the_same;
    
    // [ZwAssignProcessToJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158fc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4255e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2e50, 0x1fe000 bytes
    //
    _m84(sdk::function<int32_t(void*, void*)>*) assign_process_to_job_object;
    
    // [ZwAssociateWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158fe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2e70, 0x1fe000 bytes
    //
    _m85(sdk::function<int32_t(void*, void*, void*, void*, void*, int32_t, uint64_t, uint8_t*)>*) associate_wait_completion_packet;
    
    // [ZwCallbackReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4244a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1d10, 0x1fe000 bytes
    //
    _m86(sdk::function<int32_t(void*, uint32_t, int32_t)>*) callback_return;
    
    // [ZwCancelIoFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2810, 0x1fe000 bytes
    //
    _m87(sdk::function<int32_t(void*, struct io::status_block_t*)>*) cancel_io_file;
    
    // [ZwCancelIoFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159000, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f15d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2eb0, 0x1fe000 bytes
    //
    _m88(sdk::function<int32_t(void*, struct io::status_block_t*, struct io::status_block_t*)>*) cancel_io_file_ex;
    
    // [ZwCancelSynchronousIoFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159020, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f15f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2ed0, 0x1fe000 bytes
    //
    _m89(sdk::function<int32_t(void*, struct io::status_block_t*, struct io::status_block_t*)>*) cancel_synchronous_io_file;
    
    // [ZwCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158a80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2890, 0x1fe000 bytes
    //
    _m90(sdk::function<int32_t(void*, uint8_t*)>*) cancel_timer;
    
    // [ZwCancelTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159040, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2ef0, 0x1fe000 bytes
    //
    _m91(sdk::function<int32_t(void*, void*)>*) cancel_timer2;
    
    // [ZwCancelWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159060, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4256a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2f10, 0x1fe000 bytes
    //
    _m92(sdk::function<int32_t(void*, uint8_t)>*) cancel_wait_completion_packet;
    
    // [ZwClearEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158620, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2430, 0x1fe000 bytes
    //
    _m93(sdk::function<int32_t(void*)>*) clear_event;
    
    // [ZwClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158040, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4245e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1e50, 0x1fe000 bytes
    //
    _m94(sdk::function<int32_t(void*)>*) close;
    
    // [ZwCloseObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1585c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f23d0, 0x1fe000 bytes
    //
    _m95(sdk::function<int32_t(nt::unicode_view*, void*, uint8_t)>*) close_object_audit_alarm;
    
    // [ZwCommitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159080, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2f30, 0x1fe000 bytes
    //
    _m96(sdk::function<int32_t(void*, int64_t*)>*) commit_complete;
    
    // [ZwCommitEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1590a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2f50, 0x1fe000 bytes
    //
    _m97(sdk::function<int32_t(void*, int64_t*)>*) commit_enlistment;
    
    // [ZwCommitRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1590c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2f70, 0x1fe000 bytes
    //
    _m98(sdk::function<int32_t(void*, uint32_t)>*) commit_registry_transaction;
    
    // [ZwCommitTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1590e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f16b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2f90, 0x1fe000 bytes
    //
    _m99(sdk::function<int32_t(void*, uint8_t)>*) commit_transaction;
    
    // [ZwCompactKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159100, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f16d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2fb0, 0x1fe000 bytes
    //
    _n00(sdk::function<int32_t(uint32_t, void**)>*) compact_keys;
    
    // [ZwCompareObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159120, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f16f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4257a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2fd0, 0x1fe000 bytes
    //
    _n01(sdk::function<int32_t(void*, void*)>*) compare_objects;
    
    // [ZwCompareTokens]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159140, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4257e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3010, 0x1fe000 bytes
    //
    _n02(sdk::function<int32_t(void*, void*, uint8_t*)>*) compare_tokens;
    
    // [ZwCompleteConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159160, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3030, 0x1fe000 bytes
    //
    _n03(sdk::function<int32_t(void*)>*) complete_connect_port;
    
    // [ZwCompressKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159180, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3050, 0x1fe000 bytes
    //
    _n04(sdk::function<int32_t(void*)>*) compress_key;
    
    // [ZwConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1591a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3070, 0x1fe000 bytes
    //
    _n05(sdk::function<int32_t(void**, nt::unicode_view*, struct sec::quality_of_service_t*, struct win::port_view_t*, struct nt::remote_port_view_t*, uint32_t*, void*, uint32_t*)>*) connect_port;
    
    // [ZwContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1586c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f24d0, 0x1fe000 bytes
    //
    _n06(sdk::function<int32_t(nt::context*, uint8_t)>*) continue_;
    
    // [ZwCreateDebugObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1591c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3110, 0x1fe000 bytes
    //
    _n07(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_debug_object;
    
    // [ZwCreateDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1591e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3130, 0x1fe000 bytes
    //
    _n08(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) create_directory_object;
    
    // [ZwCreateDirectoryObjectEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159200, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3150, 0x1fe000 bytes
    //
    _n09(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint32_t)>*) create_directory_object_ex;
    
    // [ZwCreateEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159220, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3170, 0x1fe000 bytes
    //
    _n10(sdk::function<int32_t(void*, void**, uint64_t, uint64_t, uint64_t, uint32_t, void*, uint32_t, uint32_t*)>*) create_enclave;
    
    // [ZwCreateEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159240, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f18b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4259a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3190, 0x1fe000 bytes
    //
    _n11(sdk::function<int32_t(void**, uint32_t, void*, void*, struct nt::object_attributes_t*, uint32_t, uint32_t, void*)>*) create_enlistment;
    
    // [ZwCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158760, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2570, 0x1fe000 bytes
    //
    _n12(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::event_type_t, uint8_t)>*) create_event;
    
    // [ZwCreateEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159260, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f18d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4259c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f31b0, 0x1fe000 bytes
    //
    _n13(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) create_event_pair;
    
    // [ZwCreateFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158900, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2710, 0x1fe000 bytes
    //
    _n14(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, int64_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*, uint32_t)>*) create_file;
    
    // [ZwCreateIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1592a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f31f0, 0x1fe000 bytes
    //
    _n15(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_io_completion;
    
    // [ZwCreateIRTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159280, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f18f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4259e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f31d0, 0x1fe000 bytes
    //
    _n16(sdk::function<int32_t(void**, uint32_t)>*) create_ir_timer;
    
    // [ZwCreateJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1592c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3210, 0x1fe000 bytes
    //
    _n17(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) create_job_object;
    
    // [ZwCreateJobSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1592e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3230, 0x1fe000 bytes
    //
    _n18(sdk::function<int32_t(uint32_t, struct win::job_set_array_t*, uint32_t)>*) create_job_set;
    
    // [ZwCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158200, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4247a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2010, 0x1fe000 bytes
    //
    _n19(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*, uint32_t, uint32_t*)>*) create_key;
    
    // [ZwCreateKeyTransacted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159300, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3250, 0x1fe000 bytes
    //
    _n20(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*, uint32_t, void*, uint32_t*)>*) create_key_transacted;
    
    // [ZwCreateKeyedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159320, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3270, 0x1fe000 bytes
    //
    _n21(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_keyed_event;
    
    // [ZwCreateLowBoxToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159340, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f19b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3290, 0x1fe000 bytes
    //
    _n22(sdk::function<int32_t(void**, void*, uint32_t, struct nt::object_attributes_t*, void*, uint32_t, struct nt::sid_and_attributes_t*, uint32_t, void**)>*) create_low_box_token;
    
    // [ZwCreateMailslotFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159360, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f19d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f32b0, 0x1fe000 bytes
    //
    _n23(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t, uint32_t, int64_t*)>*) create_mailslot_file;
    
    // [ZwCreateMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159380, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f19f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f32d0, 0x1fe000 bytes
    //
    _n24(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint8_t)>*) create_mutant;
    
    // [ZwCreateNamedPipeFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1593a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f32f0, 0x1fe000 bytes
    //
    _n25(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int64_t*)>*) create_named_pipe_file;
    
    // [ZwCreatePagingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1593c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1a30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3310, 0x1fe000 bytes
    //
    _n26(sdk::function<int32_t(nt::unicode_view*, int64_t*, int64_t*, uint32_t)>*) create_paging_file;
    
    // [ZwCreatePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1593e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3330, 0x1fe000 bytes
    //
    _n27(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_partition;
    
    // [ZwCreatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159400, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3350, 0x1fe000 bytes
    //
    _n28(sdk::function<int32_t(void**, struct nt::object_attributes_t*, uint32_t, uint32_t, uint32_t)>*) create_port;
    
    // [ZwCreatePrivateNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159420, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3370, 0x1fe000 bytes
    //
    _n29(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*) create_private_namespace;
    
    // [ZwCreateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159440, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3390, 0x1fe000 bytes
    //
    _n30(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint8_t, void*, void*, void*)>*) create_process;
    
    // [ZwCreateProcessEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158800, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2610, 0x1fe000 bytes
    //
    _n31(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint32_t, void*, void*, void*, uint32_t)>*) create_process_ex;
    
    // [ZwCreateProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159460, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f33b0, 0x1fe000 bytes
    //
    _n32(sdk::function<int32_t(void**, void*, void*, uint64_t, uint32_t, uint32_t*, uint32_t, enum nt::kprofile_source_t, uint64_t)>*) create_profile;
    
    // [ZwCreateProfileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159480, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f33d0, 0x1fe000 bytes
    //
    _n33(sdk::function<int32_t(void**, void*, void*, uint64_t, uint32_t, uint32_t*, uint32_t, enum nt::kprofile_source_t, uint16_t, struct nt::group_affinity_t*)>*) create_profile_ex;
    
    // [ZwCreateRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1594a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f33f0, 0x1fe000 bytes
    //
    _n34(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_registry_transaction;
    
    // [ZwCreateResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1594c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3410, 0x1fe000 bytes
    //
    _n35(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*)>*) create_resource_manager;
    
    // [ZwCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1587a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f25b0, 0x1fe000 bytes
    //
    _n36(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*)>*) create_section;
    
    // [ZwCreateSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1594e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3450, 0x1fe000 bytes
    //
    _n37(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int32_t, int32_t)>*) create_semaphore;
    
    // [ZwCreateSymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159500, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3470, 0x1fe000 bytes
    //
    _n38(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*)>*) create_symbolic_link_object;
    
    // [ZwCreateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158820, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2630, 0x1fe000 bytes
    //
    _n39(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, struct nt::client_id_t*, nt::context*, struct win::initial_teb_t*, uint8_t)>*) create_thread;
    
    // [ZwCreateThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159520, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3490, 0x1fe000 bytes
    //
    _n40(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, void*, void*, uint32_t, uint64_t, uint64_t, uint64_t, struct ps::attribute_list_t*)>*) create_thread_ex;
    
    // [ZwCreateTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159540, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f34b0, 0x1fe000 bytes
    //
    _n41(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::timer_type_t)>*) create_timer;
    
    // [ZwCreateTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159560, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f34d0, 0x1fe000 bytes
    //
    _n42(sdk::function<int32_t(void**, void*, void*, uint32_t, uint32_t)>*) create_timer2;
    
    // [ZwCreateToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159580, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f34f0, 0x1fe000 bytes
    //
    _n43(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::token_type_t, struct nt::luid_t*, int64_t*, struct win::token_user_t*, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct win::token_owner_t*, struct win::token_primary_group_t*, struct win::token_default_dacl_t*, struct nt::token_source_t*)>*) create_token;
    
    // [ZwCreateTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1595a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3510, 0x1fe000 bytes
    //
    _n44(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::token_type_t, struct nt::luid_t*, int64_t*, struct win::token_user_t*, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, struct nt::token_mandatory_policy_t*, struct win::token_owner_t*, struct win::token_primary_group_t*, struct win::token_default_dacl_t*, struct nt::token_source_t*)>*) create_token_ex;
    
    // [ZwCreateTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1595c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3530, 0x1fe000 bytes
    //
    _n45(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::guid_t*, void*, uint32_t, uint32_t, uint32_t, int64_t*, nt::unicode_view*)>*) create_transaction;
    
    // [ZwCreateTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1595e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3550, 0x1fe000 bytes
    //
    _n46(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*, uint32_t, uint32_t)>*) create_transaction_manager;
    
    // [ZwCreateUserProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159600, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3570, 0x1fe000 bytes
    //
    _n47(sdk::function<int32_t(void**, void**, uint32_t, uint32_t, struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t, uint32_t, void*, struct ps::create_info_t*, struct ps::attribute_list_t*)>*) create_user_process;
    
    // [ZwCreateWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159620, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3590, 0x1fe000 bytes
    //
    _n48(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) create_wait_completion_packet;
    
    // [ZwCreateWaitablePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159640, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f35b0, 0x1fe000 bytes
    //
    _n49(sdk::function<int32_t(void**, struct nt::object_attributes_t*, uint32_t, uint32_t, uint32_t)>*) create_waitable_port;
    
    // [ZwCreateWnfStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159660, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f35d0, 0x1fe000 bytes
    //
    _n50(sdk::function<int32_t(struct wnf::state_name_t*, enum wnf::state_name_lifetime_t, enum wnf::data_scope_t, uint8_t, const struct wnf::type_id_t*, uint32_t, void*)>*) create_wnf_state_name;
    
    // [ZwCreateWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159680, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f35f0, 0x1fe000 bytes
    //
    _n51(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, void*, void*, void*, uint32_t, uint64_t, uint64_t)>*) create_worker_factory;
    
    // [ZwDebugActiveProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1596a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3610, 0x1fe000 bytes
    //
    _n52(sdk::function<int32_t(void*, void*)>*) debug_active_process;
    
    // [ZwDebugContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1596c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3630, 0x1fe000 bytes
    //
    _n53(sdk::function<int32_t(void*, struct nt::client_id_t*, int32_t)>*) debug_continue;
    
    // [ZwDelayExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1584e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f22f0, 0x1fe000 bytes
    //
    _n54(sdk::function<int32_t(uint8_t, int64_t*)>*) delay_execution;
    
    // [ZwDeleteAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1596e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3650, 0x1fe000 bytes
    //
    _n55(sdk::function<int32_t(uint16_t)>*) delete_atom;
    
    // [ZwDeleteBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159700, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3670, 0x1fe000 bytes
    //
    _n56(sdk::function<int32_t(uint32_t)>*) delete_boot_entry;
    
    // [ZwDeleteDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159720, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3690, 0x1fe000 bytes
    //
    _n57(sdk::function<int32_t(uint32_t)>*) delete_driver_entry;
    
    // [ZwDeleteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159740, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f36b0, 0x1fe000 bytes
    //
    _n58(sdk::function<int32_t(struct nt::object_attributes_t*)>*) delete_file;
    
    // [ZwDeleteKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159760, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f36d0, 0x1fe000 bytes
    //
    _n59(sdk::function<int32_t(void*)>*) delete_key;
    
    // [ZwDeleteObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159780, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f36f0, 0x1fe000 bytes
    //
    _n60(sdk::function<int32_t(nt::unicode_view*, void*, uint8_t)>*) delete_object_audit_alarm;
    
    // [ZwDeletePrivateNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1597a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3710, 0x1fe000 bytes
    //
    _n61(sdk::function<int32_t(void*)>*) delete_private_namespace;
    
    // [ZwDeleteValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1597c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3730, 0x1fe000 bytes
    //
    _n62(sdk::function<int32_t(void*, nt::unicode_view*)>*) delete_value_key;
    
    // [ZwDeleteWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1597e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3750, 0x1fe000 bytes
    //
    _n63(sdk::function<int32_t(const struct wnf::state_name_t*, const void*)>*) delete_wnf_state_data;
    
    // [ZwDeleteWnfStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159800, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3770, 0x1fe000 bytes
    //
    _n64(sdk::function<int32_t(const struct wnf::state_name_t*)>*) delete_wnf_state_name;
    
    // [ZwDeviceIoControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4244e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1d50, 0x1fe000 bytes
    //
    _n65(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, void*, uint32_t, void*, uint32_t)>*) device_io_control_file;
    
    // [ZwDisableLastKnownGood]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159820, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f37b0, 0x1fe000 bytes
    //
    _n66(sdk::function<int32_t(...)>*) disable_last_known_good;
    
    // [ZwDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159840, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f37d0, 0x1fe000 bytes
    //
    _n67(sdk::function<int32_t(nt::unicode_view*)>*) display_string;
    
    // [ZwDrawText]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159860, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f37f0, 0x1fe000 bytes
    //
    _n68(sdk::function<int32_t(nt::unicode_view*)>*) draw_text;
    
    // [ZwDuplicateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1585e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f23f0, 0x1fe000 bytes
    //
    _n69(sdk::function<int32_t(void*, void*, void*, void**, uint32_t, uint32_t, uint32_t)>*) duplicate_object;
    
    // [ZwDuplicateToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1586a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f24b0, 0x1fe000 bytes
    //
    _n70(sdk::function<int32_t(void*, uint32_t, struct nt::object_attributes_t*, uint8_t, enum nt::token_type_t, void**)>*) duplicate_token;
    
    // [ZwEnableLastKnownGood]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159880, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3810, 0x1fe000 bytes
    //
    _n71(sdk::function<int32_t(...)>*) enable_last_known_good;
    
    // [ZwEnumerateBootEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1598a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4260a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3830, 0x1fe000 bytes
    //
    _n72(sdk::function<int32_t(void*, uint32_t*)>*) enumerate_boot_entries;
    
    // [ZwEnumerateDriverEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1598c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4260c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3850, 0x1fe000 bytes
    //
    _n73(sdk::function<int32_t(void*, uint32_t*)>*) enumerate_driver_entries;
    
    // [ZwEnumerateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1584a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f09d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f22b0, 0x1fe000 bytes
    //
    _n74(sdk::function<int32_t(void*, uint32_t, enum nt::key_information_class_t, void*, uint32_t, uint32_t*)>*) enumerate_key;
    
    // [ZwEnumerateSystemEnvironmentValuesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1598e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4260e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3870, 0x1fe000 bytes
    //
    _n75(sdk::function<int32_t(uint32_t, void*, uint32_t*)>*) enumerate_system_environment_values_ex;
    
    // [ZwEnumerateTransactionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159900, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3890, 0x1fe000 bytes
    //
    _n76(sdk::function<int32_t(void*, enum nt::ktmobject_type_t, struct nt::ktmobject_cursor_t*, uint32_t, uint32_t*)>*) enumerate_transaction_object;
    
    // [ZwEnumerateValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1580c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f05f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1ed0, 0x1fe000 bytes
    //
    _n77(sdk::function<int32_t(void*, uint32_t, enum nt::key_value_information_class_t, void*, uint32_t, uint32_t*)>*) enumerate_value_key;
    
    // [ZwExtendSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159920, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f38b0, 0x1fe000 bytes
    //
    _n78(sdk::function<int32_t(void*, int64_t*)>*) extend_section;
    
    // [ZwFilterBootOption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159940, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f1ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f38d0, 0x1fe000 bytes
    //
    _n79(sdk::function<int32_t(enum win::filter_boot_option_operation_t, uint32_t, uint32_t, void*, uint32_t)>*) filter_boot_option;
    
    // [ZwFilterToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159960, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f38f0, 0x1fe000 bytes
    //
    _n80(sdk::function<int32_t(void*, uint32_t, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct nt::token_groups_t*, void**)>*) filter_token;
    
    // [ZwFilterTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159980, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3910, 0x1fe000 bytes
    //
    _n81(sdk::function<int32_t(void*, uint32_t, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct nt::token_groups_t*, uint32_t, nt::unicode_view*, uint32_t, nt::unicode_view*, struct nt::token_groups_t*, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, void**)>*) filter_token_ex;
    
    // [ZwFindAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1580e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1ef0, 0x1fe000 bytes
    //
    _n82(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*)>*) find_atom;
    
    // [ZwFlushBuffersFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1587c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f25d0, 0x1fe000 bytes
    //
    _n83(sdk::function<int32_t(void*, struct io::status_block_t*)>*) flush_buffers_file;
    
    // [ZwFlushBuffersFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1599a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4261a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3930, 0x1fe000 bytes
    //
    _n84(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*) flush_buffers_file_ex;
    
    // [ZwFlushInstallUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1599c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4261c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3950, 0x1fe000 bytes
    //
    _n85(sdk::function<int32_t(uint16_t, uint32_t)>*) flush_install_ui_language;
    
    // [ZwFlushInstructionCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1599e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4261e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3970, 0x1fe000 bytes
    //
    _n86(sdk::function<int32_t(void*, void*, uint64_t)>*) flush_instruction_cache;
    
    // [ZwFlushKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f20b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3990, 0x1fe000 bytes
    //
    _n87(sdk::function<int32_t(void*)>*) flush_key;
    
    // [ZwFlushProcessWriteBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159a20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f20d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f39b0, 0x1fe000 bytes
    //
    _n88(sdk::function<void(...)>*) flush_process_write_buffers;
    
    // [ZwFlushVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159a40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f20f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f39d0, 0x1fe000 bytes
    //
    _n89(sdk::function<int32_t(void*, void**, uint64_t*, struct io::status_block_t*)>*) flush_virtual_memory;
    
    // [ZwFlushWriteBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159a60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f39f0, 0x1fe000 bytes
    //
    _n90(sdk::function<int32_t(...)>*) flush_write_buffer;
    
    // [ZwFreeUserPhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159a80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3a10, 0x1fe000 bytes
    //
    _n91(sdk::function<int32_t(void*, uint64_t*, uint64_t*)>*) free_user_physical_pages;
    
    // [ZwFreeVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158220, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4247c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2030, 0x1fe000 bytes
    //
    _n92(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*) free_virtual_memory;
    
    // [ZwFreezeRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4262a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3a30, 0x1fe000 bytes
    //
    _n93(sdk::function<int32_t(uint32_t)>*) freeze_registry;
    
    // [ZwFreezeTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4262c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3a50, 0x1fe000 bytes
    //
    _n94(sdk::function<int32_t(int64_t*, int64_t*)>*) freeze_transactions;
    
    // [ZwFsControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158580, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2390, 0x1fe000 bytes
    //
    _n95(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, void*, uint32_t, void*, uint32_t)>*) fs_control_file;
    
    // [ZwGetCachedSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159ae0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4262e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3a70, 0x1fe000 bytes
    //
    _n96(sdk::function<int32_t(void*, uint32_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t*)>*) get_cached_signing_level;
    
    // [ZwGetCompleteWnfStateSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159b00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f21b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3a90, 0x1fe000 bytes
    //
    _n97(sdk::function<int32_t(struct wnf::state_name_t*, uint64_t*, uint32_t, uint32_t, struct wnf::delivery_descriptor_t*, uint32_t)>*) get_complete_wnf_state_subscription;
    
    // [ZwGetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159b20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f21d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3ab0, 0x1fe000 bytes
    //
    _n98(sdk::function<int32_t(void*, nt::context*)>*) get_context_thread;
    
    // [ZwGetCurrentProcessorNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159b40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f21f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3ad0, 0x1fe000 bytes
    //
    _n99(sdk::function<uint32_t(...)>*) get_current_processor_number;
    
    // [ZwGetCurrentProcessorNumberEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159b60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3af0, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) get_current_processor_number_ex;
    
    // [ZwGetDevicePowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159b80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3b10, 0x1fe000 bytes
    //
    _o01(sdk::function<int32_t(void*, enum nt::device_power_state_t*)>*) get_device_power_state;
    
    // [ZwGetMUIRegistryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159ba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4263a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3b30, 0x1fe000 bytes
    //
    _o02(sdk::function<int32_t(uint32_t, uint32_t*, void*)>*) get_mui_registry_info;
    
    // [ZwGetNextProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159bc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4263c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3b50, 0x1fe000 bytes
    //
    _o03(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, void**)>*) get_next_process;
    
    // [ZwGetNextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159be0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4263e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3b70, 0x1fe000 bytes
    //
    _o04(sdk::function<int32_t(void*, void*, uint32_t, uint32_t, uint32_t, void**)>*) get_next_thread;
    
    // [ZwGetNlsSectionPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f22b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3b90, 0x1fe000 bytes
    //
    _o05(sdk::function<int32_t(uint32_t, uint32_t, void*, void**, uint32_t*)>*) get_nls_section_ptr;
    
    // [ZwGetNotificationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159c20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f22d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3bb0, 0x1fe000 bytes
    //
    _o06(sdk::function<int32_t(void*, struct nt::transaction_notification_t*, uint32_t, int64_t*, uint32_t*, uint32_t, uint64_t)>*) get_notification_resource_manager;
    
    // [ZwGetWriteWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159c40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f22f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3bd0, 0x1fe000 bytes
    //
    _o07(sdk::function<int32_t(void*, uint32_t, void*, uint64_t, void**, uint64_t*, uint32_t*)>*) get_write_watch;
    
    // [ZwImpersonateAnonymousToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159c60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3bf0, 0x1fe000 bytes
    //
    _o08(sdk::function<int32_t(void*)>*) impersonate_anonymous_token;
    
    // [ZwImpersonateClientOfPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158240, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4247e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2050, 0x1fe000 bytes
    //
    _o09(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) impersonate_client_of_port;
    
    // [ZwImpersonateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159c80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3c10, 0x1fe000 bytes
    //
    _o10(sdk::function<int32_t(void*, void*, struct sec::quality_of_service_t*)>*) impersonate_thread;
    
    // [ZwInitializeEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159ca0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4264a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3c30, 0x1fe000 bytes
    //
    _o11(sdk::function<int32_t(void*, void*, void*, uint32_t, uint32_t*)>*) initialize_enclave;
    
    // [ZwInitializeNlsFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159cc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4264c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3c50, 0x1fe000 bytes
    //
    _o12(sdk::function<int32_t(void**, uint32_t*, int64_t*)>*) initialize_nls_files;
    
    // [ZwInitializeRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159ce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4264e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3c70, 0x1fe000 bytes
    //
    _o13(sdk::function<int32_t(uint16_t)>*) initialize_registry;
    
    // [ZwInitiatePowerAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159d00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f23b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3c90, 0x1fe000 bytes
    //
    _o14(sdk::function<int32_t(enum power::action_t, enum nt::system_power_state_t, uint32_t, uint8_t)>*) initiate_power_action;
    
    // [ZwIsProcessInJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158840, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2650, 0x1fe000 bytes
    //
    _o15(sdk::function<int32_t(void*, void*)>*) is_process_in_job;
    
    // [ZwIsSystemResumeAutomatic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159d20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f23d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3cb0, 0x1fe000 bytes
    //
    _o16(sdk::function<uint8_t(...)>*) is_system_resume_automatic;
    
    // [ZwIsUILanguageComitted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159d40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f23f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3cd0, 0x1fe000 bytes
    //
    _o17(sdk::function<int32_t(...)>*) is_ui_language_comitted;
    
    // [ZwListenPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159d60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3cf0, 0x1fe000 bytes
    //
    _o18(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) listen_port;
    
    // [ZwLoadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3d10, 0x1fe000 bytes
    //
    _o19(sdk::function<int32_t(nt::unicode_view*)>*) load_driver;
    
    // [ZwLoadEnclaveData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159da0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4265a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3d30, 0x1fe000 bytes
    //
    _o20(sdk::function<int32_t(void*, void*, void*, uint64_t, uint32_t, void*, uint32_t, uint64_t*, uint32_t*)>*) load_enclave_data;
    
    // [ZwLoadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4265c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3d50, 0x1fe000 bytes
    //
    _o21(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*)>*) load_key;
    
    // [ZwLoadKey2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159de0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4265e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3d70, 0x1fe000 bytes
    //
    _o22(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t)>*) load_key2;
    
    // [ZwLoadKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159e00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f24b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3d90, 0x1fe000 bytes
    //
    _o23(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t, void*, void*, uint32_t, void**, struct io::status_block_t*)>*) load_key_ex;
    
    // [ZwLockFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f24d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3db0, 0x1fe000 bytes
    //
    _o24(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, int64_t*, int64_t*, uint32_t, uint8_t, uint8_t)>*) lock_file;
    
    // [ZwLockProductActivationKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159e40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f24f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3dd0, 0x1fe000 bytes
    //
    _o25(sdk::function<int32_t(uint32_t*, uint32_t*)>*) lock_product_activation_keys;
    
    // [ZwLockRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159e60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3df0, 0x1fe000 bytes
    //
    _o26(sdk::function<int32_t(void*)>*) lock_registry_key;
    
    // [ZwLockVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159e80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4266a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3e10, 0x1fe000 bytes
    //
    _o27(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*) lock_virtual_memory;
    
    // [ZwMakePermanentObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159ea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4266c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3e30, 0x1fe000 bytes
    //
    _o28(sdk::function<int32_t(void*)>*) make_permanent_object;
    
    // [ZwMakeTemporaryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159ec0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4266e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3e50, 0x1fe000 bytes
    //
    _o29(sdk::function<int32_t(void*)>*) make_temporary_object;
    
    // [ZwManagePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f25b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3e90, 0x1fe000 bytes
    //
    _o30(sdk::function<int32_t(enum nt::memory_partition_information_class_t, void*, uint32_t)>*) manage_partition;
    
    // [ZwMapCMFModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f25d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3eb0, 0x1fe000 bytes
    //
    _o31(sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint32_t*, uint32_t*, void**)>*) map_cmf_module;
    
    // [ZwMapUserPhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159f20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f25f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3ed0, 0x1fe000 bytes
    //
    _o32(sdk::function<int32_t(void*, uint64_t, uint64_t*)>*) map_user_physical_pages;
    
    // [ZwMapUserPhysicalPagesScatter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157ec0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f03f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1cd0, 0x1fe000 bytes
    //
    _o33(sdk::function<int32_t(void**, uint64_t, uint64_t*)>*) map_user_physical_pages_scatter;
    
    // [ZwMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158360, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2170, 0x1fe000 bytes
    //
    _o34(sdk::function<int32_t(void*, void*, void**, uint64_t, uint64_t, int64_t*, uint64_t*, enum nt::section_inherit_t, uint32_t, uint32_t)>*) map_view_of_section;
    
    // [ZwModifyBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4267a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3f10, 0x1fe000 bytes
    //
    _o35(sdk::function<int32_t(struct boot::entry_t*)>*) modify_boot_entry;
    
    // [ZwModifyDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159f60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4267c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3f30, 0x1fe000 bytes
    //
    _o36(sdk::function<int32_t(struct efi::driver_entry_t*)>*) modify_driver_entry;
    
    // [ZwNotifyChangeDirectoryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159f80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4267e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3f50, 0x1fe000 bytes
    //
    _o37(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, uint32_t, uint8_t)>*) notify_change_directory_file;
    
    // [ZwNotifyChangeKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f26b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3f90, 0x1fe000 bytes
    //
    _o38(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, uint8_t, void*, uint32_t, uint8_t)>*) notify_change_key;
    
    // [ZwNotifyChangeMultipleKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159fc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f26d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3fb0, 0x1fe000 bytes
    //
    _o39(sdk::function<int32_t(void*, uint32_t, struct nt::object_attributes_t*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, uint8_t, void*, uint32_t, uint8_t)>*) notify_change_multiple_keys;
    
    // [ZwNotifyChangeSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x159fe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f26f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3fd0, 0x1fe000 bytes
    //
    _o40(sdk::function<int32_t(void*, uint32_t, int64_t*, enum io::session_event_t, enum io::session_state_t, enum io::session_state_t, void*, uint32_t)>*) notify_change_session;
    
    // [ZwOpenDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158960, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2770, 0x1fe000 bytes
    //
    _o41(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_directory_object;
    
    // [ZwOpenEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a000, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4268a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f3ff0, 0x1fe000 bytes
    //
    _o42(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*)>*) open_enlistment;
    
    // [ZwOpenEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158660, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2470, 0x1fe000 bytes
    //
    _o43(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_event;
    
    // [ZwOpenEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a020, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4268c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4010, 0x1fe000 bytes
    //
    _o44(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_event_pair;
    
    // [ZwOpenFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1584c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f09f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f22d0, 0x1fe000 bytes
    //
    _o45(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t)>*) open_file;
    
    // [ZwOpenIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a040, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4268e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4030, 0x1fe000 bytes
    //
    _o46(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_io_completion;
    
    // [ZwOpenJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a060, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4050, 0x1fe000 bytes
    //
    _o47(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_job_object;
    
    // [ZwOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1580a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f05d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1eb0, 0x1fe000 bytes
    //
    _o48(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_key;
    
    // [ZwOpenKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a080, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4070, 0x1fe000 bytes
    //
    _o49(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) open_key_ex;
    
    // [ZwOpenKeyTransacted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a0a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f27b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4090, 0x1fe000 bytes
    //
    _o50(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*) open_key_transacted;
    
    // [ZwOpenKeyTransactedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a0c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f27d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f40b0, 0x1fe000 bytes
    //
    _o51(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, void*)>*) open_key_transacted_ex;
    
    // [ZwOpenKeyedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a0e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f27f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f40d0, 0x1fe000 bytes
    //
    _o52(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_keyed_event;
    
    // [ZwOpenMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a100, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4269a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f40f0, 0x1fe000 bytes
    //
    _o53(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_mutant;
    
    // [ZwOpenObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a120, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4269c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4110, 0x1fe000 bytes
    //
    _o54(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, uint32_t, struct nt::privilege_set_t*, uint8_t, uint8_t, uint8_t*)>*) open_object_audit_alarm;
    
    // [ZwOpenPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a140, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4269e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4130, 0x1fe000 bytes
    //
    _o55(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_partition;
    
    // [ZwOpenPrivateNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a160, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4150, 0x1fe000 bytes
    //
    _o56(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*) open_private_namespace;
    
    // [ZwOpenProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158320, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4248c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2130, 0x1fe000 bytes
    //
    _o57(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::client_id_t*)>*) open_process;
    
    // [ZwOpenProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a180, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4170, 0x1fe000 bytes
    //
    _o58(sdk::function<int32_t(void*, uint32_t, void**)>*) open_process_token;
    
    // [ZwOpenProcessTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158460, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2270, 0x1fe000 bytes
    //
    _o59(sdk::function<int32_t(void*, uint32_t, uint32_t, void**)>*) open_process_token_ex;
    
    // [ZwOpenRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a1a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f28b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4190, 0x1fe000 bytes
    //
    _o60(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_registry_transaction;
    
    // [ZwOpenResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a1c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f28d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f41b0, 0x1fe000 bytes
    //
    _o61(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*)>*) open_resource_manager;
    
    // [ZwOpenSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158540, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2350, 0x1fe000 bytes
    //
    _o62(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_section;
    
    // [ZwOpenSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a1e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f28f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f41d0, 0x1fe000 bytes
    //
    _o63(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_semaphore;
    
    // [ZwOpenSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a200, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f41f0, 0x1fe000 bytes
    //
    _o64(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_session;
    
    // [ZwOpenSymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a220, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4210, 0x1fe000 bytes
    //
    _o65(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_symbolic_link_object;
    
    // [ZwOpenThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a240, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4230, 0x1fe000 bytes
    //
    _o66(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::client_id_t*)>*) open_thread;
    
    // [ZwOpenThreadToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1582e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f20f0, 0x1fe000 bytes
    //
    _o67(sdk::function<int32_t(void*, uint32_t, uint8_t, void**)>*) open_thread_token;
    
    // [ZwOpenThreadTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158440, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4249e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2250, 0x1fe000 bytes
    //
    _o68(sdk::function<int32_t(void*, uint32_t, uint8_t, uint32_t, void**)>*) open_thread_token_ex;
    
    // [ZwOpenTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a260, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4250, 0x1fe000 bytes
    //
    _o69(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_timer;
    
    // [ZwOpenTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a280, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4270, 0x1fe000 bytes
    //
    _o70(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::guid_t*, void*)>*) open_transaction;
    
    // [ZwOpenTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a2a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f29b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4290, 0x1fe000 bytes
    //
    _o71(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*, struct nt::guid_t*, uint32_t)>*) open_transaction_manager;
    
    // [ZwPlugPlayControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a2c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f29d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f42b0, 0x1fe000 bytes
    //
    _o72(sdk::function<int32_t(enum win::plugplay_control_class_t, void*, uint32_t)>*) plug_play_control;
    
    // [ZwPowerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158a40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2850, 0x1fe000 bytes
    //
    _o73(sdk::function<int32_t(enum power::information_level_t, void*, uint32_t, void*, uint32_t)>*) power_information;
    
    // [ZwPrePrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a2e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f29f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f42d0, 0x1fe000 bytes
    //
    _o74(sdk::function<int32_t(void*, int64_t*)>*) pre_prepare_complete;
    
    // [ZwPrePrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a300, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f42f0, 0x1fe000 bytes
    //
    _o75(sdk::function<int32_t(void*, int64_t*)>*) pre_prepare_enlistment;
    
    // [ZwPrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a320, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2a30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4310, 0x1fe000 bytes
    //
    _o76(sdk::function<int32_t(void*, int64_t*)>*) prepare_complete;
    
    // [ZwPrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a340, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4330, 0x1fe000 bytes
    //
    _o77(sdk::function<int32_t(void*, int64_t*)>*) prepare_enlistment;
    
    // [ZwPrivilegeCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a360, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4350, 0x1fe000 bytes
    //
    _o78(sdk::function<int32_t(void*, struct nt::privilege_set_t*, uint8_t*)>*) privilege_check;
    
    // [ZwPrivilegeObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a380, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4370, 0x1fe000 bytes
    //
    _o79(sdk::function<int32_t(nt::unicode_view*, void*, void*, uint32_t, struct nt::privilege_set_t*, uint8_t)>*) privilege_object_audit_alarm;
    
    // [ZwPrivilegedServiceAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a3a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4390, 0x1fe000 bytes
    //
    _o80(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, void*, struct nt::privilege_set_t*, uint8_t)>*) privileged_service_audit_alarm;
    
    // [ZwPropagationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a3c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f43b0, 0x1fe000 bytes
    //
    _o81(sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*) propagation_complete;
    
    // [ZwPropagationFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a3e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f43d0, 0x1fe000 bytes
    //
    _o82(sdk::function<int32_t(void*, uint32_t, int32_t)>*) propagation_failed;
    
    // [ZwProtectVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158860, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2670, 0x1fe000 bytes
    //
    _o83(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t, uint32_t*)>*) protect_virtual_memory;
    
    // [ZwPulseEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a400, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4410, 0x1fe000 bytes
    //
    _o84(sdk::function<int32_t(void*, int32_t*)>*) pulse_event;
    
    // [ZwQueryAttributesFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158600, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2410, 0x1fe000 bytes
    //
    _o85(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::file_basic_information_t*)>*) query_attributes_file;
    
    // [ZwQueryBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a420, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4450, 0x1fe000 bytes
    //
    _o86(sdk::function<int32_t(uint32_t*, uint32_t*)>*) query_boot_entry_order;
    
    // [ZwQueryBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a440, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4470, 0x1fe000 bytes
    //
    _o87(sdk::function<int32_t(struct boot::options_t*, uint32_t*)>*) query_boot_options;
    
    // [ZwQueryDebugFilterState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a460, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4490, 0x1fe000 bytes
    //
    _o88(sdk::function<int32_t(uint32_t, uint32_t)>*) query_debug_filter_state;
    
    // [ZwQueryDefaultLocale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158100, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4246a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1f10, 0x1fe000 bytes
    //
    _o89(sdk::function<int32_t(uint8_t, uint32_t*)>*) query_default_locale;
    
    // [ZwQueryDefaultUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1586e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f24f0, 0x1fe000 bytes
    //
    _o90(sdk::function<int32_t(wchar_t*)>*) query_default_ui_language;
    
    // [ZwQueryDirectoryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158500, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0a30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2310, 0x1fe000 bytes
    //
    _o91(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t, uint8_t, nt::unicode_view*, uint8_t)>*) query_directory_file;
    
    // [ZwQueryDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a480, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f44d0, 0x1fe000 bytes
    //
    _o92(sdk::function<int32_t(void*, void*, uint32_t, uint8_t, uint8_t, uint32_t*, uint32_t*)>*) query_directory_object;
    
    // [ZwQueryDriverEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a4a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f44f0, 0x1fe000 bytes
    //
    _o93(sdk::function<int32_t(uint32_t*, uint32_t*)>*) query_driver_entry_order;
    
    // [ZwQueryEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a4c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4510, 0x1fe000 bytes
    //
    _o94(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, uint8_t, void*, uint32_t, uint32_t*, uint8_t)>*) query_ea_file;
    
    // [ZwQueryEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158920, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2730, 0x1fe000 bytes
    //
    _o95(sdk::function<int32_t(void*, enum win::event_information_class_t, void*, uint32_t, uint32_t*)>*) query_event;
    
    // [ZwQueryFullAttributesFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a4e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4530, 0x1fe000 bytes
    //
    _o96(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::file_network_open_information_t*)>*) query_full_attributes_file;
    
    // [ZwQueryInformationAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a500, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4550, 0x1fe000 bytes
    //
    _o97(sdk::function<int32_t(uint16_t, enum win::atom_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_atom;
    
    // [ZwQueryInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a520, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4590, 0x1fe000 bytes
    //
    _o98(sdk::function<int32_t(void*, enum nt::enlistment_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_enlistment;
    
    // [ZwQueryInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158080, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f05b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1e90, 0x1fe000 bytes
    //
    _o99(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*) query_information_file;
    
    // [ZwQueryInformationJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a540, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f45b0, 0x1fe000 bytes
    //
    _p00(sdk::function<int32_t(void*, enum nt::jobobjectinfoclass_t, void*, uint32_t, uint32_t*)>*) query_information_job_object;
    
    // [ZwQueryInformationPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a560, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f45d0, 0x1fe000 bytes
    //
    _p01(sdk::function<int32_t(void*, enum win::port_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_port;
    
    // [ZwQueryInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158180, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f06b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1f90, 0x1fe000 bytes
    //
    _p02(sdk::function<int32_t(void*, enum win::processinfoclass_t, void*, uint32_t, uint32_t*)>*) query_information_process;
    
    // [ZwQueryInformationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a580, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f45f0, 0x1fe000 bytes
    //
    _p03(sdk::function<int32_t(void*, enum nt::resourcemanager_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_resource_manager;
    
    // [ZwQueryInformationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158300, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4248a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2110, 0x1fe000 bytes
    //
    _p04(sdk::function<int32_t(void*, enum nt::threadinfoclass_t, void*, uint32_t, uint32_t*)>*) query_information_thread;
    
    // [ZwQueryInformationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158280, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f07b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2090, 0x1fe000 bytes
    //
    _p05(sdk::function<int32_t(void*, enum nt::token_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_token;
    
    // [ZwQueryInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a5a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4610, 0x1fe000 bytes
    //
    _p06(sdk::function<int32_t(void*, enum nt::transaction_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_transaction;
    
    // [ZwQueryInformationTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a5c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4630, 0x1fe000 bytes
    //
    _p07(sdk::function<int32_t(void*, enum nt::transactionmanager_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_transaction_manager;
    
    // [ZwQueryInformationWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a5e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4650, 0x1fe000 bytes
    //
    _p08(sdk::function<int32_t(void*, enum win::workerfactoryinfoclass_t, void*, uint32_t, uint32_t*)>*) query_information_worker_factory;
    
    // [ZwQueryInstallUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a600, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4670, 0x1fe000 bytes
    //
    _p09(sdk::function<int32_t(wchar_t*)>*) query_install_ui_language;
    
    // [ZwQueryIntervalProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a620, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4690, 0x1fe000 bytes
    //
    _p10(sdk::function<int32_t(enum nt::kprofile_source_t, uint32_t*)>*) query_interval_profile;
    
    // [ZwQueryIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a640, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f46b0, 0x1fe000 bytes
    //
    _p11(sdk::function<int32_t(void*, enum io::completion_information_class_t, void*, uint32_t, uint32_t*)>*) query_io_completion;
    
    // [ZwQueryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158120, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4246c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1f30, 0x1fe000 bytes
    //
    _p12(sdk::function<int32_t(void*, enum nt::key_information_class_t, void*, uint32_t, uint32_t*)>*) query_key;
    
    // [ZwQueryLicenseValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a660, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f46d0, 0x1fe000 bytes
    //
    _p13(sdk::function<int32_t(nt::unicode_view*, uint32_t*, void*, uint32_t, uint32_t*)>*) query_license_value;
    
    // [ZwQueryMultipleValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a680, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x426fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f46f0, 0x1fe000 bytes
    //
    _p14(sdk::function<int32_t(void*, struct win::key_value_entry_t*, uint32_t, void*, uint32_t*, uint32_t*)>*) query_multiple_value_key;
    
    // [ZwQueryMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a6a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4710, 0x1fe000 bytes
    //
    _p15(sdk::function<int32_t(void*, enum win::mutant_information_class_t, void*, uint32_t, uint32_t*)>*) query_mutant;
    
    // [ZwQueryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158060, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1e70, 0x1fe000 bytes
    //
    _p16(sdk::function<int32_t(void*, enum nt::object_information_class_t, void*, uint32_t, uint32_t*)>*) query_object;
    
    // [ZwQueryOpenSubKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a6c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4730, 0x1fe000 bytes
    //
    _p17(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t*)>*) query_open_sub_keys;
    
    // [ZwQueryOpenSubKeysEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a6e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4750, 0x1fe000 bytes
    //
    _p18(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t, void*, uint32_t*)>*) query_open_sub_keys_ex;
    
    // [ZwQueryPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158480, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f09b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2290, 0x1fe000 bytes
    //
    _p19(sdk::function<int32_t(int64_t*, int64_t*)>*) query_performance_counter;
    
    // [ZwQueryPortInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a700, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4770, 0x1fe000 bytes
    //
    _p20(sdk::function<int32_t(...)>*) query_port_information_process;
    
    // [ZwQueryQuotaInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a720, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4790, 0x1fe000 bytes
    //
    _p21(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, uint8_t, void*, uint32_t, uint32_t*, uint8_t)>*) query_quota_information_file;
    
    // [ZwQuerySection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158880, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2690, 0x1fe000 bytes
    //
    _p22(sdk::function<int32_t(void*, enum win::section_information_class_t, void*, uint64_t, uint64_t*)>*) query_section;
    
    // [ZwQuerySecurityAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a740, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4270a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f47b0, 0x1fe000 bytes
    //
    _p23(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, void*, uint32_t, uint32_t*)>*) query_security_attributes_token;
    
    // [ZwQuerySecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a760, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4270c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f47d0, 0x1fe000 bytes
    //
    _p24(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*)>*) query_security_object;
    
    // [ZwQuerySecurityPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a780, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4270e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f47f0, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) query_security_policy;
    
    // [ZwQuerySemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a7a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4810, 0x1fe000 bytes
    //
    _p26(sdk::function<int32_t(void*, enum win::semaphore_information_class_t, void*, uint32_t, uint32_t*)>*) query_semaphore;
    
    // [ZwQuerySymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a7c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4830, 0x1fe000 bytes
    //
    _p27(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t*)>*) query_symbolic_link_object;
    
    // [ZwQuerySystemEnvironmentValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a7e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4850, 0x1fe000 bytes
    //
    _p28(sdk::function<int32_t(nt::unicode_view*, wchar_t*, uint16_t, wchar_t*)>*) query_system_environment_value;
    
    // [ZwQuerySystemEnvironmentValueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a800, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4870, 0x1fe000 bytes
    //
    _p29(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t*, uint32_t*)>*) query_system_environment_value_ex;
    
    // [ZwQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158520, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2330, 0x1fe000 bytes
    //
    _p30(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t, uint32_t*)>*) query_system_information;
    
    // [ZwQuerySystemInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a820, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4890, 0x1fe000 bytes
    //
    _p31(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*) query_system_information_ex;
    
    // [ZwQuerySystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1589a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f27b0, 0x1fe000 bytes
    //
    _p32(sdk::function<int32_t(int64_t*)>*) query_system_time;
    
    // [ZwQueryTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158560, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2370, 0x1fe000 bytes
    //
    _p33(sdk::function<int32_t(void*, enum win::timer_information_class_t, void*, uint32_t, uint32_t*)>*) query_timer;
    
    // [ZwQueryTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a840, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4271a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f48b0, 0x1fe000 bytes
    //
    _p34(sdk::function<int32_t(uint32_t*, uint32_t*, uint32_t*)>*) query_timer_resolution;
    
    // [ZwQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158140, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4246e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1f50, 0x1fe000 bytes
    //
    _p35(sdk::function<int32_t(void*, nt::unicode_view*, enum nt::key_value_information_class_t, void*, uint32_t, uint32_t*)>*) query_value_key;
    
    // [ZwQueryVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1582c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f07f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f20d0, 0x1fe000 bytes
    //
    _p36(sdk::function<int32_t(void*, void*, enum nt::memory_information_class_t, void*, uint64_t, uint64_t*)>*) query_virtual_memory;
    
    // [ZwQueryVolumeInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158780, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2590, 0x1fe000 bytes
    //
    _p37(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum fs::information_class_t)>*) query_volume_information_file;
    
    // [ZwQueryWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a860, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f2ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4271c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f48d0, 0x1fe000 bytes
    //
    _p38(sdk::function<int32_t(const struct wnf::state_name_t*, const struct wnf::type_id_t*, const void*, uint32_t*, void*, uint32_t*)>*) query_wnf_state_data;
    
    // [ZwQueryWnfStateNameInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a880, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4271e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f48f0, 0x1fe000 bytes
    //
    _p39(sdk::function<int32_t(const struct wnf::state_name_t*, enum wnf::state_name_information_t, const void*, void*, uint32_t)>*) query_wnf_state_name_information;
    
    // [ZwQueueApcThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158700, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2510, 0x1fe000 bytes
    //
    _p40(sdk::function<int32_t(void*, sdk::function<void(void*, void*, void*)>*, void*, void*, void*)>*) queue_apc_thread;
    
    // [ZwQueueApcThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a8a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4910, 0x1fe000 bytes
    //
    _p41(sdk::function<int32_t(void*, void*, sdk::function<void(void*, void*, void*)>*, void*, void*, void*)>*) queue_apc_thread_ex;
    
    // [ZwRaiseException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a8c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4930, 0x1fe000 bytes
    //
    _p42(sdk::function<int32_t(struct nt::exception_record_t*, nt::context*, uint8_t)>*) raise_exception;
    
    // [ZwRaiseHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a8e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4950, 0x1fe000 bytes
    //
    _p43(sdk::function<int32_t(int32_t, uint32_t, uint32_t, uint64_t*, uint32_t, uint32_t*)>*) raise_hard_error;
    
    // [ZwReadFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157f20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4244c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1d30, 0x1fe000 bytes
    //
    _p44(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, int64_t*, uint32_t*)>*) read_file;
    
    // [ZwReadFileScatter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158420, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4249c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2230, 0x1fe000 bytes
    //
    _p45(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, union nt::file_segment_element_t*, uint32_t, int64_t*, uint32_t*)>*) read_file_scatter;
    
    // [ZwReadOnlyEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a900, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4970, 0x1fe000 bytes
    //
    _p46(sdk::function<int32_t(void*, int64_t*)>*) read_only_enlistment;
    
    // [ZwReadRequestData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1588e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f26f0, 0x1fe000 bytes
    //
    _p47(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t, void*, uint64_t, uint64_t*)>*) read_request_data;
    
    // [ZwReadVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158640, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2450, 0x1fe000 bytes
    //
    _p48(sdk::function<int32_t(void*, void*, void*, uint64_t, uint64_t*)>*) read_virtual_memory;
    
    // [ZwRecoverEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a920, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f30b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4272c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4990, 0x1fe000 bytes
    //
    _p49(sdk::function<int32_t(void*, void*)>*) recover_enlistment;
    
    // [ZwRecoverResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a940, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f30d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4272e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f49b0, 0x1fe000 bytes
    //
    _p50(sdk::function<int32_t(void*)>*) recover_resource_manager;
    
    // [ZwRecoverTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a960, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f30f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f49d0, 0x1fe000 bytes
    //
    _p51(sdk::function<int32_t(void*)>*) recover_transaction_manager;
    
    // [ZwRegisterProtocolAddressInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a980, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f49f0, 0x1fe000 bytes
    //
    _p52(sdk::function<int32_t(void*, struct nt::guid_t*, uint32_t, void*, uint32_t)>*) register_protocol_address_information;
    
    // [ZwRegisterThreadTerminatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a9a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4a10, 0x1fe000 bytes
    //
    _p53(sdk::function<int32_t(void*)>*) register_thread_terminate_port;
    
    // [ZwReleaseKeyedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a9c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4a30, 0x1fe000 bytes
    //
    _p54(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*) release_keyed_event;
    
    // [ZwReleaseMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158260, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2070, 0x1fe000 bytes
    //
    _p55(sdk::function<int32_t(void*, int32_t*)>*) release_mutant;
    
    // [ZwReleaseSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f04d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1db0, 0x1fe000 bytes
    //
    _p56(sdk::function<int32_t(void*, int32_t, int32_t*)>*) release_semaphore;
    
    // [ZwReleaseWorkerFactoryWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15a9e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4a50, 0x1fe000 bytes
    //
    _p57(sdk::function<int32_t(void*)>*) release_worker_factory_worker;
    
    // [ZwRemoveIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157f80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f04b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1d90, 0x1fe000 bytes
    //
    _p58(sdk::function<int32_t(void*, void**, void**, struct io::status_block_t*, int64_t*)>*) remove_io_completion;
    
    // [ZwRemoveIoCompletionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aa00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4273a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4a70, 0x1fe000 bytes
    //
    _p59(sdk::function<int32_t(void*, struct win::file_io_completion_information_t*, uint32_t, uint32_t*, int64_t*, uint8_t)>*) remove_io_completion_ex;
    
    // [ZwRemoveProcessDebug]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aa20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f31b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4273c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4a90, 0x1fe000 bytes
    //
    _p60(sdk::function<int32_t(void*, void*)>*) remove_process_debug;
    
    // [ZwRenameKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aa40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f31d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4273e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4ab0, 0x1fe000 bytes
    //
    _p61(sdk::function<int32_t(void*, nt::unicode_view*)>*) rename_key;
    
    // [ZwRenameTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aa60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f31f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4ad0, 0x1fe000 bytes
    //
    _p62(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*)>*) rename_transaction_manager;
    
    // [ZwReplaceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aa80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4af0, 0x1fe000 bytes
    //
    _p63(sdk::function<int32_t(struct nt::object_attributes_t*, void*, struct nt::object_attributes_t*)>*) replace_key;
    
    // [ZwReplacePartitionUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aaa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4b10, 0x1fe000 bytes
    //
    _p64(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, uint32_t)>*) replace_partition_unit;
    
    // [ZwReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157fe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1df0, 0x1fe000 bytes
    //
    _p65(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) reply_port;
    
    // [ZwReplyWaitReceivePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157fc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f04f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1dd0, 0x1fe000 bytes
    //
    _p66(sdk::function<int32_t(void*, void**, struct nt::port_message_t*, struct nt::port_message_t*)>*) reply_wait_receive_port;
    
    // [ZwReplyWaitReceivePortEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1583c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f08f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f21d0, 0x1fe000 bytes
    //
    _p67(sdk::function<int32_t(void*, void**, struct nt::port_message_t*, struct nt::port_message_t*, int64_t*)>*) reply_wait_receive_port_ex;
    
    // [ZwReplyWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4b30, 0x1fe000 bytes
    //
    _p68(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) reply_wait_reply_port;
    
    // [ZwRequestPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aae0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4b50, 0x1fe000 bytes
    //
    _p69(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) request_port;
    
    // [ZwRequestWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1582a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f07d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f20b0, 0x1fe000 bytes
    //
    _p70(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*)>*) request_wait_reply_port;
    
    // [ZwResetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ab00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4274a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4b70, 0x1fe000 bytes
    //
    _p71(sdk::function<int32_t(void*, int32_t*)>*) reset_event;
    
    // [ZwResetWriteWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ab20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f32b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4274c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4b90, 0x1fe000 bytes
    //
    _p72(sdk::function<int32_t(void*, void*, uint64_t)>*) reset_write_watch;
    
    // [ZwRestoreKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ab40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f32d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4274e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4bb0, 0x1fe000 bytes
    //
    _p73(sdk::function<int32_t(void*, void*, uint32_t)>*) restore_key;
    
    // [ZwResumeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f32f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4bd0, 0x1fe000 bytes
    //
    _p74(sdk::function<int32_t(void*)>*) resume_process;
    
    // [ZwResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1588a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f26b0, 0x1fe000 bytes
    //
    _p75(sdk::function<int32_t(void*, uint32_t*)>*) resume_thread;
    
    // [ZwRevertContainerImpersonation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ab80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4bf0, 0x1fe000 bytes
    //
    _p76(sdk::function<int32_t()>*) revert_container_impersonation;
    
    // [ZwRollbackComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4c10, 0x1fe000 bytes
    //
    _p77(sdk::function<int32_t(void*, int64_t*)>*) rollback_complete;
    
    // [ZwRollbackEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15abc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4c30, 0x1fe000 bytes
    //
    _p78(sdk::function<int32_t(void*, int64_t*)>*) rollback_enlistment;
    
    // [ZwRollbackRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15abe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4c50, 0x1fe000 bytes
    //
    _p79(sdk::function<int32_t(void*, uint32_t)>*) rollback_registry_transaction;
    
    // [ZwRollbackTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ac00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4275a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4c70, 0x1fe000 bytes
    //
    _p80(sdk::function<int32_t(void*, uint8_t)>*) rollback_transaction;
    
    // [ZwRollforwardTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ac20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f33b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4275c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4c90, 0x1fe000 bytes
    //
    _p81(sdk::function<int32_t(void*, int64_t*)>*) rollforward_transaction_manager;
    
    // [ZwSaveKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ac40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f33d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4275e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4cb0, 0x1fe000 bytes
    //
    _p82(sdk::function<int32_t(void*, void*)>*) save_key;
    
    // [ZwSaveKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ac60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f33f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4cd0, 0x1fe000 bytes
    //
    _p83(sdk::function<int32_t(void*, void*, uint32_t)>*) save_key_ex;
    
    // [ZwSaveMergedKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ac80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4cf0, 0x1fe000 bytes
    //
    _p84(sdk::function<int32_t(void*, void*, void*)>*) save_merged_keys;
    
    // [ZwSecureConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aca0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4d10, 0x1fe000 bytes
    //
    _p85(sdk::function<int32_t(void**, nt::unicode_view*, struct sec::quality_of_service_t*, struct win::port_view_t*, void*, struct nt::remote_port_view_t*, uint32_t*, void*, uint32_t*)>*) secure_connect_port;
    
    // [ZwSerializeBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15acc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4d30, 0x1fe000 bytes
    //
    _p86(sdk::function<int32_t(...)>*) serialize_boot;
    
    // [ZwSetBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ace0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4d50, 0x1fe000 bytes
    //
    _p87(sdk::function<int32_t(uint32_t*, uint32_t)>*) set_boot_entry_order;
    
    // [ZwSetBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ad00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4276a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4d70, 0x1fe000 bytes
    //
    _p88(sdk::function<int32_t(struct boot::options_t*, uint32_t)>*) set_boot_options;
    
    // [ZwSetCachedSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ad20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f34b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4276c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4d90, 0x1fe000 bytes
    //
    _p89(sdk::function<int32_t(uint32_t, uint8_t, void**, uint32_t, void*)>*) set_cached_signing_level;
    
    // [ZwSetCachedSigningLevel2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ad40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f34d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4276e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4db0, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) set_cached_signing_level2;
    
    // [ZwSetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ad60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f34f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4dd0, 0x1fe000 bytes
    //
    _p91(sdk::function<int32_t(void*, nt::context*)>*) set_context_thread;
    
    // [ZwSetDebugFilterState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ad80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4df0, 0x1fe000 bytes
    //
    _p92(sdk::function<int32_t(uint32_t, uint32_t, uint8_t)>*) set_debug_filter_state;
    
    // [ZwSetDefaultHardErrorPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ada0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4e10, 0x1fe000 bytes
    //
    _p93(sdk::function<int32_t(void*)>*) set_default_hard_error_port;
    
    // [ZwSetDefaultLocale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15adc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4e30, 0x1fe000 bytes
    //
    _p94(sdk::function<int32_t(uint8_t, uint32_t)>*) set_default_locale;
    
    // [ZwSetDefaultUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ade0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4e50, 0x1fe000 bytes
    //
    _p95(sdk::function<int32_t(uint16_t)>*) set_default_ui_language;
    
    // [ZwSetDriverEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ae00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4277a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4e70, 0x1fe000 bytes
    //
    _p96(sdk::function<int32_t(uint32_t*, uint32_t)>*) set_driver_entry_order;
    
    // [ZwSetEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ae20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f35b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4277c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4e90, 0x1fe000 bytes
    //
    _p97(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t)>*) set_ea_file;
    
    // [ZwSetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158020, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4245c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1e30, 0x1fe000 bytes
    //
    _p98(sdk::function<int32_t(void*, int32_t*)>*) set_event;
    
    // [ZwSetEventBoostPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158400, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4249a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2210, 0x1fe000 bytes
    //
    _p99(sdk::function<int32_t(void*)>*) set_event_boost_priority;
    
    // [ZwSetHighEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ae40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f35d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4277e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4eb0, 0x1fe000 bytes
    //
    _q00(sdk::function<int32_t(void*)>*) set_high_event_pair;
    
    // [ZwSetHighWaitLowEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ae60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f35f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4ed0, 0x1fe000 bytes
    //
    _q01(sdk::function<int32_t(void*)>*) set_high_wait_low_event_pair;
    
    // [ZwSetInformationDebugObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4f10, 0x1fe000 bytes
    //
    _q02(sdk::function<int32_t(void*, enum nt::debugobjectinfoclass_t, void*, uint32_t, uint32_t*)>*) set_information_debug_object;
    
    // [ZwSetInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aec0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4f30, 0x1fe000 bytes
    //
    _q03(sdk::function<int32_t(void*, enum nt::enlistment_information_class_t, void*, uint32_t)>*) set_information_enlistment;
    
    // [ZwSetInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158340, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4248e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2150, 0x1fe000 bytes
    //
    _q04(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*) set_information_file;
    
    // [ZwSetInformationJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15aee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4278c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4f50, 0x1fe000 bytes
    //
    _q05(sdk::function<int32_t(void*, enum nt::jobobjectinfoclass_t, void*, uint32_t)>*) set_information_job_object;
    
    // [ZwSetInformationKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15af00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4278e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4f70, 0x1fe000 bytes
    //
    _q06(sdk::function<int32_t(void*, enum nt::key_set_information_class_t, void*, uint32_t)>*) set_information_key;
    
    // [ZwSetInformationObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1589e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f27f0, 0x1fe000 bytes
    //
    _q07(sdk::function<int32_t(void*, enum nt::object_information_class_t, void*, uint32_t)>*) set_information_object;
    
    // [ZwSetInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1581e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1ff0, 0x1fe000 bytes
    //
    _q08(sdk::function<int32_t(void*, enum win::processinfoclass_t, void*, uint32_t)>*) set_information_process;
    
    // [ZwSetInformationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15af20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f36b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4f90, 0x1fe000 bytes
    //
    _q09(sdk::function<int32_t(void*, enum nt::resourcemanager_information_class_t, void*, uint32_t)>*) set_information_resource_manager;
    
    // [ZwSetInformationSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15af40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f36d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4fb0, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) set_information_symbolic_link;
    
    // [ZwSetInformationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158000, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4245a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1e10, 0x1fe000 bytes
    //
    _q11(sdk::function<int32_t(void*, enum nt::threadinfoclass_t, void*, uint32_t)>*) set_information_thread;
    
    // [ZwSetInformationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15af60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f36f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4fd0, 0x1fe000 bytes
    //
    _q12(sdk::function<int32_t(void*, enum nt::token_information_class_t, void*, uint32_t)>*) set_information_token;
    
    // [ZwSetInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15af80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4ff0, 0x1fe000 bytes
    //
    _q13(sdk::function<int32_t(void*, enum nt::transaction_information_class_t, void*, uint32_t)>*) set_information_transaction;
    
    // [ZwSetInformationTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15afa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5010, 0x1fe000 bytes
    //
    _q14(sdk::function<int32_t(void*, enum nt::transactionmanager_information_class_t, void*, uint32_t)>*) set_information_transaction_manager;
    
    // [ZwSetInformationVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15afc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4279a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5030, 0x1fe000 bytes
    //
    _q15(sdk::function<int32_t(void*, enum nt::virtual_memory_information_class_t, uint64_t, struct nt::memory_range_entry_t*, void*, uint32_t)>*) set_information_virtual_memory;
    
    // [ZwSetInformationWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15afe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4279c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5050, 0x1fe000 bytes
    //
    _q16(sdk::function<int32_t(void*, enum win::workerfactoryinfoclass_t, void*, uint32_t)>*) set_information_worker_factory;
    
    // [ZwSetIntervalProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b000, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4279e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5070, 0x1fe000 bytes
    //
    _q17(sdk::function<int32_t(uint32_t, enum nt::kprofile_source_t)>*) set_interval_profile;
    
    // [ZwSetIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b020, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f37b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5090, 0x1fe000 bytes
    //
    _q18(sdk::function<int32_t(void*, void*, void*, int32_t, uint64_t)>*) set_io_completion;
    
    // [ZwSetIoCompletionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b040, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f37d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f50b0, 0x1fe000 bytes
    //
    _q19(sdk::function<int32_t(void*, void*, void*, void*, int32_t, uint64_t)>*) set_io_completion_ex;
    
    // [ZwSetIRTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ae80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f4ef0, 0x1fe000 bytes
    //
    _q20(sdk::function<int32_t(void*, int64_t*)>*) set_ir_timer;
    
    // [ZwSetLdtEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b060, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f37f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f50d0, 0x1fe000 bytes
    //
    _q21(sdk::function<int32_t(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>*) set_ldt_entries;
    
    // [ZwSetLowEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b080, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f50f0, 0x1fe000 bytes
    //
    _q22(sdk::function<int32_t(void*)>*) set_low_event_pair;
    
    // [ZwSetLowWaitHighEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b0a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5110, 0x1fe000 bytes
    //
    _q23(sdk::function<int32_t(void*)>*) set_low_wait_high_event_pair;
    
    // [ZwSetQuotaInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b0c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5130, 0x1fe000 bytes
    //
    _q24(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t)>*) set_quota_information_file;
    
    // [ZwSetSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b0e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5150, 0x1fe000 bytes
    //
    _q25(sdk::function<int32_t(void*, uint32_t, void*)>*) set_security_object;
    
    // [ZwSetSystemEnvironmentValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b100, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5170, 0x1fe000 bytes
    //
    _q26(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*)>*) set_system_environment_value;
    
    // [ZwSetSystemEnvironmentValueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b120, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f38b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5190, 0x1fe000 bytes
    //
    _q27(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t, uint32_t)>*) set_system_environment_value_ex;
    
    // [ZwSetSystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b140, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f38d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f51b0, 0x1fe000 bytes
    //
    _q28(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t)>*) set_system_information;
    
    // [ZwSetSystemPowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b160, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f38f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f51d0, 0x1fe000 bytes
    //
    _q29(sdk::function<int32_t(enum power::action_t, enum nt::system_power_state_t, uint32_t)>*) set_system_power_state;
    
    // [ZwSetSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b180, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f51f0, 0x1fe000 bytes
    //
    _q30(sdk::function<int32_t(int64_t*, int64_t*)>*) set_system_time;
    
    // [ZwSetThreadExecutionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b1a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5210, 0x1fe000 bytes
    //
    _q31(sdk::function<int32_t(uint32_t, uint32_t*)>*) set_thread_execution_state;
    
    // [ZwSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f28b0, 0x1fe000 bytes
    //
    _q32(sdk::function<int32_t(void*, int64_t*, sdk::function<void(void*, uint32_t, int32_t)>*, void*, uint8_t, int32_t, uint8_t*)>*) set_timer;
    
    // [ZwSetTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b1c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5230, 0x1fe000 bytes
    //
    _q33(sdk::function<int32_t(void*, int64_t*, int64_t*, struct win::t2_set_parameters_v0_t*)>*) set_timer2;
    
    // [ZwSetTimerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b1e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5250, 0x1fe000 bytes
    //
    _q34(sdk::function<int32_t(void*, enum win::timer_set_information_class_t, void*, uint32_t)>*) set_timer_ex;
    
    // [ZwSetTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b200, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5270, 0x1fe000 bytes
    //
    _q35(sdk::function<int32_t(uint32_t, uint8_t, uint32_t*)>*) set_timer_resolution;
    
    // [ZwSetUuidSeed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b220, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f39b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5290, 0x1fe000 bytes
    //
    _q36(sdk::function<int32_t(char*)>*) set_uuid_seed;
    
    // [ZwSetValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158a60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x425000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2870, 0x1fe000 bytes
    //
    _q37(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t, void*, uint32_t)>*) set_value_key;
    
    // [ZwSetVolumeInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b240, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f39d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f52b0, 0x1fe000 bytes
    //
    _q38(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum fs::information_class_t)>*) set_volume_information_file;
    
    // [ZwSetWnfProcessNotificationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b260, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f39f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f52d0, 0x1fe000 bytes
    //
    _q39(sdk::function<int32_t(void*)>*) set_wnf_process_notification_event;
    
    // [ZwShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b280, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f52f0, 0x1fe000 bytes
    //
    _q40(sdk::function<int32_t(enum win::shutdown_action_t)>*) shutdown_system;
    
    // [ZwShutdownWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b2a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3a30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5310, 0x1fe000 bytes
    //
    _q41(sdk::function<int32_t(void*, volatile int32_t*)>*) shutdown_worker_factory;
    
    // [ZwSignalAndWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b2c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5330, 0x1fe000 bytes
    //
    _q42(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*) signal_and_wait_for_single_object;
    
    // [ZwSinglePhaseReject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b2e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5350, 0x1fe000 bytes
    //
    _q43(sdk::function<int32_t(void*, int64_t*)>*) single_phase_reject;
    
    // [ZwStartProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b300, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5370, 0x1fe000 bytes
    //
    _q44(sdk::function<int32_t(void*)>*) start_profile;
    
    // [ZwStopProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b320, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5390, 0x1fe000 bytes
    //
    _q45(sdk::function<int32_t(void*)>*) stop_profile;
    
    // [ZwSubscribeWnfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b340, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f53b0, 0x1fe000 bytes
    //
    _q46(sdk::function<int32_t(const struct wnf::state_name_t*, uint32_t, uint32_t, uint64_t*)>*) subscribe_wnf_state_change;
    
    // [ZwSuspendProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b360, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f53d0, 0x1fe000 bytes
    //
    _q47(sdk::function<int32_t(void*)>*) suspend_process;
    
    // [ZwSuspendThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b380, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f53f0, 0x1fe000 bytes
    //
    _q48(sdk::function<int32_t(void*, uint32_t*)>*) suspend_thread;
    
    // [ZwSystemDebugControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b3a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5410, 0x1fe000 bytes
    //
    _q49(sdk::function<int32_t(enum win::sysdbg_command_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*) system_debug_control;
    
    // [ZwTerminateJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b3c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5450, 0x1fe000 bytes
    //
    _q50(sdk::function<int32_t(void*, int32_t)>*) terminate_job_object;
    
    // [ZwTerminateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1583e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f21f0, 0x1fe000 bytes
    //
    _q51(sdk::function<int32_t(void*, int32_t)>*) terminate_process;
    
    // [ZwTerminateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1588c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f26d0, 0x1fe000 bytes
    //
    _q52(sdk::function<int32_t(void*, int32_t)>*) terminate_thread;
    
    // [ZwTestAlert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b3e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5470, 0x1fe000 bytes
    //
    _q53(sdk::function<int32_t(...)>*) test_alert;
    
    // [ZwThawRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b400, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5490, 0x1fe000 bytes
    //
    _q54(sdk::function<int32_t(...)>*) thaw_registry;
    
    // [ZwThawTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b420, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f54b0, 0x1fe000 bytes
    //
    _q55(sdk::function<int32_t(...)>*) thaw_transactions;
    
    // [ZwTraceControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b440, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f54d0, 0x1fe000 bytes
    //
    _q56(sdk::function<int32_t(enum trace::control_information_class_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*) trace_control;
    
    // [ZwTraceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158a20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2830, 0x1fe000 bytes
    //
    _q57(sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*) trace_event;
    
    // [ZwTranslateFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b460, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f54f0, 0x1fe000 bytes
    //
    _q58(sdk::function<int32_t(struct win::file_path_t*, uint32_t, struct win::file_path_t*, uint32_t*)>*) translate_file_path;
    
    // [ZwUmsThreadYield]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b480, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5510, 0x1fe000 bytes
    //
    _q59(sdk::function<int32_t(void*)>*) ums_thread_yield;
    
    // [ZwUnloadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b4a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5530, 0x1fe000 bytes
    //
    _q60(sdk::function<int32_t(nt::unicode_view*)>*) unload_driver;
    
    // [ZwUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b4c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5550, 0x1fe000 bytes
    //
    _q61(sdk::function<int32_t(struct nt::object_attributes_t*)>*) unload_key;
    
    // [ZwUnloadKey2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b4e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5570, 0x1fe000 bytes
    //
    _q62(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t)>*) unload_key2;
    
    // [ZwUnloadKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b500, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5590, 0x1fe000 bytes
    //
    _q63(sdk::function<int32_t(struct nt::object_attributes_t*, void*)>*) unload_key_ex;
    
    // [ZwUnlockFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b520, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f55b0, 0x1fe000 bytes
    //
    _q64(sdk::function<int32_t(void*, struct io::status_block_t*, int64_t*, int64_t*, uint32_t)>*) unlock_file;
    
    // [ZwUnlockVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b540, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f55d0, 0x1fe000 bytes
    //
    _q65(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*) unlock_virtual_memory;
    
    // [ZwUnmapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1583a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f08d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f21b0, 0x1fe000 bytes
    //
    _q66(sdk::function<int32_t(void*, void*)>*) unmap_view_of_section;
    
    // [ZwUnmapViewOfSectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b560, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f55f0, 0x1fe000 bytes
    //
    _q67(sdk::function<int32_t(void*, void*, uint32_t)>*) unmap_view_of_section_ex;
    
    // [ZwUnsubscribeWnfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b580, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5610, 0x1fe000 bytes
    //
    _q68(sdk::function<int32_t(const struct wnf::state_name_t*)>*) unsubscribe_wnf_state_change;
    
    // [ZwUpdateWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b5a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5630, 0x1fe000 bytes
    //
    _q69(sdk::function<int32_t(const struct wnf::state_name_t*, const void*, uint32_t, const struct wnf::type_id_t*, const void*, uint32_t, uint32_t)>*) update_wnf_state_data;
    
    // [ZwVdmControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b5c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x427fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5650, 0x1fe000 bytes
    //
    _q70(sdk::function<int32_t(enum nt::vdmserviceclass_t, void*)>*) vdm_control;
    
    // [ZwWaitForAlertByThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b5e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5670, 0x1fe000 bytes
    //
    _q71(sdk::function<int32_t(void*, int64_t*)>*) wait_for_alert_by_thread_id;
    
    // [ZwWaitForDebugEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b600, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5690, 0x1fe000 bytes
    //
    _q72(sdk::function<int32_t(void*, uint8_t, int64_t*, struct nt::dbgui_wait_state_change_t*)>*) wait_for_debug_event;
    
    // [ZwWaitForKeyedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b620, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f56b0, 0x1fe000 bytes
    //
    _q73(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*) wait_for_keyed_event;
    
    // [ZwWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1589c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f27d0, 0x1fe000 bytes
    //
    _q74(sdk::function<int32_t(uint32_t, void**, enum nt::wait_type_t, uint8_t, int64_t*)>*) wait_for_multiple_objects;
    
    // [ZwWaitForMultipleObjects32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1581a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f06d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1fb0, 0x1fe000 bytes
    //
    _q75(sdk::function<int32_t(uint32_t, int32_t*, enum nt::wait_type_t, uint8_t, int64_t*)>*) wait_for_multiple_objects32;
    
    // [ZwWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1cf0, 0x1fe000 bytes
    //
    _q76(sdk::function<int32_t(void*, uint8_t, int64_t*)>*) wait_for_single_object;
    
    // [ZwWaitForWorkViaWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b640, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f56d0, 0x1fe000 bytes
    //
    _q77(sdk::function<int32_t(void*, struct win::file_io_completion_information_t*)>*) wait_for_work_via_worker_factory;
    
    // [ZwWaitHighEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b660, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f56f0, 0x1fe000 bytes
    //
    _q78(sdk::function<int32_t(void*)>*) wait_high_event_pair;
    
    // [ZwWaitLowEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b680, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4280a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5710, 0x1fe000 bytes
    //
    _q79(sdk::function<int32_t(void*)>*) wait_low_event_pair;
    
    // [ZwWorkerFactoryWorkerReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157e80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f03b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1c90, 0x1fe000 bytes
    //
    _q80(sdk::function<int32_t(void*)>*) worker_factory_worker_ready;
    
    // [ZwWriteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157f60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1d70, 0x1fe000 bytes
    //
    _q81(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, int64_t*, uint32_t*)>*) write_file;
    
    // [ZwWriteFileGather]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1581c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f06f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1fd0, 0x1fe000 bytes
    //
    _q82(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, union nt::file_segment_element_t*, uint32_t, int64_t*, uint32_t*)>*) write_file_gather;
    
    // [ZwWriteRequestData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158940, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2750, 0x1fe000 bytes
    //
    _q83(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t, void*, uint64_t, uint64_t*)>*) write_request_data;
    
    // [ZwWriteVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1585a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f23b0, 0x1fe000 bytes
    //
    _q84(sdk::function<int32_t(void*, void*, void*, uint64_t, uint64_t*)>*) write_virtual_memory;
    
    // [ZwYieldExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x158720, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f0c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f2530, 0x1fe000 bytes
    //
    _q85(sdk::function<int32_t(...)>*) yield_execution;
    
    // [ZwWin32CreateSection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc675c, 0x13864 bytes
    // win32kfull.sys .text:0x3eb24, 0x1596d bytes
    // win32kfull.sys .text:0x6e7c4, 0x1659e bytes
    // win32kfull.sys .text:0x3ef34, 0x1596d bytes
    //
    _q86(sdk::unknown_ptr) win32_create_section;
    
    // [ZwWin32CreateSectionRetainHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc67a4, 0x13864 bytes
    // win32kfull.sys .text:0x3eb80, 0x1596d bytes
    // win32kfull.sys .text:0x6e820, 0x1659e bytes
    // win32kfull.sys .text:0x3ef90, 0x1596d bytes
    //
    _q87(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::file_object_t*, uint32_t, void**)>*) win32_create_section_retain_handle;
};
#include "magic/api.end.hpp"
