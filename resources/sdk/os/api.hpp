#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/luid_t.hpp"
#include "../boot/entry_t.hpp"
#include "../wnf/type_id_t.hpp"
#include "../boot/options_t.hpp"
#include "../nt/client_id_t.hpp"
#include "../nt/wait_type_t.hpp"
#include "../power/action_t.hpp"
#include "../nt/event_type_t.hpp"
#include "../nt/timer_type_t.hpp"
#include "../nt/token_type_t.hpp"
#include "../win/file_path_t.hpp"
#include "../win/port_view_t.hpp"
#include "../ps/create_info_t.hpp"
#include "../win/token_user_t.hpp"
#include "../wnf/data_scope_t.hpp"
#include "../wnf/state_name_t.hpp"
#include "../io/status_block_t.hpp"
#include "../nt/port_message_t.hpp"
#include "../nt/token_groups_t.hpp"
#include "../nt/token_source_t.hpp"
#include "../win/initial_teb_t.hpp"
#include "../win/token_owner_t.hpp"
#include "../efi/driver_entry_t.hpp"
#include "../io/session_event_t.hpp"
#include "../io/session_state_t.hpp"
#include "../nt/privilege_set_t.hpp"
#include "../alpc/context_attr_t.hpp"
#include "../nt/apphelpcommand_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "../nt/ktmobject_type_t.hpp"
#include "../ps/attribute_list_t.hpp"
#include "../win/job_set_array_t.hpp"
#include "../alpc/security_attr_t.hpp"
#include "../nt/generic_mapping_t.hpp"
#include "../nt/kprofile_source_t.hpp"
#include "../nt/section_inherit_t.hpp"
#include "../nt/threadinfoclass_t.hpp"
#include "../nt/vdmserviceclass_t.hpp"
#include "../win/sysdbg_command_t.hpp"
#include "../alpc/data_view_attr_t.hpp"
#include "../nt/audit_event_type_t.hpp"
#include "../nt/exception_record_t.hpp"
#include "../nt/ktmobject_cursor_t.hpp"
#include "../nt/object_type_list_t.hpp"
#include "../nt/remote_port_view_t.hpp"
#include "../nt/token_privileges_t.hpp"
#include "../win/key_value_entry_t.hpp"
#include "../win/shutdown_action_t.hpp"
#include "../alpc/port_attributes_t.hpp"
#include "../fs/information_class_t.hpp"
#include "../nt/object_attributes_t.hpp"
#include "../win/processinfoclass_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/jobobjectinfoclass_t.hpp"
#include "../nt/memory_range_entry_t.hpp"
#include "../nt/sid_and_attributes_t.hpp"
#include "../nt/system_power_state_t.hpp"
#include "../sec/quality_of_service_t.hpp"
#include "../win/token_default_dacl_t.hpp"
#include "../alpc/message_attributes_t.hpp"
#include "../nt/debugobjectinfoclass_t.hpp"
#include "../nt/file_segment_element_t.hpp"
#include "../power/information_level_t.hpp"
#include "../win/memory_reserve_type_t.hpp"
#include "../win/token_primary_group_t.hpp"
#include "../wnf/delivery_descriptor_t.hpp"
#include "../wnf/state_name_lifetime_t.hpp"
#include "../nt/key_information_class_t.hpp"
#include "../win/t2_set_parameters_v0_t.hpp"
#include "../nt/file_basic_information_t.hpp"
#include "../nt/file_information_class_t.hpp"
#include "../nt/mem_extended_parameter_t.hpp"
#include "../nt/token_mandatory_policy_t.hpp"
#include "../nt/dbgui_wait_state_change_t.hpp"
#include "../nt/token_information_class_t.hpp"
#include "../win/atom_information_class_t.hpp"
#include "../win/plugplay_control_class_t.hpp"
#include "../win/port_information_class_t.hpp"
#include "../win/workerfactoryinfoclass_t.hpp"
#include "../wnf/state_name_information_t.hpp"
#include "../alpc/port_information_class_t.hpp"
#include "../nt/memory_information_class_t.hpp"
#include "../nt/object_information_class_t.hpp"
#include "../nt/transaction_notification_t.hpp"
#include "../win/event_information_class_t.hpp"
#include "../win/timer_information_class_t.hpp"
#include "../nt/key_set_information_class_t.hpp"
#include "../win/mutant_information_class_t.hpp"
#include "../win/system_information_class_t.hpp"
#include "../win/section_information_class_t.hpp"
#include "../alpc/message_information_class_t.hpp"
#include "../nt/key_value_information_class_t.hpp"
#include "../io/completion_information_class_t.hpp"
#include "../nt/enlistment_information_class_t.hpp"
#include "../trace/control_information_class_t.hpp"
#include "../win/semaphore_information_class_t.hpp"
#include "../win/timer_set_information_class_t.hpp"
#include "../nt/file_network_open_information_t.hpp"
#include "../nt/transaction_information_class_t.hpp"
#include "../win/filter_boot_option_operation_t.hpp"
#include "../win/file_io_completion_information_t.hpp"
#include "../nt/virtual_memory_information_class_t.hpp"
#include "../nt/resourcemanager_information_class_t.hpp"
#include "../nt/directory_notify_information_class_t.hpp"
#include "../nt/memory_partition_information_class_t.hpp"
#include "../nt/transactionmanager_information_class_t.hpp"
#include "../win/token_security_attributes_information_t.hpp"

#include "magic/api.start.hpp"
namespace os
{
    // [NtChangeProcessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a3a30, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) change_process_state;
    
    // [NtChangeThreadState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a3c30, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) change_thread_state;
    
    // [NtCopyFileChunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9456e0, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) copy_file_chunk;
    
    // [NtCreateCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a3e30, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) create_cpu_partition;
    
    // [NtCreateIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x944c40, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) create_io_ring;
    
    // [NtCreateProcessStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a3e70, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) create_process_state_change;
    
    // [NtCreateThreadStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4080, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) create_thread_state_change;
    
    // [NtKnownDllsObjectDirectoryName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c21e0, 0x32828 bytes
    //
    _m07(sdk::unknown_ptr) known_dlls_object_directory_name;
    
    // [NtKnownDllsObjectDirectoryName32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c21f0, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) known_dlls_object_directory_name32;
    
    // [NtKnownDllsObjectDirectoryNameArm32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c21d0, 0x32828 bytes
    //
    _m09(sdk::unknown_ptr) known_dlls_object_directory_name_arm32;
    
    // [NtKnownDllsPathSymLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c1c88, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) known_dlls_path_sym_link;
    
    // [NtOpenCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4290, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) open_cpu_partition;
    
    // [NtQueryInformationCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4340, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) query_information_cpu_partition;
    
    // [NtQueryIoRingCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x945420, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) query_io_ring_capabilities;
    
    // [NtQueueApcThreadEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7c22a0, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) queue_apc_thread_ex2;
    
    // [NtReadVirtualMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34bc60, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) read_virtual_memory_ex;
    
    // [NtSetInformationCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4540, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) set_information_cpu_partition;
    
    // [NtSetInformationIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9454b0, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) set_information_io_ring;
    
    // [NtSubmitIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x546390, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) submit_io_ring;
    
    // [NtSystemRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3241d0, 0x32828 bytes
    //
    _m19(sdk::unknown_ptr) system_root;
    
    // [NtAcquireCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x958d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957600, 0x1fe000 bytes
    //
    _m20(sdk::unknown_ptr) acquire_cross_vm_mutant;
    
    // [NtAcquireProcessActivityReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x715130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x871710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71cb70, 0x1fe000 bytes
    //
    _m21(sdk::unknown_ptr) acquire_process_activity_reference;
    
    // [NtAllocateUserPhysicalPagesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d2ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa32890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d1ea0, 0x1fe000 bytes
    //
    _m22(sdk::unknown_ptr) allocate_user_physical_pages_ex;
    
    // [NtAllocateVirtualMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eb8a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7702d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64d5d0, 0x1fe000 bytes
    //
    _m23(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t, uint32_t, struct nt::mem_extended_parameter_t*, uint32_t)>*) allocate_virtual_memory_ex;
    
    // [NtBuildQfe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11f00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f60, 0x1fe000 bytes
    //
    _m24(sdk::unknown_ptr) build_qfe;
    
    // [NtCallEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3fcb10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fe3f0, 0x1fe000 bytes
    //
    _m25(sdk::function<int32_t(sdk::function<void*(void*)>*, void*, uint8_t, void**)>*) call_enclave;
    
    // [NtCompareSigningLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x673530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6b20, 0x1fe000 bytes
    //
    _m26(sdk::unknown_ptr) compare_signing_levels;
    
    // [NtContinueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f45e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5ec0, 0x1fe000 bytes
    //
    _m27(sdk::unknown_ptr) continue_ex;
    
    // [NtConvertBetweenAuxiliaryCounterAndPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x957460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f7420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x955d40, 0x1fe000 bytes
    //
    _m28(sdk::unknown_ptr) convert_between_auxiliary_counter_and_performance_counter;
    
    // [NtCreateCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94c0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94a9c0, 0x1fe000 bytes
    //
    _m29(sdk::unknown_ptr) create_cross_vm_event;
    
    // [NtCreateCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x958df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9576d0, 0x1fe000 bytes
    //
    _m30(sdk::unknown_ptr) create_cross_vm_mutant;
    
    // [NtCreateSectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8c48f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1f920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c30b0, 0x1fe000 bytes
    //
    _m31(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::mem_extended_parameter_t*, uint32_t)>*) create_section_ex;
    
    // [NtDirectGraphicsCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) direct_graphics_call;
    
    // [NtGlobalFlag2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4c228, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64300, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c208, 0x1fe000 bytes
    //
    _m33(sdk::unknown_ptr) global_flag2;
    
    // [NtImageInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x985af8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6a228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9843d8, 0x1fe000 bytes
    //
    _m34(sdk::unknown_ptr) image_info;
    
    // [NtLoadKey3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c73b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c63b0, 0x1fe000 bytes
    //
    _m35(sdk::unknown_ptr) load_key3;
    
    // [NtManageHotPatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8cbc20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cd010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ca400, 0x1fe000 bytes
    //
    _m36(sdk::unknown_ptr) manage_hot_patch;
    
    // [NtMapViewOfSectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6732e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e12e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e69b0, 0x1fe000 bytes
    //
    _m37(sdk::unknown_ptr) map_view_of_section_ex;
    
    // [NtNotifyChangeDirectoryFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x666340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d9860, 0x1fe000 bytes
    //
    _m38(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, uint32_t, uint8_t, enum nt::directory_notify_information_class_t)>*) notify_change_directory_file_ex;
    
    // [NtOpenKeyTransactedEx_Stub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9799ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa58ab8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9782cc, 0x1fe000 bytes
    //
    _m39(sdk::unknown_ptr) open_key_transacted_ex_stub;
    
    // [NtPssCaptureVaSpaceBulk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9588c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f83d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9571a0, 0x1fe000 bytes
    //
    _m40(sdk::unknown_ptr) pss_capture_va_space_bulk;
    
    // [NtQueryAuxiliaryCounterFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9576e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f76a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x955fc0, 0x1fe000 bytes
    //
    _m41(sdk::unknown_ptr) query_auxiliary_counter_frequency;
    
    // [NtQueryDirectoryFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6966f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e3820, 0x1fe000 bytes
    //
    _m42(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t, uint32_t, nt::unicode_view*)>*) query_directory_file_ex;
    
    // [NtQueryInformationByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x891c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7602a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890430, 0x1fe000 bytes
    //
    _m43(sdk::function<int32_t(struct nt::object_attributes_t*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*) query_information_by_name;
    
    // [NtTerminateEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d12e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2fe30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d0190, 0x1fe000 bytes
    //
    _m44(sdk::function<int32_t(void*, uint8_t)>*) terminate_enclave;
    
    // [NtAcceptConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4963c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dee20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2de0, 0x1fe000 bytes
    //
    _m45(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint8_t, struct win::port_view_t*, struct nt::remote_port_view_t*)>*) accept_connect_port;
    
    // [NtAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbffdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x24f540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2909b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fccd0, 0x1fe000 bytes
    //
    _m46(sdk::function<int32_t(void*, void*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*) access_check;
    
    // [NtAccessCheckAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4702ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60fb00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ce190, 0x1fe000 bytes
    //
    _m47(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*) access_check_and_audit_alarm;
    
    // [NtAccessCheckByType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5d5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x257790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x369870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x307100, 0x1fe000 bytes
    //
    _m48(sdk::function<int32_t(void*, void*, void*, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*) access_check_by_type;
    
    // [NtAccessCheckByTypeAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x470330, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6160f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bfe10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d08c0, 0x1fe000 bytes
    //
    _m49(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*) access_check_by_type_and_audit_alarm;
    
    // [NtAccessCheckByTypeResultList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2196cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x58fd50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58fbd0, 0x1fe000 bytes
    //
    _m50(sdk::function<int32_t(void*, void*, void*, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, struct nt::privilege_set_t*, uint32_t*, uint32_t*, int32_t*)>*) access_check_by_type_result_list;
    
    // [NtAccessCheckByTypeResultListAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6959fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c18d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91ca70, 0x1fe000 bytes
    //
    _m51(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*) access_check_by_type_result_list_and_audit_alarm;
    
    // [NtAccessCheckByTypeResultListAndAuditAlarmByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695aa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91e250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91cb20, 0x1fe000 bytes
    //
    _m52(sdk::function<int32_t(nt::unicode_view*, void*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, enum nt::audit_event_type_t, uint32_t, struct nt::object_type_list_t*, uint32_t, struct nt::generic_mapping_t*, uint8_t, uint32_t*, int32_t*, uint8_t*)>*) access_check_by_type_result_list_and_audit_alarm_by_handle;
    
    // [NtAddAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b94ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x952230, 0x1fe000 bytes
    //
    _m53(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*)>*) add_atom;
    
    // [NtAddAtomEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425d4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65b2f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eb3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cea80, 0x1fe000 bytes
    //
    _m54(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*, uint32_t)>*) add_atom_ex;
    
    // [NtAddBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5f9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94fd00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f20d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e5e0, 0x1fe000 bytes
    //
    _m55(sdk::function<int32_t(struct boot::entry_t*, uint32_t*)>*) add_boot_entry;
    
    // [NtAddDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5fbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94fd30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e610, 0x1fe000 bytes
    //
    _m56(sdk::function<int32_t(struct efi::driver_entry_t*, uint32_t*)>*) add_driver_entry;
    
    // [NtAdjustGroupsToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8f98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f6880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c06e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6754f0, 0x1fe000 bytes
    //
    _m57(sdk::function<int32_t(void*, uint8_t, struct nt::token_groups_t*, uint32_t, struct nt::token_groups_t*, uint32_t*)>*) adjust_groups_token;
    
    // [NtAdjustPrivilegesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f88b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6844b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x750320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f8e0, 0x1fe000 bytes
    //
    _m58(sdk::function<int32_t(void*, uint8_t, struct nt::token_privileges_t*, uint32_t, struct nt::token_privileges_t*, uint32_t*)>*) adjust_privileges_token;
    
    // [NtAdjustTokenClaimsAndDeviceGroups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _m59(sdk::function<int32_t(void*, uint8_t, uint8_t, uint8_t, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, uint32_t, struct win::token_security_attributes_information_t*, uint32_t, struct win::token_security_attributes_information_t*, uint32_t, struct nt::token_groups_t*, uint32_t*, uint32_t*, uint32_t*)>*) adjust_token_claims_and_device_groups;
    
    // [NtAlertResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686698, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a97d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907e70, 0x1fe000 bytes
    //
    _m60(sdk::function<int32_t(void*, uint32_t*)>*) alert_resume_thread;
    
    // [NtAlertThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6867a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909870, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a98f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907f90, 0x1fe000 bytes
    //
    _m61(sdk::function<int32_t(void*)>*) alert_thread;
    
    // [NtAlertThreadByThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c3aec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60fb90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7715c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e02b0, 0x1fe000 bytes
    //
    _m62(sdk::function<int32_t(void*)>*) alert_thread_by_thread_id;
    
    // [NtAllocateLocallyUniqueId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478570, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x644c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a4110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b90f0, 0x1fe000 bytes
    //
    _m63(sdk::function<int32_t(struct nt::luid_t*)>*) allocate_locally_unique_id;
    
    // [NtAllocateReserveObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e301c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6deb00, 0x1fe000 bytes
    //
    _m64(sdk::function<int32_t(void**, struct nt::object_attributes_t*, enum win::memory_reserve_type_t)>*) allocate_reserve_object;
    
    // [NtAllocateUserPhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x661574, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d2fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa32870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d1e80, 0x1fe000 bytes
    //
    _m65(sdk::function<int32_t(void*, uint64_t*, uint64_t*)>*) allocate_user_physical_pages;
    
    // [NtAllocateUuids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4985f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x672020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3f00, 0x1fe000 bytes
    //
    _m66(sdk::function<int32_t(uint64_t*, uint32_t*, uint32_t*, char*)>*) allocate_uuids;
    
    // [NtAllocateVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x407630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6eb640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x770620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64d370, 0x1fe000 bytes
    //
    _m67(sdk::function<int32_t(void*, void**, uint64_t, uint64_t*, uint32_t, uint32_t)>*) allocate_virtual_memory;
    
    // [NtAlpcAcceptConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45bde0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6facf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ed810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x647cd0, 0x1fe000 bytes
    //
    _m68(sdk::function<int32_t(void**, void*, uint32_t, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, void*, struct nt::port_message_t*, struct alpc::message_attributes_t*, uint8_t)>*) alpc_accept_connect_port;
    
    // [NtAlpcCancelMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f83c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eac40, 0x1fe000 bytes
    //
    _m69(sdk::function<int32_t(void*, uint32_t, struct alpc::context_attr_t*)>*) alpc_cancel_message;
    
    // [NtAlpcConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b714, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f9210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eccd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6461f0, 0x1fe000 bytes
    //
    _m70(sdk::function<int32_t(void**, nt::unicode_view*, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, uint32_t, void*, struct nt::port_message_t*, uint32_t*, struct alpc::message_attributes_t*, struct alpc::message_attributes_t*, int64_t*)>*) alpc_connect_port;
    
    // [NtAlpcConnectPortEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a178, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f9290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ec820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x646270, 0x1fe000 bytes
    //
    _m71(sdk::function<int32_t(void**, struct nt::object_attributes_t*, struct nt::object_attributes_t*, struct alpc::port_attributes_t*, uint32_t, void*, struct nt::port_message_t*, uint64_t*, struct alpc::message_attributes_t*, struct alpc::message_attributes_t*, int64_t*)>*) alpc_connect_port_ex;
    
    // [NtAlpcCreatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48cd38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c60b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d6800, 0x1fe000 bytes
    //
    _m72(sdk::function<int32_t(void**, struct nt::object_attributes_t*, struct alpc::port_attributes_t*)>*) alpc_create_port;
    
    // [NtAlpcCreatePortSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47bc4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ff230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f62a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x642380, 0x1fe000 bytes
    //
    _m73(sdk::function<int32_t(void*, uint32_t, void*, uint64_t, void**, uint64_t*)>*) alpc_create_port_section;
    
    // [NtAlpcCreateResourceReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c988, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ed90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2100, 0x1fe000 bytes
    //
    _m74(sdk::function<int32_t(void*, uint32_t, uint64_t, void**)>*) alpc_create_resource_reserve;
    
    // [NtAlpcCreateSectionView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45eb98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fed90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef3c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6450d0, 0x1fe000 bytes
    //
    _m75(sdk::function<int32_t(void*, uint32_t, struct alpc::data_view_attr_t*)>*) alpc_create_section_view;
    
    // [NtAlpcCreateSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460b10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64c360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f29d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bee00, 0x1fe000 bytes
    //
    _m76(sdk::function<int32_t(void*, uint32_t, struct alpc::security_attr_t*)>*) alpc_create_security_context;
    
    // [NtAlpcDeletePortSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485988, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65b810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef5c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a0a0, 0x1fe000 bytes
    //
    _m77(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_delete_port_section;
    
    // [NtAlpcDeleteResourceReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a1c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8913c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8beb30, 0x1fe000 bytes
    //
    _m78(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_delete_resource_reserve;
    
    // [NtAlpcDeleteSectionView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x484d0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709f70, 0x1fe000 bytes
    //
    _m79(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_delete_section_view;
    
    // [NtAlpcDeleteSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460cc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611b50, 0x1fe000 bytes
    //
    _m80(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_delete_security_context;
    
    // [NtAlpcDisconnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48c6ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f8680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x645660, 0x1fe000 bytes
    //
    _m81(sdk::function<int32_t(void*, uint32_t)>*) alpc_disconnect_port;
    
    // [NtAlpcImpersonateClientContainerOfPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a360, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bf4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bdc80, 0x1fe000 bytes
    //
    _m82(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t)>*) alpc_impersonate_client_container_of_port;
    
    // [NtAlpcImpersonateClientOfPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c1c30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60fa60, 0x1fe000 bytes
    //
    _m83(sdk::function<int32_t(void*, struct nt::port_message_t*, void*)>*) alpc_impersonate_client_of_port;
    
    // [NtAlpcOpenSenderProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a4dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fcf20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f1c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x649f00, 0x1fe000 bytes
    //
    _m84(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint32_t, uint32_t, struct nt::object_attributes_t*)>*) alpc_open_sender_process;
    
    // [NtAlpcOpenSenderThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d918, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aefb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7ff0, 0x1fe000 bytes
    //
    _m85(sdk::function<int32_t(void**, void*, struct nt::port_message_t*, uint32_t, uint32_t, struct nt::object_attributes_t*)>*) alpc_open_sender_thread;
    
    // [NtAlpcQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f110, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x640090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79ece0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6810, 0x1fe000 bytes
    //
    _m86(sdk::function<int32_t(void*, enum alpc::port_information_class_t, void*, uint32_t, uint32_t*)>*) alpc_query_information;
    
    // [NtAlpcQueryInformationMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45d9a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f19e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66afb0, 0x1fe000 bytes
    //
    _m87(sdk::function<int32_t(void*, struct nt::port_message_t*, enum alpc::message_information_class_t, void*, uint32_t, uint32_t*)>*) alpc_query_information_message;
    
    // [NtAlpcRevokeSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a574, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bf710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96cbb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bdec0, 0x1fe000 bytes
    //
    _m88(sdk::function<int32_t(void*, uint32_t, void*)>*) alpc_revoke_security_context;
    
    // [NtAlpcSendWaitReceivePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4be680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b3dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a3aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60a3f0, 0x1fe000 bytes
    //
    _m89(sdk::function<int32_t(void*, uint32_t, struct nt::port_message_t*, struct alpc::message_attributes_t*, struct nt::port_message_t*, uint32_t*, struct alpc::message_attributes_t*, int64_t*)>*) alpc_send_wait_receive_port;
    
    // [NtAlpcSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4814c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65dc10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71f070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676470, 0x1fe000 bytes
    //
    _m90(sdk::function<int32_t(void*, enum alpc::port_information_class_t, void*, uint32_t)>*) alpc_set_information;
    
    // [NtApphelpCacheControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6441a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5db0c0, 0x1fe000 bytes
    //
    _m91(sdk::function<int32_t(enum nt::apphelpcommand_t, void*)>*) apphelp_cache_control;
    
    // [NtAreMappedFilesTheSame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51a2d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x673880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6e70, 0x1fe000 bytes
    //
    _m92(sdk::function<int32_t(void*, void*)>*) are_mapped_files_the_same;
    
    // [NtAssignProcessToJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ce88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67e7e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674a80, 0x1fe000 bytes
    //
    _m93(sdk::function<int32_t(void*, void*)>*) assign_process_to_job_object;
    
    // [NtAssociateWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe580, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2af5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cd580, 0x1fe000 bytes
    //
    _m94(sdk::function<int32_t(void*, void*, void*, void*, void*, int32_t, uint64_t, uint8_t*)>*) associate_wait_completion_packet;
    
    // [NtBuildGUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ffc0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d6a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b5e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d9e0, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) build_guid;
    
    // [NtBuildLab]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fee0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c120, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64220, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c100, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) build_lab;
    
    // [NtBuildLabEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260010, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64120, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c000, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) build_lab_ex;
    
    // [NtBuildNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f098, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11e90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11ef0, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) build_number;
    
    // [NtCallbackReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ed00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f77e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42be30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f90c0, 0x1fe000 bytes
    //
    _m99(sdk::function<int32_t(void*, uint32_t, int32_t)>*) callback_return;
    
    // [NtCancelIoFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ccf20, 0x1fe000 bytes
    //
    _n00(sdk::function<int32_t(void*, struct io::status_block_t*)>*) cancel_io_file;
    
    // [NtCancelIoFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482600, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5b90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd0d0, 0x1fe000 bytes
    //
    _n01(sdk::function<int32_t(void*, struct io::status_block_t*, struct io::status_block_t*)>*) cancel_io_file_ex;
    
    // [NtCancelSynchronousIoFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6295b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890340, 0x1fe000 bytes
    //
    _n02(sdk::function<int32_t(void*, struct io::status_block_t*, struct io::status_block_t*)>*) cancel_synchronous_io_file;
    
    // [NtCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe9b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x236f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28cbf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ec60, 0x1fe000 bytes
    //
    _n03(sdk::function<int32_t(void*, uint8_t*)>*) cancel_timer;
    
    // [NtCancelTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2a4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2704e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3826c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321d00, 0x1fe000 bytes
    //
    _n04(sdk::function<int32_t(void*, void*)>*) cancel_timer2;
    
    // [NtCancelWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8298, 0x32828 bytes
    // ntoskrnl.exe .text:0x207c00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35df80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e24e0, 0x1fe000 bytes
    //
    _n05(sdk::function<int32_t(void*, uint8_t)>*) cancel_wait_completion_packet;
    
    // [NtClearEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x476be0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6454b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a6390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9b90, 0x1fe000 bytes
    //
    _n06(sdk::function<int32_t(void*)>*) clear_event;
    
    // [NtClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x464ac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d5fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bc510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62c410, 0x1fe000 bytes
    //
    _n07(sdk::function<int32_t(void*)>*) close;
    
    // [NtCloseObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488838, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65bb30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ba630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cf830, 0x1fe000 bytes
    //
    _n08(sdk::function<int32_t(nt::unicode_view*, void*, uint8_t)>*) close_object_audit_alarm;
    
    // [NtCommitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1018, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea8c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc100, 0x1fe000 bytes
    //
    _n09(sdk::function<int32_t(void*, int64_t*)>*) commit_complete;
    
    // [NtCommitEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1020, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea8e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc120, 0x1fe000 bytes
    //
    _n10(sdk::function<int32_t(void*, int64_t*)>*) commit_enlistment;
    
    // [NtCommitRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530250, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656030, 0x1fe000 bytes
    //
    _n11(sdk::function<int32_t(void*, uint32_t)>*) commit_registry_transaction;
    
    // [NtCommitTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1028, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc140, 0x1fe000 bytes
    //
    _n12(sdk::function<int32_t(void*, uint8_t)>*) commit_transaction;
    
    // [NtCompactKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ff728, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x865290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8636c0, 0x1fe000 bytes
    //
    _n13(sdk::function<int32_t(uint32_t, void**)>*) compact_keys;
    
    // [NtCompareObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66bb28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc9a0, 0x1fe000 bytes
    //
    _n14(sdk::function<int32_t(void*, void*)>*) compare_objects;
    
    // [NtCompareTokens]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e7e00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6537d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7a90, 0x1fe000 bytes
    //
    _n15(sdk::function<int32_t(void*, void*, uint8_t*)>*) compare_tokens;
    
    // [NtCompleteConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _n16(sdk::function<int32_t(void*)>*) complete_connect_port;
    
    // [NtCompressKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ff974, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x865570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8639a0, 0x1fe000 bytes
    //
    _n17(sdk::function<int32_t(void*)>*) compress_key;
    
    // [NtConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480238, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f8720, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x645700, 0x1fe000 bytes
    //
    _n18(sdk::function<int32_t(void**, nt::unicode_view*, struct sec::quality_of_service_t*, struct win::port_view_t*, struct nt::remote_port_view_t*, uint32_t*, void*, uint32_t*)>*) connect_port;
    
    // [NtContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15bd60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f45d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5eb0, 0x1fe000 bytes
    //
    _n19(sdk::function<int32_t(nt::context*, uint8_t)>*) continue_;
    
    // [NtCreateDebugObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61e910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x882fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x933d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x881780, 0x1fe000 bytes
    //
    _n20(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_debug_object;
    
    // [NtCreateDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40e60c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65cfa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d11d0, 0x1fe000 bytes
    //
    _n21(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) create_directory_object;
    
    // [NtCreateDirectoryObjectEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3208, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65cf80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d11b0, 0x1fe000 bytes
    //
    _n22(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint32_t)>*) create_directory_object_ex;
    
    // [NtCreateEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6643b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d0530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2f040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cf3e0, 0x1fe000 bytes
    //
    _n23(sdk::function<int32_t(void*, void**, uint64_t, uint64_t, uint64_t, uint32_t, void*, uint32_t, uint32_t*)>*) create_enclave;
    
    // [NtCreateEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1030, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc160, 0x1fe000 bytes
    //
    _n24(sdk::function<int32_t(void**, uint32_t, void*, void*, struct nt::object_attributes_t*, uint32_t, uint32_t, void*)>*) create_enlistment;
    
    // [NtCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d04d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aaae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c9b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x600fa0, 0x1fe000 bytes
    //
    _n25(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::event_type_t, uint8_t)>*) create_event;
    
    // [NtCreateEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _n26(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) create_event_pair;
    
    // [NtCreateFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f27a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61d2f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a44e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ccb0, 0x1fe000 bytes
    //
    _n27(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, int64_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*, uint32_t)>*) create_file;
    
    // [NtCreateIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40fbf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68c820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f06f0, 0x1fe000 bytes
    //
    _n28(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_io_completion;
    
    // [NtCreateIRTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538b44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fe00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779c40, 0x1fe000 bytes
    //
    _n29(sdk::function<int32_t(void**, uint32_t)>*) create_ir_timer;
    
    // [NtCreateJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44c8f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f62c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b3f0, 0x1fe000 bytes
    //
    _n30(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) create_job_object;
    
    // [NtCreateJobSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _n31(sdk::function<int32_t(uint32_t, struct win::job_set_array_t*, uint32_t)>*) create_job_set;
    
    // [NtCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fce6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62caa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7454c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d2d0, 0x1fe000 bytes
    //
    _n32(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*, uint32_t, uint32_t*)>*) create_key;
    
    // [NtCreateKeyTransacted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508348, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c8d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x754510, 0x1fe000 bytes
    //
    _n33(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*, uint32_t, void*, uint32_t*)>*) create_key_transacted;
    
    // [NtCreateKeyTransacted_Stub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e32d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x979970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa58a3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x978250, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) create_key_transacted_stub;
    
    // [NtCreateKeyedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566e50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a70e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8597b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af200, 0x1fe000 bytes
    //
    _n35(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_keyed_event;
    
    // [NtCreateLowBoxToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e6560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fb790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x794440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70cd00, 0x1fe000 bytes
    //
    _n36(sdk::function<int32_t(void**, void*, uint32_t, struct nt::object_attributes_t*, void*, uint32_t, struct nt::sid_and_attributes_t*, uint32_t, void**)>*) create_low_box_token;
    
    // [NtCreateMailslotFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48dee4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce090, 0x1fe000 bytes
    //
    _n37(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t, uint32_t, int64_t*)>*) create_mailslot_file;
    
    // [NtCreateMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513df0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6452d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a9260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678ea0, 0x1fe000 bytes
    //
    _n38(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint8_t)>*) create_mutant;
    
    // [NtCreateNamedPipeFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48dfe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6daf70, 0x1fe000 bytes
    //
    _n39(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int64_t*)>*) create_named_pipe_file;
    
    // [NtCreatePagingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55c310, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x845370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79da40, 0x1fe000 bytes
    //
    _n40(sdk::function<int32_t(nt::unicode_view*, int64_t*, int64_t*, uint32_t)>*) create_paging_file;
    
    // [NtCreatePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x665ca8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9e90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908660, 0x1fe000 bytes
    //
    _n41(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_partition;
    
    // [NtCreatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537924, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x865e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75dc70, 0x1fe000 bytes
    //
    _n42(sdk::function<int32_t(void**, struct nt::object_attributes_t*, uint32_t, uint32_t, uint32_t)>*) create_port;
    
    // [NtCreatePrivateNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea63c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fab10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67d660, 0x1fe000 bytes
    //
    _n43(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*) create_private_namespace;
    
    // [NtCreateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681504, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x902bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a16b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9012b0, 0x1fe000 bytes
    //
    _n44(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint8_t, void*, void*, void*)>*) create_process;
    
    // [NtCreateProcessEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49eac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x902c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901340, 0x1fe000 bytes
    //
    _n45(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, uint32_t, void*, void*, void*, uint32_t)>*) create_process_ex;
    
    // [NtCreateProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6babe4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x957590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f7550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x955e70, 0x1fe000 bytes
    //
    _n46(sdk::function<int32_t(void**, void*, void*, uint64_t, uint32_t, uint32_t*, uint32_t, enum nt::kprofile_source_t, uint64_t)>*) create_profile;
    
    // [NtCreateProfileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bacb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x957670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f7630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x955f50, 0x1fe000 bytes
    //
    _n47(sdk::function<int32_t(void**, void*, void*, uint64_t, uint32_t, uint32_t*, uint32_t, enum nt::kprofile_source_t, uint16_t, struct nt::group_affinity_t*)>*) create_profile_ex;
    
    // [NtCreateRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49ccf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6746b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7a40, 0x1fe000 bytes
    //
    _n48(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) create_registry_transaction;
    
    // [NtCreateResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1038, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc180, 0x1fe000 bytes
    //
    _n49(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*, uint32_t, nt::unicode_view*)>*) create_resource_manager;
    
    // [NtCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x402780, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dec60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cc310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62f720, 0x1fe000 bytes
    //
    _n50(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*)>*) create_section;
    
    // [NtCreateSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x458470, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69f250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c8bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x705e60, 0x1fe000 bytes
    //
    _n51(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int32_t, int32_t)>*) create_semaphore;
    
    // [NtCreateSymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48fe98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c53c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7640, 0x1fe000 bytes
    //
    _n52(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*)>*) create_symbolic_link_object;
    
    // [NtCreateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681574, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x902cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a17e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9013e0, 0x1fe000 bytes
    //
    _n53(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, struct nt::client_id_t*, nt::context*, struct win::initial_teb_t*, uint8_t)>*) create_thread;
    
    // [NtCreateThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x456ebc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61ed10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x687e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7070d0, 0x1fe000 bytes
    //
    _n54(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, void*, void*, uint32_t, uint64_t, uint64_t, uint64_t, struct ps::attribute_list_t*)>*) create_thread_ex;
    
    // [NtCreateTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x410234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68b470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78f1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c73d0, 0x1fe000 bytes
    //
    _n55(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::timer_type_t)>*) create_timer;
    
    // [NtCreateTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40fcfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ee830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71fdc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x643870, 0x1fe000 bytes
    //
    _n56(sdk::function<int32_t(void**, void*, void*, uint32_t, uint32_t)>*) create_timer2;
    
    // [NtCreateToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x696ee4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91f730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c2bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91e000, 0x1fe000 bytes
    //
    _n57(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::token_type_t, struct nt::luid_t*, int64_t*, struct win::token_user_t*, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct win::token_owner_t*, struct win::token_primary_group_t*, struct win::token_default_dacl_t*, struct nt::token_source_t*)>*) create_token;
    
    // [NtCreateTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e94a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f74c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x701a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6729a0, 0x1fe000 bytes
    //
    _n58(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, enum nt::token_type_t, struct nt::luid_t*, int64_t*, struct win::token_user_t*, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, struct nt::token_mandatory_policy_t*, struct win::token_owner_t*, struct win::token_primary_group_t*, struct win::token_default_dacl_t*, struct nt::token_source_t*)>*) create_token_ex;
    
    // [NtCreateTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1040, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb0d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc1a0, 0x1fe000 bytes
    //
    _n59(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::guid_t*, void*, uint32_t, uint32_t, uint32_t, int64_t*, nt::unicode_view*)>*) create_transaction;
    
    // [NtCreateTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1048, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb0f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc1c0, 0x1fe000 bytes
    //
    _n60(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*, uint32_t, uint32_t)>*) create_transaction_manager;
    
    // [NtCreateUserProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f19f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61c380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7622d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ba60, 0x1fe000 bytes
    //
    _n61(sdk::function<int32_t(void**, void**, uint32_t, uint32_t, struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t, uint32_t, void*, struct ps::create_info_t*, struct ps::attribute_list_t*)>*) create_user_process;
    
    // [NtCreateWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7afa90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3a60, 0x1fe000 bytes
    //
    _n62(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) create_wait_completion_packet;
    
    // [NtCreateWaitablePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538674, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x771a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bc10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779480, 0x1fe000 bytes
    //
    _n63(sdk::function<int32_t(void**, struct nt::object_attributes_t*, uint32_t, uint32_t, uint32_t)>*) create_waitable_port;
    
    // [NtCreateWnfStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f2124, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61b1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x755180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66b590, 0x1fe000 bytes
    //
    _n64(sdk::function<int32_t(struct wnf::state_name_t*, enum wnf::state_name_lifetime_t, enum wnf::data_scope_t, uint8_t, const struct wnf::type_id_t*, uint32_t, void*)>*) create_wnf_state_name;
    
    // [NtCreateWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40f8a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ec920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71f610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x641fb0, 0x1fe000 bytes
    //
    _n65(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, void*, void*, void*, uint32_t, uint64_t, uint64_t)>*) create_worker_factory;
    
    // [NtDebugActiveProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ead8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8831d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x933f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x881980, 0x1fe000 bytes
    //
    _n66(sdk::function<int32_t(void*, void*)>*) debug_active_process;
    
    // [NtDebugContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ecac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8833a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x881b50, 0x1fe000 bytes
    //
    _n67(sdk::function<int32_t(void*, struct nt::client_id_t*, int32_t)>*) debug_continue;
    
    // [NtDelayExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40de50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a1510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b46c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5edd20, 0x1fe000 bytes
    //
    _n68(sdk::function<int32_t(uint8_t, int64_t*)>*) delay_execution;
    
    // [NtDeleteAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425550, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x608fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d5970, 0x1fe000 bytes
    //
    _n69(sdk::function<int32_t(uint16_t)>*) delete_atom;
    
    // [NtDeleteBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5fdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94fd60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e640, 0x1fe000 bytes
    //
    _n70(sdk::function<int32_t(uint32_t)>*) delete_boot_entry;
    
    // [NtDeleteDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b615c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94fef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f22c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e7d0, 0x1fe000 bytes
    //
    _n71(sdk::function<int32_t(uint32_t)>*) delete_driver_entry;
    
    // [NtDeleteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56db50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75ffb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8165b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767a00, 0x1fe000 bytes
    //
    _n72(sdk::function<int32_t(struct nt::object_attributes_t*)>*) delete_file;
    
    // [NtDeleteKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ecc80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6255a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x691b10, 0x1fe000 bytes
    //
    _n73(sdk::function<int32_t(void*)>*) delete_key;
    
    // [NtDeleteObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3508, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7188a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c1a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720300, 0x1fe000 bytes
    //
    _n74(sdk::function<int32_t(nt::unicode_view*, void*, uint8_t)>*) delete_object_audit_alarm;
    
    // [NtDeletePrivateNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d4a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dc470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dac70, 0x1fe000 bytes
    //
    _n75(sdk::function<int32_t(void*)>*) delete_private_namespace;
    
    // [NtDeleteValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ef2b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6263e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74b350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6936b0, 0x1fe000 bytes
    //
    _n76(sdk::function<int32_t(void*, nt::unicode_view*)>*) delete_value_key;
    
    // [NtDeleteWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d1dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af2f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6f10, 0x1fe000 bytes
    //
    _n77(sdk::function<int32_t(const struct wnf::state_name_t*, const void*)>*) delete_wnf_state_data;
    
    // [NtDeleteWnfStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x487e78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x657e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x666420, 0x1fe000 bytes
    //
    _n78(sdk::function<int32_t(const struct wnf::state_name_t*)>*) delete_wnf_state_name;
    
    // [NtDeviceIoControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4df940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a6230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bc4a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fc790, 0x1fe000 bytes
    //
    _n79(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, void*, uint32_t, void*, uint32_t)>*) device_io_control_file;
    
    // [NtDisableLastKnownGood]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e805c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x760530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80fe00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767f80, 0x1fe000 bytes
    //
    _n80(sdk::function<int32_t(...)>*) disable_last_known_good;
    
    // [NtDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6af9ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x949200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ec300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x947ad0, 0x1fe000 bytes
    //
    _n81(sdk::function<int32_t(nt::unicode_view*)>*) display_string;
    
    // [NtDrawText]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22bd44, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ac6b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac530, 0x1fe000 bytes
    //
    _n82(sdk::function<int32_t(nt::unicode_view*)>*) draw_text;
    
    // [NtDuplicateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x463280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c6fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6afd50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61d410, 0x1fe000 bytes
    //
    _n83(sdk::function<int32_t(void*, void*, void*, void**, uint32_t, uint32_t, uint32_t)>*) duplicate_object;
    
    // [NtDuplicateToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fc1e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c8d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6491c0, 0x1fe000 bytes
    //
    _n84(sdk::function<int32_t(void*, uint32_t, struct nt::object_attributes_t*, uint8_t, enum nt::token_type_t, void**)>*) duplicate_token;
    
    // [NtEnableLastKnownGood]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e815c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75f750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80e4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7671a0, 0x1fe000 bytes
    //
    _n85(sdk::function<int32_t(...)>*) enable_last_known_good;
    
    // [NtEnumerateBootEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b62dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x950080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84b800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e960, 0x1fe000 bytes
    //
    _n86(sdk::function<int32_t(void*, uint32_t*)>*) enumerate_boot_entries;
    
    // [NtEnumerateDriverEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b687c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9506d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94efb0, 0x1fe000 bytes
    //
    _n87(sdk::function<int32_t(void*, uint32_t*)>*) enumerate_driver_entries;
    
    // [NtEnumerateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d5a30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a40b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d82a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fa610, 0x1fe000 bytes
    //
    _n88(sdk::function<int32_t(void*, uint32_t, enum nt::key_information_class_t, void*, uint32_t, uint32_t*)>*) enumerate_key;
    
    // [NtEnumerateSystemEnvironmentValuesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b6d2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x950b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94f470, 0x1fe000 bytes
    //
    _n89(sdk::function<int32_t(uint32_t, void*, uint32_t*)>*) enumerate_system_environment_values_ex;
    
    // [NtEnumerateTransactionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1050, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc1e0, 0x1fe000 bytes
    //
    _n90(sdk::function<int32_t(void*, enum nt::ktmobject_type_t, struct nt::ktmobject_cursor_t*, uint32_t, uint32_t*)>*) enumerate_transaction_object;
    
    // [NtEnumerateValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d5410, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c7bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74cbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61e010, 0x1fe000 bytes
    //
    _n91(sdk::function<int32_t(void*, uint32_t, enum nt::key_value_information_class_t, void*, uint32_t, uint32_t*)>*) enumerate_value_key;
    
    // [NtExtendSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65e88c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea5d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e41d0, 0x1fe000 bytes
    //
    _n92(sdk::function<int32_t(void*, int64_t*)>*) extend_section;
    
    // [NtFilterBootOption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x698384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x920c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9c4190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91f4f0, 0x1fe000 bytes
    //
    _n93(sdk::function<int32_t(enum win::filter_boot_option_operation_t, uint32_t, uint32_t, void*, uint32_t)>*) filter_boot_option;
    
    // [NtFilterToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ecd30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x794060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7011f0, 0x1fe000 bytes
    //
    _n94(sdk::function<int32_t(void*, uint32_t, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct nt::token_groups_t*, void**)>*) filter_token;
    
    // [NtFilterTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _n95(sdk::function<int32_t(void*, uint32_t, struct nt::token_groups_t*, struct nt::token_privileges_t*, struct nt::token_groups_t*, uint32_t, nt::unicode_view*, uint32_t, nt::unicode_view*, struct nt::token_groups_t*, struct win::token_security_attributes_information_t*, struct win::token_security_attributes_information_t*, struct nt::token_groups_t*, void**)>*) filter_token_ex;
    
    // [NtFindAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fe580, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69c1e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b4b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6371b0, 0x1fe000 bytes
    //
    _n96(sdk::function<int32_t(wchar_t*, uint32_t, wchar_t*)>*) find_atom;
    
    // [NtFlushBuffersFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x652ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7040, 0x1fe000 bytes
    //
    _n97(sdk::function<int32_t(void*, struct io::status_block_t*)>*) flush_buffers_file;
    
    // [NtFlushBuffersFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c69c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x652ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b71b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7070, 0x1fe000 bytes
    //
    _n98(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*) flush_buffers_file_ex;
    
    // [NtFlushInstallUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56fa20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b1620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x869780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b91b0, 0x1fe000 bytes
    //
    _n99(sdk::function<int32_t(uint16_t, uint32_t)>*) flush_install_ui_language;
    
    // [NtFlushInstructionCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _o00(sdk::function<int32_t(void*, void*, uint64_t)>*) flush_instruction_cache;
    
    // [NtFlushKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49b0f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6562c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a5410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6df440, 0x1fe000 bytes
    //
    _o01(sdk::function<int32_t(void*)>*) flush_key;
    
    // [NtFlushProcessWriteBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a6f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x23c160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x213320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358f10, 0x1fe000 bytes
    //
    _o02(sdk::function<void(...)>*) flush_process_write_buffers;
    
    // [NtFlushVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f9100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x668f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dc1d0, 0x1fe000 bytes
    //
    _o03(sdk::function<int32_t(void*, void**, uint64_t*, struct io::status_block_t*)>*) flush_virtual_memory;
    
    // [NtFlushWriteBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x665fa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _o04(sdk::function<int32_t(...)>*) flush_write_buffer;
    
    // [NtFreeUserPhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x661cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d3010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa328b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d1ec0, 0x1fe000 bytes
    //
    _o05(sdk::function<int32_t(void*, uint64_t*, uint64_t*)>*) free_user_physical_pages;
    
    // [NtFreeVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x403b60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e1920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6af4a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62dc00, 0x1fe000 bytes
    //
    _o06(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*) free_virtual_memory;
    
    // [NtFreezeRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6c20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x865750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00ae0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x863b80, 0x1fe000 bytes
    //
    _o07(sdk::function<int32_t(uint32_t)>*) freeze_registry;
    
    // [NtFreezeTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1058, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea9c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc200, 0x1fe000 bytes
    //
    _o08(sdk::function<int32_t(int64_t*, int64_t*)>*) freeze_transactions;
    
    // [NtFsControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eac34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ed20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aeeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2090, 0x1fe000 bytes
    //
    _o09(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, void*, uint32_t, void*, uint32_t)>*) fs_control_file;
    
    // [NtGetCachedSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x489074, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a4f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdcf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cde80, 0x1fe000 bytes
    //
    _o10(sdk::function<int32_t(void*, uint32_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t*)>*) get_cached_signing_level;
    
    // [NtGetCompleteWnfStateSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9f64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7521a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x666c30, 0x1fe000 bytes
    //
    _o11(sdk::function<int32_t(struct wnf::state_name_t*, uint64_t*, uint32_t, uint32_t, struct wnf::delivery_descriptor_t*, uint32_t)>*) get_complete_wnf_state_subscription;
    
    // [NtGetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48ed2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7900, 0x1fe000 bytes
    //
    _o12(sdk::function<int32_t(void*, nt::context*)>*) get_context_thread;
    
    // [NtGetCurrentProcessorNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681bd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a2050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903050, 0x1fe000 bytes
    //
    _o13(sdk::function<uint32_t(...)>*) get_current_processor_number;
    
    // [NtGetCurrentProcessorNumberEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681c08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9049c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a20b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9030b0, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) get_current_processor_number_ex;
    
    // [NtGetDevicePowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x675294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ed580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97ef80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ebc50, 0x1fe000 bytes
    //
    _o15(sdk::function<int32_t(void*, enum nt::device_power_state_t*)>*) get_device_power_state;
    
    // [NtGetEnvironmentVariableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b6f14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x950d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86caa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94f670, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) get_environment_variable_ex;
    
    // [NtGetMUIRegistryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x483bac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c1be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbfe0, 0x1fe000 bytes
    //
    _o17(sdk::function<int32_t(uint32_t, uint32_t*, void*)>*) get_mui_registry_info;
    
    // [NtGetNextProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52ed34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76dda0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84f7a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x775810, 0x1fe000 bytes
    //
    _o18(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, void**)>*) get_next_process;
    
    // [NtGetNextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4899c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f6dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dfdc0, 0x1fe000 bytes
    //
    _o19(sdk::function<int32_t(void*, void*, uint32_t, uint32_t, uint32_t, void**)>*) get_next_thread;
    
    // [NtGetNlsSectionPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e795c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x668820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dbaa0, 0x1fe000 bytes
    //
    _o20(sdk::function<int32_t(uint32_t, uint32_t, void*, void**, uint32_t*)>*) get_nls_section_ptr;
    
    // [NtGetNotificationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1060, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea9e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc220, 0x1fe000 bytes
    //
    _o21(sdk::function<int32_t(void*, struct nt::transaction_notification_t*, uint32_t, int64_t*, uint32_t*, uint32_t, uint64_t)>*) get_notification_resource_manager;
    
    // [NtGetWriteWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdce10, 0x32828 bytes
    // ntoskrnl.exe .text:0x31d7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29dfd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x28fd10, 0x1fe000 bytes
    //
    _o22(sdk::function<int32_t(void*, uint32_t, void*, uint64_t, void**, uint64_t*, uint32_t*)>*) get_write_watch;
    
    // [NtGlobalFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324240, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c100, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64200, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c0e0, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) global_flag;
    
    // [NtImpersonateAnonymousToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e813c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e8a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f3e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6773d0, 0x1fe000 bytes
    //
    _o24(sdk::function<int32_t(void*)>*) impersonate_anonymous_token;
    
    // [NtImpersonateClientOfPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6595a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bef80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd730, 0x1fe000 bytes
    //
    _o25(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) impersonate_client_of_port;
    
    // [NtImpersonateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x484acc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f68d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67ca50, 0x1fe000 bytes
    //
    _o26(sdk::function<int32_t(void*, void*, struct sec::quality_of_service_t*)>*) impersonate_thread;
    
    // [NtInitialUserProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1c98, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96528, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a4d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95718, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) initial_user_process;
    
    // [NtInitializeEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x664788, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d0980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2f520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cf830, 0x1fe000 bytes
    //
    _o28(sdk::function<int32_t(void*, void*, void*, uint32_t, uint32_t*)>*) initialize_enclave;
    
    // [NtInitializeNlsFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46af1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f0470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f92e0, 0x1fe000 bytes
    //
    _o29(sdk::function<int32_t(void**, uint32_t*, int64_t*)>*) initialize_nls_files;
    
    // [NtInitializeRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7709f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778460, 0x1fe000 bytes
    //
    _o30(sdk::function<int32_t(uint16_t)>*) initialize_registry;
    
    // [NtInitiatePowerAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52085c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x758e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97f060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x760870, 0x1fe000 bytes
    //
    _o31(sdk::function<int32_t(enum power::action_t, enum nt::system_power_state_t, uint32_t, uint8_t)>*) initiate_power_action;
    
    // [NtIsProcessInJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485858, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67dfe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674ba0, 0x1fe000 bytes
    //
    _o32(sdk::function<int32_t(void*, void*)>*) is_process_in_job;
    
    // [NtIsSystemResumeAutomatic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5246c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97f300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7652a0, 0x1fe000 bytes
    //
    _o33(sdk::function<uint8_t(...)>*) is_system_resume_automatic;
    
    // [NtIsUILanguageComitted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fe3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75cfa0, 0x1fe000 bytes
    //
    _o34(sdk::function<int32_t(...)>*) is_ui_language_comitted;
    
    // [NtListenPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b5c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ed50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd7c0, 0x1fe000 bytes
    //
    _o35(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) listen_port;
    
    // [NtLoadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4991a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x763d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cbf40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76afa0, 0x1fe000 bytes
    //
    _o36(sdk::function<int32_t(nt::unicode_view*)>*) load_driver;
    
    // [NtLoadEnclaveData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x664a44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d0c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2f800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cfb10, 0x1fe000 bytes
    //
    _o37(sdk::function<int32_t(void*, void*, void*, uint64_t, uint32_t, void*, uint32_t, uint64_t*, uint32_t*)>*) load_enclave_data;
    
    // [NtLoadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x765070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c750, 0x1fe000 bytes
    //
    _o38(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*)>*) load_key;
    
    // [NtLoadKey2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x765020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c6f0, 0x1fe000 bytes
    //
    _o39(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t)>*) load_key2;
    
    // [NtLoadKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419fcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x743550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68c1a0, 0x1fe000 bytes
    //
    _o40(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_attributes_t*, uint32_t, void*, void*, uint32_t, void**, struct io::status_block_t*)>*) load_key_ex;
    
    // [NtLockFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e5970, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x645f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x696ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698cf0, 0x1fe000 bytes
    //
    _o41(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, int64_t*, int64_t*, uint32_t, uint8_t, uint8_t)>*) lock_file;
    
    // [NtLockProductActivationKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55bab8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7958d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c5a70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79b420, 0x1fe000 bytes
    //
    _o42(sdk::function<int32_t(uint32_t*, uint32_t*)>*) lock_product_activation_keys;
    
    // [NtLockRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a4d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7914d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ace90, 0x1fe000 bytes
    //
    _o43(sdk::function<int32_t(void*)>*) lock_registry_key;
    
    // [NtLockVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd9558, 0x32828 bytes
    // ntoskrnl.exe .text:0x2af5d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d9100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a5d80, 0x1fe000 bytes
    //
    _o44(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*) lock_virtual_memory;
    
    // [NtMakePermanentObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5372e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x715930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96eb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71d370, 0x1fe000 bytes
    //
    _o45(sdk::function<int32_t(void*)>*) make_permanent_object;
    
    // [NtMakeTemporaryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b0b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x673400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703eb0, 0x1fe000 bytes
    //
    _o46(sdk::function<int32_t(void*)>*) make_temporary_object;
    
    // [NtManagePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x665e40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7078c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78a3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x661c50, 0x1fe000 bytes
    //
    _o47(sdk::function<int32_t(enum nt::memory_partition_information_class_t, void*, uint32_t)>*) manage_partition;
    
    // [NtMapCMFModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x483f30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9564a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f63d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x954d80, 0x1fe000 bytes
    //
    _o48(sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint32_t*, uint32_t*, void**)>*) map_cmf_module;
    
    // [NtMapUserPhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662208, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d34f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa32e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d23a0, 0x1fe000 bytes
    //
    _o49(sdk::function<int32_t(void*, uint64_t, uint64_t*)>*) map_user_physical_pages;
    
    // [NtMapUserPhysicalPagesScatter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d37b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa330c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d2660, 0x1fe000 bytes
    //
    _o50(sdk::function<int32_t(void**, uint64_t, uint64_t*)>*) map_user_physical_pages_scatter;
    
    // [NtMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4041e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e4750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x690e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6337c0, 0x1fe000 bytes
    //
    _o51(sdk::function<int32_t(void*, void*, void**, uint64_t, uint64_t, int64_t*, uint64_t*, enum nt::section_inherit_t, uint32_t, uint32_t)>*) map_view_of_section;
    
    // [NtModifyBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b6fc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x950e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94f730, 0x1fe000 bytes
    //
    _o52(sdk::function<int32_t(struct boot::entry_t*)>*) modify_boot_entry;
    
    // [NtModifyDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b6fe4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x950e80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94f760, 0x1fe000 bytes
    //
    _o53(sdk::function<int32_t(struct efi::driver_entry_t*)>*) modify_driver_entry;
    
    // [NtNotifyChangeDirectoryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x489c5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6662e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c40f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d9800, 0x1fe000 bytes
    //
    _o54(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, uint32_t, uint8_t)>*) notify_change_directory_file;
    
    // [NtNotifyChangeKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e9574, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x656580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e20a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f3b20, 0x1fe000 bytes
    //
    _o55(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, uint8_t, void*, uint32_t, uint8_t)>*) notify_change_key;
    
    // [NtNotifyChangeMultipleKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e8a64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c0c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e1240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f3ef0, 0x1fe000 bytes
    //
    _o56(sdk::function<int32_t(void*, uint32_t, struct nt::object_attributes_t*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, uint32_t, uint8_t, void*, uint32_t, uint8_t)>*) notify_change_multiple_keys;
    
    // [NtNotifyChangeSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8160e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4900, 0x1fe000 bytes
    //
    _o57(sdk::function<int32_t(void*, uint32_t, int64_t*, enum io::session_event_t, enum io::session_state_t, enum io::session_state_t, void*, uint32_t)>*) notify_change_session;
    
    // [NtOpenDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fccbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64e9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x733fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1c00, 0x1fe000 bytes
    //
    _o58(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_directory_object;
    
    // [NtOpenEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1068, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaa00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc240, 0x1fe000 bytes
    //
    _o59(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*)>*) open_enlistment;
    
    // [NtOpenEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fcd40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x733e50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c76c0, 0x1fe000 bytes
    //
    _o60(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_event;
    
    // [NtOpenEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _o61(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_event_pair;
    
    // [NtOpenFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f2740, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61d280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a0c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66cc40, 0x1fe000 bytes
    //
    _o62(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, uint32_t, uint32_t)>*) open_file;
    
    // [NtOpenIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62930c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8918e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890090, 0x1fe000 bytes
    //
    _o63(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_io_completion;
    
    // [NtOpenJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684868, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cdd00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce5a0, 0x1fe000 bytes
    //
    _o64(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_job_object;
    
    // [NtOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c7048, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a53a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2600, 0x1fe000 bytes
    //
    _o65(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_key;
    
    // [NtOpenKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c7060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d99c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ea7c0, 0x1fe000 bytes
    //
    _o66(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t)>*) open_key_ex;
    
    // [NtOpenKeyTransacted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ffaf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8657f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00ba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x863c20, 0x1fe000 bytes
    //
    _o67(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*) open_key_transacted;
    
    // [NtOpenKeyTransactedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508548, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a6e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745ba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656310, 0x1fe000 bytes
    //
    _o68(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, uint32_t, void*)>*) open_key_transacted_ex;
    
    // [NtOpenKeyedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bb054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x957ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f7b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9563a0, 0x1fe000 bytes
    //
    _o69(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_keyed_event;
    
    // [NtOpenMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fcc18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65bd50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x733cd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cfa50, 0x1fe000 bytes
    //
    _o70(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_mutant;
    
    // [NtOpenObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46fd8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x661930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dad90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5690, 0x1fe000 bytes
    //
    _o71(sdk::function<int32_t(nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, void*, void*, uint32_t, uint32_t, struct nt::privilege_set_t*, uint8_t, uint8_t, uint8_t*)>*) open_object_audit_alarm;
    
    // [NtOpenPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x665eb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bc60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb0f0, 0x1fe000 bytes
    //
    _o72(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_partition;
    
    // [NtOpenPrivateNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea9dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fa940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67d490, 0x1fe000 bytes
    //
    _o73(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*)>*) open_private_namespace;
    
    // [NtOpenProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1df0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ca3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d4160, 0x1fe000 bytes
    //
    _o74(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::client_id_t*)>*) open_process;
    
    // [NtOpenProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485a60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6157c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bc530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0bd0, 0x1fe000 bytes
    //
    _o75(sdk::function<int32_t(void*, uint32_t, void**)>*) open_process_token;
    
    // [NtOpenProcessTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1960, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6157e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69f770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0bf0, 0x1fe000 bytes
    //
    _o76(sdk::function<int32_t(void*, uint32_t, uint32_t, void**)>*) open_process_token_ex;
    
    // [NtOpenRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ffb10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x865810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x863c40, 0x1fe000 bytes
    //
    _o77(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_registry_transaction;
    
    // [NtOpenResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1070, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaa20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc260, 0x1fe000 bytes
    //
    _o78(sdk::function<int32_t(void**, uint32_t, void*, struct nt::guid_t*, struct nt::object_attributes_t*)>*) open_resource_manager;
    
    // [NtOpenSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aa2fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64eaa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x733f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1cd0, 0x1fe000 bytes
    //
    _o79(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_section;
    
    // [NtOpenSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f2e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65cdc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x733da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0ff0, 0x1fe000 bytes
    //
    _o80(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_semaphore;
    
    // [NtOpenSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51e764, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6769b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9c20, 0x1fe000 bytes
    //
    _o81(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_session;
    
    // [NtOpenSymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fcde8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6440d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f2e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b8790, 0x1fe000 bytes
    //
    _o82(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_symbolic_link_object;
    
    // [NtOpenThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a83f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x612df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7af1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0320, 0x1fe000 bytes
    //
    _o83(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::client_id_t*)>*) open_thread;
    
    // [NtOpenThreadToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40db54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cb190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0410, 0x1fe000 bytes
    //
    _o84(sdk::function<int32_t(void*, uint32_t, uint8_t, void**)>*) open_thread_token;
    
    // [NtOpenThreadTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40d680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cb1b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0430, 0x1fe000 bytes
    //
    _o85(sdk::function<int32_t(void*, uint32_t, uint8_t, uint32_t, void**)>*) open_thread_token_ex;
    
    // [NtOpenTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b27ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94bed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eef60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94a7b0, 0x1fe000 bytes
    //
    _o86(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*)>*) open_timer;
    
    // [NtOpenTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1078, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaa40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc280, 0x1fe000 bytes
    //
    _o87(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct nt::guid_t*, void*)>*) open_transaction;
    
    // [NtOpenTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1080, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb1d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaa60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc2a0, 0x1fe000 bytes
    //
    _o88(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, nt::unicode_view*, struct nt::guid_t*, uint32_t)>*) open_transaction_manager;
    
    // [NtPlugPlayControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441d3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d7120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a6ef0, 0x1fe000 bytes
    //
    _o89(sdk::function<int32_t(enum win::plugplay_control_class_t, void*, uint32_t)>*) plug_play_control;
    
    // [_NtPlugPlayGetDeviceInterfaceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43cd1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dc3e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0958, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) plug_play_get_device_interface_enabled;
    
    // [_NtPlugPlayGetDeviceProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x436b00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4b24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72ca30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b27f0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) plug_play_get_device_property;
    
    // [_NtPlugPlayGetDeviceRelatedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x436348, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72c9a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b11c8, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) plug_play_get_device_related_device;
    
    // [_NtPlugPlayGetDeviceRelationsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e2880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978f5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d5b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97783c, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) plug_play_get_device_relations_list;
    
    // [_NtPlugPlayGetDeviceStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a530, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72edd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0720, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) plug_play_get_device_status;
    
    // [NtPowerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb9c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x689e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x720200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70acb0, 0x1fe000 bytes
    //
    _o95(sdk::function<int32_t(enum power::information_level_t, void*, uint32_t, void*, uint32_t)>*) power_information;
    
    // [NtPrePrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1088, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb1f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaa80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc2c0, 0x1fe000 bytes
    //
    _o96(sdk::function<int32_t(void*, int64_t*)>*) pre_prepare_complete;
    
    // [NtPrePrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1090, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaaa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc2e0, 0x1fe000 bytes
    //
    _o97(sdk::function<int32_t(void*, int64_t*)>*) pre_prepare_enlistment;
    
    // [NtPrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1098, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc300, 0x1fe000 bytes
    //
    _o98(sdk::function<int32_t(void*, int64_t*)>*) prepare_complete;
    
    // [NtPrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc320, 0x1fe000 bytes
    //
    _o99(sdk::function<int32_t(void*, int64_t*)>*) prepare_enlistment;
    
    // [NtPrivilegeCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f86a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6842c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x750b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f6f0, 0x1fe000 bytes
    //
    _p00(sdk::function<int32_t(void*, struct nt::privilege_set_t*, uint8_t*)>*) privilege_check;
    
    // [NtPrivilegeObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53311c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76ef10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x851e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x776980, 0x1fe000 bytes
    //
    _p01(sdk::function<int32_t(nt::unicode_view*, void*, void*, uint32_t, struct nt::privilege_set_t*, uint8_t)>*) privilege_object_audit_alarm;
    
    // [NtPrivilegedServiceAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46fb1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bd1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e21b0, 0x1fe000 bytes
    //
    _p02(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, void*, struct nt::privilege_set_t*, uint8_t)>*) privileged_service_audit_alarm;
    
    // [NtPropagationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eab00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc340, 0x1fe000 bytes
    //
    _p03(sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*) propagation_complete;
    
    // [NtPropagationFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eab20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc360, 0x1fe000 bytes
    //
    _p04(sdk::function<int32_t(void*, uint32_t, int32_t)>*) propagation_failed;
    
    // [NtProtectVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4067d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dc8f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x694920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ed6e0, 0x1fe000 bytes
    //
    _p05(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t, uint32_t*)>*) protect_virtual_memory;
    
    // [NtPulseEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40deb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x694760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x775930, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bafa0, 0x1fe000 bytes
    //
    _p06(sdk::function<int32_t(void*, int32_t*)>*) pulse_event;
    
    // [NtQueryAttributesFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c6d50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61e110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7608a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66dad0, 0x1fe000 bytes
    //
    _p07(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::file_basic_information_t*)>*) query_attributes_file;
    
    // [NtQueryBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b7000, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x950eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84b390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94f790, 0x1fe000 bytes
    //
    _p08(sdk::function<int32_t(uint32_t*, uint32_t*)>*) query_boot_entry_order;
    
    // [NtQueryBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b726c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x951130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84b590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94fa10, 0x1fe000 bytes
    //
    _p09(sdk::function<int32_t(struct boot::options_t*, uint32_t*)>*) query_boot_options;
    
    // [NtQueryDebugFilterState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79bb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2168e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38a940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33c820, 0x1fe000 bytes
    //
    _p10(sdk::function<int32_t(uint32_t, uint32_t)>*) query_debug_filter_state;
    
    // [NtQueryDefaultLocale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x484a64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ff7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c69e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64bbd0, 0x1fe000 bytes
    //
    _p11(sdk::function<int32_t(uint8_t, uint32_t*)>*) query_default_locale;
    
    // [NtQueryDefaultUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x539fa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8176a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779c70, 0x1fe000 bytes
    //
    _p12(sdk::function<int32_t(wchar_t*)>*) query_default_ui_language;
    
    // [NtQueryDirectoryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3110, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65d240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1470, 0x1fe000 bytes
    //
    _p13(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t, uint8_t, nt::unicode_view*, uint8_t)>*) query_directory_file;
    
    // [NtQueryDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46ecc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bdc50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x612bd0, 0x1fe000 bytes
    //
    _p14(sdk::function<int32_t(void*, void*, uint32_t, uint8_t, uint8_t, uint32_t*, uint32_t*)>*) query_directory_object;
    
    // [NtQueryDriverEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b7564, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x951430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94fd10, 0x1fe000 bytes
    //
    _p15(sdk::function<int32_t(uint32_t*, uint32_t*)>*) query_driver_entry_order;
    
    // [NtQueryEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e7b14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6553b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bd570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8ef0, 0x1fe000 bytes
    //
    _p16(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, uint8_t, void*, uint32_t, uint32_t*, uint8_t)>*) query_ea_file;
    
    // [NtQueryEnvironmentVariableInfoEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b77d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9516b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94ff90, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) query_environment_variable_info_ex;
    
    // [NtQueryEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47ee9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6675d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cd180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dab00, 0x1fe000 bytes
    //
    _p18(sdk::function<int32_t(void*, enum win::event_information_class_t, void*, uint32_t, uint32_t*)>*) query_event;
    
    // [NtQueryFullAttributesFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a990c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61de80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66d840, 0x1fe000 bytes
    //
    _p19(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::file_network_open_information_t*)>*) query_full_attributes_file;
    
    // [NtQueryInformationAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480f88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65b080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ce810, 0x1fe000 bytes
    //
    _p20(sdk::function<int32_t(uint16_t, enum win::atom_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_atom;
    
    // [NtQueryInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb2b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eab40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc380, 0x1fe000 bytes
    //
    _p21(sdk::function<int32_t(void*, enum nt::enlistment_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_enlistment;
    
    // [NtQueryInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e0780, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a8f90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c8070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ffbf0, 0x1fe000 bytes
    //
    _p22(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*) query_information_file;
    
    // [NtQueryInformationJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x454358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x690400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75ce70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef930, 0x1fe000 bytes
    //
    _p23(sdk::function<int32_t(void*, enum nt::jobobjectinfoclass_t, void*, uint32_t, uint32_t*)>*) query_information_job_object;
    
    // [NtQueryInformationPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6595c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8befb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd760, 0x1fe000 bytes
    //
    _p24(sdk::function<int32_t(void*, enum win::port_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_port;
    
    // [NtQueryInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ff320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60fc00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70aec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5db9b0, 0x1fe000 bytes
    //
    _p25(sdk::function<int32_t(void*, enum win::processinfoclass_t, void*, uint32_t, uint32_t*)>*) query_information_process;
    
    // [NtQueryInformationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb2d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eab60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc3a0, 0x1fe000 bytes
    //
    _p26(sdk::function<int32_t(void*, enum nt::resourcemanager_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_resource_manager;
    
    // [NtQueryInformationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4688a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68ca90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x610460, 0x1fe000 bytes
    //
    _p27(sdk::function<int32_t(void*, enum nt::threadinfoclass_t, void*, uint32_t, uint32_t*)>*) query_information_thread;
    
    // [NtQueryInformationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aff30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b0160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a9e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x606790, 0x1fe000 bytes
    //
    _p28(sdk::function<int32_t(void*, enum nt::token_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_token;
    
    // [NtQueryInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eab80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc3c0, 0x1fe000 bytes
    //
    _p29(sdk::function<int32_t(void*, enum nt::transaction_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_transaction;
    
    // [NtQueryInformationTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc3e0, 0x1fe000 bytes
    //
    _p30(sdk::function<int32_t(void*, enum nt::transactionmanager_information_class_t, void*, uint32_t, uint32_t*)>*) query_information_transaction_manager;
    
    // [NtQueryInformationWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ee60, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b3730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fa8f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b35b0, 0x1fe000 bytes
    //
    _p31(sdk::function<int32_t(void*, enum win::workerfactoryinfoclass_t, void*, uint32_t, uint32_t*)>*) query_information_worker_factory;
    
    // [NtQueryInstallUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492344, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7daac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dee20, 0x1fe000 bytes
    //
    _p32(sdk::function<int32_t(wchar_t*)>*) query_install_ui_language;
    
    // [NtQueryIntervalProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f7710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f8f0, 0x1fe000 bytes
    //
    _p33(sdk::function<int32_t(enum nt::kprofile_source_t, uint32_t*)>*) query_interval_profile;
    
    // [NtQueryIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x629420, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8901b0, 0x1fe000 bytes
    //
    _p34(sdk::function<int32_t(void*, enum io::completion_information_class_t, void*, uint32_t, uint32_t*)>*) query_io_completion;
    
    // [NtQueryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d7170, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dafd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b9680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ebdc0, 0x1fe000 bytes
    //
    _p35(sdk::function<int32_t(void*, enum nt::key_information_class_t, void*, uint32_t, uint32_t*)>*) query_key;
    
    // [NtQueryLicenseValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x426054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67ec40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6da9d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674300, 0x1fe000 bytes
    //
    _p36(sdk::function<int32_t(nt::unicode_view*, uint32_t*, void*, uint32_t, uint32_t*)>*) query_license_value;
    
    // [NtQueryMultipleValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49186c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63dd30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74c140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656dd0, 0x1fe000 bytes
    //
    _p37(sdk::function<int32_t(void*, struct win::key_value_entry_t*, uint32_t, void*, uint32_t*, uint32_t*)>*) query_multiple_value_key;
    
    // [NtQueryMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48edc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x958ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f89d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957780, 0x1fe000 bytes
    //
    _p38(sdk::function<int32_t(void*, enum win::mutant_information_class_t, void*, uint32_t, uint32_t*)>*) query_mutant;
    
    // [NtQueryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aa840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60e0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f85e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d9470, 0x1fe000 bytes
    //
    _p39(sdk::function<int32_t(void*, enum nt::object_information_class_t, void*, uint32_t, uint32_t*)>*) query_object;
    
    // [NtQueryOpenSubKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ffc5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x865960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x863d90, 0x1fe000 bytes
    //
    _p40(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t*)>*) query_open_sub_keys;
    
    // [NtQueryOpenSubKeysEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ffe18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x865b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x863fb0, 0x1fe000 bytes
    //
    _p41(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t, void*, uint32_t*)>*) query_open_sub_keys_ex;
    
    // [NtQueryPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479854, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64e8c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2320, 0x1fe000 bytes
    //
    _p42(sdk::function<int32_t(int64_t*, int64_t*)>*) query_performance_counter;
    
    // [NtQueryPortInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571bd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711840, 0x1fe000 bytes
    //
    _p43(sdk::function<int32_t(...)>*) query_port_information_process;
    
    // [NtQueryQuotaInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62a948, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x945d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8915e0, 0x1fe000 bytes
    //
    _p44(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, uint8_t, void*, uint32_t, uint32_t*, uint8_t)>*) query_quota_information_file;
    
    // [NtQuerySection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f696c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x661ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3ed0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5c00, 0x1fe000 bytes
    //
    _p45(sdk::function<int32_t(void*, enum win::section_information_class_t, void*, uint64_t, uint64_t*)>*) query_section;
    
    // [NtQuerySecurityAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4afb40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b30a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6096d0, 0x1fe000 bytes
    //
    _p46(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, void*, uint32_t, uint32_t*)>*) query_security_attributes_token;
    
    // [NtQuerySecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478640, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x645d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a6060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba0f0, 0x1fe000 bytes
    //
    _p47(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*)>*) query_security_object;
    
    // [NtQuerySecurityPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x690e98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x918be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9173f0, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) query_security_policy;
    
    // [NtQuerySemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49378c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9537c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9520a0, 0x1fe000 bytes
    //
    _p49(sdk::function<int32_t(void*, enum win::semaphore_information_class_t, void*, uint32_t, uint32_t*)>*) query_semaphore;
    
    // [NtQuerySymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479bb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6443c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ac9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b88e0, 0x1fe000 bytes
    //
    _p50(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t*)>*) query_symbolic_link_object;
    
    // [NtQuerySystemEnvironmentValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b7878, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x951760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f2ea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x950040, 0x1fe000 bytes
    //
    _p51(sdk::function<int32_t(nt::unicode_view*, wchar_t*, uint16_t, wchar_t*)>*) query_system_environment_value;
    
    // [NtQuerySystemEnvironmentValueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5380f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727bb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9dc0, 0x1fe000 bytes
    //
    _p52(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t*, uint32_t*)>*) query_system_environment_value_ex;
    
    // [NtQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c70d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d65c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69c6c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e5b00, 0x1fe000 bytes
    //
    _p53(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t, uint32_t*)>*) query_system_information;
    
    // [NtQuerySystemInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x483420, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8ae0, 0x1fe000 bytes
    //
    _p54(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*) query_system_information_ex;
    
    // [NtQuerySystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6afbe8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x948a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ebac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x947300, 0x1fe000 bytes
    //
    _p55(sdk::function<int32_t(int64_t*)>*) query_system_time;
    
    // [NtQueryTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b2850, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94bf80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94a860, 0x1fe000 bytes
    //
    _p56(sdk::function<int32_t(void*, enum win::timer_information_class_t, void*, uint32_t, uint32_t*)>*) query_timer;
    
    // [NtQueryTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49a64c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e33e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8070, 0x1fe000 bytes
    //
    _p57(sdk::function<int32_t(uint32_t*, uint32_t*, uint32_t*)>*) query_timer_resolution;
    
    // [NtQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d7aa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6db670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b9d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ec460, 0x1fe000 bytes
    //
    _p58(sdk::function<int32_t(void*, nt::unicode_view*, enum nt::key_value_information_class_t, void*, uint32_t, uint32_t*)>*) query_value_key;
    
    // [NtQueryVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4086c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e35e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x693a70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6344e0, 0x1fe000 bytes
    //
    _p59(sdk::function<int32_t(void*, void*, enum nt::memory_information_class_t, void*, uint64_t, uint64_t*)>*) query_virtual_memory;
    
    // [NtQueryVolumeInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ad410, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb8e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6acde0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f50f0, 0x1fe000 bytes
    //
    _p60(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum fs::information_class_t)>*) query_volume_information_file;
    
    // [NtQueryWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fae34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6177c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7532a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6682a0, 0x1fe000 bytes
    //
    _p61(sdk::function<int32_t(const struct wnf::state_name_t*, const struct wnf::type_id_t*, const void*, uint32_t*, void*, uint32_t*)>*) query_wnf_state_data;
    
    // [NtQueryWnfStateNameInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490d78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65fbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c6aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3570, 0x1fe000 bytes
    //
    _p62(sdk::function<int32_t(const struct wnf::state_name_t*, enum wnf::state_name_information_t, const void*, void*, uint32_t)>*) query_wnf_state_name_information;
    
    // [NtQueueApcThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48cbb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f40c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709b70, 0x1fe000 bytes
    //
    _p63(sdk::function<int32_t(void*, sdk::function<void(void*, void*, void*)>*, void*, void*, void*)>*) queue_apc_thread;
    
    // [NtQueueApcThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48cbe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f40f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8618f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709780, 0x1fe000 bytes
    //
    _p64(sdk::function<int32_t(void*, void*, sdk::function<void(void*, void*, void*)>*, void*, void*, void*)>*) queue_apc_thread_ex;
    
    // [NtRaiseException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c010, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f48a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6180, 0x1fe000 bytes
    //
    _p65(sdk::function<int32_t(struct nt::exception_record_t*, nt::context*, uint8_t)>*) raise_exception;
    
    // [NtRaiseHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b918c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x951d60, 0x1fe000 bytes
    //
    _p66(sdk::function<int32_t(int32_t, uint32_t, uint32_t, uint64_t*, uint32_t, uint32_t*)>*) raise_hard_error;
    
    // [NtReadFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4df0c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a9c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79db70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e5360, 0x1fe000 bytes
    //
    _p67(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, int64_t*, uint32_t*)>*) read_file;
    
    // [NtReadFileScatter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4938e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x656a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ca680, 0x1fe000 bytes
    //
    _p68(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, union nt::file_segment_element_t*, uint32_t, int64_t*, uint32_t*)>*) read_file_scatter;
    
    // [NtReadOnlyEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eabc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc400, 0x1fe000 bytes
    //
    _p69(sdk::function<int32_t(void*, int64_t*)>*) read_only_enlistment;
    
    // [NtReadRequestData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65967c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bf080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd830, 0x1fe000 bytes
    //
    _p70(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t, void*, uint64_t, uint64_t*)>*) read_request_data;
    
    // [NtReadVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x464028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c9420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79e6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61f860, 0x1fe000 bytes
    //
    _p71(sdk::function<int32_t(void*, void*, void*, uint64_t, uint64_t*)>*) read_virtual_memory;
    
    // [NtRecoverEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eabe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc420, 0x1fe000 bytes
    //
    _p72(sdk::function<int32_t(void*, void*)>*) recover_enlistment;
    
    // [NtRecoverResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eac00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc440, 0x1fe000 bytes
    //
    _p73(sdk::function<int32_t(void*)>*) recover_resource_manager;
    
    // [NtRecoverTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eac20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc460, 0x1fe000 bytes
    //
    _p74(sdk::function<int32_t(void*)>*) recover_transaction_manager;
    
    // [NtRegisterProtocolAddressInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1238, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb8b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc980, 0x1fe000 bytes
    //
    _p75(sdk::function<int32_t(void*, struct nt::guid_t*, uint32_t, void*, uint32_t)>*) register_protocol_address_information;
    
    // [NtRegisterThreadTerminatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51eb48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6749c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e46a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7d50, 0x1fe000 bytes
    //
    _p76(sdk::function<int32_t(void*)>*) register_thread_terminate_port;
    
    // [NtReleaseKeyedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498b60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x957bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f7c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9564a0, 0x1fe000 bytes
    //
    _p77(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*) release_keyed_event;
    
    // [NtReleaseMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4693f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a46f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ac780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fac50, 0x1fe000 bytes
    //
    _p78(sdk::function<int32_t(void*, int32_t*)>*) release_mutant;
    
    // [NtReleaseSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4773a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x641160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6e00, 0x1fe000 bytes
    //
    _p79(sdk::function<int32_t(void*, int32_t, int32_t*)>*) release_semaphore;
    
    // [NtReleaseWorkerFactoryWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7480, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c4b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2956f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x245b40, 0x1fe000 bytes
    //
    _p80(sdk::function<int32_t(void*)>*) release_worker_factory_worker;
    
    // [NtRemoveIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b5c10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6427c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ad2b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b77e0, 0x1fe000 bytes
    //
    _p81(sdk::function<int32_t(void*, void**, void**, struct io::status_block_t*, int64_t*)>*) remove_io_completion;
    
    // [NtRemoveIoCompletionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488f30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d63e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6acc00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62c820, 0x1fe000 bytes
    //
    _p82(sdk::function<int32_t(void*, struct win::file_io_completion_information_t*, uint32_t, uint32_t*, int64_t*, uint8_t)>*) remove_io_completion_ex;
    
    // [NtRemoveProcessDebug]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ee8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8835a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x881d50, 0x1fe000 bytes
    //
    _p83(sdk::function<int32_t(void*, void*)>*) remove_process_debug;
    
    // [NtRenameKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6000f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x865ec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa01290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8642f0, 0x1fe000 bytes
    //
    _p84(sdk::function<int32_t(void*, nt::unicode_view*)>*) rename_key;
    
    // [NtRenameTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1240, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc9a0, 0x1fe000 bytes
    //
    _p85(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*)>*) rename_transaction_manager;
    
    // [NtReplaceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x600604, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8663c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa01770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8647f0, 0x1fe000 bytes
    //
    _p86(sdk::function<int32_t(struct nt::object_attributes_t*, void*, struct nt::object_attributes_t*)>*) replace_key;
    
    // [NtReplacePartitionUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23d6a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c5010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x663770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c3e70, 0x1fe000 bytes
    //
    _p87(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, uint32_t)>*) replace_partition_unit;
    
    // [NtReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47424c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b920, 0x1fe000 bytes
    //
    _p88(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) reply_port;
    
    // [NtReplyWaitReceivePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6badc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f1f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6113f0, 0x1fe000 bytes
    //
    _p89(sdk::function<int32_t(void*, void**, struct nt::port_message_t*, struct nt::port_message_t*)>*) reply_wait_receive_port;
    
    // [NtReplyWaitReceivePortEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473d70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bade0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f1f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611410, 0x1fe000 bytes
    //
    _p90(sdk::function<int32_t(void*, void**, struct nt::port_message_t*, struct nt::port_message_t*, int64_t*)>*) reply_wait_receive_port_ex;
    
    // [NtReplyWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6596cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bf0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd890, 0x1fe000 bytes
    //
    _p91(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) reply_wait_reply_port;
    
    // [NtRequestPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49cb9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66a950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd6b0, 0x1fe000 bytes
    //
    _p92(sdk::function<int32_t(void*, struct nt::port_message_t*)>*) request_port;
    
    // [NtRequestWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473c04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x657ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbed0, 0x1fe000 bytes
    //
    _p93(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*)>*) request_wait_reply_port;
    
    // [NtResetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e95dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d28b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3980, 0x1fe000 bytes
    //
    _p94(sdk::function<int32_t(void*, int32_t*)>*) reset_event;
    
    // [NtResetWriteWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e2500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ad670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62d720, 0x1fe000 bytes
    //
    _p95(sdk::function<int32_t(void*, void*, uint64_t)>*) reset_write_watch;
    
    // [NtRestoreKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x600868, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x866750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa01ad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x864b80, 0x1fe000 bytes
    //
    _p96(sdk::function<int32_t(void*, void*, uint32_t)>*) restore_key;
    
    // [NtResumeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68680c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9098f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908010, 0x1fe000 bytes
    //
    _p97(sdk::function<int32_t(void*)>*) resume_process;
    
    // [NtResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453f70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f4b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7089f0, 0x1fe000 bytes
    //
    _p98(sdk::function<int32_t(void*, uint32_t*)>*) resume_thread;
    
    // [NtRevertContainerImpersonation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f624, 0x32828 bytes
    // ntoskrnl.exe .text:0x57c000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57be10, 0x1fe000 bytes
    //
    _p99(sdk::function<int32_t()>*) revert_container_impersonation;
    
    // [NtRollbackComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb3b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eac40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc480, 0x1fe000 bytes
    //
    _q00(sdk::function<int32_t(void*, int64_t*)>*) rollback_complete;
    
    // [NtRollbackEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1100, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb3d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eac60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc4a0, 0x1fe000 bytes
    //
    _q01(sdk::function<int32_t(void*, int64_t*)>*) rollback_enlistment;
    
    // [NtRollbackRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536654, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7173d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa01d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ee10, 0x1fe000 bytes
    //
    _q02(sdk::function<int32_t(void*, uint32_t)>*) rollback_registry_transaction;
    
    // [NtRollbackTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1108, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb3f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eac80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc4c0, 0x1fe000 bytes
    //
    _q03(sdk::function<int32_t(void*, uint8_t)>*) rollback_transaction;
    
    // [NtRollforwardTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1248, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb1c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cca00, 0x1fe000 bytes
    //
    _q04(sdk::function<int32_t(void*, int64_t*)>*) rollforward_transaction_manager;
    
    // [NtSaveKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x600af8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x866a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa01e70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x864e30, 0x1fe000 bytes
    //
    _q05(sdk::function<int32_t(void*, void*)>*) save_key;
    
    // [NtSaveKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x600d34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70cce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa01e90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x714670, 0x1fe000 bytes
    //
    _q06(sdk::function<int32_t(void*, void*, uint32_t)>*) save_key_ex;
    
    // [NtSaveMergedKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x600fcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x866a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x864e50, 0x1fe000 bytes
    //
    _q07(sdk::function<int32_t(void*, void*, void*)>*) save_merged_keys;
    
    // [NtSecureConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f88a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x645880, 0x1fe000 bytes
    //
    _q08(sdk::function<int32_t(void**, nt::unicode_view*, struct sec::quality_of_service_t*, struct win::port_view_t*, void*, struct nt::remote_port_view_t*, uint32_t*, void*, uint32_t*)>*) secure_connect_port;
    
    // [NtSerializeBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ff30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bd20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bbf80, 0x1fe000 bytes
    //
    _q09(sdk::function<int32_t(...)>*) serialize_boot;
    
    // [NtSetBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b7ba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x951a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f31d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x950360, 0x1fe000 bytes
    //
    _q10(sdk::function<int32_t(uint32_t*, uint32_t)>*) set_boot_entry_order;
    
    // [NtSetBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b7da0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x951c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f33e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x950570, 0x1fe000 bytes
    //
    _q11(sdk::function<int32_t(struct boot::options_t*, uint32_t)>*) set_boot_options;
    
    // [NtSetCachedSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e292c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e8d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66e130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716260, 0x1fe000 bytes
    //
    _q12(sdk::function<int32_t(uint32_t, uint8_t, void**, uint32_t, void*)>*) set_cached_signing_level;
    
    // [NtSetCachedSigningLevel2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e294c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66e160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716290, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) set_cached_signing_level2;
    
    // [NtSetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684730, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a78b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906c60, 0x1fe000 bytes
    //
    _q14(sdk::function<int32_t(void*, nt::context*)>*) set_context_thread;
    
    // [NtSetDebugFilterState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x555e04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x782340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c0e0, 0x1fe000 bytes
    //
    _q15(sdk::function<int32_t(uint32_t, uint32_t, uint8_t)>*) set_debug_filter_state;
    
    // [NtSetDefaultHardErrorPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56fc88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3e80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bba10, 0x1fe000 bytes
    //
    _q16(sdk::function<int32_t(void*)>*) set_default_hard_error_port;
    
    // [NtSetDefaultLocale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x539828, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76f340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x776db0, 0x1fe000 bytes
    //
    _q17(sdk::function<int32_t(uint8_t, uint32_t)>*) set_default_locale;
    
    // [NtSetDefaultUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x539a44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76f320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x776d90, 0x1fe000 bytes
    //
    _q18(sdk::function<int32_t(uint16_t)>*) set_default_ui_language;
    
    // [NtSetDriverEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b7f94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x951ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f3600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x950780, 0x1fe000 bytes
    //
    _q19(sdk::function<int32_t(uint32_t*, uint32_t)>*) set_driver_entry_order;
    
    // [NtSetEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62a344, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x714c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66ea20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71c650, 0x1fe000 bytes
    //
    _q20(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t)>*) set_ea_file;
    
    // [NtSetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40d440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a4800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a1da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fad60, 0x1fe000 bytes
    //
    _q21(sdk::function<int32_t(void*, int32_t*)>*) set_event;
    
    // [NtSetEventBoostPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b29a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94c190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94aa70, 0x1fe000 bytes
    //
    _q22(sdk::function<int32_t(void*)>*) set_event_boost_priority;
    
    // [NtSetHighEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _q23(sdk::function<int32_t(void*)>*) set_high_event_pair;
    
    // [NtSetHighWaitLowEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _q24(sdk::function<int32_t(void*)>*) set_high_wait_low_event_pair;
    
    // [NtSetInformationDebugObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61efd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x883710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9344d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x881ec0, 0x1fe000 bytes
    //
    _q25(sdk::function<int32_t(void*, enum nt::debugobjectinfoclass_t, void*, uint32_t, uint32_t*)>*) set_information_debug_object;
    
    // [NtSetInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1110, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc4e0, 0x1fe000 bytes
    //
    _q26(sdk::function<int32_t(void*, enum nt::enlistment_information_class_t, void*, uint32_t)>*) set_information_enlistment;
    
    // [NtSetInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x101620, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d2470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b03d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x253490, 0x1fe000 bytes
    //
    _q27(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t)>*) set_information_file;
    
    // [NtSetInformationJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x450a68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x705dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77d350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x660130, 0x1fe000 bytes
    //
    _q28(sdk::function<int32_t(void*, enum nt::jobobjectinfoclass_t, void*, uint32_t)>*) set_information_job_object;
    
    // [NtSetInformationKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c37b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a3c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a18f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fa1b0, 0x1fe000 bytes
    //
    _q29(sdk::function<int32_t(void*, enum nt::key_set_information_class_t, void*, uint32_t)>*) set_information_key;
    
    // [NtSetInformationObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46e640, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6509f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x799210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c0c70, 0x1fe000 bytes
    //
    _q30(sdk::function<int32_t(void*, enum nt::object_information_class_t, void*, uint32_t)>*) set_information_object;
    
    // [NtSetInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41d060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e8d60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76daf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699be0, 0x1fe000 bytes
    //
    _q31(sdk::function<int32_t(void*, enum win::processinfoclass_t, void*, uint32_t)>*) set_information_process;
    
    // [NtSetInformationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1118, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eacc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc500, 0x1fe000 bytes
    //
    _q32(sdk::function<int32_t(void*, enum nt::resourcemanager_information_class_t, void*, uint32_t)>*) set_information_resource_manager;
    
    // [NtSetInformationSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66a878, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d82d0, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) set_information_symbolic_link;
    
    // [NtSetInformationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c2080, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a5110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a8110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fb670, 0x1fe000 bytes
    //
    _q34(sdk::function<int32_t(void*, enum nt::threadinfoclass_t, void*, uint32_t)>*) set_information_thread;
    
    // [NtSetInformationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eb3bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ee860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6feba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f76d0, 0x1fe000 bytes
    //
    _q35(sdk::function<int32_t(void*, enum nt::token_information_class_t, void*, uint32_t)>*) set_information_token;
    
    // [NtSetInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1120, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eace0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc520, 0x1fe000 bytes
    //
    _q36(sdk::function<int32_t(void*, enum nt::transaction_information_class_t, void*, uint32_t)>*) set_information_transaction;
    
    // [NtSetInformationTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1250, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb8f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc9c0, 0x1fe000 bytes
    //
    _q37(sdk::function<int32_t(void*, enum nt::transactionmanager_information_class_t, void*, uint32_t)>*) set_information_transaction_manager;
    
    // [NtSetInformationVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a51bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69d930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a70f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63b570, 0x1fe000 bytes
    //
    _q38(sdk::function<int32_t(void*, enum nt::virtual_memory_information_class_t, uint64_t, struct nt::memory_range_entry_t*, void*, uint32_t)>*) set_information_virtual_memory;
    
    // [NtSetInformationWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa6830, 0x32828 bytes
    // ntoskrnl.exe .text:0x206df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec4c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bf210, 0x1fe000 bytes
    //
    _q39(sdk::function<int32_t(void*, enum win::workerfactoryinfoclass_t, void*, uint32_t)>*) set_information_worker_factory;
    
    // [NtSetIntervalProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f7780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71fbb0, 0x1fe000 bytes
    //
    _q40(sdk::function<int32_t(uint32_t, enum nt::kprofile_source_t)>*) set_interval_profile;
    
    // [NtSetIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4104fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71fae0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4cb0, 0x1fe000 bytes
    //
    _q41(sdk::function<int32_t(void*, void*, void*, int32_t, uint64_t)>*) set_io_completion;
    
    // [NtSetIoCompletionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e2810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a45b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x722190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fab10, 0x1fe000 bytes
    //
    _q42(sdk::function<int32_t(void*, void*, void*, void*, int32_t, uint64_t)>*) set_io_completion_ex;
    
    // [NtSetIRTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5508, 0x32828 bytes
    // ntoskrnl.exe .text:0x270c00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3851d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3223c0, 0x1fe000 bytes
    //
    _q43(sdk::function<int32_t(void*, int64_t*)>*) set_ir_timer;
    
    // [NtSetLdtEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _q44(sdk::function<int32_t(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>*) set_ldt_entries;
    
    // [NtSetLowEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _q45(sdk::function<int32_t(void*)>*) set_low_event_pair;
    
    // [NtSetLowWaitHighEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _q46(sdk::function<int32_t(void*)>*) set_low_wait_high_event_pair;
    
    // [NtSetQuotaInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62b088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x893540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9464f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x891cf0, 0x1fe000 bytes
    //
    _q47(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t)>*) set_quota_information_file;
    
    // [NtSetSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482aa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x616470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b2400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c58a0, 0x1fe000 bytes
    //
    _q48(sdk::function<int32_t(void*, uint32_t, void*)>*) set_security_object;
    
    // [NtSetSystemEnvironmentValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b8194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9520b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f3810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x950990, 0x1fe000 bytes
    //
    _q49(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*)>*) set_system_environment_value;
    
    // [NtSetSystemEnvironmentValueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b84c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9523d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f3b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x950cb0, 0x1fe000 bytes
    //
    _q50(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t, uint32_t)>*) set_system_environment_value_ex;
    
    // [NtSetSystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x417954, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x686050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x789490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cf290, 0x1fe000 bytes
    //
    _q51(sdk::function<int32_t(enum win::system_information_class_t, void*, uint32_t)>*) set_system_information;
    
    // [NtSetSystemPowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cd2a8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995790, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa92410, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9947a0, 0x1fe000 bytes
    //
    _q52(sdk::function<int32_t(enum power::action_t, enum nt::system_power_state_t, uint32_t)>*) set_system_power_state;
    
    // [NtSetSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6afc54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x948ab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ebb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x947380, 0x1fe000 bytes
    //
    _q53(sdk::function<int32_t(int64_t*, int64_t*)>*) set_system_time;
    
    // [NtSetThreadExecutionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51dbf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x605d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fea50, 0x1fe000 bytes
    //
    _q54(sdk::function<int32_t(uint32_t, uint32_t*)>*) set_thread_execution_state;
    
    // [NtSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c82c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3749c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375d40, 0x1fe000 bytes
    //
    _q55(sdk::function<int32_t(void*, int64_t*, sdk::function<void(void*, uint32_t, int32_t)>*, void*, uint8_t, int32_t, uint8_t*)>*) set_timer;
    
    // [NtSetTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff158, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2424d0, 0x1fe000 bytes
    //
    _q56(sdk::function<int32_t(void*, int64_t*, int64_t*, struct win::t2_set_parameters_v0_t*)>*) set_timer2;
    
    // [NtSetTimerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff84c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2375f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x354df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26a1f0, 0x1fe000 bytes
    //
    _q57(sdk::function<int32_t(void*, enum win::timer_set_information_class_t, void*, uint32_t)>*) set_timer_ex;
    
    // [NtSetTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4176bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6075a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d29e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ceff0, 0x1fe000 bytes
    //
    _q58(sdk::function<int32_t(uint32_t, uint8_t, uint32_t*)>*) set_timer_resolution;
    
    // [NtSetUuidSeed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x567d60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85cab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0a80, 0x1fe000 bytes
    //
    _q59(sdk::function<int32_t(char*)>*) set_uuid_seed;
    
    // [NtSetValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e5e30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c2430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6de660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x618860, 0x1fe000 bytes
    //
    _q60(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t, void*, uint32_t)>*) set_value_key;
    
    // [NtSetVolumeInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51a490, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80da00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758340, 0x1fe000 bytes
    //
    _q61(sdk::function<int32_t(void*, struct io::status_block_t*, void*, uint32_t, enum fs::information_class_t)>*) set_volume_information_file;
    
    // [NtSetWnfProcessNotificationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d0b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x661190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4870, 0x1fe000 bytes
    //
    _q62(sdk::function<int32_t(void*)>*) set_wnf_process_notification_event;
    
    // [NtShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6afb5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ac830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac6b0, 0x1fe000 bytes
    //
    _q63(sdk::function<int32_t(enum win::shutdown_action_t)>*) shutdown_system;
    
    // [NtShutdownWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8718, 0x32828 bytes
    // ntoskrnl.exe .text:0x269850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a8b0, 0x1fe000 bytes
    //
    _q64(sdk::function<int32_t(void*, volatile int32_t*)>*) shutdown_worker_factory;
    
    // [NtSignalAndWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1fedd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x55ebc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x202bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55e9a0, 0x1fe000 bytes
    //
    _q65(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*) signal_and_wait_for_single_object;
    
    // [NtSinglePhaseReject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1258, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc9e0, 0x1fe000 bytes
    //
    _q66(sdk::function<int32_t(void*, int64_t*)>*) single_phase_reject;
    
    // [NtStartProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bad14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x957750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f77e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x956030, 0x1fe000 bytes
    //
    _q67(sdk::function<int32_t(void*)>*) start_profile;
    
    // [NtStopProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6baf6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9579c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f7a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9562a0, 0x1fe000 bytes
    //
    _q68(sdk::function<int32_t(void*)>*) stop_profile;
    
    // [NtSubscribeWnfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fa630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x617360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x752e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x667e40, 0x1fe000 bytes
    //
    _q69(sdk::function<int32_t(const struct wnf::state_name_t*, uint32_t, uint32_t, uint64_t*)>*) subscribe_wnf_state_change;
    
    // [NtSuspendProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686874, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a99f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908090, 0x1fe000 bytes
    //
    _q70(sdk::function<int32_t(void*)>*) suspend_process;
    
    // [NtSuspendThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x423d40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e57c0, 0x1fe000 bytes
    //
    _q71(sdk::function<int32_t(void*, uint32_t*)>*) suspend_thread;
    
    // [NtSystemDebugControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4927b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b1790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9320, 0x1fe000 bytes
    //
    _q72(sdk::function<int32_t(enum win::sysdbg_command_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*) system_debug_control;
    
    // [NtTerminateJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497124, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x708f90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6b90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0a90, 0x1fe000 bytes
    //
    _q73(sdk::function<int32_t(void*, int32_t)>*) terminate_job_object;
    
    // [NtTerminateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x423ea8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76b530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7099b0, 0x1fe000 bytes
    //
    _q74(sdk::function<int32_t(void*, int32_t)>*) terminate_process;
    
    // [NtTerminateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4247a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f4560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7714a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709320, 0x1fe000 bytes
    //
    _q75(sdk::function<int32_t(void*, int32_t)>*) terminate_thread;
    
    // [NtTestAlert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4655dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9b90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d6410, 0x1fe000 bytes
    //
    _q76(sdk::function<int32_t(...)>*) test_alert;
    
    // [NtThawRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6c74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x866c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa023c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865090, 0x1fe000 bytes
    //
    _q77(sdk::function<int32_t(...)>*) thaw_registry;
    
    // [NtThawTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1128, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ead00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc540, 0x1fe000 bytes
    //
    _q78(sdk::function<int32_t(...)>*) thaw_transactions;
    
    // [NtTraceControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4adf20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bbd60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x704600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f5570, 0x1fe000 bytes
    //
    _q79(sdk::function<int32_t(enum trace::control_information_class_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*) trace_control;
    
    // [NtTraceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9beb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x218000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2976a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5fc0, 0x1fe000 bytes
    //
    _q80(sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*) trace_event;
    
    // [NtTranslateFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b872c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x952680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84be80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x950f60, 0x1fe000 bytes
    //
    _q81(sdk::function<int32_t(struct win::file_path_t*, uint32_t, struct win::file_path_t*, uint32_t*)>*) translate_file_path;
    
    // [NtUmsThreadYield]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8badb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b9560, 0x1fe000 bytes
    //
    _q82(sdk::function<int32_t(void*)>*) ums_thread_yield;
    
    // [NtUnloadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e6f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8986c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896e70, 0x1fe000 bytes
    //
    _q83(sdk::function<int32_t(nt::unicode_view*)>*) unload_driver;
    
    // [NtUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53db20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a3e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x799b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656010, 0x1fe000 bytes
    //
    _q84(sdk::function<int32_t(struct nt::object_attributes_t*)>*) unload_key;
    
    // [NtUnloadKey2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53ab6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756c70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86b150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e6c0, 0x1fe000 bytes
    //
    _q85(sdk::function<int32_t(struct nt::object_attributes_t*, uint32_t)>*) unload_key2;
    
    // [NtUnloadKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50cc7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63af40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7994f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658e90, 0x1fe000 bytes
    //
    _q86(sdk::function<int32_t(struct nt::object_attributes_t*, void*)>*) unload_key_ex;
    
    // [NtUnlockFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e3d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64bd40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a89d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6be620, 0x1fe000 bytes
    //
    _q87(sdk::function<int32_t(void*, struct io::status_block_t*, int64_t*, int64_t*, uint32_t)>*) unlock_file;
    
    // [NtUnlockVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e050, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b3370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2a65c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2af520, 0x1fe000 bytes
    //
    _q88(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*) unlock_virtual_memory;
    
    // [NtUnmapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d2b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x699280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f4d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8ec0, 0x1fe000 bytes
    //
    _q89(sdk::function<int32_t(void*, void*)>*) unmap_view_of_section;
    
    // [NtUnmapViewOfSectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x404130, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6995a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f4d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x635850, 0x1fe000 bytes
    //
    _q90(sdk::function<int32_t(void*, void*, uint32_t)>*) unmap_view_of_section_ex;
    
    // [NtUnsubscribeWnfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f032c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x705370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x755740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x665a80, 0x1fe000 bytes
    //
    _q91(sdk::function<int32_t(const struct wnf::state_name_t*)>*) unsubscribe_wnf_state_change;
    
    // [NtUpdateWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3faa68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x616ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7528b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6679c0, 0x1fe000 bytes
    //
    _q92(sdk::function<int32_t(const struct wnf::state_name_t*, const void*, uint32_t, const struct wnf::type_id_t*, const void*, uint32_t, uint32_t)>*) update_wnf_state_data;
    
    // [NtVdmControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _q93(sdk::function<int32_t(enum nt::vdmserviceclass_t, void*)>*) vdm_control;
    
    // [NtVhdBootFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3426b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4d98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1ba90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d98, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) vhd_boot_file;
    
    // [NtWaitForAlertByThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40ddec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64c2f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bed90, 0x1fe000 bytes
    //
    _q95(sdk::function<int32_t(void*, int64_t*)>*) wait_for_alert_by_thread_id;
    
    // [NtWaitForDebugEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61f148, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8838a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882050, 0x1fe000 bytes
    //
    _q96(sdk::function<int32_t(void*, uint8_t, int64_t*, struct nt::dbgui_wait_state_change_t*)>*) wait_for_debug_event;
    
    // [NtWaitForKeyedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498d0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x957f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x956860, 0x1fe000 bytes
    //
    _q97(sdk::function<int32_t(void*, void*, uint8_t, int64_t*)>*) wait_for_keyed_event;
    
    // [NtWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f9f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79eb90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f7300, 0x1fe000 bytes
    //
    _q98(sdk::function<int32_t(uint32_t, void**, enum nt::wait_type_t, uint8_t, int64_t*)>*) wait_for_multiple_objects;
    
    // [NtWaitForMultipleObjects32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x471ec0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2ce0, 0x1fe000 bytes
    //
    _q99(sdk::function<int32_t(uint32_t, int32_t*, enum nt::wait_type_t, uint8_t, int64_t*)>*) wait_for_multiple_objects32;
    
    // [NtWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40d510, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d62a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bbca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62c6e0, 0x1fe000 bytes
    //
    _r00(sdk::function<int32_t(void*, uint8_t, int64_t*)>*) wait_for_single_object;
    
    // [NtWaitForWorkViaWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4030, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e7ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29b7c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x268df0, 0x1fe000 bytes
    //
    _r01(sdk::function<int32_t(void*, struct win::file_io_completion_information_t*)>*) wait_for_work_via_worker_factory;
    
    // [NtWaitHighEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _r02(sdk::function<int32_t(void*)>*) wait_high_event_pair;
    
    // [NtWaitLowEventPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _r03(sdk::function<int32_t(void*)>*) wait_low_event_pair;
    
    // [NtWorkerFactoryWorkerReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5c18, 0x32828 bytes
    // ntoskrnl.exe .text:0x257d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3076d0, 0x1fe000 bytes
    //
    _r04(sdk::function<int32_t(void*)>*) worker_factory_worker_ready;
    
    // [NtWriteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e1ac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x696780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e25e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e3e20, 0x1fe000 bytes
    //
    _r05(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, void*, uint32_t, int64_t*, uint32_t*)>*) write_file;
    
    // [NtWriteFileGather]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499db8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x657010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cac90, 0x1fe000 bytes
    //
    _r06(sdk::function<int32_t(void*, void*, sdk::function<void(void*, struct io::status_block_t*, uint32_t)>*, void*, struct io::status_block_t*, union nt::file_segment_element_t*, uint32_t, int64_t*, uint32_t*)>*) write_file_gather;
    
    // [NtWriteRequestData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65976c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bf200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd9b0, 0x1fe000 bytes
    //
    _r07(sdk::function<int32_t(void*, struct nt::port_message_t*, uint32_t, void*, uint64_t, uint64_t*)>*) write_request_data;
    
    // [NtWriteVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f87c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79e6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de320, 0x1fe000 bytes
    //
    _r08(sdk::function<int32_t(void*, void*, void*, uint64_t, uint64_t*)>*) write_virtual_memory;
    
    // [NtYieldExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4140, 0x32828 bytes
    // ntoskrnl.exe .text:0x290df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336640, 0x1fe000 bytes
    //
    _r09(sdk::function<int32_t(...)>*) yield_execution;
    
    // [NtDCompositionBoostCompositorClock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2293e0, 0x27ef0 bytes
    //
    _r10(sdk::unknown_ptr) d_composition_boost_compositor_clock;
    
    // [NtDCompositionCurrentBatchId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6b2c0, 0x1eb80 bytes
    //
    _r11(sdk::unknown_ptr) d_composition_current_batch_id;
    
    // [NtDCompositionEnableDDASupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe75c0, 0x1eb80 bytes
    //
    _r12(sdk::unknown_ptr) d_composition_enable_dda_support;
    
    // [NtDCompositionGetFrameId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9e870, 0x27ef0 bytes
    //
    _r13(sdk::unknown_ptr) d_composition_get_frame_id;
    
    // [NtDCompositionGetFrameIdFromBatchId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x229de0, 0x27ef0 bytes
    //
    _r14(sdk::unknown_ptr) d_composition_get_frame_id_from_batch_id;
    
    // [NtDCompositionGetStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9ec40, 0x27ef0 bytes
    //
    _r15(sdk::unknown_ptr) d_composition_get_statistics;
    
    // [NtDCompositionGetTargetStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9e990, 0x27ef0 bytes
    //
    _r16(sdk::unknown_ptr) d_composition_get_target_statistics;
    
    // [NtDCompositionNotifySuperWetInkWork]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x229f10, 0x27ef0 bytes
    //
    _r17(sdk::unknown_ptr) d_composition_notify_super_wet_ink_work;
    
    // [NtDCompositionSetBlurredWallpaperSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22a0a0, 0x27ef0 bytes
    //
    _r18(sdk::unknown_ptr) d_composition_set_blurred_wallpaper_surface;
    
    // [NtDCompositionSetChannelCallbackId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7d610, 0x1eb80 bytes
    //
    _r19(sdk::unknown_ptr) d_composition_set_channel_callback_id;
    
    // [NtDCompositionSyncWait]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe77c0, 0x1eb80 bytes
    //
    _r20(sdk::unknown_ptr) d_composition_sync_wait;
    
    // [NtDCompositionWaitForCompositorClock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22a360, 0x27ef0 bytes
    //
    _r21(sdk::unknown_ptr) d_composition_wait_for_compositor_clock;
    
    // [NtDxgkCancelPresents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12418, 0x3e907 bytes
    //
    _r22(sdk::unknown_ptr) dxgk_cancel_presents;
    
    // [NtDxgkCheckSinglePlaneForMultiPlaneOverlaySupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x1242c, 0x3e907 bytes
    //
    _r23(sdk::unknown_ptr) dxgk_check_single_plane_for_multi_plane_overlay_support;
    
    // [NtDxgkGetProperties]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x124e0, 0x3e907 bytes
    //
    _r24(sdk::unknown_ptr) dxgk_get_properties;
    
    // [NtDxgkSetProperties]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12558, 0x3e907 bytes
    //
    _r25(sdk::unknown_ptr) dxgk_set_properties;
    
    // [NtFlipObjectQueryLostEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12180, 0x3e907 bytes
    //
    _r26(sdk::unknown_ptr) flip_object_query_lost_event;
    
    // [NtGdiD3dContextCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r27(sdk::unknown_ptr) gdi_d3d_context_create;
    
    // [NtGdiD3dContextDestroy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r28(sdk::unknown_ptr) gdi_d3d_context_destroy;
    
    // [NtGdiD3dContextDestroyAll]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r29(sdk::unknown_ptr) gdi_d3d_context_destroy_all;
    
    // [NtGdiD3dDrawPrimitives2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r30(sdk::unknown_ptr) gdi_d3d_draw_primitives2;
    
    // [NtGdiD3dValidateTextureStageState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r31(sdk::unknown_ptr) gdi_d3d_validate_texture_stage_state;
    
    // [NtGdiDdAddAttachedSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r32(sdk::unknown_ptr) gdi_dd_add_attached_surface;
    
    // [NtGdiDdAlphaBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r33(sdk::unknown_ptr) gdi_dd_alpha_blt;
    
    // [NtGdiDdAttachSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r34(sdk::unknown_ptr) gdi_dd_attach_surface;
    
    // [NtGdiDdBeginMoCompFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r35(sdk::unknown_ptr) gdi_dd_begin_mo_comp_frame;
    
    // [NtGdiDdBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r36(sdk::unknown_ptr) gdi_dd_blt;
    
    // [NtGdiDdCanCreateD3DBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r37(sdk::unknown_ptr) gdi_dd_can_create_d3d_buffer;
    
    // [NtGdiDdCanCreateSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r38(sdk::unknown_ptr) gdi_dd_can_create_surface;
    
    // [NtGdiDdColorControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r39(sdk::unknown_ptr) gdi_dd_color_control;
    
    // [NtGdiDdCreateD3DBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r40(sdk::unknown_ptr) gdi_dd_create_d3d_buffer;
    
    // [NtGdiDdCreateDirectDrawObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r41(sdk::unknown_ptr) gdi_dd_create_direct_draw_object;
    
    // [NtGdiDdCreateMoComp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r42(sdk::unknown_ptr) gdi_dd_create_mo_comp;
    
    // [NtGdiDdCreateSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r43(sdk::unknown_ptr) gdi_dd_create_surface;
    
    // [NtGdiDdCreateSurfaceEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r44(sdk::unknown_ptr) gdi_dd_create_surface_ex;
    
    // [NtGdiDdCreateSurfaceObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r45(sdk::unknown_ptr) gdi_dd_create_surface_object;
    
    // [NtGdiDdDDIGetPresentHistoryInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x42cf0, 0x1eb80 bytes
    //
    _r46(sdk::unknown_ptr) gdi_dd_ddi_get_present_history_internal;
    
    // [NtGdiDdDDIGetPresentStatsInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xc9640, 0x1eb80 bytes
    //
    _r47(sdk::unknown_ptr) gdi_dd_ddi_get_present_stats_internal;
    
    // [NtGdiDdDDIGetSwapChainSurfacePhysicalAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12c38, 0x3e907 bytes
    //
    _r48(sdk::unknown_ptr) gdi_dd_ddi_get_swap_chain_surface_physical_address;
    
    // [NtGdiDdDDINetDispStopSessions]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x148a40, 0x13864 bytes
    //
    _r49(sdk::unknown_ptr) gdi_dd_ddi_net_disp_stop_sessions;
    
    // [NtGdiDdDDIPinDirectFlipResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x148b80, 0x13864 bytes
    //
    _r50(sdk::unknown_ptr) gdi_dd_ddi_pin_direct_flip_resources;
    
    // [NtGdiDdDDISetDisplayPrivateDriverFormat]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x148d50, 0x13864 bytes
    //
    _r51(sdk::unknown_ptr) gdi_dd_ddi_set_display_private_driver_format;
    
    // [NtGdiDdDDISetVidPnSourceOwner1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x148e10, 0x13864 bytes
    //
    _r52(sdk::unknown_ptr) gdi_dd_ddi_set_vid_pn_source_owner1;
    
    // [NtGdiDdDDIUnpinDirectFlipResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x148eb0, 0x13864 bytes
    //
    _r53(sdk::unknown_ptr) gdi_dd_ddi_unpin_direct_flip_resources;
    
    // [NtGdiDdDeleteDirectDrawObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r54(sdk::unknown_ptr) gdi_dd_delete_direct_draw_object;
    
    // [NtGdiDdDeleteSurfaceObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r55(sdk::unknown_ptr) gdi_dd_delete_surface_object;
    
    // [NtGdiDdDestroyD3DBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r56(sdk::unknown_ptr) gdi_dd_destroy_d3d_buffer;
    
    // [NtGdiDdDestroyMoComp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r57(sdk::unknown_ptr) gdi_dd_destroy_mo_comp;
    
    // [NtGdiDdDestroySurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r58(sdk::unknown_ptr) gdi_dd_destroy_surface;
    
    // [NtGdiDdEndMoCompFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r59(sdk::unknown_ptr) gdi_dd_end_mo_comp_frame;
    
    // [NtGdiDdFlip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r60(sdk::unknown_ptr) gdi_dd_flip;
    
    // [NtGdiDdFlipToGDISurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r61(sdk::unknown_ptr) gdi_dd_flip_to_gdi_surface;
    
    // [NtGdiDdGetAvailDriverMemory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r62(sdk::unknown_ptr) gdi_dd_get_avail_driver_memory;
    
    // [NtGdiDdGetBltStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r63(sdk::unknown_ptr) gdi_dd_get_blt_status;
    
    // [NtGdiDdGetDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r64(sdk::unknown_ptr) gdi_dd_get_dc;
    
    // [NtGdiDdGetDriverInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r65(sdk::unknown_ptr) gdi_dd_get_driver_info;
    
    // [NtGdiDdGetDriverState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r66(sdk::unknown_ptr) gdi_dd_get_driver_state;
    
    // [NtGdiDdGetDxHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r67(sdk::unknown_ptr) gdi_dd_get_dx_handle;
    
    // [NtGdiDdGetFlipStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r68(sdk::unknown_ptr) gdi_dd_get_flip_status;
    
    // [NtGdiDdGetInternalMoCompInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r69(sdk::unknown_ptr) gdi_dd_get_internal_mo_comp_info;
    
    // [NtGdiDdGetMoCompBuffInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r70(sdk::unknown_ptr) gdi_dd_get_mo_comp_buff_info;
    
    // [NtGdiDdGetMoCompFormats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r71(sdk::unknown_ptr) gdi_dd_get_mo_comp_formats;
    
    // [NtGdiDdGetMoCompGuids]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r72(sdk::unknown_ptr) gdi_dd_get_mo_comp_guids;
    
    // [NtGdiDdGetScanLine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r73(sdk::unknown_ptr) gdi_dd_get_scan_line;
    
    // [NtGdiDdLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r74(sdk::unknown_ptr) gdi_dd_lock;
    
    // [NtGdiDdLockD3D]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r75(sdk::unknown_ptr) gdi_dd_lock_d3d;
    
    // [NtGdiDdQueryDirectDrawObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r76(sdk::unknown_ptr) gdi_dd_query_direct_draw_object;
    
    // [NtGdiDdQueryMoCompStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r77(sdk::unknown_ptr) gdi_dd_query_mo_comp_status;
    
    // [NtGdiDdReenableDirectDrawObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r78(sdk::unknown_ptr) gdi_dd_reenable_direct_draw_object;
    
    // [NtGdiDdReleaseDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r79(sdk::unknown_ptr) gdi_dd_release_dc;
    
    // [NtGdiDdRenderMoComp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r80(sdk::unknown_ptr) gdi_dd_render_mo_comp;
    
    // [NtGdiDdResetVisrgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r81(sdk::unknown_ptr) gdi_dd_reset_visrgn;
    
    // [NtGdiDdSetColorKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r82(sdk::unknown_ptr) gdi_dd_set_color_key;
    
    // [NtGdiDdSetExclusiveMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r83(sdk::unknown_ptr) gdi_dd_set_exclusive_mode;
    
    // [NtGdiDdSetGammaRamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r84(sdk::unknown_ptr) gdi_dd_set_gamma_ramp;
    
    // [NtGdiDdSetOverlayPosition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r85(sdk::unknown_ptr) gdi_dd_set_overlay_position;
    
    // [NtGdiDdUnattachSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c60, 0x13864 bytes
    //
    _r86(sdk::unknown_ptr) gdi_dd_unattach_surface;
    
    // [NtGdiDdUnlock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r87(sdk::unknown_ptr) gdi_dd_unlock;
    
    // [NtGdiDdUnlockD3D]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r88(sdk::unknown_ptr) gdi_dd_unlock_d3d;
    
    // [NtGdiDdUpdateOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r89(sdk::unknown_ptr) gdi_dd_update_overlay;
    
    // [NtGdiDdWaitForVerticalBlank]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r90(sdk::unknown_ptr) gdi_dd_wait_for_vertical_blank;
    
    // [NtGdiDvpAcquireNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r91(sdk::unknown_ptr) gdi_dvp_acquire_notification;
    
    // [NtGdiDvpCanCreateVideoPort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r92(sdk::unknown_ptr) gdi_dvp_can_create_video_port;
    
    // [NtGdiDvpColorControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r93(sdk::unknown_ptr) gdi_dvp_color_control;
    
    // [NtGdiDvpCreateVideoPort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r94(sdk::unknown_ptr) gdi_dvp_create_video_port;
    
    // [NtGdiDvpDestroyVideoPort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r95(sdk::unknown_ptr) gdi_dvp_destroy_video_port;
    
    // [NtGdiDvpFlipVideoPort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r96(sdk::unknown_ptr) gdi_dvp_flip_video_port;
    
    // [NtGdiDvpGetVideoPortBandwidth]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r97(sdk::unknown_ptr) gdi_dvp_get_video_port_bandwidth;
    
    // [NtGdiDvpGetVideoPortConnectInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r98(sdk::unknown_ptr) gdi_dvp_get_video_port_connect_info;
    
    // [NtGdiDvpGetVideoPortField]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _r99(sdk::unknown_ptr) gdi_dvp_get_video_port_field;
    
    // [NtGdiDvpGetVideoPortFlipStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s00(sdk::unknown_ptr) gdi_dvp_get_video_port_flip_status;
    
    // [NtGdiDvpGetVideoPortInputFormats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s01(sdk::unknown_ptr) gdi_dvp_get_video_port_input_formats;
    
    // [NtGdiDvpGetVideoPortLine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s02(sdk::unknown_ptr) gdi_dvp_get_video_port_line;
    
    // [NtGdiDvpGetVideoPortOutputFormats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s03(sdk::unknown_ptr) gdi_dvp_get_video_port_output_formats;
    
    // [NtGdiDvpGetVideoSignalStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s04(sdk::unknown_ptr) gdi_dvp_get_video_signal_status;
    
    // [NtGdiDvpReleaseNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s05(sdk::unknown_ptr) gdi_dvp_release_notification;
    
    // [NtGdiDvpUpdateVideoPort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s06(sdk::unknown_ptr) gdi_dvp_update_video_port;
    
    // [NtGdiDvpWaitForVideoPortSync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s07(sdk::unknown_ptr) gdi_dvp_wait_for_video_port_sync;
    
    // [NtGdiDxgGenericThunk]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x262c40, 0x13864 bytes
    //
    _s08(sdk::unknown_ptr) gdi_dxg_generic_thunk;
    
    // [NtGdiGetDeviceCapsAllInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdcb5c, 0x27ef0 bytes
    //
    _s09(sdk::unknown_ptr) gdi_get_device_caps_all_internal;
    
    // [NtKSTInitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86730, 0x27ef0 bytes
    //
    _s10(sdk::unknown_ptr) kst_initialize;
    
    // [NtKSTWait]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xda1c0, 0x27ef0 bytes
    //
    _s11(sdk::unknown_ptr) kst_wait;
    
    // [NtMITConfigureVirtualTouchpad]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x16db70, 0x27ef0 bytes
    //
    _s12(sdk::unknown_ptr) mit_configure_virtual_touchpad;
    
    // [NtOpenCompositionSurfaceRealizationInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12260, 0x3e907 bytes
    //
    _s13(sdk::unknown_ptr) open_composition_surface_realization_info;
    
    // [NtQueryCompositionSurfaceFrameRate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x1229c, 0x3e907 bytes
    //
    _s14(sdk::unknown_ptr) query_composition_surface_frame_rate;
    
    // [NtRIMOnAsyncPnpWorkNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1975a0, 0x27ef0 bytes
    //
    _s15(sdk::unknown_ptr) rim_on_async_pnp_work_notification;
    
    // [NtRIMRegisterForInputEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x112a80, 0x1659e bytes
    //
    _s16(sdk::unknown_ptr) rim_register_for_input_ex;
    
    // [NtRIMSetDeadzoneRotation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x198160, 0x27ef0 bytes
    //
    _s17(sdk::unknown_ptr) rim_set_deadzone_rotation;
    
    // [NtSetCompositionSurfaceBufferCompositionModeAndOrientation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7d290, 0x1eb80 bytes
    //
    _s18(sdk::unknown_ptr) set_composition_surface_buffer_composition_mode_and_orientation;
    
    // [NtSetCompositionSurfaceHDRMetaData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf6e90, 0x1eb80 bytes
    //
    _s19(sdk::unknown_ptr) set_composition_surface_hdr_meta_data;
    
    // [NtUserAllowForegroundActivation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f3f60, 0x1659e bytes
    //
    _s20(sdk::unknown_ptr) user_allow_foreground_activation;
    
    // [NtUserAllowSetForegroundWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x109d50, 0x1659e bytes
    //
    _s21(sdk::unknown_ptr) user_allow_set_foreground_window;
    
    // [NtUserArrangeIconicWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x140480, 0x1659e bytes
    //
    _s22(sdk::unknown_ptr) user_arrange_iconic_windows;
    
    // [NtUserBeginDeferWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xaea70, 0x1659e bytes
    //
    _s23(sdk::unknown_ptr) user_begin_defer_window_pos;
    
    // [NtUserBroadcastImeShowStatusChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f4110, 0x1659e bytes
    //
    _s24(sdk::unknown_ptr) user_broadcast_ime_show_status_change;
    
    // [NtUserCancelQueueEventCompletionPacket]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f4490, 0x1659e bytes
    //
    _s25(sdk::unknown_ptr) user_cancel_queue_event_completion_packet;
    
    // [NtUserChangeWindowMessageFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x888c0, 0x1659e bytes
    //
    _s26(sdk::unknown_ptr) user_change_window_message_filter;
    
    // [NtUserCheckImeShowStatusInThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xe1150, 0x1659e bytes
    //
    _s27(sdk::unknown_ptr) user_check_ime_show_status_in_thread;
    
    // [NtUserCitSetInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x26080, 0x27ef0 bytes
    //
    _s28(sdk::unknown_ptr) user_cit_set_info;
    
    // [NtUserClearRunWakeBit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    //
    _s29(sdk::unknown_ptr) user_clear_run_wake_bit;
    
    // [NtUserClearWakeMask]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f4850, 0x1659e bytes
    //
    _s30(sdk::unknown_ptr) user_clear_wake_mask;
    
    // [NtUserClearWindowState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x141dd0, 0x1659e bytes
    //
    _s31(sdk::unknown_ptr) user_clear_window_state;
    
    // [NtUserCreateBaseWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1709c0, 0x27ef0 bytes
    //
    _s32(sdk::unknown_ptr) user_create_base_window;
    
    // [NtUserCreateMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x103d50, 0x1659e bytes
    //
    _s33(sdk::unknown_ptr) user_create_menu;
    
    // [NtUserCreatePopupMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x110620, 0x1659e bytes
    //
    _s34(sdk::unknown_ptr) user_create_popup_menu;
    
    // [NtUserCreateSystemThreads]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x8b480, 0x27ef0 bytes
    //
    _s35(sdk::unknown_ptr) user_create_system_threads;
    
    // [NtUserCsDdeUninitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x4140, 0x1659e bytes
    //
    _s36(sdk::unknown_ptr) user_cs_dde_uninitialize;
    
    // [NtUserDeferredDesktopRotation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f4f10, 0x1659e bytes
    //
    _s37(sdk::unknown_ptr) user_deferred_desktop_rotation;
    
    // [NtUserDeregisterShellHookWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1115e0, 0x1659e bytes
    //
    _s38(sdk::unknown_ptr) user_deregister_shell_hook_window;
    
    // [NtUserDestroyCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x9920, 0x1659e bytes
    //
    _s39(sdk::unknown_ptr) user_destroy_caret;
    
    // [NtUserDirectedYield]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f4f50, 0x1659e bytes
    //
    _s40(sdk::unknown_ptr) user_directed_yield;
    
    // [NtUserDisableProcessWindowsGhosting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x118440, 0x1659e bytes
    //
    _s41(sdk::unknown_ptr) user_disable_process_windows_ghosting;
    
    // [NtUserDoInitMessagePumpHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x113820, 0x1659e bytes
    //
    _s42(sdk::unknown_ptr) user_do_init_message_pump_hook;
    
    // [NtUserDoUninitMessagePumpHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x112130, 0x1659e bytes
    //
    _s43(sdk::unknown_ptr) user_do_uninit_message_pump_hook;
    
    // [NtUserDrainThreadCoreMessagingCompletions]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x9ece0, 0x1659e bytes
    //
    _s44(sdk::unknown_ptr) user_drain_thread_core_messaging_completions;
    
    // [NtUserDrawMenuBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x13c1d0, 0x1659e bytes
    //
    _s45(sdk::unknown_ptr) user_draw_menu_bar;
    
    // [NtUserDwmLockScreenUpdates]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x116360, 0x1659e bytes
    //
    _s46(sdk::unknown_ptr) user_dwm_lock_screen_updates;
    
    // [NtUserDWP_GetEnabledPopupOffset]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f4e50, 0x1659e bytes
    //
    _s47(sdk::unknown_ptr) user_dwp_get_enabled_popup_offset;
    
    // [NtUserEnableModernAppWindowKeyboardIntercept]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f5ac0, 0x1659e bytes
    //
    _s48(sdk::unknown_ptr) user_enable_modern_app_window_keyboard_intercept;
    
    // [NtUserEnableMouseInPointerForThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x117bb0, 0x1659e bytes
    //
    _s49(sdk::unknown_ptr) user_enable_mouse_in_pointer_for_thread;
    
    // [NtUserEnableSessionForMMCSS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x8e810, 0x1659e bytes
    //
    _s50(sdk::unknown_ptr) user_enable_session_for_mmcss;
    
    // [NtUserEnableShellWindowManagementBehavior]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x107390, 0x1659e bytes
    //
    _s51(sdk::unknown_ptr) user_enable_shell_window_management_behavior;
    
    // [NtUserEnableWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc47a0, 0x1659e bytes
    //
    _s52(sdk::unknown_ptr) user_enable_window;
    
    // [NtUserEnsureDpiDepSysMetCacheForPlateau]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f5c10, 0x1659e bytes
    //
    _s53(sdk::unknown_ptr) user_ensure_dpi_dep_sys_met_cache_for_plateau;
    
    // [NtUserEnumClipboardFormats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x15bdf0, 0x1659e bytes
    //
    _s54(sdk::unknown_ptr) user_enum_clipboard_formats;
    
    // [NtUserEnumDisplayDevicesShared]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x599d8, 0x27ef0 bytes
    //
    _s55(sdk::unknown_ptr) user_enum_display_devices_shared;
    
    // [NtUserEnumDisplaySettingsExclusive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x16cc5c, 0x27ef0 bytes
    //
    _s56(sdk::unknown_ptr) user_enum_display_settings_exclusive;
    
    // [NtUserEnumDisplaySettingsShared]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x58e40, 0x27ef0 bytes
    //
    _s57(sdk::unknown_ptr) user_enum_display_settings_shared;
    
    // [NtUserForceEnableNumpadTranslation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x117630, 0x1659e bytes
    //
    _s58(sdk::unknown_ptr) user_force_enable_numpad_translation;
    
    // [NtUserGetClassIcoCur]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x102130, 0x1659e bytes
    //
    _s59(sdk::unknown_ptr) user_get_class_ico_cur;
    
    // [NtUserGetCursorDims]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x10fae0, 0x13864 bytes
    //
    _s60(sdk::unknown_ptr) user_get_cursor_dims;
    
    // [NtUserGetCursorPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x96aa0, 0x1659e bytes
    //
    _s61(sdk::unknown_ptr) user_get_cursor_pos;
    
    // [NtUserGetDCompositionHwndBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f6770, 0x1659e bytes
    //
    _s62(sdk::unknown_ptr) user_get_d_composition_hwnd_bitmap;
    
    // [NtUserGetDesktopVisualTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x111d0, 0x3e907 bytes
    //
    _s63(sdk::unknown_ptr) user_get_desktop_visual_transform;
    
    // [NtUserGetDeviceChangeInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f6890, 0x1659e bytes
    //
    _s64(sdk::unknown_ptr) user_get_device_change_info;
    
    // [NtUserGetIMEShowStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x102010, 0x1659e bytes
    //
    _s65(sdk::unknown_ptr) user_get_ime_show_status;
    
    // [NtUserGetInputDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f7420, 0x1659e bytes
    //
    _s66(sdk::unknown_ptr) user_get_input_desktop;
    
    // [NtUserGetInputEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f74c0, 0x1659e bytes
    //
    _s67(sdk::unknown_ptr) user_get_input_event;
    
    // [NtUserGetKeyboardType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x173260, 0x27ef0 bytes
    //
    _s68(sdk::unknown_ptr) user_get_keyboard_type;
    
    // [NtUserGetMessagePos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xfee00, 0x1659e bytes
    //
    _s69(sdk::unknown_ptr) user_get_message_pos;
    
    // [NtUserGetMinuserIdForBaseWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x173290, 0x27ef0 bytes
    //
    _s70(sdk::unknown_ptr) user_get_minuser_id_for_base_window;
    
    // [NtUserGetModernAppWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x45170, 0x1659e bytes
    //
    _s71(sdk::unknown_ptr) user_get_modern_app_window;
    
    // [NtUserGetPointerFrameArrivalTimes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x216510, 0x13864 bytes
    //
    _s72(sdk::unknown_ptr) user_get_pointer_frame_arrival_times;
    
    // [NtUserGetProcessDefaultLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x4e30, 0x1659e bytes
    //
    _s73(sdk::unknown_ptr) user_get_process_default_layout;
    
    // [NtUserGetQueueIocp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f8a00, 0x1659e bytes
    //
    _s74(sdk::unknown_ptr) user_get_queue_iocp;
    
    // [NtUserGetSendMessageReceiver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f92e0, 0x1659e bytes
    //
    _s75(sdk::unknown_ptr) user_get_send_message_receiver;
    
    // [NtUserGetSysMenuOffset]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f9330, 0x1659e bytes
    //
    _s76(sdk::unknown_ptr) user_get_sys_menu_offset;
    
    // [NtUserGetSystemContentRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x174230, 0x27ef0 bytes
    //
    _s77(sdk::unknown_ptr) user_get_system_content_rects;
    
    // [NtUserGetUnpredictedMessagePos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f9640, 0x1659e bytes
    //
    _s78(sdk::unknown_ptr) user_get_unpredicted_message_pos;
    
    // [NtUserGetWinStationInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f99c0, 0x1659e bytes
    //
    _s79(sdk::unknown_ptr) user_get_win_station_info;
    
    // [NtUserGetWindowContextHelpId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f9c00, 0x1659e bytes
    //
    _s80(sdk::unknown_ptr) user_get_window_context_help_id;
    
    // [NtUserGetWindowThreadProcessId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1746c0, 0x27ef0 bytes
    //
    _s81(sdk::unknown_ptr) user_get_window_thread_process_id;
    
    // [NtUserGetWindowTrackInfoAsync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc2090, 0x1659e bytes
    //
    _s82(sdk::unknown_ptr) user_get_window_track_info_async;
    
    // [NtUserHandleSystemThreadCreationFailure]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fa2b0, 0x1659e bytes
    //
    _s83(sdk::unknown_ptr) user_handle_system_thread_creation_failure;
    
    // [NtUserHideCursorNoCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fa420, 0x1659e bytes
    //
    _s84(sdk::unknown_ptr) user_hide_cursor_no_capture;
    
    // [NtUserInitAnsiOem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x113c30, 0x1659e bytes
    //
    _s85(sdk::unknown_ptr) user_init_ansi_oem;
    
    // [NtUserInitRunThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    //
    _s86(sdk::unknown_ptr) user_init_run_thread;
    
    // [NtUserInitThreadCoreMessagingIocp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x105080, 0x1659e bytes
    //
    _s87(sdk::unknown_ptr) user_init_thread_core_messaging_iocp;
    
    // [NtUserInternalClipCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x110f80, 0x13864 bytes
    //
    _s88(sdk::unknown_ptr) user_internal_clip_cursor;
    
    // [NtUserKillSystemTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fb600, 0x1659e bytes
    //
    _s89(sdk::unknown_ptr) user_kill_system_timer;
    
    // [NtUserLoadCursorsAndIcons]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x10d8a0, 0x1659e bytes
    //
    _s90(sdk::unknown_ptr) user_load_cursors_and_icons;
    
    // [NtUserLoadUserApiHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x9b3b0, 0x1659e bytes
    //
    _s91(sdk::unknown_ptr) user_load_user_api_hook;
    
    // [NtUserLockSetForegroundWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fb7a0, 0x1659e bytes
    //
    _s92(sdk::unknown_ptr) user_lock_set_foreground_window;
    
    // [NtUserLW_LoadFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x66d00, 0x1659e bytes
    //
    _s93(sdk::unknown_ptr) user_lw_load_fonts;
    
    // [NtUserMapDesktopObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xff310, 0x1659e bytes
    //
    _s94(sdk::unknown_ptr) user_map_desktop_object;
    
    // [NtUserMessageBeep]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x13ecd0, 0x1659e bytes
    //
    _s95(sdk::unknown_ptr) user_message_beep;
    
    // [NtUserNlsKbdSendIMENotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fd3b0, 0x1659e bytes
    //
    _s96(sdk::unknown_ptr) user_nls_kbd_send_ime_notification;
    
    // [NtUserNotifyOverlayWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fd410, 0x1659e bytes
    //
    _s97(sdk::unknown_ptr) user_notify_overlay_window;
    
    // [NtUserPlayEventSound]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fdb90, 0x1659e bytes
    //
    _s98(sdk::unknown_ptr) user_play_event_sound;
    
    // [NtUserPostQuitMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x8c640, 0x1659e bytes
    //
    _s99(sdk::unknown_ptr) user_post_quit_message;
    
    // [NtUserPrepareForLogoff]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xccde0, 0x1659e bytes
    //
    _t00(sdk::unknown_ptr) user_prepare_for_logoff;
    
    // [NtUserRealizePalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x13a3d0, 0x1659e bytes
    //
    _t01(sdk::unknown_ptr) user_realize_palette;
    
    // [NtUserReassociateQueueEventCompletionPacket]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe170, 0x1659e bytes
    //
    _t02(sdk::unknown_ptr) user_reassociate_queue_event_completion_packet;
    
    // [NtUserRedrawFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x143580, 0x1659e bytes
    //
    _t03(sdk::unknown_ptr) user_redraw_frame;
    
    // [NtUserRedrawFrameAndHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x142b50, 0x1659e bytes
    //
    _t04(sdk::unknown_ptr) user_redraw_frame_and_hook;
    
    // [NtUserRedrawTitle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x13da30, 0x1659e bytes
    //
    _t05(sdk::unknown_ptr) user_redraw_title;
    
    // [NtUserRegisterGhostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x137dd0, 0x1659e bytes
    //
    _t06(sdk::unknown_ptr) user_register_ghost_window;
    
    // [NtUserRegisterLogonProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd2520, 0x27ef0 bytes
    //
    _t07(sdk::unknown_ptr) user_register_logon_process;
    
    // [NtUserRegisterLPK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x102380, 0x1659e bytes
    //
    _t08(sdk::unknown_ptr) user_register_lpk;
    
    // [NtUserRegisterShellHookWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x10f400, 0x1659e bytes
    //
    _t09(sdk::unknown_ptr) user_register_shell_hook_window;
    
    // [NtUserRegisterSiblingFrostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe5e0, 0x1659e bytes
    //
    _t10(sdk::unknown_ptr) user_register_sibling_frost_window;
    
    // [NtUserRegisterSystemThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe630, 0x1659e bytes
    //
    _t11(sdk::unknown_ptr) user_register_system_thread;
    
    // [NtUserRegisterUserHungAppHandlers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe6f0, 0x1659e bytes
    //
    _t12(sdk::unknown_ptr) user_register_user_hung_app_handlers;
    
    // [NtUserRegisterWindowArrangementCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x8b820, 0x1659e bytes
    //
    _t13(sdk::unknown_ptr) user_register_window_arrangement_callout;
    
    // [NtUserReleaseCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xa6620, 0x1659e bytes
    //
    _t14(sdk::unknown_ptr) user_release_capture;
    
    // [NtUserRemoteConnectState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xfd580, 0x1659e bytes
    //
    _t15(sdk::unknown_ptr) user_remote_connect_state;
    
    // [NtUserRemoteConsoleShadowStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe740, 0x1659e bytes
    //
    _t16(sdk::unknown_ptr) user_remote_console_shadow_stop;
    
    // [NtUserRemoteDisconnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x118b50, 0x1659e bytes
    //
    _t17(sdk::unknown_ptr) user_remote_disconnect;
    
    // [NtUserRemoteNotify]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1136e0, 0x1659e bytes
    //
    _t18(sdk::unknown_ptr) user_remote_notify;
    
    // [NtUserRemotePassthruDisable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe780, 0x1659e bytes
    //
    _t19(sdk::unknown_ptr) user_remote_passthru_disable;
    
    // [NtUserRemotePassthruEnable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe7c0, 0x1659e bytes
    //
    _t20(sdk::unknown_ptr) user_remote_passthru_enable;
    
    // [NtUserRemoteReconnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x144460, 0x1659e bytes
    //
    _t21(sdk::unknown_ptr) user_remote_reconnect;
    
    // [NtUserRemoteShadowCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe920, 0x1659e bytes
    //
    _t22(sdk::unknown_ptr) user_remote_shadow_cleanup;
    
    // [NtUserRemoteShadowSetup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe970, 0x1659e bytes
    //
    _t23(sdk::unknown_ptr) user_remote_shadow_setup;
    
    // [NtUserRemoteShadowStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fe9b0, 0x1659e bytes
    //
    _t24(sdk::unknown_ptr) user_remote_shadow_start;
    
    // [NtUserRemoteShadowStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fea00, 0x1659e bytes
    //
    _t25(sdk::unknown_ptr) user_remote_shadow_stop;
    
    // [NtUserRemoteThinwireStats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1feab0, 0x1659e bytes
    //
    _t26(sdk::unknown_ptr) user_remote_thinwire_stats;
    
    // [NtUserRemoveQueueCompletion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1feaf0, 0x1659e bytes
    //
    _t27(sdk::unknown_ptr) user_remove_queue_completion;
    
    // [NtUserReplyMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1170, 0x1659e bytes
    //
    _t28(sdk::unknown_ptr) user_reply_message;
    
    // [NtUserResetDblClk]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1feb30, 0x1659e bytes
    //
    _t29(sdk::unknown_ptr) user_reset_dbl_clk;
    
    // [NtUserScaleSystemMetricForDPIWithoutCache]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1fed80, 0x1659e bytes
    //
    _t30(sdk::unknown_ptr) user_scale_system_metric_for_dpi_without_cache;
    
    // [NtUserScheduleDispatchNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xe9010, 0x1659e bytes
    //
    _t31(sdk::unknown_ptr) user_schedule_dispatch_notification;
    
    // [NtUserSetAdditionalForegroundBoostProcesses]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe7da0, 0x27ef0 bytes
    //
    _t32(sdk::unknown_ptr) user_set_additional_foreground_boost_processes;
    
    // [NtUserSetCancelRotationDelayHintWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1ff440, 0x1659e bytes
    //
    _t33(sdk::unknown_ptr) user_set_cancel_rotation_delay_hint_window;
    
    // [NtUserSetCaretBlinkTime]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x96810, 0x1659e bytes
    //
    _t34(sdk::unknown_ptr) user_set_caret_blink_time;
    
    // [NtUserSetCaretPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x105480, 0x1659e bytes
    //
    _t35(sdk::unknown_ptr) user_set_caret_pos;
    
    // [NtUserSetCursorIconDataEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xaaf00, 0x1659e bytes
    //
    _t36(sdk::unknown_ptr) user_set_cursor_icon_data_ex;
    
    // [NtUserSetDialogPointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xde5b0, 0x1659e bytes
    //
    _t37(sdk::unknown_ptr) user_set_dialog_pointer;
    
    // [NtUserSetDialogSystemMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x10c4d0, 0x1659e bytes
    //
    _t38(sdk::unknown_ptr) user_set_dialog_system_menu;
    
    // [NtUserSetDoubleClickTime]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1ffbf0, 0x1659e bytes
    //
    _t39(sdk::unknown_ptr) user_set_double_click_time;
    
    // [NtUserSetDpiForWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1ffc30, 0x1659e bytes
    //
    _t40(sdk::unknown_ptr) user_set_dpi_for_window;
    
    // [NtUserSetForegroundRedirectionForActivationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x17ad20, 0x27ef0 bytes
    //
    _t41(sdk::unknown_ptr) user_set_foreground_redirection_for_activation_object;
    
    // [NtUserSetForegroundWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x104f50, 0x1659e bytes
    //
    _t42(sdk::unknown_ptr) user_set_foreground_window;
    
    // [NtUserSetMessageExtraInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x200400, 0x1659e bytes
    //
    _t43(sdk::unknown_ptr) user_set_message_extra_info;
    
    // [NtUserSetModernAppWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1f40, 0x1659e bytes
    //
    _t44(sdk::unknown_ptr) user_set_modern_app_window;
    
    // [NtUserSetMsgBox]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x200560, 0x1659e bytes
    //
    _t45(sdk::unknown_ptr) user_set_msg_box;
    
    // [NtUserSetProcessDefaultLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2007c0, 0x1659e bytes
    //
    _t46(sdk::unknown_ptr) user_set_process_default_layout;
    
    // [NtUserSetProcessLaunchForegroundPolicy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xbead0, 0x27ef0 bytes
    //
    _t47(sdk::unknown_ptr) user_set_process_launch_foreground_policy;
    
    // [NtUserSetProgmanWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2009a0, 0x1659e bytes
    //
    _t48(sdk::unknown_ptr) user_set_progman_window;
    
    // [NtUserSetShellChangeNotifyHWND]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x116bc0, 0x1659e bytes
    //
    _t49(sdk::unknown_ptr) user_set_shell_change_notify_hwnd;
    
    // [NtUserSetSysMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x13d090, 0x1659e bytes
    //
    _t50(sdk::unknown_ptr) user_set_sys_menu;
    
    // [NtUserSetSystemContentRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x17be60, 0x27ef0 bytes
    //
    _t51(sdk::unknown_ptr) user_set_system_content_rects;
    
    // [NtUserSetTaskmanWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x113de0, 0x1659e bytes
    //
    _t52(sdk::unknown_ptr) user_set_taskman_window;
    
    // [NtUserSetThreadQueueMergeSetting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x200e40, 0x1659e bytes
    //
    _t53(sdk::unknown_ptr) user_set_thread_queue_merge_setting;
    
    // [NtUserSetTSFEventState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x200bd0, 0x1659e bytes
    //
    _t54(sdk::unknown_ptr) user_set_tsf_event_state;
    
    // [NtUserSetVisible]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x200e90, 0x1659e bytes
    //
    _t55(sdk::unknown_ptr) user_set_visible;
    
    // [NtUserSetWaitForQueueAttach]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x200f50, 0x1659e bytes
    //
    _t56(sdk::unknown_ptr) user_set_wait_for_queue_attach;
    
    // [NtUserSetWatermarkStrings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1144c0, 0x1659e bytes
    //
    _t57(sdk::unknown_ptr) user_set_watermark_strings;
    
    // [NtUserSetWindowContextHelpId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x143cc0, 0x1659e bytes
    //
    _t58(sdk::unknown_ptr) user_set_window_context_help_id;
    
    // [NtUserSetWindowState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x141d10, 0x1659e bytes
    //
    _t59(sdk::unknown_ptr) user_set_window_state;
    
    // [NtUserShellMigrateWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x201640, 0x1659e bytes
    //
    _t60(sdk::unknown_ptr) user_shell_migrate_window;
    
    // [NtUserShellSetWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x201a20, 0x1659e bytes
    //
    _t61(sdk::unknown_ptr) user_shell_set_window_pos;
    
    // [NtUserShowOwnedPopups]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x143ac0, 0x1659e bytes
    //
    _t62(sdk::unknown_ptr) user_show_owned_popups;
    
    // [NtUserShowStartGlass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2024b0, 0x1659e bytes
    //
    _t63(sdk::unknown_ptr) user_show_start_glass;
    
    // [NtUserSwapMouseButton]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x202550, 0x1659e bytes
    //
    _t64(sdk::unknown_ptr) user_swap_mouse_button;
    
    // [NtUserSwitchToThisWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x3820, 0x1659e bytes
    //
    _t65(sdk::unknown_ptr) user_switch_to_this_window;
    
    // [NtUserThreadMessageQueueAttached]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xe6060, 0x1659e bytes
    //
    _t66(sdk::unknown_ptr) user_thread_message_queue_attached;
    
    // [NtUserTraceLoggingSendMixedModeTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xd01b0, 0x1659e bytes
    //
    _t67(sdk::unknown_ptr) user_trace_logging_send_mixed_mode_telemetry;
    
    // [NtUserUnhookWindowsHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x202890, 0x1659e bytes
    //
    _t68(sdk::unknown_ptr) user_unhook_windows_hook;
    
    // [NtUserUpdateClientRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x202930, 0x1659e bytes
    //
    _t69(sdk::unknown_ptr) user_update_client_rect;
    
    // [NtUserUpdatePerUserImmEnabling]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x116190, 0x1659e bytes
    //
    _t70(sdk::unknown_ptr) user_update_per_user_imm_enabling;
    
    // [NtUserUpdateWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xf5070, 0x1659e bytes
    //
    _t71(sdk::unknown_ptr) user_update_window;
    
    // [NtUserUpdateWindowTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x127910, 0x13864 bytes
    //
    _t72(sdk::unknown_ptr) user_update_window_transform;
    
    // [NtUserUpdateWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x202e80, 0x1659e bytes
    //
    _t73(sdk::unknown_ptr) user_update_windows;
    
    // [NtUserUserPowerCalloutWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x113930, 0x1659e bytes
    //
    _t74(sdk::unknown_ptr) user_user_power_callout_worker;
    
    // [NtUserValidateRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x102b60, 0x1659e bytes
    //
    _t75(sdk::unknown_ptr) user_validate_rgn;
    
    // [NtUserWakeRITForShutdown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x8e780, 0x1659e bytes
    //
    _t76(sdk::unknown_ptr) user_wake_rit_for_shutdown;
    
    // [NtUserWOWModuleUnload]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x203290, 0x1659e bytes
    //
    _t77(sdk::unknown_ptr) user_wow_module_unload;
    
    // [NtUserZapActiveAndFocus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x203530, 0x1659e bytes
    //
    _t78(sdk::unknown_ptr) user_zap_active_and_focus;
    
    // [NtUserfnSHELLSYNCDISPLAYCHANGED]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x206600, 0x1659e bytes
    //
    _t79(sdk::unknown_ptr) userfn_shellsyncdisplaychanged;
    
    // [NtCompositorNotifyForegroundChanged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0xe774, 0x388c7 bytes
    // win32k.sys .text:0xe774, 0x388c7 bytes
    //
    _t80(sdk::unknown_ptr) compositor_notify_foreground_changed;
    
    // [NtCompositorUpdateLastInputTime]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0xe798, 0x388c7 bytes
    // win32k.sys .text:0xe798, 0x388c7 bytes
    //
    _t81(sdk::unknown_ptr) compositor_update_last_input_time;
    
    // [NtFlipObjectSetMaximumBackchannelQueueDepth]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e48, 0x388c7 bytes
    // win32k.sys .text:0x10e48, 0x388c7 bytes
    //
    _t82(sdk::unknown_ptr) flip_object_set_maximum_backchannel_queue_depth;
    
    // [NtGdiGetAppliedDeviceGammaRamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1599c0, 0x243e0 bytes
    // win32kbase.sys .text:0x157860, 0x243e0 bytes
    //
    _t83(sdk::unknown_ptr) gdi_get_applied_device_gamma_ramp;
    
    // [NtGdiGetGammaRampCapability]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x159b90, 0x243e0 bytes
    // win32kbase.sys .text:0x157a30, 0x243e0 bytes
    //
    _t84(sdk::unknown_ptr) gdi_get_gamma_ramp_capability;
    
    // [NtGdiSetPrivateDeviceGammaRamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x159c60, 0x243e0 bytes
    // win32kbase.sys .text:0x157b00, 0x243e0 bytes
    //
    _t85(sdk::unknown_ptr) gdi_set_private_device_gamma_ramp;
    
    // [NtMITMinuserWindowCreated]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x13d170, 0x243e0 bytes
    // win32kbase.sys .text:0x13a8c0, 0x243e0 bytes
    //
    _t86(sdk::unknown_ptr) mit_minuser_window_created;
    
    // [NtMITSetForegroundRoutingInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0xfc84, 0x388c7 bytes
    // win32k.sys .text:0xfc84, 0x388c7 bytes
    //
    _t87(sdk::unknown_ptr) mit_set_foreground_routing_info;
    
    // [NtRIMRegisterForInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x122030, 0x1596d bytes
    // win32kfull.sys .text:0x122f70, 0x1596d bytes
    //
    _t88(sdk::unknown_ptr) rim_register_for_input;
    
    // [NtUserCallHwndLockSafe]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1084f0, 0x1596d bytes
    // win32kfull.sys .text:0x109420, 0x1596d bytes
    //
    _t89(sdk::unknown_ptr) user_call_hwnd_lock_safe;
    
    // [NtUserCallHwndParamLockSafe]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x101870, 0x1596d bytes
    // win32kfull.sys .text:0x1027a0, 0x1596d bytes
    //
    _t90(sdk::unknown_ptr) user_call_hwnd_param_lock_safe;
    
    // [NtUserCallHwndSafe]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x58450, 0x1596d bytes
    // win32kfull.sys .text:0x58870, 0x1596d bytes
    //
    _t91(sdk::unknown_ptr) user_call_hwnd_safe;
    
    // [NtUserCreateActivationGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x13fa90, 0x243e0 bytes
    // win32kbase.sys .text:0x13d1f0, 0x243e0 bytes
    //
    _t92(sdk::unknown_ptr) user_create_activation_group;
    
    // [NtUserCreateWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1f8330, 0x1596d bytes
    // win32kfull.sys .text:0x1f81a0, 0x1596d bytes
    //
    _t93(sdk::unknown_ptr) user_create_window_group;
    
    // [NtUserDeleteWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1f85f0, 0x1596d bytes
    // win32kfull.sys .text:0x1f8460, 0x1596d bytes
    //
    _t94(sdk::unknown_ptr) user_delete_window_group;
    
    // [NtUserDestroyActivationGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x13fcf0, 0x243e0 bytes
    // win32kbase.sys .text:0x13d1f0, 0x243e0 bytes
    //
    _t95(sdk::unknown_ptr) user_destroy_activation_group;
    
    // [NtUserEnableWindowGroupPolicy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1f9360, 0x1596d bytes
    // win32kfull.sys .text:0x1f91d0, 0x1596d bytes
    //
    _t96(sdk::unknown_ptr) user_enable_window_group_policy;
    
    // [NtUserGetWindowGroupId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x6d60, 0x1596d bytes
    // win32kfull.sys .text:0x7110, 0x1596d bytes
    //
    _t97(sdk::unknown_ptr) user_get_window_group_id;
    
    // [NtUserQueryActivationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb56d0, 0x243e0 bytes
    // win32kbase.sys .text:0xaed50, 0x243e0 bytes
    //
    _t98(sdk::unknown_ptr) user_query_activation_object;
    
    // [NtUserRequestMoveSizeOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x201bd0, 0x1596d bytes
    // win32kfull.sys .text:0x201a40, 0x1596d bytes
    //
    _t99(sdk::unknown_ptr) user_request_move_size_operation;
    
    // [NtUserSetWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x203ad0, 0x1596d bytes
    // win32kfull.sys .text:0x203940, 0x1596d bytes
    //
    _u00(sdk::unknown_ptr) user_set_window_group;
    
    // [NtUserValidateHandleSecure]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x21e170, 0x13864 bytes
    // win32kfull.sys .text:0x1348b0, 0x1659e bytes
    //
    _u01(sdk::unknown_ptr) user_validate_handle_secure;
    
    // [NtCloseCompositionInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb26c0, 0x243e0 bytes
    // win32kbase.sys .text:0xcb5b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5e6f0, 0x243e0 bytes
    //
    _u02(sdk::unknown_ptr) close_composition_input_sink;
    
    // [NtCompositorNotifyExitWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xe750, 0x388c7 bytes
    // win32k.sys .text:0xf84c, 0x3e907 bytes
    // win32k.sys .text:0xe750, 0x388c7 bytes
    //
    _u03(sdk::unknown_ptr) compositor_notify_exit_windows;
    
    // [NtConfigureInputSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13b5b0, 0x243e0 bytes
    // win32kbase.sys .text:0x16d0a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x138d00, 0x243e0 bytes
    //
    _u04(sdk::unknown_ptr) configure_input_space;
    
    // [NtDCompositionCommitSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1db6d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2294d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9490, 0x243e0 bytes
    //
    _u05(sdk::unknown_ptr) d_composition_commit_synchronization_object;
    
    // [NtDCompositionCreateSharedResourceHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e840, 0x243e0 bytes
    // win32kbase.sys .text:0x9c930, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f310, 0x243e0 bytes
    //
    _u06(sdk::unknown_ptr) d_composition_create_shared_resource_handle;
    
    // [NtDCompositionCreateSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1db810, 0x243e0 bytes
    // win32kbase.sys .text:0x2296a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d95d0, 0x243e0 bytes
    //
    _u07(sdk::unknown_ptr) d_composition_create_synchronization_object;
    
    // [NtDCompositionDiscardFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x3d8f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9cb20, 0x243e0 bytes
    // win32kbase.sys .text:0x86780, 0x243e0 bytes
    //
    _u08(sdk::unknown_ptr) d_composition_discard_frame;
    
    // [NtDCompositionGetBatchId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9a120, 0x243e0 bytes
    // win32kbase.sys .text:0xa3b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x82e00, 0x243e0 bytes
    //
    _u09(sdk::unknown_ptr) d_composition_get_batch_id;
    
    // [NtDCompositionGetMaterialProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7dc50, 0x243e0 bytes
    // win32kbase.sys .text:0x9b770, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8c50, 0x243e0 bytes
    //
    _u10(sdk::unknown_ptr) d_composition_get_material_property;
    
    // [NtDCompositionRetireFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x3d640, 0x1eb80 bytes
    // win32kbase.sys .text:0x9cc70, 0x243e0 bytes
    // win32kbase.sys .text:0x868d0, 0x243e0 bytes
    //
    _u11(sdk::unknown_ptr) d_composition_retire_frame;
    
    // [NtDCompositionSetChannelConnectionId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb2c00, 0x243e0 bytes
    // win32kbase.sys .text:0xc9800, 0x27ef0 bytes
    // win32kbase.sys .text:0xa9160, 0x243e0 bytes
    //
    _u12(sdk::unknown_ptr) d_composition_set_channel_connection_id;
    
    // [NtDCompositionSetChildRootVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dc090, 0x243e0 bytes
    // win32kbase.sys .text:0x22a190, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9e50, 0x243e0 bytes
    //
    _u13(sdk::unknown_ptr) d_composition_set_child_root_visual;
    
    // [NtDCompositionSetMaterialProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7da20, 0x243e0 bytes
    // win32kbase.sys .text:0x9b4e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8a20, 0x243e0 bytes
    //
    _u14(sdk::unknown_ptr) d_composition_set_material_property;
    
    // [NtDCompositionSuspendAnimations]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dc180, 0x243e0 bytes
    // win32kbase.sys .text:0x22a280, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9f40, 0x243e0 bytes
    //
    _u15(sdk::unknown_ptr) d_composition_suspend_animations;
    
    // [NtDxgkCreateTrackedWorkload]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11064, 0x388c7 bytes
    // win32k.sys .text:0x12440, 0x3e907 bytes
    // win32k.sys .text:0x11064, 0x388c7 bytes
    //
    _u16(sdk::unknown_ptr) dxgk_create_tracked_workload;
    
    // [NtDxgkDestroyTrackedWorkload]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11078, 0x388c7 bytes
    // win32k.sys .text:0x12454, 0x3e907 bytes
    // win32k.sys .text:0x11078, 0x388c7 bytes
    //
    _u17(sdk::unknown_ptr) dxgk_destroy_tracked_workload;
    
    // [NtDxgkDispMgrOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x1108c, 0x388c7 bytes
    // win32k.sys .text:0x12468, 0x3e907 bytes
    // win32k.sys .text:0x1108c, 0x388c7 bytes
    //
    _u18(sdk::unknown_ptr) dxgk_disp_mgr_operation;
    
    // [NtDxgkDisplayPortOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x110a0, 0x388c7 bytes
    // win32k.sys .text:0x1247c, 0x3e907 bytes
    // win32k.sys .text:0x110a0, 0x388c7 bytes
    //
    _u19(sdk::unknown_ptr) dxgk_display_port_operation;
    
    // [NtDxgkDuplicateHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x110b4, 0x388c7 bytes
    // win32k.sys .text:0x12490, 0x3e907 bytes
    // win32k.sys .text:0x110b4, 0x388c7 bytes
    //
    _u20(sdk::unknown_ptr) dxgk_duplicate_handle;
    
    // [NtDxgkEnumAdapters3]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x110c8, 0x388c7 bytes
    // win32k.sys .text:0x124a4, 0x3e907 bytes
    // win32k.sys .text:0x110c8, 0x388c7 bytes
    //
    _u21(sdk::unknown_ptr) dxgk_enum_adapters3;
    
    // [NtDxgkGetAvailableTrackedWorkloadIndex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x110dc, 0x388c7 bytes
    // win32k.sys .text:0x124b8, 0x3e907 bytes
    // win32k.sys .text:0x110dc, 0x388c7 bytes
    //
    _u22(sdk::unknown_ptr) dxgk_get_available_tracked_workload_index;
    
    // [NtDxgkGetProcessList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x110f0, 0x388c7 bytes
    // win32k.sys .text:0x124cc, 0x3e907 bytes
    // win32k.sys .text:0x110f0, 0x388c7 bytes
    //
    _u23(sdk::unknown_ptr) dxgk_get_process_list;
    
    // [NtDxgkGetTrackedWorkloadStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11104, 0x388c7 bytes
    // win32k.sys .text:0x124f4, 0x3e907 bytes
    // win32k.sys .text:0x11104, 0x388c7 bytes
    //
    _u24(sdk::unknown_ptr) dxgk_get_tracked_workload_statistics;
    
    // [NtDxgkOutputDuplPresentToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11118, 0x388c7 bytes
    // win32k.sys .text:0x12508, 0x3e907 bytes
    // win32k.sys .text:0x11118, 0x388c7 bytes
    //
    _u25(sdk::unknown_ptr) dxgk_output_dupl_present_to_hw_queue;
    
    // [NtDxgkPinResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x1112c, 0x388c7 bytes
    // win32k.sys .text:0x1251c, 0x3e907 bytes
    // win32k.sys .text:0x1112c, 0x388c7 bytes
    //
    _u26(sdk::unknown_ptr) dxgk_pin_resources;
    
    // [NtDxgkRegisterVailProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11140, 0x388c7 bytes
    // win32k.sys .text:0x12530, 0x3e907 bytes
    // win32k.sys .text:0x11140, 0x388c7 bytes
    //
    _u27(sdk::unknown_ptr) dxgk_register_vail_process;
    
    // [NtDxgkResetTrackedWorkloadStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11154, 0x388c7 bytes
    // win32k.sys .text:0x12544, 0x3e907 bytes
    // win32k.sys .text:0x11154, 0x388c7 bytes
    //
    _u28(sdk::unknown_ptr) dxgk_reset_tracked_workload_statistics;
    
    // [NtDxgkSubmitPresentBltToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11168, 0x388c7 bytes
    // win32k.sys .text:0x1256c, 0x3e907 bytes
    // win32k.sys .text:0x11168, 0x388c7 bytes
    //
    _u29(sdk::unknown_ptr) dxgk_submit_present_blt_to_hw_queue;
    
    // [NtDxgkSubmitPresentToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x1117c, 0x388c7 bytes
    // win32k.sys .text:0x12580, 0x3e907 bytes
    // win32k.sys .text:0x1117c, 0x388c7 bytes
    //
    _u30(sdk::unknown_ptr) dxgk_submit_present_to_hw_queue;
    
    // [NtDxgkUnpinResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11190, 0x388c7 bytes
    // win32k.sys .text:0x12594, 0x3e907 bytes
    // win32k.sys .text:0x11190, 0x388c7 bytes
    //
    _u31(sdk::unknown_ptr) dxgk_unpin_resources;
    
    // [NtDxgkUpdateTrackedWorkload]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x111a4, 0x388c7 bytes
    // win32k.sys .text:0x125a8, 0x3e907 bytes
    // win32k.sys .text:0x111a4, 0x388c7 bytes
    //
    _u32(sdk::unknown_ptr) dxgk_update_tracked_workload;
    
    // [NtDxgkVailConnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x111b8, 0x388c7 bytes
    // win32k.sys .text:0x125bc, 0x3e907 bytes
    // win32k.sys .text:0x111b8, 0x388c7 bytes
    //
    _u33(sdk::unknown_ptr) dxgk_vail_connect;
    
    // [NtDxgkVailDisconnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x111cc, 0x388c7 bytes
    // win32k.sys .text:0x125d0, 0x3e907 bytes
    // win32k.sys .text:0x111cc, 0x388c7 bytes
    //
    _u34(sdk::unknown_ptr) dxgk_vail_disconnect;
    
    // [NtDxgkVailPromoteCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x111e0, 0x388c7 bytes
    // win32k.sys .text:0x125e4, 0x3e907 bytes
    // win32k.sys .text:0x111e0, 0x388c7 bytes
    //
    _u35(sdk::unknown_ptr) dxgk_vail_promote_composition_surface;
    
    // [NtEnableOneCoreTransformMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13b8d0, 0x243e0 bytes
    // win32kbase.sys .text:0x16d590, 0x27ef0 bytes
    // win32kbase.sys .text:0x139020, 0x243e0 bytes
    //
    _u36(sdk::unknown_ptr) enable_one_core_transform_mode;
    
    // [NtFlipObjectAddContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10cb8, 0x388c7 bytes
    // win32k.sys .text:0x12054, 0x3e907 bytes
    // win32k.sys .text:0x10cb8, 0x388c7 bytes
    //
    _u37(sdk::unknown_ptr) flip_object_add_content;
    
    // [NtFlipObjectAddPoolBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10ccc, 0x388c7 bytes
    // win32k.sys .text:0x12068, 0x3e907 bytes
    // win32k.sys .text:0x10ccc, 0x388c7 bytes
    //
    _u38(sdk::unknown_ptr) flip_object_add_pool_buffer;
    
    // [NtFlipObjectConsumerAcquirePresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10ce0, 0x388c7 bytes
    // win32k.sys .text:0x1207c, 0x3e907 bytes
    // win32k.sys .text:0x10ce0, 0x388c7 bytes
    //
    _u39(sdk::unknown_ptr) flip_object_consumer_acquire_present;
    
    // [NtFlipObjectConsumerAdjustUsageReference]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10cf4, 0x388c7 bytes
    // win32k.sys .text:0x12090, 0x3e907 bytes
    // win32k.sys .text:0x10cf4, 0x388c7 bytes
    //
    _u40(sdk::unknown_ptr) flip_object_consumer_adjust_usage_reference;
    
    // [NtFlipObjectConsumerBeginProcessPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10d08, 0x388c7 bytes
    // win32k.sys .text:0x120a4, 0x3e907 bytes
    // win32k.sys .text:0x10d08, 0x388c7 bytes
    //
    _u41(sdk::unknown_ptr) flip_object_consumer_begin_process_present;
    
    // [NtFlipObjectConsumerEndProcessPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10d1c, 0x388c7 bytes
    // win32k.sys .text:0x120b8, 0x3e907 bytes
    // win32k.sys .text:0x10d1c, 0x388c7 bytes
    //
    _u42(sdk::unknown_ptr) flip_object_consumer_end_process_present;
    
    // [NtFlipObjectConsumerPostMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10d30, 0x388c7 bytes
    // win32k.sys .text:0x120cc, 0x3e907 bytes
    // win32k.sys .text:0x10d30, 0x388c7 bytes
    //
    _u43(sdk::unknown_ptr) flip_object_consumer_post_message;
    
    // [NtFlipObjectConsumerQueryBufferInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10d44, 0x388c7 bytes
    // win32k.sys .text:0x120e0, 0x3e907 bytes
    // win32k.sys .text:0x10d44, 0x388c7 bytes
    //
    _u44(sdk::unknown_ptr) flip_object_consumer_query_buffer_info;
    
    // [NtFlipObjectCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10d58, 0x388c7 bytes
    // win32k.sys .text:0x120f4, 0x3e907 bytes
    // win32k.sys .text:0x10d58, 0x388c7 bytes
    //
    _u45(sdk::unknown_ptr) flip_object_create;
    
    // [NtFlipObjectDisconnectEndpoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10d6c, 0x388c7 bytes
    // win32k.sys .text:0x12108, 0x3e907 bytes
    // win32k.sys .text:0x10d6c, 0x388c7 bytes
    //
    _u46(sdk::unknown_ptr) flip_object_disconnect_endpoint;
    
    // [NtFlipObjectEnablePresentStatisticsType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10d80, 0x388c7 bytes
    // win32k.sys .text:0x1211c, 0x3e907 bytes
    // win32k.sys .text:0x10d80, 0x388c7 bytes
    //
    _u47(sdk::unknown_ptr) flip_object_enable_present_statistics_type;
    
    // [NtFlipObjectOpen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10d94, 0x388c7 bytes
    // win32k.sys .text:0x12130, 0x3e907 bytes
    // win32k.sys .text:0x10d94, 0x388c7 bytes
    //
    _u48(sdk::unknown_ptr) flip_object_open;
    
    // [NtFlipObjectPresentCancel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10da8, 0x388c7 bytes
    // win32k.sys .text:0x12144, 0x3e907 bytes
    // win32k.sys .text:0x10da8, 0x388c7 bytes
    //
    _u49(sdk::unknown_ptr) flip_object_present_cancel;
    
    // [NtFlipObjectQueryBufferAvailableEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10dbc, 0x388c7 bytes
    // win32k.sys .text:0x12158, 0x3e907 bytes
    // win32k.sys .text:0x10dbc, 0x388c7 bytes
    //
    _u50(sdk::unknown_ptr) flip_object_query_buffer_available_event;
    
    // [NtFlipObjectQueryEndpointConnected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10dd0, 0x388c7 bytes
    // win32k.sys .text:0x1216c, 0x3e907 bytes
    // win32k.sys .text:0x10dd0, 0x388c7 bytes
    //
    _u51(sdk::unknown_ptr) flip_object_query_endpoint_connected;
    
    // [NtFlipObjectQueryNextMessageToProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10de4, 0x388c7 bytes
    // win32k.sys .text:0x12194, 0x3e907 bytes
    // win32k.sys .text:0x10de4, 0x388c7 bytes
    //
    _u52(sdk::unknown_ptr) flip_object_query_next_message_to_producer;
    
    // [NtFlipObjectReadNextMessageToProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10df8, 0x388c7 bytes
    // win32k.sys .text:0x121a8, 0x3e907 bytes
    // win32k.sys .text:0x10df8, 0x388c7 bytes
    //
    _u53(sdk::unknown_ptr) flip_object_read_next_message_to_producer;
    
    // [NtFlipObjectRemoveContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e0c, 0x388c7 bytes
    // win32k.sys .text:0x121bc, 0x3e907 bytes
    // win32k.sys .text:0x10e0c, 0x388c7 bytes
    //
    _u54(sdk::unknown_ptr) flip_object_remove_content;
    
    // [NtFlipObjectRemovePoolBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e20, 0x388c7 bytes
    // win32k.sys .text:0x121d0, 0x3e907 bytes
    // win32k.sys .text:0x10e20, 0x388c7 bytes
    //
    _u55(sdk::unknown_ptr) flip_object_remove_pool_buffer;
    
    // [NtFlipObjectSetContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e34, 0x388c7 bytes
    // win32k.sys .text:0x121e4, 0x3e907 bytes
    // win32k.sys .text:0x10e34, 0x388c7 bytes
    //
    _u56(sdk::unknown_ptr) flip_object_set_content;
    
    // [NtGdiAddInitialFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117700, 0x1596d bytes
    // win32kfull.sys .text:0x66580, 0x1659e bytes
    // win32kfull.sys .text:0x118630, 0x1596d bytes
    //
    _u57(sdk::unknown_ptr) gdi_add_initial_fonts;
    
    // [NtGdiDdDDIAddSurfaceToSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11244, 0x388c7 bytes
    // win32k.sys .text:0x12648, 0x3e907 bytes
    // win32k.sys .text:0x11244, 0x388c7 bytes
    //
    _u58(sdk::unknown_ptr) gdi_dd_ddi_add_surface_to_swap_chain;
    
    // [NtGdiDdDDICreateBundleObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11370, 0x388c7 bytes
    // win32k.sys .text:0x12774, 0x3e907 bytes
    // win32k.sys .text:0x11370, 0x388c7 bytes
    //
    _u59(sdk::unknown_ptr) gdi_dd_ddi_create_bundle_object;
    
    // [NtGdiDdDDICreateHwContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x113c0, 0x388c7 bytes
    // win32k.sys .text:0x127c4, 0x3e907 bytes
    // win32k.sys .text:0x113c0, 0x388c7 bytes
    //
    _u60(sdk::unknown_ptr) gdi_dd_ddi_create_hw_context;
    
    // [NtGdiDdDDICreateHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x113d4, 0x388c7 bytes
    // win32k.sys .text:0x127d8, 0x3e907 bytes
    // win32k.sys .text:0x113d4, 0x388c7 bytes
    //
    _u61(sdk::unknown_ptr) gdi_dd_ddi_create_hw_queue;
    
    // [NtGdiDdDDICreateProtectedSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x1144c, 0x388c7 bytes
    // win32k.sys .text:0x12850, 0x3e907 bytes
    // win32k.sys .text:0x1144c, 0x388c7 bytes
    //
    _u62(sdk::unknown_ptr) gdi_dd_ddi_create_protected_session;
    
    // [NtGdiDdDDIDestroyHwContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x114ec, 0x388c7 bytes
    // win32k.sys .text:0x128f0, 0x3e907 bytes
    // win32k.sys .text:0x114ec, 0x388c7 bytes
    //
    _u63(sdk::unknown_ptr) gdi_dd_ddi_destroy_hw_context;
    
    // [NtGdiDdDDIDestroyHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11500, 0x388c7 bytes
    // win32k.sys .text:0x12904, 0x3e907 bytes
    // win32k.sys .text:0x11500, 0x388c7 bytes
    //
    _u64(sdk::unknown_ptr) gdi_dd_ddi_destroy_hw_queue;
    
    // [NtGdiDdDDIDestroyProtectedSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11564, 0x388c7 bytes
    // win32k.sys .text:0x12968, 0x3e907 bytes
    // win32k.sys .text:0x11564, 0x388c7 bytes
    //
    _u65(sdk::unknown_ptr) gdi_dd_ddi_destroy_protected_session;
    
    // [NtGdiDdDDIDispMgrCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x1158c, 0x388c7 bytes
    // win32k.sys .text:0x12990, 0x3e907 bytes
    // win32k.sys .text:0x1158c, 0x388c7 bytes
    //
    _u66(sdk::unknown_ptr) gdi_dd_ddi_disp_mgr_create;
    
    // [NtGdiDdDDIDispMgrSourceOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x115a0, 0x388c7 bytes
    // win32k.sys .text:0x129a4, 0x3e907 bytes
    // win32k.sys .text:0x115a0, 0x388c7 bytes
    //
    _u67(sdk::unknown_ptr) gdi_dd_ddi_disp_mgr_source_operation;
    
    // [NtGdiDdDDIDispMgrTargetOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x115b4, 0x388c7 bytes
    // win32k.sys .text:0x129b8, 0x3e907 bytes
    // win32k.sys .text:0x115b4, 0x388c7 bytes
    //
    _u68(sdk::unknown_ptr) gdi_dd_ddi_disp_mgr_target_operation;
    
    // [NtGdiDdDDIExtractBundleObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11618, 0x388c7 bytes
    // win32k.sys .text:0x12a1c, 0x3e907 bytes
    // win32k.sys .text:0x11618, 0x388c7 bytes
    //
    _u69(sdk::unknown_ptr) gdi_dd_ddi_extract_bundle_object;
    
    // [NtGdiDdDDIGetAllocationPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11668, 0x388c7 bytes
    // win32k.sys .text:0x12a6c, 0x3e907 bytes
    // win32k.sys .text:0x11668, 0x388c7 bytes
    //
    _u70(sdk::unknown_ptr) gdi_dd_ddi_get_allocation_priority;
    
    // [NtGdiDdDDIGetMemoryBudgetTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x116f4, 0x388c7 bytes
    // win32k.sys .text:0x12af8, 0x3e907 bytes
    // win32k.sys .text:0x116f4, 0x388c7 bytes
    //
    _u71(sdk::unknown_ptr) gdi_dd_ddi_get_memory_budget_target;
    
    // [NtGdiDdDDIGetMultiPlaneOverlayCaps]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11708, 0x388c7 bytes
    // win32k.sys .text:0x12b0c, 0x3e907 bytes
    // win32k.sys .text:0x11708, 0x388c7 bytes
    //
    _u72(sdk::unknown_ptr) gdi_dd_ddi_get_multi_plane_overlay_caps;
    
    // [NtGdiDdDDIGetPostCompositionCaps]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11744, 0x388c7 bytes
    // win32k.sys .text:0x12b48, 0x3e907 bytes
    // win32k.sys .text:0x11744, 0x388c7 bytes
    //
    _u73(sdk::unknown_ptr) gdi_dd_ddi_get_post_composition_caps;
    
    // [NtGdiDdDDIGetProcessDeviceRemovalSupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x1176c, 0x388c7 bytes
    // win32k.sys .text:0x12b70, 0x3e907 bytes
    // win32k.sys .text:0x1176c, 0x388c7 bytes
    //
    _u74(sdk::unknown_ptr) gdi_dd_ddi_get_process_device_removal_support;
    
    // [NtGdiDdDDIGetProcessSchedulingPriorityBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11780, 0x388c7 bytes
    // win32k.sys .text:0x12b84, 0x3e907 bytes
    // win32k.sys .text:0x11780, 0x388c7 bytes
    //
    _u75(sdk::unknown_ptr) gdi_dd_ddi_get_process_scheduling_priority_band;
    
    // [NtGdiDdDDIGetSharedResourceAdapterLuidFlipManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11820, 0x388c7 bytes
    // win32k.sys .text:0x12c24, 0x3e907 bytes
    // win32k.sys .text:0x11820, 0x388c7 bytes
    //
    _u76(sdk::unknown_ptr) gdi_dd_ddi_get_shared_resource_adapter_luid_flip_manager;
    
    // [NtGdiDdDDIGetYieldPercentage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11834, 0x388c7 bytes
    // win32k.sys .text:0x12c4c, 0x3e907 bytes
    // win32k.sys .text:0x11834, 0x388c7 bytes
    //
    _u77(sdk::unknown_ptr) gdi_dd_ddi_get_yield_percentage;
    
    // [NtGdiDdDDIOpenBundleObjectNtHandleFromName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11988, 0x388c7 bytes
    // win32k.sys .text:0x12da0, 0x3e907 bytes
    // win32k.sys .text:0x11988, 0x388c7 bytes
    //
    _u78(sdk::unknown_ptr) gdi_dd_ddi_open_bundle_object_nt_handle_from_name;
    
    // [NtGdiDdDDIOpenKeyedMutexFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x119c4, 0x388c7 bytes
    // win32k.sys .text:0x12ddc, 0x3e907 bytes
    // win32k.sys .text:0x119c4, 0x388c7 bytes
    //
    _u79(sdk::unknown_ptr) gdi_dd_ddi_open_keyed_mutex_from_nt_handle;
    
    // [NtGdiDdDDIOpenProtectedSessionFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x119ec, 0x388c7 bytes
    // win32k.sys .text:0x12e04, 0x3e907 bytes
    // win32k.sys .text:0x119ec, 0x388c7 bytes
    //
    _u80(sdk::unknown_ptr) gdi_dd_ddi_open_protected_session_from_nt_handle;
    
    // [NtGdiDdDDIPresentRedirected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11b54, 0x388c7 bytes
    // win32k.sys .text:0x12f6c, 0x3e907 bytes
    // win32k.sys .text:0x11b54, 0x388c7 bytes
    //
    _u81(sdk::unknown_ptr) gdi_dd_ddi_present_redirected;
    
    // [NtGdiDdDDIQueryProtectedSessionInfoFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11bcc, 0x388c7 bytes
    // win32k.sys .text:0x12fe4, 0x3e907 bytes
    // win32k.sys .text:0x11bcc, 0x388c7 bytes
    //
    _u82(sdk::unknown_ptr) gdi_dd_ddi_query_protected_session_info_from_nt_handle;
    
    // [NtGdiDdDDIQueryProtectedSessionStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11be0, 0x388c7 bytes
    // win32k.sys .text:0x12ff8, 0x3e907 bytes
    // win32k.sys .text:0x11be0, 0x388c7 bytes
    //
    _u83(sdk::unknown_ptr) gdi_dd_ddi_query_protected_session_status;
    
    // [NtGdiDdDDIRemoveSurfaceFromSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11ce4, 0x388c7 bytes
    // win32k.sys .text:0x130fc, 0x3e907 bytes
    // win32k.sys .text:0x11ce4, 0x388c7 bytes
    //
    _u84(sdk::unknown_ptr) gdi_dd_ddi_remove_surface_from_swap_chain;
    
    // [NtGdiDdDDISetMemoryBudgetTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11dc0, 0x388c7 bytes
    // win32k.sys .text:0x131d8, 0x3e907 bytes
    // win32k.sys .text:0x11dc0, 0x388c7 bytes
    //
    _u85(sdk::unknown_ptr) gdi_dd_ddi_set_memory_budget_target;
    
    // [NtGdiDdDDISetMonitorColorSpaceTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11dd4, 0x388c7 bytes
    // win32k.sys .text:0x131ec, 0x3e907 bytes
    // win32k.sys .text:0x11dd4, 0x388c7 bytes
    //
    _u86(sdk::unknown_ptr) gdi_dd_ddi_set_monitor_color_space_transform;
    
    // [NtGdiDdDDISetProcessDeviceRemovalSupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11de8, 0x388c7 bytes
    // win32k.sys .text:0x13200, 0x3e907 bytes
    // win32k.sys .text:0x11de8, 0x388c7 bytes
    //
    _u87(sdk::unknown_ptr) gdi_dd_ddi_set_process_device_removal_support;
    
    // [NtGdiDdDDISetProcessSchedulingPriorityBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11dfc, 0x388c7 bytes
    // win32k.sys .text:0x13214, 0x3e907 bytes
    // win32k.sys .text:0x11dfc, 0x388c7 bytes
    //
    _u88(sdk::unknown_ptr) gdi_dd_ddi_set_process_scheduling_priority_band;
    
    // [NtGdiDdDDISetYieldPercentage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11e9c, 0x388c7 bytes
    // win32k.sys .text:0x132b4, 0x3e907 bytes
    // win32k.sys .text:0x11e9c, 0x388c7 bytes
    //
    _u89(sdk::unknown_ptr) gdi_dd_ddi_set_yield_percentage;
    
    // [NtGdiDdDDISubmitCommandToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11f28, 0x388c7 bytes
    // win32k.sys .text:0x13340, 0x3e907 bytes
    // win32k.sys .text:0x11f28, 0x388c7 bytes
    //
    _u90(sdk::unknown_ptr) gdi_dd_ddi_submit_command_to_hw_queue;
    
    // [NtGdiDdDDISubmitSignalSyncObjectsToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11f3c, 0x388c7 bytes
    // win32k.sys .text:0x13354, 0x3e907 bytes
    // win32k.sys .text:0x11f3c, 0x388c7 bytes
    //
    _u91(sdk::unknown_ptr) gdi_dd_ddi_submit_signal_sync_objects_to_hw_queue;
    
    // [NtGdiDdDDISubmitWaitForSyncObjectsToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11f50, 0x388c7 bytes
    // win32k.sys .text:0x13368, 0x3e907 bytes
    // win32k.sys .text:0x11f50, 0x388c7 bytes
    //
    _u92(sdk::unknown_ptr) gdi_dd_ddi_submit_wait_for_sync_objects_to_hw_queue;
    
    // [NtGdiDdDDIUnOrderedPresentSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11f78, 0x388c7 bytes
    // win32k.sys .text:0x13390, 0x3e907 bytes
    // win32k.sys .text:0x11f78, 0x388c7 bytes
    //
    _u93(sdk::unknown_ptr) gdi_dd_ddi_un_ordered_present_swap_chain;
    
    // [NtGdiDdDDIDDisplayEnum]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11488, 0x388c7 bytes
    // win32k.sys .text:0x1288c, 0x3e907 bytes
    // win32k.sys .text:0x11488, 0x388c7 bytes
    //
    _u94(sdk::unknown_ptr) gdi_dd_ddid_display_enum;
    
    // [NtGdiEnsureDpiDepDefaultGuiFontForPlateau]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ae5c0, 0x1596d bytes
    // win32kfull.sys .text:0x2af4c0, 0x1659e bytes
    // win32kfull.sys .text:0x2ae530, 0x1596d bytes
    //
    _u95(sdk::unknown_ptr) gdi_ensure_dpi_dep_default_gui_font_for_plateau;
    
    // [NtGdiGetBitmapDpiScaleValue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ae640, 0x1596d bytes
    // win32kfull.sys .text:0x2af540, 0x1659e bytes
    // win32kfull.sys .text:0x2ae5b0, 0x1596d bytes
    //
    _u96(sdk::unknown_ptr) gdi_get_bitmap_dpi_scale_value;
    
    // [NtGdiGetDCDpiScaleValue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x150370, 0x1596d bytes
    // win32kfull.sys .text:0x15f5f0, 0x1659e bytes
    // win32kfull.sys .text:0x1512b0, 0x1596d bytes
    //
    _u97(sdk::unknown_ptr) gdi_get_dc_dpi_scale_value;
    
    // [NtGdiGetDeviceGammaRamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2b1fb0, 0x13864 bytes
    // win32kfull.sys .text:0x2b6610, 0x1596d bytes
    // win32kfull.sys .text:0x2b6580, 0x1596d bytes
    //
    _u98(sdk::unknown_ptr) gdi_get_device_gamma_ramp;
    
    // [NtGdiScaleRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2afe50, 0x1596d bytes
    // win32kfull.sys .text:0x2b0d60, 0x1659e bytes
    // win32kfull.sys .text:0x2afdc0, 0x1596d bytes
    //
    _u99(sdk::unknown_ptr) gdi_scale_rgn;
    
    // [NtGdiScaleValues]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2afe70, 0x1596d bytes
    // win32kfull.sys .text:0x2b0d80, 0x1659e bytes
    // win32kfull.sys .text:0x2afde0, 0x1596d bytes
    //
    _v00(sdk::unknown_ptr) gdi_scale_values;
    
    // [NtGdiSetDeviceGammaRamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2b2440, 0x13864 bytes
    // win32kfull.sys .text:0x2b6a40, 0x1596d bytes
    // win32kfull.sys .text:0x2b69b0, 0x1596d bytes
    //
    _v01(sdk::unknown_ptr) gdi_set_device_gamma_ramp;
    
    // [NtInputSpaceRegionFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13b900, 0x243e0 bytes
    // win32kbase.sys .text:0x16d5c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x139050, 0x243e0 bytes
    //
    _v02(sdk::unknown_ptr) input_space_region_from_point;
    
    // [NtIsOneCoreTransformMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaba00, 0x243e0 bytes
    // win32kbase.sys .text:0xbc0e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa16d0, 0x243e0 bytes
    //
    _v03(sdk::unknown_ptr) is_one_core_transform_mode;
    
    // [NtMapVisualRelativePoints]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12c870, 0x243e0 bytes
    // win32kbase.sys .text:0x15ff40, 0x27ef0 bytes
    // win32kbase.sys .text:0x12a0f0, 0x243e0 bytes
    //
    _v04(sdk::unknown_ptr) map_visual_relative_points;
    
    // [NtMinGetInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xe94c, 0x388c7 bytes
    // win32k.sys .text:0xf9b8, 0x3e907 bytes
    // win32k.sys .text:0xe94c, 0x388c7 bytes
    //
    _v05(sdk::unknown_ptr) min_get_input_transform;
    
    // [NtMinInteropCoreMessagingWithInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xe904, 0x388c7 bytes
    // win32k.sys .text:0xf970, 0x3e907 bytes
    // win32k.sys .text:0xe904, 0x388c7 bytes
    //
    _v06(sdk::unknown_ptr) min_interop_core_messaging_with_input;
    
    // [NtMinQPeekForInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xe840, 0x388c7 bytes
    // win32k.sys .text:0xf8cc, 0x3e907 bytes
    // win32k.sys .text:0xe840, 0x388c7 bytes
    //
    _v07(sdk::unknown_ptr) min_q_peek_for_input;
    
    // [NtMinQSuspendInputProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xe928, 0x388c7 bytes
    // win32k.sys .text:0xf994, 0x3e907 bytes
    // win32k.sys .text:0xe928, 0x388c7 bytes
    //
    _v08(sdk::unknown_ptr) min_q_suspend_input_processing;
    
    // [NtMinQUpdateWakeMask]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xe8e0, 0x388c7 bytes
    // win32k.sys .text:0xf94c, 0x3e907 bytes
    // win32k.sys .text:0xe8e0, 0x388c7 bytes
    //
    _v09(sdk::unknown_ptr) min_q_update_wake_mask;
    
    // [NtMITAccessibilityTimerNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13bae0, 0x243e0 bytes
    // win32kbase.sys .text:0x16d7a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x139230, 0x243e0 bytes
    //
    _v10(sdk::unknown_ptr) mit_accessibility_timer_notification;
    
    // [NtMITActivateInputProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x27e90, 0x243e0 bytes
    // win32kbase.sys .text:0xcf350, 0x27ef0 bytes
    // win32kbase.sys .text:0x7a9f0, 0x243e0 bytes
    //
    _v11(sdk::unknown_ptr) mit_activate_input_processing;
    
    // [NtMITCoreMsgKOpenConnectionTo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb84c0, 0x243e0 bytes
    // win32kbase.sys .text:0xcb800, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2b00, 0x243e0 bytes
    //
    _v12(sdk::unknown_ptr) mit_core_msg_k_open_connection_to;
    
    // [NtMITDeactivateInputProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13bff0, 0x243e0 bytes
    // win32kbase.sys .text:0x16de80, 0x27ef0 bytes
    // win32kbase.sys .text:0x139740, 0x243e0 bytes
    //
    _v13(sdk::unknown_ptr) mit_deactivate_input_processing;
    
    // [NtMITDisableMouseIntercept]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13c4f0, 0x243e0 bytes
    // win32kbase.sys .text:0x16e230, 0x27ef0 bytes
    // win32kbase.sys .text:0x139c40, 0x243e0 bytes
    //
    _v14(sdk::unknown_ptr) mit_disable_mouse_intercept;
    
    // [NtMITDispatchCompletion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c060, 0x243e0 bytes
    // win32kbase.sys .text:0x1f460, 0x27ef0 bytes
    // win32kbase.sys .text:0x60310, 0x243e0 bytes
    //
    _v15(sdk::unknown_ptr) mit_dispatch_completion;
    
    // [NtMITEnableMouseIntercept]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13ca10, 0x243e0 bytes
    // win32kbase.sys .text:0x16e600, 0x27ef0 bytes
    // win32kbase.sys .text:0x13a160, 0x243e0 bytes
    //
    _v16(sdk::unknown_ptr) mit_enable_mouse_intercept;
    
    // [NtMITGetCursorUpdateHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x28070, 0x243e0 bytes
    // win32kbase.sys .text:0xbe8c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7abd0, 0x243e0 bytes
    //
    _v17(sdk::unknown_ptr) mit_get_cursor_update_handle;
    
    // [NtMITInitMinuserThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13cf60, 0x243e0 bytes
    // win32kbase.sys .text:0x16ea00, 0x27ef0 bytes
    // win32kbase.sys .text:0x13a6b0, 0x243e0 bytes
    //
    _v18(sdk::unknown_ptr) mit_init_minuser_thread;
    
    // [NtMITMinuserSetInputTransformOffset]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfbd8, 0x388c7 bytes
    // win32k.sys .text:0x10e4c, 0x3e907 bytes
    // win32k.sys .text:0xfbd8, 0x388c7 bytes
    //
    _v19(sdk::unknown_ptr) mit_minuser_set_input_transform_offset;
    
    // [NtMITMinuserWindowDestroyed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13d620, 0x243e0 bytes
    // win32kbase.sys .text:0x16ec30, 0x27ef0 bytes
    // win32kbase.sys .text:0x13ad70, 0x243e0 bytes
    //
    _v20(sdk::unknown_ptr) mit_minuser_window_destroyed;
    
    // [NtMITPostMouseInputMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13dad0, 0x243e0 bytes
    // win32kbase.sys .text:0x16efe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13b220, 0x243e0 bytes
    //
    _v21(sdk::unknown_ptr) mit_post_mouse_input_message;
    
    // [NtMITPostThreadEventMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13dbf0, 0x243e0 bytes
    // win32kbase.sys .text:0x16f1b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13b340, 0x243e0 bytes
    //
    _v22(sdk::unknown_ptr) mit_post_thread_event_message;
    
    // [NtMITPostWindowEventMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13dd10, 0x243e0 bytes
    // win32kbase.sys .text:0x16f360, 0x27ef0 bytes
    // win32kbase.sys .text:0x13b460, 0x243e0 bytes
    //
    _v23(sdk::unknown_ptr) mit_post_window_event_message;
    
    // [NtMITPrepareReceiveInputMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfbfc, 0x388c7 bytes
    // win32k.sys .text:0x10e70, 0x3e907 bytes
    // win32k.sys .text:0xfbfc, 0x388c7 bytes
    //
    _v24(sdk::unknown_ptr) mit_prepare_receive_input_message;
    
    // [NtMITPrepareSendInputMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfc38, 0x388c7 bytes
    // win32k.sys .text:0x10eac, 0x3e907 bytes
    // win32k.sys .text:0xfc38, 0x388c7 bytes
    //
    _v25(sdk::unknown_ptr) mit_prepare_send_input_message;
    
    // [NtMITProcessDelegateCapturedPointers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfc60, 0x388c7 bytes
    // win32k.sys .text:0x10ed4, 0x3e907 bytes
    // win32k.sys .text:0xfc60, 0x388c7 bytes
    //
    _v26(sdk::unknown_ptr) mit_process_delegate_captured_pointers;
    
    // [NtMITSetInputCallbacks]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb89b0, 0x243e0 bytes
    // win32kbase.sys .text:0xbc7a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa9c00, 0x243e0 bytes
    //
    _v27(sdk::unknown_ptr) mit_set_input_callbacks;
    
    // [NtMITSetInputDelegationMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xac4f0, 0x243e0 bytes
    // win32kbase.sys .text:0xbedb0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa2c60, 0x243e0 bytes
    //
    _v28(sdk::unknown_ptr) mit_set_input_delegation_mode;
    
    // [NtMITSetInputObservationState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13dea0, 0x243e0 bytes
    // win32kbase.sys .text:0x16f530, 0x27ef0 bytes
    // win32kbase.sys .text:0x13b5f0, 0x243e0 bytes
    //
    _v29(sdk::unknown_ptr) mit_set_input_observation_state;
    
    // [NtMITSetKeyboardInputRoutingPolicy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc5f30, 0x243e0 bytes
    // win32kbase.sys .text:0xd7250, 0x27ef0 bytes
    // win32kbase.sys .text:0xbeef0, 0x243e0 bytes
    //
    _v30(sdk::unknown_ptr) mit_set_keyboard_input_routing_policy;
    
    // [NtMITSetKeyboardOverriderState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13df50, 0x243e0 bytes
    // win32kbase.sys .text:0x16f580, 0x27ef0 bytes
    // win32kbase.sys .text:0x13b6a0, 0x243e0 bytes
    //
    _v31(sdk::unknown_ptr) mit_set_keyboard_overrider_state;
    
    // [NtMITSetLastInputRecipient]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13e010, 0x243e0 bytes
    // win32kbase.sys .text:0x16f5e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13b760, 0x243e0 bytes
    //
    _v32(sdk::unknown_ptr) mit_set_last_input_recipient;
    
    // [NtMITSynthesizeKeyboardInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13e3c0, 0x243e0 bytes
    // win32kbase.sys .text:0x5ff0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13bb10, 0x243e0 bytes
    //
    _v33(sdk::unknown_ptr) mit_synthesize_keyboard_input;
    
    // [NtMITSynthesizeMouseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13e760, 0x243e0 bytes
    // win32kbase.sys .text:0x16f650, 0x27ef0 bytes
    // win32kbase.sys .text:0x13beb0, 0x243e0 bytes
    //
    _v34(sdk::unknown_ptr) mit_synthesize_mouse_input;
    
    // [NtMITSynthesizeTouchInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13e910, 0x243e0 bytes
    // win32kbase.sys .text:0x16f890, 0x27ef0 bytes
    // win32kbase.sys .text:0x13c060, 0x243e0 bytes
    //
    _v35(sdk::unknown_ptr) mit_synthesize_touch_input;
    
    // [NtMITUninitMinuserThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13ea70, 0x243e0 bytes
    // win32kbase.sys .text:0x16fa80, 0x27ef0 bytes
    // win32kbase.sys .text:0x13c1c0, 0x243e0 bytes
    //
    _v36(sdk::unknown_ptr) mit_uninit_minuser_thread;
    
    // [NtMITUpdateInputGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2c050, 0x243e0 bytes
    // win32kbase.sys .text:0xcdb00, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2770, 0x243e0 bytes
    //
    _v37(sdk::unknown_ptr) mit_update_input_globals;
    
    // [NtModerncoreBeginLayoutUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfca8, 0x388c7 bytes
    // win32k.sys .text:0x10ef8, 0x3e907 bytes
    // win32k.sys .text:0xfca8, 0x388c7 bytes
    //
    _v38(sdk::unknown_ptr) moderncore_begin_layout_update;
    
    // [NtModerncoreCreateDCompositionHwndTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfccc, 0x388c7 bytes
    // win32k.sys .text:0x10f1c, 0x3e907 bytes
    // win32k.sys .text:0xfccc, 0x388c7 bytes
    //
    _v39(sdk::unknown_ptr) moderncore_create_d_composition_hwnd_target;
    
    // [NtModerncoreCreateGDIHwndTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfdc8, 0x388c7 bytes
    // win32k.sys .text:0x11018, 0x3e907 bytes
    // win32k.sys .text:0xfdc8, 0x388c7 bytes
    //
    _v40(sdk::unknown_ptr) moderncore_create_gdi_hwnd_target;
    
    // [NtModerncoreDestroyDCompositionHwndTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfcf0, 0x388c7 bytes
    // win32k.sys .text:0x10f40, 0x3e907 bytes
    // win32k.sys .text:0xfcf0, 0x388c7 bytes
    //
    _v41(sdk::unknown_ptr) moderncore_destroy_d_composition_hwnd_target;
    
    // [NtModerncoreDestroyGDIHwndTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfdec, 0x388c7 bytes
    // win32k.sys .text:0x1103c, 0x3e907 bytes
    // win32k.sys .text:0xfdec, 0x388c7 bytes
    //
    _v42(sdk::unknown_ptr) moderncore_destroy_gdi_hwnd_target;
    
    // [NtModerncoreEnableResizeLayoutSynchronization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfd14, 0x388c7 bytes
    // win32k.sys .text:0x10f64, 0x3e907 bytes
    // win32k.sys .text:0xfd14, 0x388c7 bytes
    //
    _v43(sdk::unknown_ptr) moderncore_enable_resize_layout_synchronization;
    
    // [NtModerncoreGetNavigationWindowVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfd80, 0x388c7 bytes
    // win32k.sys .text:0x10fd0, 0x3e907 bytes
    // win32k.sys .text:0xfd80, 0x388c7 bytes
    //
    _v44(sdk::unknown_ptr) moderncore_get_navigation_window_visual;
    
    // [NtModerncoreGetResizeDCompositionSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfd38, 0x388c7 bytes
    // win32k.sys .text:0x10f88, 0x3e907 bytes
    // win32k.sys .text:0xfd38, 0x388c7 bytes
    //
    _v45(sdk::unknown_ptr) moderncore_get_resize_d_composition_synchronization_object;
    
    // [NtModerncoreGetWindowContentVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfe10, 0x388c7 bytes
    // win32k.sys .text:0x11060, 0x3e907 bytes
    // win32k.sys .text:0xfe10, 0x388c7 bytes
    //
    _v46(sdk::unknown_ptr) moderncore_get_window_content_visual;
    
    // [NtModerncoreIdleTimerThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfe34, 0x388c7 bytes
    // win32k.sys .text:0x11084, 0x3e907 bytes
    // win32k.sys .text:0xfe34, 0x388c7 bytes
    //
    _v47(sdk::unknown_ptr) moderncore_idle_timer_thread;
    
    // [NtModerncoreIsResizeLayoutSynchronizationEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfd5c, 0x388c7 bytes
    // win32k.sys .text:0x10fac, 0x3e907 bytes
    // win32k.sys .text:0xfd5c, 0x388c7 bytes
    //
    _v48(sdk::unknown_ptr) moderncore_is_resize_layout_synchronization_enabled;
    
    // [NtModerncoreProcessConnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfe58, 0x388c7 bytes
    // win32k.sys .text:0x110a8, 0x3e907 bytes
    // win32k.sys .text:0xfe58, 0x388c7 bytes
    //
    _v49(sdk::unknown_ptr) moderncore_process_connect;
    
    // [NtModerncoreRegisterEnhancedNavigationWindowHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfda4, 0x388c7 bytes
    // win32k.sys .text:0x10ff4, 0x3e907 bytes
    // win32k.sys .text:0xfda4, 0x388c7 bytes
    //
    _v50(sdk::unknown_ptr) moderncore_register_enhanced_navigation_window_handle;
    
    // [NtModerncoreRegisterNavigationWindowHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfe84, 0x388c7 bytes
    // win32k.sys .text:0x110d4, 0x3e907 bytes
    // win32k.sys .text:0xfe84, 0x388c7 bytes
    //
    _v51(sdk::unknown_ptr) moderncore_register_navigation_window_handle;
    
    // [NtModerncoreSetNavigationServiceSid]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfea8, 0x388c7 bytes
    // win32k.sys .text:0x110f8, 0x3e907 bytes
    // win32k.sys .text:0xfea8, 0x388c7 bytes
    //
    _v52(sdk::unknown_ptr) moderncore_set_navigation_service_sid;
    
    // [NtModerncoreUnregisterNavigationWindowHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfecc, 0x388c7 bytes
    // win32k.sys .text:0x1111c, 0x3e907 bytes
    // win32k.sys .text:0xfecc, 0x388c7 bytes
    //
    _v53(sdk::unknown_ptr) moderncore_unregister_navigation_window_handle;
    
    // [NtOpenCompositionSurfaceSwapChainHandleInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x32180, 0x1eb80 bytes
    // win32k.sys .text:0x10ed4, 0x388c7 bytes
    // win32k.sys .text:0x10ed4, 0x388c7 bytes
    //
    _v54(sdk::unknown_ptr) open_composition_surface_swap_chain_handle_info;
    
    // [NtRIMAreSiblingDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163050, 0x243e0 bytes
    // win32kbase.sys .text:0x196fd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x161440, 0x243e0 bytes
    //
    _v55(sdk::unknown_ptr) rim_are_sibling_devices;
    
    // [NtRIMDeviceIoControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1630b0, 0x243e0 bytes
    // win32kbase.sys .text:0x197030, 0x27ef0 bytes
    // win32kbase.sys .text:0x1614a0, 0x243e0 bytes
    //
    _v56(sdk::unknown_ptr) rim_device_io_control;
    
    // [NtRIMEnableMonitorMappingForDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163160, 0x243e0 bytes
    // win32kbase.sys .text:0x1970a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x161550, 0x243e0 bytes
    //
    _v57(sdk::unknown_ptr) rim_enable_monitor_mapping_for_device;
    
    // [NtRIMFreeInputBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163630, 0x243e0 bytes
    // win32kbase.sys .text:0x197470, 0x27ef0 bytes
    // win32kbase.sys .text:0x161a20, 0x243e0 bytes
    //
    _v58(sdk::unknown_ptr) rim_free_input_buffer;
    
    // [NtRIMGetDevicePreparsedData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163670, 0x243e0 bytes
    // win32kbase.sys .text:0x197490, 0x27ef0 bytes
    // win32kbase.sys .text:0x161a60, 0x243e0 bytes
    //
    _v59(sdk::unknown_ptr) rim_get_device_preparsed_data;
    
    // [NtRIMGetDeviceProperties]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163700, 0x243e0 bytes
    // win32kbase.sys .text:0x1974d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x161af0, 0x243e0 bytes
    //
    _v60(sdk::unknown_ptr) rim_get_device_properties;
    
    // [NtRIMGetDevicePropertiesLockfree]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163760, 0x243e0 bytes
    // win32kbase.sys .text:0x1974f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x161b50, 0x243e0 bytes
    //
    _v61(sdk::unknown_ptr) rim_get_device_properties_lockfree;
    
    // [NtRIMGetPhysicalDeviceRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163780, 0x243e0 bytes
    // win32kbase.sys .text:0x197510, 0x27ef0 bytes
    // win32kbase.sys .text:0x161b70, 0x243e0 bytes
    //
    _v62(sdk::unknown_ptr) rim_get_physical_device_rect;
    
    // [NtRIMGetSourceProcessId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1637d0, 0x243e0 bytes
    // win32kbase.sys .text:0x197560, 0x27ef0 bytes
    // win32kbase.sys .text:0x161bc0, 0x243e0 bytes
    //
    _v63(sdk::unknown_ptr) rim_get_source_process_id;
    
    // [NtRIMOnPnpNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14250, 0x243e0 bytes
    // win32kbase.sys .text:0x784f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5a520, 0x243e0 bytes
    //
    _v64(sdk::unknown_ptr) rim_on_pnp_notification;
    
    // [NtRIMOnTimerNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163840, 0x243e0 bytes
    // win32kbase.sys .text:0x197950, 0x27ef0 bytes
    // win32kbase.sys .text:0x161c30, 0x243e0 bytes
    //
    _v65(sdk::unknown_ptr) rim_on_timer_notification;
    
    // [NtRIMQueryDevicePath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163d10, 0x243e0 bytes
    // win32kbase.sys .text:0x197d00, 0x27ef0 bytes
    // win32kbase.sys .text:0x162100, 0x243e0 bytes
    //
    _v66(sdk::unknown_ptr) rim_query_device_path;
    
    // [NtRIMReadInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc3760, 0x243e0 bytes
    // win32kbase.sys .text:0xd89a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x57360, 0x243e0 bytes
    //
    _v67(sdk::unknown_ptr) rim_read_input;
    
    // [NtRIMSetExtendedDeviceProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x163fb0, 0x243e0 bytes
    // win32kbase.sys .text:0x1981a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1623a0, 0x243e0 bytes
    //
    _v68(sdk::unknown_ptr) rim_set_extended_device_property;
    
    // [NtRIMSetTestModeStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x164090, 0x243e0 bytes
    // win32kbase.sys .text:0x198280, 0x27ef0 bytes
    // win32kbase.sys .text:0x162480, 0x243e0 bytes
    //
    _v69(sdk::unknown_ptr) rim_set_test_mode_status;
    
    // [NtRIMUnregisterForInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1640c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1982b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1624b0, 0x243e0 bytes
    //
    _v70(sdk::unknown_ptr) rim_unregister_for_input;
    
    // [NtSetCompositionSurfaceBufferUsage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10f4c, 0x388c7 bytes
    // win32k.sys .text:0x12300, 0x3e907 bytes
    // win32k.sys .text:0x10f4c, 0x388c7 bytes
    //
    _v71(sdk::unknown_ptr) set_composition_surface_buffer_usage;
    
    // [NtSetCursorInputSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13ef90, 0x243e0 bytes
    // win32kbase.sys .text:0x16fe80, 0x27ef0 bytes
    // win32kbase.sys .text:0x13c6f0, 0x243e0 bytes
    //
    _v72(sdk::unknown_ptr) set_cursor_input_space;
    
    // [NtSetPointerDeviceInputSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13f4a0, 0x243e0 bytes
    // win32kbase.sys .text:0x170290, 0x27ef0 bytes
    // win32kbase.sys .text:0x13cc00, 0x243e0 bytes
    //
    _v73(sdk::unknown_ptr) set_pointer_device_input_space;
    
    // [NtSetShellCursorState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13f680, 0x243e0 bytes
    // win32kbase.sys .text:0x1704d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13cde0, 0x243e0 bytes
    //
    _v74(sdk::unknown_ptr) set_shell_cursor_state;
    
    // [NtTokenManagerCreateFlipObjectReturnTokenHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10fec, 0x388c7 bytes
    // win32k.sys .text:0x123a0, 0x3e907 bytes
    // win32k.sys .text:0x10fec, 0x388c7 bytes
    //
    _v75(sdk::unknown_ptr) token_manager_create_flip_object_return_token_handle;
    
    // [NtTokenManagerCreateFlipObjectTokenHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x11000, 0x388c7 bytes
    // win32k.sys .text:0x123b4, 0x3e907 bytes
    // win32k.sys .text:0x11000, 0x388c7 bytes
    //
    _v76(sdk::unknown_ptr) token_manager_create_flip_object_token_handle;
    
    // [NtUserAddVisualIdentifier]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13f880, 0x243e0 bytes
    // win32kbase.sys .text:0x1708a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13cfe0, 0x243e0 bytes
    //
    _v77(sdk::unknown_ptr) user_add_visual_identifier;
    
    // [NtUserBeginLayoutUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1223a0, 0x1596d bytes
    // win32kfull.sys .text:0x10e6b0, 0x1659e bytes
    // win32kfull.sys .text:0x1232e0, 0x1596d bytes
    //
    _v78(sdk::unknown_ptr) user_begin_layout_update;
    
    // [NtUserCallHwnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xfa4d0, 0x13864 bytes
    // win32kfull.sys .text:0x573e0, 0x1596d bytes
    // win32kfull.sys .text:0x57800, 0x1596d bytes
    //
    _v79(sdk::unknown_ptr) user_call_hwnd;
    
    // [NtUserCallHwndLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x41900, 0x13864 bytes
    // win32kfull.sys .text:0x572a0, 0x1596d bytes
    // win32kfull.sys .text:0x576c0, 0x1596d bytes
    //
    _v80(sdk::unknown_ptr) user_call_hwnd_lock;
    
    // [NtUserCallHwndOpt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1255a0, 0x13864 bytes
    // win32kfull.sys .text:0x127dc0, 0x1596d bytes
    // win32kfull.sys .text:0x128d00, 0x1596d bytes
    //
    _v81(sdk::unknown_ptr) user_call_hwnd_opt;
    
    // [NtUserCallHwndParam]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xf830, 0x13864 bytes
    // win32kfull.sys .text:0x10bde0, 0x1596d bytes
    // win32kfull.sys .text:0x10cd10, 0x1596d bytes
    //
    _v82(sdk::unknown_ptr) user_call_hwnd_param;
    
    // [NtUserCallHwndParamLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x3ab50, 0x13864 bytes
    // win32kfull.sys .text:0x109880, 0x1596d bytes
    // win32kfull.sys .text:0x10a7b0, 0x1596d bytes
    //
    _v83(sdk::unknown_ptr) user_call_hwnd_param_lock;
    
    // [NtUserCallNoParam]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xa8010, 0x13864 bytes
    // win32kfull.sys .text:0x588f0, 0x1596d bytes
    // win32kfull.sys .text:0x58d10, 0x1596d bytes
    //
    _v84(sdk::unknown_ptr) user_call_no_param;
    
    // [NtUserCallOneParam]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xa8070, 0x13864 bytes
    // win32kfull.sys .text:0x58530, 0x1596d bytes
    // win32kfull.sys .text:0x58950, 0x1596d bytes
    //
    _v85(sdk::unknown_ptr) user_call_one_param;
    
    // [NtUserCallTwoParam]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xa7fa0, 0x13864 bytes
    // win32kfull.sys .text:0x57ee0, 0x1596d bytes
    // win32kfull.sys .text:0x58300, 0x1596d bytes
    //
    _v86(sdk::unknown_ptr) user_call_two_param;
    
    // [NtUserCompositionInputSinkViewInstanceIdFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4570, 0x1596d bytes
    // win32kfull.sys .text:0x2640, 0x1659e bytes
    // win32kfull.sys .text:0x4920, 0x1596d bytes
    //
    _v87(sdk::unknown_ptr) user_composition_input_sink_view_instance_id_from_point;
    
    // [NtUserConfigureActivationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13f990, 0x243e0 bytes
    // win32kbase.sys .text:0xce0c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13d0f0, 0x243e0 bytes
    //
    _v88(sdk::unknown_ptr) user_configure_activation_object;
    
    // [NtUserConfirmResizeCommit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f8230, 0x1596d bytes
    // win32kfull.sys .text:0x1f4c00, 0x1659e bytes
    // win32kfull.sys .text:0x1f80a0, 0x1596d bytes
    //
    _v89(sdk::unknown_ptr) user_confirm_resize_commit;
    
    // [NtUserCreateActivationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb4ba0, 0x243e0 bytes
    // win32kbase.sys .text:0xccd70, 0x27ef0 bytes
    // win32kbase.sys .text:0xae200, 0x243e0 bytes
    //
    _v90(sdk::unknown_ptr) user_create_activation_object;
    
    // [NtUserCreateEmptyCursorObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xadca0, 0x1596d bytes
    // win32kfull.sys .text:0xaae20, 0x1659e bytes
    // win32kfull.sys .text:0xae810, 0x1596d bytes
    //
    _v91(sdk::unknown_ptr) user_create_empty_cursor_object;
    
    // [NtUserCreatePalmRejectionDelayZone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13fb90, 0x243e0 bytes
    // win32kbase.sys .text:0x170d90, 0x27ef0 bytes
    // win32kbase.sys .text:0x13d280, 0x243e0 bytes
    //
    _v92(sdk::unknown_ptr) user_create_palm_rejection_delay_zone;
    
    // [NtUserDeferWindowDpiChanges]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121bf0, 0x1596d bytes
    // win32kfull.sys .text:0x110040, 0x1659e bytes
    // win32kfull.sys .text:0x122b30, 0x1596d bytes
    //
    _v93(sdk::unknown_ptr) user_defer_window_dpi_changes;
    
    // [NtUserDestroyActivationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53c0, 0x243e0 bytes
    // win32kbase.sys .text:0x170f70, 0x27ef0 bytes
    // win32kbase.sys .text:0x53c0, 0x243e0 bytes
    //
    _v94(sdk::unknown_ptr) user_destroy_activation_object;
    
    // [NtUserDestroyPalmRejectionDelayZone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13fdc0, 0x243e0 bytes
    // win32kbase.sys .text:0x1710d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13d3e0, 0x243e0 bytes
    //
    _v95(sdk::unknown_ptr) user_destroy_palm_rejection_delay_zone;
    
    // [NtUserDownlevelTouchpad]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x140570, 0x243e0 bytes
    // win32kbase.sys .text:0x171a10, 0x27ef0 bytes
    // win32kbase.sys .text:0x13db90, 0x243e0 bytes
    //
    _v96(sdk::unknown_ptr) user_downlevel_touchpad;
    
    // [NtUserEnableMouseInPointerForWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x111d20, 0x1596d bytes
    // win32kfull.sys .text:0x10b1e0, 0x1659e bytes
    // win32kfull.sys .text:0x112c50, 0x1596d bytes
    //
    _v97(sdk::unknown_ptr) user_enable_mouse_in_pointer_for_window;
    
    // [NtUserEnableResizeLayoutSynchronization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x116920, 0x1596d bytes
    // win32kfull.sys .text:0x1094c0, 0x1659e bytes
    // win32kfull.sys .text:0x117850, 0x1596d bytes
    //
    _v98(sdk::unknown_ptr) user_enable_resize_layout_synchronization;
    
    // [NtUserEnableSoftwareCursorForScreenCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f92e0, 0x1596d bytes
    // win32kfull.sys .text:0x1f5b90, 0x1659e bytes
    // win32kfull.sys .text:0x1f9150, 0x1596d bytes
    //
    _v99(sdk::unknown_ptr) user_enable_software_cursor_for_screen_capture;
    
    // [NtUserEnableWindowGDIScaledDpiMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14eb60, 0x1596d bytes
    // win32kfull.sys .text:0x142440, 0x1659e bytes
    // win32kfull.sys .text:0x14faa0, 0x1596d bytes
    //
    _w00(sdk::unknown_ptr) user_enable_window_gdi_scaled_dpi_message;
    
    // [NtUserEnableWindowResizeOptimization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x126aa0, 0x1596d bytes
    // win32kfull.sys .text:0x1166e0, 0x1659e bytes
    // win32kfull.sys .text:0x1279e0, 0x1596d bytes
    //
    _w01(sdk::unknown_ptr) user_enable_window_resize_optimization;
    
    // [NtUserForceWindowToDpiForTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f96e0, 0x1596d bytes
    // win32kfull.sys .text:0x1f5ed0, 0x1659e bytes
    // win32kfull.sys .text:0x1f9550, 0x1596d bytes
    //
    _w02(sdk::unknown_ptr) user_force_window_to_dpi_for_test;
    
    // [NtUserFunctionalizeDisplayConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x140bc0, 0x243e0 bytes
    // win32kbase.sys .text:0x171fd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13e1e0, 0x243e0 bytes
    //
    _w03(sdk::unknown_ptr) user_functionalize_display_config;
    
    // [NtUserGetActiveProcessesDpis]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11ea20, 0x1596d bytes
    // win32kfull.sys .text:0x10e570, 0x1659e bytes
    // win32kfull.sys .text:0x11f920, 0x1596d bytes
    //
    _w04(sdk::unknown_ptr) user_get_active_processes_dpis;
    
    // [NtUserGetCurrentDpiInfoForWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x107120, 0x1596d bytes
    // win32kfull.sys .text:0xff120, 0x1659e bytes
    // win32kfull.sys .text:0x108050, 0x1596d bytes
    //
    _w05(sdk::unknown_ptr) user_get_current_dpi_info_for_window;
    
    // [NtUserGetCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1110c0, 0x1596d bytes
    // win32kfull.sys .text:0x13be50, 0x1659e bytes
    // win32kfull.sys .text:0x111ff0, 0x1596d bytes
    //
    _w06(sdk::unknown_ptr) user_get_cursor;
    
    // [NtUserGetDpiForCurrentProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11ca90, 0x1596d bytes
    // win32kfull.sys .text:0x10ca40, 0x1659e bytes
    // win32kfull.sys .text:0x11d9c0, 0x1596d bytes
    //
    _w07(sdk::unknown_ptr) user_get_dpi_for_current_process;
    
    // [NtUserGetExtendedPointerDeviceProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x141250, 0x243e0 bytes
    // win32kbase.sys .text:0x1728a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13e870, 0x243e0 bytes
    //
    _w08(sdk::unknown_ptr) user_get_extended_pointer_device_property;
    
    // [NtUserGetHDevName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x220d0, 0x243e0 bytes
    // win32kbase.sys .text:0x7e1d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x658f0, 0x243e0 bytes
    //
    _w09(sdk::unknown_ptr) user_get_h_dev_name;
    
    // [NtUserGetInputContainerId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1413f0, 0x243e0 bytes
    // win32kbase.sys .text:0x172a30, 0x27ef0 bytes
    // win32kbase.sys .text:0x13ea10, 0x243e0 bytes
    //
    _w10(sdk::unknown_ptr) user_get_input_container_id;
    
    // [NtUserGetInteractiveCtrlSupportedWaveforms]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fae60, 0x1596d bytes
    // win32kfull.sys .text:0x1f7800, 0x1659e bytes
    // win32kfull.sys .text:0x1facd0, 0x1596d bytes
    //
    _w11(sdk::unknown_ptr) user_get_interactive_ctrl_supported_waveforms;
    
    // [NtUserGetKeyboardLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x67ba0, 0x243e0 bytes
    // win32kbase.sys .text:0x17c00, 0x27ef0 bytes
    // win32kbase.sys .text:0x11520, 0x243e0 bytes
    //
    _w12(sdk::unknown_ptr) user_get_keyboard_layout;
    
    // [NtUserGetOemBitmapSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfc450, 0x1596d bytes
    // win32kfull.sys .text:0x1410f0, 0x1659e bytes
    // win32kfull.sys .text:0xfd380, 0x1596d bytes
    //
    _w13(sdk::unknown_ptr) user_get_oem_bitmap_size;
    
    // [NtUserGetPointerDeviceInputSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1416d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1733e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13ecf0, 0x243e0 bytes
    //
    _w14(sdk::unknown_ptr) user_get_pointer_device_input_space;
    
    // [NtUserGetPointerDeviceOrientation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1417c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1734c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13ede0, 0x243e0 bytes
    //
    _w15(sdk::unknown_ptr) user_get_pointer_device_orientation;
    
    // [NtUserGetPointerFrameTimes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1418b0, 0x243e0 bytes
    // win32kbase.sys .text:0xf44f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13eed0, 0x243e0 bytes
    //
    _w16(sdk::unknown_ptr) user_get_pointer_frame_times;
    
    // [NtUserGetPointerProprietaryId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x141ff0, 0x243e0 bytes
    // win32kbase.sys .text:0x173b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x13f610, 0x243e0 bytes
    //
    _w17(sdk::unknown_ptr) user_get_pointer_proprietary_id;
    
    // [NtUserGetQueueStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe4240, 0x1596d bytes
    // win32kfull.sys .text:0x9dfb0, 0x1659e bytes
    // win32kfull.sys .text:0xe4f00, 0x1596d bytes
    //
    _w18(sdk::unknown_ptr) user_get_queue_status;
    
    // [NtUserGetRequiredCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10c5d0, 0x1596d bytes
    // win32kfull.sys .text:0x1030e0, 0x1659e bytes
    // win32kfull.sys .text:0x10d500, 0x1596d bytes
    //
    _w19(sdk::unknown_ptr) user_get_required_cursor_sizes;
    
    // [NtUserGetResizeDCompositionSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x109b60, 0x1596d bytes
    // win32kfull.sys .text:0xfd600, 0x1659e bytes
    // win32kfull.sys .text:0x10aa90, 0x1596d bytes
    //
    _w20(sdk::unknown_ptr) user_get_resize_d_composition_synchronization_object;
    
    // [NtUserGetSharedWindowData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xff5c, 0x388c7 bytes
    // win32k.sys .text:0x111ac, 0x3e907 bytes
    // win32k.sys .text:0xff5c, 0x388c7 bytes
    //
    _w21(sdk::unknown_ptr) user_get_shared_window_data;
    
    // [NtUserGetSystemDpiForProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x142400, 0x243e0 bytes
    // win32kbase.sys .text:0x1745d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13fa20, 0x243e0 bytes
    //
    _w22(sdk::unknown_ptr) user_get_system_dpi_for_process;
    
    // [NtUserGetUniformSpaceMapping]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x23560, 0x243e0 bytes
    // win32kbase.sys .text:0x65490, 0x27ef0 bytes
    // win32kbase.sys .text:0x540a0, 0x243e0 bytes
    //
    _w23(sdk::unknown_ptr) user_get_uniform_space_mapping;
    
    // [NtUserGetWindowProcessHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10f560, 0x1596d bytes
    // win32kfull.sys .text:0x1080a0, 0x1659e bytes
    // win32kfull.sys .text:0x110490, 0x1596d bytes
    //
    _w24(sdk::unknown_ptr) user_get_window_process_handle;
    
    // [NtUserInitializeGenericHidInjection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1427e0, 0x243e0 bytes
    // win32kbase.sys .text:0x174770, 0x27ef0 bytes
    // win32kbase.sys .text:0x13fe00, 0x243e0 bytes
    //
    _w25(sdk::unknown_ptr) user_initialize_generic_hid_injection;
    
    // [NtUserInitializePointerDeviceInjectionEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x142db0, 0x243e0 bytes
    // win32kbase.sys .text:0x175bb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1403d0, 0x243e0 bytes
    //
    _w26(sdk::unknown_ptr) user_initialize_pointer_device_injection_ex;
    
    // [NtUserInjectGenericHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x143350, 0x243e0 bytes
    // win32kbase.sys .text:0x176b40, 0x27ef0 bytes
    // win32kbase.sys .text:0x140970, 0x243e0 bytes
    //
    _w27(sdk::unknown_ptr) user_inject_generic_hid_input;
    
    // [NtUserInternalToUnicode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xe808, 0x388c7 bytes
    // win32k.sys .text:0xf894, 0x3e907 bytes
    // win32k.sys .text:0xe808, 0x388c7 bytes
    //
    _w28(sdk::unknown_ptr) user_internal_to_unicode;
    
    // [NtUserIsResizeLayoutSynchronizationEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fed70, 0x1596d bytes
    // win32kfull.sys .text:0x1fb380, 0x1659e bytes
    // win32kfull.sys .text:0x1febe0, 0x1596d bytes
    //
    _w29(sdk::unknown_ptr) user_is_resize_layout_synchronization_enabled;
    
    // [NtUserIsWindowGDIScaledDpiMessageEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fef40, 0x1596d bytes
    // win32kfull.sys .text:0x1fb540, 0x1659e bytes
    // win32kfull.sys .text:0x1fedb0, 0x1596d bytes
    //
    _w30(sdk::unknown_ptr) user_is_window_gdi_scaled_dpi_message_enabled;
    
    // [NtUserLockCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb20d0, 0x243e0 bytes
    // win32kbase.sys .text:0xc09d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa84c0, 0x243e0 bytes
    //
    _w31(sdk::unknown_ptr) user_lock_cursor;
    
    // [NtUserLogicalToPhysicalDpiPointForWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1ff140, 0x1596d bytes
    // win32kfull.sys .text:0x1fba70, 0x1659e bytes
    // win32kfull.sys .text:0x1fefb0, 0x1596d bytes
    //
    _w32(sdk::unknown_ptr) user_logical_to_physical_dpi_point_for_window;
    
    // [NtUserMapPointsByVisualIdentifier]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x144eb0, 0x243e0 bytes
    // win32kbase.sys .text:0x178d00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1424d0, 0x243e0 bytes
    //
    _w33(sdk::unknown_ptr) user_map_points_by_visual_identifier;
    
    // [NtUserMarkWindowForRawMouse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xe7e4, 0x388c7 bytes
    // win32k.sys .text:0xf870, 0x3e907 bytes
    // win32k.sys .text:0xe7e4, 0x388c7 bytes
    //
    _w34(sdk::unknown_ptr) user_mark_window_for_raw_mouse;
    
    // [NtUserMinInitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xfef0, 0x388c7 bytes
    // win32k.sys .text:0x11140, 0x3e907 bytes
    // win32k.sys .text:0xfef0, 0x388c7 bytes
    //
    _w35(sdk::unknown_ptr) user_min_initialize;
    
    // [NtUserMsgWaitForMultipleObjectsEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x57650, 0x1596d bytes
    // win32kfull.sys .text:0x9e440, 0x1659e bytes
    // win32kfull.sys .text:0x57a70, 0x1596d bytes
    //
    _w36(sdk::unknown_ptr) user_msg_wait_for_multiple_objects_ex;
    
    // [NtUserPhysicalToLogicalDpiPointForWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x200e30, 0x1596d bytes
    // win32kfull.sys .text:0x1fda10, 0x1659e bytes
    // win32kfull.sys .text:0x200ca0, 0x1596d bytes
    //
    _w37(sdk::unknown_ptr) user_physical_to_logical_dpi_point_for_window;
    
    // [NtUserPostKeyboardInputMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x145240, 0x243e0 bytes
    // win32kbase.sys .text:0x179490, 0x27ef0 bytes
    // win32kbase.sys .text:0x142860, 0x243e0 bytes
    //
    _w38(sdk::unknown_ptr) user_post_keyboard_input_message;
    
    // [NtUserProcessInkFeedbackCommand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2010c0, 0x1596d bytes
    // win32kfull.sys .text:0x1fdce0, 0x1659e bytes
    // win32kfull.sys .text:0x200f30, 0x1596d bytes
    //
    _w39(sdk::unknown_ptr) user_process_ink_feedback_command;
    
    // [NtUserReleaseDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x645c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1a1e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2dd30, 0x243e0 bytes
    //
    _w40(sdk::unknown_ptr) user_release_dc;
    
    // [NtUserRemoveVisualIdentifier]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x145990, 0x243e0 bytes
    // win32kbase.sys .text:0x179a50, 0x27ef0 bytes
    // win32kbase.sys .text:0x142fb0, 0x243e0 bytes
    //
    _w41(sdk::unknown_ptr) user_remove_visual_identifier;
    
    // [NtUserRestoreWindowDpiChanges]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7020, 0x1596d bytes
    // win32kfull.sys .text:0x3c70, 0x1659e bytes
    // win32kfull.sys .text:0x73d0, 0x1596d bytes
    //
    _w42(sdk::unknown_ptr) user_restore_window_dpi_changes;
    
    // [NtUserSetBridgeWindowChild]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x202130, 0x1596d bytes
    // win32kfull.sys .text:0x1feff0, 0x1659e bytes
    // win32kfull.sys .text:0x201fa0, 0x1596d bytes
    //
    _w43(sdk::unknown_ptr) user_set_bridge_window_child;
    
    // [NtUserSetCursorPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd3a70, 0x1596d bytes
    // win32kfull.sys .text:0x96ee0, 0x1659e bytes
    // win32kfull.sys .text:0xd4730, 0x1596d bytes
    //
    _w44(sdk::unknown_ptr) user_set_cursor_pos;
    
    // [NtUserSetDesktopColorTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2026a0, 0x1596d bytes
    // win32kfull.sys .text:0x1ff880, 0x1659e bytes
    // win32kfull.sys .text:0x202510, 0x1596d bytes
    //
    _w45(sdk::unknown_ptr) user_set_desktop_color_transform;
    
    // [NtUserSetDesktopVisualInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x145a60, 0x243e0 bytes
    // win32kbase.sys .text:0x179b20, 0x27ef0 bytes
    // win32kbase.sys .text:0x143080, 0x243e0 bytes
    //
    _w46(sdk::unknown_ptr) user_set_desktop_visual_input_sink;
    
    // [NtUserSetDialogControlDpiChangeBehavior]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x202780, 0x1596d bytes
    // win32kfull.sys .text:0x1ff960, 0x1659e bytes
    // win32kfull.sys .text:0x2025f0, 0x1596d bytes
    //
    _w47(sdk::unknown_ptr) user_set_dialog_control_dpi_change_behavior;
    
    // [NtUserSetForegroundWindowForApplication]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x35960, 0x1596d bytes
    // win32kfull.sys .text:0x1065e0, 0x1659e bytes
    // win32kfull.sys .text:0x35d70, 0x1596d bytes
    //
    _w48(sdk::unknown_ptr) user_set_foreground_window_for_application;
    
    // [NtUserSetFullscreenMagnifierOffsetsDWMUpdated]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x202b00, 0x1596d bytes
    // win32kfull.sys .text:0x1ffe00, 0x1659e bytes
    // win32kfull.sys .text:0x202970, 0x1596d bytes
    //
    _w49(sdk::unknown_ptr) user_set_fullscreen_magnifier_offsets_dwm_updated;
    
    // [NtUserSetInputServiceState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb0db0, 0x243e0 bytes
    // win32kbase.sys .text:0xc0ec0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7240, 0x243e0 bytes
    //
    _w50(sdk::unknown_ptr) user_set_input_service_state;
    
    // [NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x202ec0, 0x1596d bytes
    // win32kfull.sys .text:0x2001e0, 0x1659e bytes
    // win32kfull.sys .text:0x202d30, 0x1596d bytes
    //
    _w51(sdk::unknown_ptr) user_set_magnification_desktop_magnifier_offsets_dwm_updated;
    
    // [NtUserSetMonitorWorkArea]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xff14, 0x388c7 bytes
    // win32k.sys .text:0x11164, 0x3e907 bytes
    // win32k.sys .text:0xff14, 0x388c7 bytes
    //
    _w52(sdk::unknown_ptr) user_set_monitor_work_area;
    
    // [NtUserSetMouseInputRateLimitingTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1466e0, 0x243e0 bytes
    // win32kbase.sys .text:0x17b410, 0x27ef0 bytes
    // win32kbase.sys .text:0x143d00, 0x243e0 bytes
    //
    _w53(sdk::unknown_ptr) user_set_mouse_input_rate_limiting_timer;
    
    // [NtUserSetProcessMousewheelRoutingMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x146db0, 0x243e0 bytes
    // win32kbase.sys .text:0x17ba60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1443d0, 0x243e0 bytes
    //
    _w54(sdk::unknown_ptr) user_set_process_mousewheel_routing_mode;
    
    // [NtUserSetSharedWindowData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0xff38, 0x388c7 bytes
    // win32k.sys .text:0x11188, 0x3e907 bytes
    // win32k.sys .text:0xff38, 0x388c7 bytes
    //
    _w55(sdk::unknown_ptr) user_set_shared_window_data;
    
    // [NtUserSetTargetForResourceBrokering]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7a80, 0x1596d bytes
    // win32kfull.sys .text:0x200c20, 0x1659e bytes
    // win32kfull.sys .text:0x7e30, 0x1596d bytes
    //
    _w56(sdk::unknown_ptr) user_set_target_for_resource_brokering;
    
    // [NtUserSetWindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x21ca90, 0x13864 bytes
    // win32kfull.sys .text:0x2037c0, 0x1596d bytes
    // win32kfull.sys .text:0x203630, 0x1596d bytes
    //
    _w57(sdk::unknown_ptr) user_set_window_arrangement;
    
    // [NtUserShowCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118e80, 0x1596d bytes
    // win32kfull.sys .text:0x10f060, 0x1659e bytes
    // win32kfull.sys .text:0x119db0, 0x1596d bytes
    //
    _w58(sdk::unknown_ptr) user_show_cursor;
    
    // [NtUserStopAndEndInertia]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1472c0, 0x243e0 bytes
    // win32kbase.sys .text:0x17c1e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1448e0, 0x243e0 bytes
    //
    _w59(sdk::unknown_ptr) user_stop_and_end_inertia;
    
    // [NtUserWindowFromDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf67c0, 0x1596d bytes
    // win32kfull.sys .text:0xeb910, 0x1659e bytes
    // win32kfull.sys .text:0xf7650, 0x1596d bytes
    //
    _w60(sdk::unknown_ptr) user_window_from_dc;
    
    // [NtUserWOWCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x205300, 0x1596d bytes
    // win32kfull.sys .text:0x203240, 0x1659e bytes
    // win32kfull.sys .text:0x205170, 0x1596d bytes
    //
    _w61(sdk::unknown_ptr) user_wow_cleanup;
    
    // [NtUserfnGETWINDOWDATA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf6910, 0x1596d bytes
    // win32kfull.sys .text:0x203990, 0x1659e bytes
    // win32kfull.sys .text:0xf77a0, 0x1596d bytes
    //
    _w62(sdk::unknown_ptr) userfn_getwindowdata;
    
    // [NtUserfnINOUTLPSIZE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x206960, 0x1596d bytes
    // win32kfull.sys .text:0x204f90, 0x1659e bytes
    // win32kfull.sys .text:0x2067d0, 0x1596d bytes
    //
    _w63(sdk::unknown_ptr) userfn_inoutlpsize;
    
    // [NtUserfnKEYBOARDCORRECTIONCALLOUT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x11db20, 0x13864 bytes
    // win32kfull.sys .text:0x207210, 0x1596d bytes
    // win32kfull.sys .text:0x207080, 0x1596d bytes
    //
    _w64(sdk::unknown_ptr) userfn_keyboardcorrectioncallout;
    
    // [NtBindCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x31d80, 0x1eb80 bytes
    // win32k.sys .text:0x10e70, 0x388c7 bytes
    // win32k.sys .text:0x12210, 0x3e907 bytes
    // win32k.sys .text:0x10e70, 0x388c7 bytes
    //
    _w65(sdk::unknown_ptr) bind_composition_surface;
    
    // [NtCompositionInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2f3b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x203a50, 0x243e0 bytes
    // win32kbase.sys .text:0x2545c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x201820, 0x243e0 bytes
    //
    _w66(sdk::unknown_ptr) composition_input_thread;
    
    // [NtCompositionSetDropTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x300d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa67c0, 0x243e0 bytes
    // win32kbase.sys .text:0xaf270, 0x27ef0 bytes
    // win32kbase.sys .text:0x95880, 0x243e0 bytes
    //
    _w67(sdk::unknown_ptr) composition_set_drop_target;
    
    // [NtCreateCompositionInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x30470, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa490, 0x243e0 bytes
    // win32kbase.sys .text:0x9b750, 0x27ef0 bytes
    // win32kbase.sys .text:0x9ffa0, 0x243e0 bytes
    //
    _w68(sdk::unknown_ptr) create_composition_input_sink;
    
    // [NtCreateCompositionSurfaceHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79140, 0x1eb80 bytes
    // win32k.sys .text:0x10e84, 0x388c7 bytes
    // win32k.sys .text:0x12224, 0x3e907 bytes
    // win32k.sys .text:0x10e84, 0x388c7 bytes
    //
    _w69(sdk::unknown_ptr) create_composition_surface_handle;
    
    // [NtCreateImplicitCompositionInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x304a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa470, 0x243e0 bytes
    // win32kbase.sys .text:0x9b730, 0x27ef0 bytes
    // win32kbase.sys .text:0x9ff80, 0x243e0 bytes
    //
    _w70(sdk::unknown_ptr) create_implicit_composition_input_sink;
    
    // [NtDCompositionAddCrossDeviceVisualChild]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e4b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x2330, 0x243e0 bytes
    // win32kbase.sys .text:0x21c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2330, 0x243e0 bytes
    //
    _w71(sdk::unknown_ptr) d_composition_add_cross_device_visual_child;
    
    // [NtDCompositionBeginFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3dc50, 0x1eb80 bytes
    // win32kbase.sys .text:0x7cc50, 0x243e0 bytes
    // win32kbase.sys .text:0xa1030, 0x27ef0 bytes
    // win32kbase.sys .text:0x80350, 0x243e0 bytes
    //
    _w72(sdk::unknown_ptr) d_composition_begin_frame;
    
    // [NtDCompositionCommitChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b610, 0x1eb80 bytes
    // win32kbase.sys .text:0x73b60, 0x243e0 bytes
    // win32kbase.sys .text:0x298f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc70, 0x243e0 bytes
    //
    _w73(sdk::unknown_ptr) d_composition_commit_channel;
    
    // [NtDCompositionConfirmFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3d9f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7f510, 0x243e0 bytes
    // win32kbase.sys .text:0x9f0e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7fb90, 0x243e0 bytes
    //
    _w74(sdk::unknown_ptr) d_composition_confirm_frame;
    
    // [NtDCompositionConnectPipe]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe76c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1db800, 0x243e0 bytes
    // win32kbase.sys .text:0x229600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d95c0, 0x243e0 bytes
    //
    _w75(sdk::unknown_ptr) d_composition_connect_pipe;
    
    // [NtDCompositionCreateAndBindSharedSection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7a8d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb19a0, 0x243e0 bytes
    // win32kbase.sys .text:0xc3d30, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7de0, 0x243e0 bytes
    //
    _w76(sdk::unknown_ptr) d_composition_create_and_bind_shared_section;
    
    // [NtDCompositionCreateChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2dfc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7b0e0, 0x243e0 bytes
    // win32kbase.sys .text:0xa1c00, 0x27ef0 bytes
    // win32kbase.sys .text:0x80ec0, 0x243e0 bytes
    //
    _w77(sdk::unknown_ptr) d_composition_create_channel;
    
    // [NtDCompositionCreateConnection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81aa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x80510, 0x243e0 bytes
    // win32kbase.sys .text:0x229610, 0x27ef0 bytes
    // win32kbase.sys .text:0x81ef0, 0x243e0 bytes
    //
    _w78(sdk::unknown_ptr) d_composition_create_connection;
    
    // [NtDCompositionCreateDwmChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x809d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc00c0, 0x243e0 bytes
    // win32kbase.sys .text:0xa0920, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e500, 0x243e0 bytes
    //
    _w79(sdk::unknown_ptr) d_composition_create_dwm_channel;
    
    // [NtDCompositionDestroyChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2dec0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7cc30, 0x243e0 bytes
    // win32kbase.sys .text:0xc69e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x80af0, 0x243e0 bytes
    //
    _w80(sdk::unknown_ptr) d_composition_destroy_channel;
    
    // [NtDCompositionDestroyConnection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7270, 0x1eb80 bytes
    // win32kbase.sys .text:0x1db920, 0x243e0 bytes
    // win32kbase.sys .text:0x2297b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d96e0, 0x243e0 bytes
    //
    _w81(sdk::unknown_ptr) d_composition_destroy_connection;
    
    // [NtDCompositionDuplicateHandleToProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7280, 0x1eb80 bytes
    // win32kbase.sys .text:0x1db940, 0x243e0 bytes
    // win32kbase.sys .text:0x2297d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9700, 0x243e0 bytes
    //
    _w82(sdk::unknown_ptr) d_composition_duplicate_handle_to_process;
    
    // [NtDCompositionDuplicateSwapchainHandleToDwm]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7460, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dbcc0, 0x243e0 bytes
    // win32kbase.sys .text:0x229b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9a80, 0x243e0 bytes
    //
    _w83(sdk::unknown_ptr) d_composition_duplicate_swapchain_handle_to_dwm;
    
    // [NtDCompositionEnableMMCSS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7610, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dbe60, 0x243e0 bytes
    // win32kbase.sys .text:0x229cf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9c20, 0x243e0 bytes
    //
    _w84(sdk::unknown_ptr) d_composition_enable_mmcss;
    
    // [NtDCompositionGetChannels]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe76c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1db800, 0x243e0 bytes
    // win32kbase.sys .text:0x229600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d95c0, 0x243e0 bytes
    //
    _w85(sdk::unknown_ptr) d_composition_get_channels;
    
    // [NtDCompositionGetConnectionBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3e120, 0x1eb80 bytes
    // win32kbase.sys .text:0x9aca0, 0x243e0 bytes
    // win32kbase.sys .text:0x9fef0, 0x27ef0 bytes
    // win32kbase.sys .text:0x83aa0, 0x243e0 bytes
    //
    _w86(sdk::unknown_ptr) d_composition_get_connection_batch;
    
    // [NtDCompositionGetDeletedResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6bd90, 0x1eb80 bytes
    // win32kbase.sys .text:0xaf930, 0x243e0 bytes
    // win32kbase.sys .text:0xbf770, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5990, 0x243e0 bytes
    //
    _w87(sdk::unknown_ptr) d_composition_get_deleted_resources;
    
    // [NtDCompositionGetFrameLegacyTokens]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3de30, 0x1eb80 bytes
    // win32kbase.sys .text:0x75930, 0x243e0 bytes
    // win32kbase.sys .text:0xa59a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xda70, 0x243e0 bytes
    //
    _w88(sdk::unknown_ptr) d_composition_get_frame_legacy_tokens;
    
    // [NtDCompositionGetFrameStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3d7a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x754b0, 0x243e0 bytes
    // win32kbase.sys .text:0x27410, 0x27ef0 bytes
    // win32kbase.sys .text:0xd5f0, 0x243e0 bytes
    //
    _w89(sdk::unknown_ptr) d_composition_get_frame_statistics;
    
    // [NtDCompositionGetFrameSurfaceUpdates]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f690, 0x1eb80 bytes
    // win32kbase.sys .text:0x75700, 0x243e0 bytes
    // win32kbase.sys .text:0xa60f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd840, 0x243e0 bytes
    //
    _w90(sdk::unknown_ptr) d_composition_get_frame_surface_updates;
    
    // [NtDCompositionProcessChannelBatchBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63a40, 0x1eb80 bytes
    // win32kbase.sys .text:0x459e0, 0x243e0 bytes
    // win32kbase.sys .text:0x2be70, 0x27ef0 bytes
    // win32kbase.sys .text:0x35640, 0x243e0 bytes
    //
    _w91(sdk::unknown_ptr) d_composition_process_channel_batch_buffer;
    
    // [NtDCompositionReferenceSharedResourceOnDwmChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2f270, 0x1eb80 bytes
    // win32kbase.sys .text:0x73600, 0x243e0 bytes
    // win32kbase.sys .text:0x27a20, 0x27ef0 bytes
    // win32kbase.sys .text:0xb710, 0x243e0 bytes
    //
    _w92(sdk::unknown_ptr) d_composition_reference_shared_resource_on_dwm_channel;
    
    // [NtDCompositionRegisterThumbnailVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4940, 0x1eb80 bytes
    // win32kbase.sys .text:0x35b0, 0x243e0 bytes
    // win32kbase.sys .text:0x6b80, 0x27ef0 bytes
    // win32kbase.sys .text:0x35b0, 0x243e0 bytes
    //
    _w93(sdk::unknown_ptr) d_composition_register_thumbnail_visual;
    
    // [NtDCompositionRegisterVirtualDesktopVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe76d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dbf50, 0x243e0 bytes
    // win32kbase.sys .text:0x229f80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9d10, 0x243e0 bytes
    //
    _w94(sdk::unknown_ptr) d_composition_register_virtual_desktop_visual;
    
    // [NtDCompositionReleaseAllResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7c8b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ddb0, 0x243e0 bytes
    // win32kbase.sys .text:0x9c190, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e980, 0x243e0 bytes
    //
    _w95(sdk::unknown_ptr) d_composition_release_all_resources;
    
    // [NtDCompositionRemoveCrossDeviceVisualChild]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x815e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dc070, 0x243e0 bytes
    // win32kbase.sys .text:0x29a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9e30, 0x243e0 bytes
    //
    _w96(sdk::unknown_ptr) d_composition_remove_cross_device_visual_child;
    
    // [NtDCompositionSetChannelCommitCompletionEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ebb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d6c0, 0x243e0 bytes
    // win32kbase.sys .text:0xa0d40, 0x27ef0 bytes
    // win32kbase.sys .text:0x81880, 0x243e0 bytes
    //
    _w97(sdk::unknown_ptr) d_composition_set_channel_commit_completion_event;
    
    // [NtDCompositionSetDebugCounter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x80140, 0x1eb80 bytes
    // win32kbase.sys .text:0xbd4b0, 0x243e0 bytes
    // win32kbase.sys .text:0xd4e60, 0x27ef0 bytes
    // win32kbase.sys .text:0xb72a0, 0x243e0 bytes
    //
    _w98(sdk::unknown_ptr) d_composition_set_debug_counter;
    
    // [NtDCompositionSubmitDWMBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69320, 0x1eb80 bytes
    // win32kbase.sys .text:0x74430, 0x243e0 bytes
    // win32kbase.sys .text:0x2a220, 0x27ef0 bytes
    // win32kbase.sys .text:0xc540, 0x243e0 bytes
    //
    _w99(sdk::unknown_ptr) d_composition_submit_dwm_batch;
    
    // [NtDCompositionSynchronize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c0c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x73930, 0x243e0 bytes
    // win32kbase.sys .text:0x27e60, 0x27ef0 bytes
    // win32kbase.sys .text:0xba40, 0x243e0 bytes
    //
    _x00(sdk::unknown_ptr) d_composition_synchronize;
    
    // [NtDCompositionTelemetryAnimationScenarioBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x782c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb4370, 0x243e0 bytes
    // win32kbase.sys .text:0x8c40, 0x27ef0 bytes
    // win32kbase.sys .text:0xac670, 0x243e0 bytes
    //
    _x01(sdk::unknown_ptr) d_composition_telemetry_animation_scenario_begin;
    
    // [NtDCompositionTelemetryAnimationScenarioReference]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x788a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb49a0, 0x243e0 bytes
    // win32kbase.sys .text:0x8830, 0x27ef0 bytes
    // win32kbase.sys .text:0xae000, 0x243e0 bytes
    //
    _x02(sdk::unknown_ptr) d_composition_telemetry_animation_scenario_reference;
    
    // [NtDCompositionTelemetryAnimationScenarioUnreference]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x787a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb4aa0, 0x243e0 bytes
    // win32kbase.sys .text:0x93c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xae100, 0x243e0 bytes
    //
    _x03(sdk::unknown_ptr) d_composition_telemetry_animation_scenario_unreference;
    
    // [NtDCompositionTelemetrySetApplicationId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d680, 0x1eb80 bytes
    // win32kbase.sys .text:0xb0c50, 0x243e0 bytes
    // win32kbase.sys .text:0xc3970, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7120, 0x243e0 bytes
    //
    _x04(sdk::unknown_ptr) d_composition_telemetry_set_application_id;
    
    // [NtDCompositionTelemetryTouchInteractionBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4df0, 0x1eb80 bytes
    // win32kbase.sys .text:0x44c0, 0x243e0 bytes
    // win32kbase.sys .text:0x8b40, 0x27ef0 bytes
    // win32kbase.sys .text:0x44c0, 0x243e0 bytes
    //
    _x05(sdk::unknown_ptr) d_composition_telemetry_touch_interaction_begin;
    
    // [NtDCompositionTelemetryTouchInteractionEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4ed0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4ad0, 0x243e0 bytes
    // win32kbase.sys .text:0x9650, 0x27ef0 bytes
    // win32kbase.sys .text:0x4ad0, 0x243e0 bytes
    //
    _x06(sdk::unknown_ptr) d_composition_telemetry_touch_interaction_end;
    
    // [NtDCompositionTelemetryTouchInteractionUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4320, 0x1eb80 bytes
    // win32kbase.sys .text:0x2d10, 0x243e0 bytes
    // win32kbase.sys .text:0x77b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2d10, 0x243e0 bytes
    //
    _x07(sdk::unknown_ptr) d_composition_telemetry_touch_interaction_update;
    
    // [NtDCompositionUpdatePointerCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7910, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dc200, 0x243e0 bytes
    // win32kbase.sys .text:0x22a300, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d9fc0, 0x243e0 bytes
    //
    _x08(sdk::unknown_ptr) d_composition_update_pointer_capture;
    
    // [NtDCompositionWaitForChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d770, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3930, 0x243e0 bytes
    // win32kbase.sys .text:0xc9cf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xabe30, 0x243e0 bytes
    //
    _x09(sdk::unknown_ptr) d_composition_wait_for_channel;
    
    // [NtDesktopCaptureBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7960, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dc260, 0x243e0 bytes
    // win32kbase.sys .text:0x22a4e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1da020, 0x243e0 bytes
    //
    _x10(sdk::unknown_ptr) desktop_capture_bits;
    
    // [NtDuplicateCompositionInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4680, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e910, 0x243e0 bytes
    // win32kbase.sys .text:0x254640, 0x27ef0 bytes
    // win32kbase.sys .text:0xa900, 0x243e0 bytes
    //
    _x11(sdk::unknown_ptr) duplicate_composition_input_sink;
    
    // [NtGdiAbortDoc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269000, 0x13864 bytes
    // win32kfull.sys .text:0x27d1a0, 0x1596d bytes
    // win32kfull.sys .text:0x27d300, 0x1659e bytes
    // win32kfull.sys .text:0x27d110, 0x1596d bytes
    //
    _x12(sdk::unknown_ptr) gdi_abort_doc;
    
    // [NtGdiAbortPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a5db0, 0x13864 bytes
    // win32kfull.sys .text:0x2ad660, 0x1596d bytes
    // win32kfull.sys .text:0x2ae560, 0x1659e bytes
    // win32kfull.sys .text:0x2ad5d0, 0x1596d bytes
    //
    _x13(sdk::unknown_ptr) gdi_abort_path;
    
    // [NtGdiAddEmbFontToDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269010, 0x13864 bytes
    // win32kfull.sys .text:0x27d1c0, 0x1596d bytes
    // win32kfull.sys .text:0x27d320, 0x1659e bytes
    // win32kfull.sys .text:0x27d130, 0x1596d bytes
    //
    _x14(sdk::unknown_ptr) gdi_add_emb_font_to_dc;
    
    // [NtGdiAddFontMemResourceEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6ab0, 0x13864 bytes
    // win32kfull.sys .text:0x2ae040, 0x1596d bytes
    // win32kfull.sys .text:0x2aef40, 0x1659e bytes
    // win32kfull.sys .text:0x2adfb0, 0x1596d bytes
    //
    _x15(sdk::unknown_ptr) gdi_add_font_mem_resource_ex;
    
    // [NtGdiAddFontResourceW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfefe0, 0x13864 bytes
    // win32kfull.sys .text:0x102230, 0x1596d bytes
    // win32kfull.sys .text:0x6b0d0, 0x1659e bytes
    // win32kfull.sys .text:0x103160, 0x1596d bytes
    //
    _x16(sdk::unknown_ptr) gdi_add_font_resource_w;
    
    // [NtGdiAddRemoteFontToDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27df50, 0x13864 bytes
    // win32kfull.sys .text:0x28a8f0, 0x1596d bytes
    // win32kfull.sys .text:0x289dc0, 0x1659e bytes
    // win32kfull.sys .text:0x28a860, 0x1596d bytes
    //
    _x17(sdk::unknown_ptr) gdi_add_remote_font_to_dc;
    
    // [NtGdiAddRemoteMMInstanceToDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269140, 0x13864 bytes
    // win32kfull.sys .text:0x27d310, 0x1596d bytes
    // win32kfull.sys .text:0x27d470, 0x1659e bytes
    // win32kfull.sys .text:0x27d280, 0x1596d bytes
    //
    _x18(sdk::unknown_ptr) gdi_add_remote_mm_instance_to_dc;
    
    // [NtGdiAlphaBlend]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x734a0, 0x13864 bytes
    // win32kfull.sys .text:0x922c0, 0x1596d bytes
    // win32kfull.sys .text:0x1a760, 0x1659e bytes
    // win32kfull.sys .text:0x92e30, 0x1596d bytes
    //
    _x19(sdk::unknown_ptr) gdi_alpha_blend;
    
    // [NtGdiAngleArc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6c20, 0x13864 bytes
    // win32kfull.sys .text:0x2ae1f0, 0x1596d bytes
    // win32kfull.sys .text:0x2af0f0, 0x1659e bytes
    // win32kfull.sys .text:0x2ae160, 0x1596d bytes
    //
    _x20(sdk::unknown_ptr) gdi_angle_arc;
    
    // [NtGdiAnyLinkedFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x122b30, 0x13864 bytes
    // win32kfull.sys .text:0x1119a0, 0x1596d bytes
    // win32kfull.sys .text:0x105ba0, 0x1659e bytes
    // win32kfull.sys .text:0x1128d0, 0x1596d bytes
    //
    _x21(sdk::unknown_ptr) gdi_any_linked_fonts;
    
    // [NtGdiArcInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aa350, 0x13864 bytes
    // win32kfull.sys .text:0x2b1020, 0x1596d bytes
    // win32kfull.sys .text:0x2b2400, 0x1659e bytes
    // win32kfull.sys .text:0x2b0f90, 0x1596d bytes
    //
    _x22(sdk::unknown_ptr) gdi_arc_internal;
    
    // [NtGdiBeginGdiRendering]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4270, 0x13864 bytes
    // win32kfull.sys .text:0xd0e20, 0x1596d bytes
    // win32kfull.sys .text:0xb46b0, 0x1659e bytes
    // win32kfull.sys .text:0xd1ae0, 0x1596d bytes
    //
    _x23(sdk::unknown_ptr) gdi_begin_gdi_rendering;
    
    // [NtGdiBeginPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a5e20, 0x13864 bytes
    // win32kfull.sys .text:0x141af0, 0x1596d bytes
    // win32kfull.sys .text:0x1341e0, 0x1659e bytes
    // win32kfull.sys .text:0x142a30, 0x1596d bytes
    //
    _x24(sdk::unknown_ptr) gdi_begin_path;
    
    // [NtGdiBitBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6a370, 0x13864 bytes
    // win32kfull.sys .text:0x97c40, 0x1596d bytes
    // win32kfull.sys .text:0xe8cc0, 0x1659e bytes
    // win32kfull.sys .text:0x987b0, 0x1596d bytes
    //
    _x25(sdk::unknown_ptr) gdi_bit_blt;
    
    // [NtGdiBitBltInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6a380, 0x13864 bytes
    // win32kfull.sys .text:0x94a50, 0x1596d bytes
    // win32kfull.sys .text:0x23240, 0x1659e bytes
    // win32kfull.sys .text:0x955c0, 0x1596d bytes
    //
    _x26(sdk::unknown_ptr) gdi_bit_blt_internal;
    
    // [NtGdiBRUSHOBJ_DeleteRbrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2abb30, 0x13864 bytes
    // win32kfull.sys .text:0x2b1ce0, 0x1596d bytes
    // win32kfull.sys .text:0x2b30a0, 0x1659e bytes
    // win32kfull.sys .text:0x2b1c50, 0x1596d bytes
    //
    _x27(sdk::unknown_ptr) gdi_brushobj_delete_rbrush;
    
    // [NtGdiBRUSHOBJ_hGetColorTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2abc10, 0x13864 bytes
    // win32kfull.sys .text:0x2b1de0, 0x1596d bytes
    // win32kfull.sys .text:0x2b31a0, 0x1659e bytes
    // win32kfull.sys .text:0x2b1d50, 0x1596d bytes
    //
    _x28(sdk::unknown_ptr) gdi_brushobj_h_get_color_transform;
    
    // [NtGdiBRUSHOBJ_pvAllocRbrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2abc80, 0x13864 bytes
    // win32kfull.sys .text:0x2b1e50, 0x1596d bytes
    // win32kfull.sys .text:0x2b3220, 0x1659e bytes
    // win32kfull.sys .text:0x2b1dc0, 0x1596d bytes
    //
    _x29(sdk::unknown_ptr) gdi_brushobj_pv_alloc_rbrush;
    
    // [NtGdiBRUSHOBJ_pvGetRbrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2abd00, 0x13864 bytes
    // win32kfull.sys .text:0x2b1ed0, 0x1596d bytes
    // win32kfull.sys .text:0x2b32b0, 0x1659e bytes
    // win32kfull.sys .text:0x2b1e40, 0x1596d bytes
    //
    _x30(sdk::unknown_ptr) gdi_brushobj_pv_get_rbrush;
    
    // [NtGdiBRUSHOBJ_ulGetBrushColor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2abd70, 0x13864 bytes
    // win32kfull.sys .text:0x12c5b0, 0x1596d bytes
    // win32kfull.sys .text:0x11e820, 0x1659e bytes
    // win32kfull.sys .text:0x12d4f0, 0x1596d bytes
    //
    _x31(sdk::unknown_ptr) gdi_brushobj_ul_get_brush_color;
    
    // [NtGdiCancelDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6cc0, 0x13864 bytes
    // win32kfull.sys .text:0x2ae2a0, 0x1596d bytes
    // win32kfull.sys .text:0x2af1a0, 0x1659e bytes
    // win32kfull.sys .text:0x2ae210, 0x1596d bytes
    //
    _x32(sdk::unknown_ptr) gdi_cancel_dc;
    
    // [NtGdiChangeGhostFont]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6d40, 0x13864 bytes
    // win32kfull.sys .text:0x2ae2c0, 0x1596d bytes
    // win32kfull.sys .text:0x2af1c0, 0x1659e bytes
    // win32kfull.sys .text:0x2ae230, 0x1596d bytes
    //
    _x33(sdk::unknown_ptr) gdi_change_ghost_font;
    
    // [NtGdiCheckBitmapBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b18f0, 0x13864 bytes
    // win32kfull.sys .text:0x2b5e90, 0x1596d bytes
    // win32kfull.sys .text:0x2b71d0, 0x1659e bytes
    // win32kfull.sys .text:0x2b5e00, 0x1596d bytes
    //
    _x34(sdk::unknown_ptr) gdi_check_bitmap_bits;
    
    // [NtGdiClearBitmapAttributes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11abb0, 0x13864 bytes
    // win32kfull.sys .text:0x117390, 0x1596d bytes
    // win32kfull.sys .text:0x109140, 0x1659e bytes
    // win32kfull.sys .text:0x1182c0, 0x1596d bytes
    //
    _x35(sdk::unknown_ptr) gdi_clear_bitmap_attributes;
    
    // [NtGdiClearBrushAttributes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _x36(sdk::unknown_ptr) gdi_clear_brush_attributes;
    
    // [NtGdiCLIPOBJ_bEnum]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2abe70, 0x13864 bytes
    // win32kfull.sys .text:0x2b1f40, 0x1596d bytes
    // win32kfull.sys .text:0x2b3330, 0x1659e bytes
    // win32kfull.sys .text:0x2b1eb0, 0x1596d bytes
    //
    _x37(sdk::unknown_ptr) gdi_clipobj_b_enum;
    
    // [NtGdiCLIPOBJ_cEnumStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2abf90, 0x13864 bytes
    // win32kfull.sys .text:0x2b2080, 0x1596d bytes
    // win32kfull.sys .text:0x2b3470, 0x1659e bytes
    // win32kfull.sys .text:0x2b1ff0, 0x1596d bytes
    //
    _x38(sdk::unknown_ptr) gdi_clipobj_c_enum_start;
    
    // [NtGdiCLIPOBJ_ppoGetPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ac070, 0x13864 bytes
    // win32kfull.sys .text:0x2b2170, 0x1596d bytes
    // win32kfull.sys .text:0x15f610, 0x1659e bytes
    // win32kfull.sys .text:0x2b20e0, 0x1596d bytes
    //
    _x39(sdk::unknown_ptr) gdi_clipobj_ppo_get_path;
    
    // [NtGdiCloseFigure]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a5ee0, 0x13864 bytes
    // win32kfull.sys .text:0x133e60, 0x1596d bytes
    // win32kfull.sys .text:0x12afd0, 0x1659e bytes
    // win32kfull.sys .text:0x134da0, 0x1596d bytes
    //
    _x40(sdk::unknown_ptr) gdi_close_figure;
    
    // [NtGdiCloseProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ebb4, 0x1eb80 bytes
    // win32kbase.sys .text:0x3b0ec, 0x243e0 bytes
    // win32kbase.sys .text:0x4ef50, 0x27ef0 bytes
    // win32kbase.sys .text:0x3d55c, 0x243e0 bytes
    //
    _x41(sdk::unknown_ptr) gdi_close_process;
    
    // [NtGdiColorCorrectPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b1ae0, 0x13864 bytes
    // win32kfull.sys .text:0x2b6090, 0x1596d bytes
    // win32kfull.sys .text:0x2b73e0, 0x1659e bytes
    // win32kfull.sys .text:0x2b6000, 0x1596d bytes
    //
    _x42(sdk::unknown_ptr) gdi_color_correct_palette;
    
    // [NtGdiCombineRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148540, 0x13864 bytes
    // win32kbase.sys .text:0xb2ad0, 0x243e0 bytes
    // win32kbase.sys .text:0xc3870, 0x27ef0 bytes
    // win32kbase.sys .text:0xa90c0, 0x243e0 bytes
    //
    _x43(sdk::unknown_ptr) gdi_combine_rgn;
    
    // [NtGdiCombineTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13aab0, 0x13864 bytes
    // win32kfull.sys .text:0xec660, 0x1596d bytes
    // win32kfull.sys .text:0x12e320, 0x1659e bytes
    // win32kfull.sys .text:0xed3a0, 0x1596d bytes
    //
    _x44(sdk::unknown_ptr) gdi_combine_transform;
    
    // [NtGdiComputeXformCoefficients]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x115d00, 0x13864 bytes
    // win32kfull.sys .text:0x140760, 0x1596d bytes
    // win32kfull.sys .text:0xf9bd0, 0x1659e bytes
    // win32kfull.sys .text:0x1416a0, 0x1596d bytes
    //
    _x45(sdk::unknown_ptr) gdi_compute_xform_coefficients;
    
    // [NtGdiConfigureOPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148550, 0x13864 bytes
    // win32kbase.sys .text:0x151200, 0x243e0 bytes
    // win32kbase.sys .text:0x184460, 0x27ef0 bytes
    // win32kbase.sys .text:0x14f0a0, 0x243e0 bytes
    //
    _x46(sdk::unknown_ptr) gdi_configure_opm_protected_output;
    
    // [NtGdiConvertMetafileRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b2830, 0x13864 bytes
    // win32kfull.sys .text:0x2b6be0, 0x1596d bytes
    // win32kfull.sys .text:0x2b7f10, 0x1659e bytes
    // win32kfull.sys .text:0x2b6b50, 0x1596d bytes
    //
    _x47(sdk::unknown_ptr) gdi_convert_metafile_rect;
    
    // [NtGdiCreateBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfa370, 0x13864 bytes
    // win32kfull.sys .text:0xfafe0, 0x1596d bytes
    // win32kfull.sys .text:0xed420, 0x1659e bytes
    // win32kfull.sys .text:0xfbf10, 0x1596d bytes
    //
    _x48(sdk::unknown_ptr) gdi_create_bitmap;
    
    // [NtGdiCreateBitmapFromDxSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6dc0, 0x13864 bytes
    // win32kfull.sys .text:0x2ae340, 0x1596d bytes
    // win32kfull.sys .text:0x2af240, 0x1659e bytes
    // win32kfull.sys .text:0x2ae2b0, 0x1596d bytes
    //
    _x49(sdk::unknown_ptr) gdi_create_bitmap_from_dx_surface;
    
    // [NtGdiCreateBitmapFromDxSurface2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7cd0, 0x13864 bytes
    // win32kfull.sys .text:0x2ae370, 0x1596d bytes
    // win32kfull.sys .text:0x2af270, 0x1659e bytes
    // win32kfull.sys .text:0x2ae2e0, 0x1596d bytes
    //
    _x50(sdk::unknown_ptr) gdi_create_bitmap_from_dx_surface2;
    
    // [NtGdiCreateClientObj]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x115a80, 0x13864 bytes
    // win32kfull.sys .text:0x10bd20, 0x1596d bytes
    // win32kfull.sys .text:0x136150, 0x1659e bytes
    // win32kfull.sys .text:0x10cc50, 0x1596d bytes
    //
    _x51(sdk::unknown_ptr) gdi_create_client_obj;
    
    // [NtGdiCreateColorSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148560, 0x13864 bytes
    // win32kfull.sys .text:0x153d60, 0x1596d bytes
    // win32kfull.sys .text:0x14a830, 0x1659e bytes
    // win32kfull.sys .text:0x154ca0, 0x1596d bytes
    //
    _x52(sdk::unknown_ptr) gdi_create_color_space;
    
    // [NtGdiCreateColorTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b1c80, 0x13864 bytes
    // win32kfull.sys .text:0x2b6270, 0x1596d bytes
    // win32kfull.sys .text:0x2b75c0, 0x1659e bytes
    // win32kfull.sys .text:0x2b61e0, 0x1596d bytes
    //
    _x53(sdk::unknown_ptr) gdi_create_color_transform;
    
    // [NtGdiCreateCompatibleBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xffab0, 0x13864 bytes
    // win32kfull.sys .text:0x1035e0, 0x1596d bytes
    // win32kfull.sys .text:0xfb0d0, 0x1659e bytes
    // win32kfull.sys .text:0x104510, 0x1596d bytes
    //
    _x54(sdk::unknown_ptr) gdi_create_compatible_bitmap;
    
    // [NtGdiCreateCompatibleDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148570, 0x13864 bytes
    // win32kfull.sys .text:0x153d80, 0x1596d bytes
    // win32kfull.sys .text:0x14a850, 0x1659e bytes
    // win32kfull.sys .text:0x154cc0, 0x1596d bytes
    //
    _x55(sdk::unknown_ptr) gdi_create_compatible_dc;
    
    // [NtGdiCreateDIBitmapInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x637e0, 0x13864 bytes
    // win32kfull.sys .text:0x7a240, 0x1596d bytes
    // win32kfull.sys .text:0xc800, 0x1659e bytes
    // win32kfull.sys .text:0x7adb0, 0x1596d bytes
    //
    _x56(sdk::unknown_ptr) gdi_create_di_bitmap_internal;
    
    // [NtGdiCreateDIBBrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b2f60, 0x13864 bytes
    // win32kfull.sys .text:0x14c090, 0x1596d bytes
    // win32kfull.sys .text:0x140830, 0x1659e bytes
    // win32kfull.sys .text:0x14cfd0, 0x1596d bytes
    //
    _x57(sdk::unknown_ptr) gdi_create_dib_brush;
    
    // [NtGdiCreateDIBSection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x648e0, 0x13864 bytes
    // win32kfull.sys .text:0x7a6a0, 0x1596d bytes
    // win32kfull.sys .text:0x10cc0, 0x1659e bytes
    // win32kfull.sys .text:0x7b210, 0x1596d bytes
    //
    _x58(sdk::unknown_ptr) gdi_create_dib_section;
    
    // [NtGdiCreateEllipticRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x291140, 0x13864 bytes
    // win32kfull.sys .text:0x29f6a0, 0x1596d bytes
    // win32kfull.sys .text:0x2a06b0, 0x1659e bytes
    // win32kfull.sys .text:0x29f610, 0x1596d bytes
    //
    _x59(sdk::unknown_ptr) gdi_create_elliptic_rgn;
    
    // [NtGdiCreateHalftonePalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11b9d0, 0x13864 bytes
    // win32kfull.sys .text:0x11e570, 0x1596d bytes
    // win32kfull.sys .text:0x1093f0, 0x1659e bytes
    // win32kfull.sys .text:0x11f470, 0x1596d bytes
    //
    _x60(sdk::unknown_ptr) gdi_create_halftone_palette;
    
    // [NtGdiCreateHatchBrushInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b3060, 0x13864 bytes
    // win32kfull.sys .text:0x2b7060, 0x1596d bytes
    // win32kfull.sys .text:0x2b8390, 0x1659e bytes
    // win32kfull.sys .text:0x2b6fd0, 0x1596d bytes
    //
    _x61(sdk::unknown_ptr) gdi_create_hatch_brush_internal;
    
    // [NtGdiCreateMetafileDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148580, 0x13864 bytes
    // win32kfull.sys .text:0x153da0, 0x1596d bytes
    // win32kfull.sys .text:0x14a870, 0x1659e bytes
    // win32kfull.sys .text:0x154ce0, 0x1596d bytes
    //
    _x62(sdk::unknown_ptr) gdi_create_metafile_dc;
    
    // [NtGdiCreateOPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148590, 0x13864 bytes
    // win32kbase.sys .text:0x151350, 0x243e0 bytes
    // win32kbase.sys .text:0x1845b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x14f1f0, 0x243e0 bytes
    //
    _x63(sdk::unknown_ptr) gdi_create_opm_protected_output;
    
    // [NtGdiCreateOPMProtectedOutputs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1485a0, 0x13864 bytes
    // win32kbase.sys .text:0xcd1a0, 0x243e0 bytes
    // win32kbase.sys .text:0xde900, 0x27ef0 bytes
    // win32kbase.sys .text:0xcbb40, 0x243e0 bytes
    //
    _x64(sdk::unknown_ptr) gdi_create_opm_protected_outputs;
    
    // [NtGdiCreatePaletteInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x110a70, 0x13864 bytes
    // win32kfull.sys .text:0x1121e0, 0x1596d bytes
    // win32kfull.sys .text:0x104e30, 0x1659e bytes
    // win32kfull.sys .text:0x113110, 0x1596d bytes
    //
    _x65(sdk::unknown_ptr) gdi_create_palette_internal;
    
    // [NtGdiCreatePatternBrushInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x122e20, 0x13864 bytes
    // win32kfull.sys .text:0x124510, 0x1596d bytes
    // win32kfull.sys .text:0x114890, 0x1659e bytes
    // win32kfull.sys .text:0x125450, 0x1596d bytes
    //
    _x66(sdk::unknown_ptr) gdi_create_pattern_brush_internal;
    
    // [NtGdiCreatePen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d5d0, 0x13864 bytes
    // win32kfull.sys .text:0xf99e0, 0x1596d bytes
    // win32kfull.sys .text:0x919e0, 0x1659e bytes
    // win32kfull.sys .text:0xfa910, 0x1596d bytes
    //
    _x67(sdk::unknown_ptr) gdi_create_pen;
    
    // [NtGdiCreateRectRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1485b0, 0x13864 bytes
    // win32kbase.sys .text:0x3fad0, 0x243e0 bytes
    // win32kbase.sys .text:0x13410, 0x27ef0 bytes
    // win32kbase.sys .text:0x42ea0, 0x243e0 bytes
    //
    _x68(sdk::unknown_ptr) gdi_create_rect_rgn;
    
    // [NtGdiCreateRoundRectRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbcaf0, 0x13864 bytes
    // win32kfull.sys .text:0x46650, 0x1596d bytes
    // win32kfull.sys .text:0xfa9b0, 0x1659e bytes
    // win32kfull.sys .text:0x46a60, 0x1596d bytes
    //
    _x69(sdk::unknown_ptr) gdi_create_round_rect_rgn;
    
    // [NtGdiCreateServerMetaFile]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b3e90, 0x13864 bytes
    // win32kfull.sys .text:0x2b8060, 0x1596d bytes
    // win32kfull.sys .text:0x2b93c0, 0x1659e bytes
    // win32kfull.sys .text:0x2b7fd0, 0x1596d bytes
    //
    _x70(sdk::unknown_ptr) gdi_create_server_meta_file;
    
    // [NtGdiCreateSessionMappedDIBSection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x102420, 0x13864 bytes
    // win32kfull.sys .text:0x1039e0, 0x1596d bytes
    // win32kfull.sys .text:0xfb100, 0x1659e bytes
    // win32kfull.sys .text:0x104910, 0x1596d bytes
    //
    _x71(sdk::unknown_ptr) gdi_create_session_mapped_dib_section;
    
    // [NtGdiCreateSolidBrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1107e0, 0x13864 bytes
    // win32kfull.sys .text:0x1175e0, 0x1596d bytes
    // win32kfull.sys .text:0x109d20, 0x1659e bytes
    // win32kfull.sys .text:0x118510, 0x1596d bytes
    //
    _x72(sdk::unknown_ptr) gdi_create_solid_brush;
    
    // [NtGdiDdCreateFullscreenSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262aa0, 0x13864 bytes
    // win32kfull.sys .text:0x278540, 0x1596d bytes
    // win32kfull.sys .text:0x2781e0, 0x1659e bytes
    // win32kfull.sys .text:0x2784b0, 0x1596d bytes
    //
    _x73(sdk::unknown_ptr) gdi_dd_create_fullscreen_sprite;
    
    // [NtGdiDdDDIAbandonSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1485c0, 0x13864 bytes
    // win32k.sys .text:0x111f4, 0x388c7 bytes
    // win32k.sys .text:0x125f8, 0x3e907 bytes
    // win32k.sys .text:0x111f4, 0x388c7 bytes
    //
    _x74(sdk::unknown_ptr) gdi_dd_ddi_abandon_swap_chain;
    
    // [NtGdiDdDDIAcquireKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1485d0, 0x13864 bytes
    // win32k.sys .text:0x11208, 0x388c7 bytes
    // win32k.sys .text:0x1260c, 0x3e907 bytes
    // win32k.sys .text:0x11208, 0x388c7 bytes
    //
    _x75(sdk::unknown_ptr) gdi_dd_ddi_acquire_keyed_mutex;
    
    // [NtGdiDdDDIAcquireKeyedMutex2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1485e0, 0x13864 bytes
    // win32k.sys .text:0x1121c, 0x388c7 bytes
    // win32k.sys .text:0x12620, 0x3e907 bytes
    // win32k.sys .text:0x1121c, 0x388c7 bytes
    //
    _x76(sdk::unknown_ptr) gdi_dd_ddi_acquire_keyed_mutex2;
    
    // [NtGdiDdDDIAcquireSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1485f0, 0x13864 bytes
    // win32k.sys .text:0x11230, 0x388c7 bytes
    // win32k.sys .text:0x12634, 0x3e907 bytes
    // win32k.sys .text:0x11230, 0x388c7 bytes
    //
    _x77(sdk::unknown_ptr) gdi_dd_ddi_acquire_swap_chain;
    
    // [NtGdiDdDDIAdjustFullscreenGamma]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148600, 0x13864 bytes
    // win32k.sys .text:0x11258, 0x388c7 bytes
    // win32k.sys .text:0x1265c, 0x3e907 bytes
    // win32k.sys .text:0x11258, 0x388c7 bytes
    //
    _x78(sdk::unknown_ptr) gdi_dd_ddi_adjust_fullscreen_gamma;
    
    // [NtGdiDdDDICacheHybridQueryValue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148610, 0x13864 bytes
    // win32k.sys .text:0x1126c, 0x388c7 bytes
    // win32k.sys .text:0x12670, 0x3e907 bytes
    // win32k.sys .text:0x1126c, 0x388c7 bytes
    //
    _x79(sdk::unknown_ptr) gdi_dd_ddi_cache_hybrid_query_value;
    
    // [NtGdiDdDDIChangeVideoMemoryReservation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148620, 0x13864 bytes
    // win32k.sys .text:0x11280, 0x388c7 bytes
    // win32k.sys .text:0x12684, 0x3e907 bytes
    // win32k.sys .text:0x11280, 0x388c7 bytes
    //
    _x80(sdk::unknown_ptr) gdi_dd_ddi_change_video_memory_reservation;
    
    // [NtGdiDdDDICheckExclusiveOwnership]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148630, 0x13864 bytes
    // win32k.sys .text:0x11294, 0x388c7 bytes
    // win32k.sys .text:0x12698, 0x3e907 bytes
    // win32k.sys .text:0x11294, 0x388c7 bytes
    //
    _x81(sdk::unknown_ptr) gdi_dd_ddi_check_exclusive_ownership;
    
    // [NtGdiDdDDICheckMonitorPowerState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148640, 0x13864 bytes
    // win32k.sys .text:0x112a8, 0x388c7 bytes
    // win32k.sys .text:0x126ac, 0x3e907 bytes
    // win32k.sys .text:0x112a8, 0x388c7 bytes
    //
    _x82(sdk::unknown_ptr) gdi_dd_ddi_check_monitor_power_state;
    
    // [NtGdiDdDDICheckMultiPlaneOverlaySupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148650, 0x13864 bytes
    // win32k.sys .text:0x112bc, 0x388c7 bytes
    // win32k.sys .text:0x126c0, 0x3e907 bytes
    // win32k.sys .text:0x112bc, 0x388c7 bytes
    //
    _x83(sdk::unknown_ptr) gdi_dd_ddi_check_multi_plane_overlay_support;
    
    // [NtGdiDdDDICheckMultiPlaneOverlaySupport2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148660, 0x13864 bytes
    // win32k.sys .text:0x112d0, 0x388c7 bytes
    // win32k.sys .text:0x126d4, 0x3e907 bytes
    // win32k.sys .text:0x112d0, 0x388c7 bytes
    //
    _x84(sdk::unknown_ptr) gdi_dd_ddi_check_multi_plane_overlay_support2;
    
    // [NtGdiDdDDICheckMultiPlaneOverlaySupport3]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148670, 0x13864 bytes
    // win32k.sys .text:0x112e4, 0x388c7 bytes
    // win32k.sys .text:0x126e8, 0x3e907 bytes
    // win32k.sys .text:0x112e4, 0x388c7 bytes
    //
    _x85(sdk::unknown_ptr) gdi_dd_ddi_check_multi_plane_overlay_support3;
    
    // [NtGdiDdDDICheckOcclusion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148680, 0x13864 bytes
    // win32k.sys .text:0x112f8, 0x388c7 bytes
    // win32k.sys .text:0x126fc, 0x3e907 bytes
    // win32k.sys .text:0x112f8, 0x388c7 bytes
    //
    _x86(sdk::unknown_ptr) gdi_dd_ddi_check_occlusion;
    
    // [NtGdiDdDDICheckSharedResourceAccess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148690, 0x13864 bytes
    // win32k.sys .text:0x1130c, 0x388c7 bytes
    // win32k.sys .text:0x12710, 0x3e907 bytes
    // win32k.sys .text:0x1130c, 0x388c7 bytes
    //
    _x87(sdk::unknown_ptr) gdi_dd_ddi_check_shared_resource_access;
    
    // [NtGdiDdDDICheckVidPnExclusiveOwnership]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1486a0, 0x13864 bytes
    // win32k.sys .text:0x11320, 0x388c7 bytes
    // win32k.sys .text:0x12724, 0x3e907 bytes
    // win32k.sys .text:0x11320, 0x388c7 bytes
    //
    _x88(sdk::unknown_ptr) gdi_dd_ddi_check_vid_pn_exclusive_ownership;
    
    // [NtGdiDdDDICloseAdapter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1486b0, 0x13864 bytes
    // win32k.sys .text:0x11334, 0x388c7 bytes
    // win32k.sys .text:0x12738, 0x3e907 bytes
    // win32k.sys .text:0x11334, 0x388c7 bytes
    //
    _x89(sdk::unknown_ptr) gdi_dd_ddi_close_adapter;
    
    // [NtGdiDdDDIConfigureSharedResource]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1486c0, 0x13864 bytes
    // win32k.sys .text:0x11348, 0x388c7 bytes
    // win32k.sys .text:0x1274c, 0x3e907 bytes
    // win32k.sys .text:0x11348, 0x388c7 bytes
    //
    _x90(sdk::unknown_ptr) gdi_dd_ddi_configure_shared_resource;
    
    // [NtGdiDdDDICreateAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1486d0, 0x13864 bytes
    // win32k.sys .text:0x1135c, 0x388c7 bytes
    // win32k.sys .text:0x12760, 0x3e907 bytes
    // win32k.sys .text:0x1135c, 0x388c7 bytes
    //
    _x91(sdk::unknown_ptr) gdi_dd_ddi_create_allocation;
    
    // [NtGdiDdDDICreateContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1486e0, 0x13864 bytes
    // win32k.sys .text:0x11384, 0x388c7 bytes
    // win32k.sys .text:0x12788, 0x3e907 bytes
    // win32k.sys .text:0x11384, 0x388c7 bytes
    //
    _x92(sdk::unknown_ptr) gdi_dd_ddi_create_context;
    
    // [NtGdiDdDDICreateContextVirtual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1486f0, 0x13864 bytes
    // win32k.sys .text:0x11398, 0x388c7 bytes
    // win32k.sys .text:0x1279c, 0x3e907 bytes
    // win32k.sys .text:0x11398, 0x388c7 bytes
    //
    _x93(sdk::unknown_ptr) gdi_dd_ddi_create_context_virtual;
    
    // [NtGdiDdDDICreateDCFromMemory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5e90, 0x13864 bytes
    // win32kfull.sys .text:0xd0a00, 0x1596d bytes
    // win32kfull.sys .text:0xb47d0, 0x1659e bytes
    // win32kfull.sys .text:0xd16c0, 0x1596d bytes
    //
    _x94(sdk::unknown_ptr) gdi_dd_ddi_create_dc_from_memory;
    
    // [NtGdiDdDDICreateDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148700, 0x13864 bytes
    // win32k.sys .text:0x113ac, 0x388c7 bytes
    // win32k.sys .text:0x127b0, 0x3e907 bytes
    // win32k.sys .text:0x113ac, 0x388c7 bytes
    //
    _x95(sdk::unknown_ptr) gdi_dd_ddi_create_device;
    
    // [NtGdiDdDDICreateKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148710, 0x13864 bytes
    // win32k.sys .text:0x113e8, 0x388c7 bytes
    // win32k.sys .text:0x127ec, 0x3e907 bytes
    // win32k.sys .text:0x113e8, 0x388c7 bytes
    //
    _x96(sdk::unknown_ptr) gdi_dd_ddi_create_keyed_mutex;
    
    // [NtGdiDdDDICreateKeyedMutex2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148720, 0x13864 bytes
    // win32k.sys .text:0x113fc, 0x388c7 bytes
    // win32k.sys .text:0x12800, 0x3e907 bytes
    // win32k.sys .text:0x113fc, 0x388c7 bytes
    //
    _x97(sdk::unknown_ptr) gdi_dd_ddi_create_keyed_mutex2;
    
    // [NtGdiDdDDICreateOutputDupl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148730, 0x13864 bytes
    // win32k.sys .text:0x11410, 0x388c7 bytes
    // win32k.sys .text:0x12814, 0x3e907 bytes
    // win32k.sys .text:0x11410, 0x388c7 bytes
    //
    _x98(sdk::unknown_ptr) gdi_dd_ddi_create_output_dupl;
    
    // [NtGdiDdDDICreateOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148740, 0x13864 bytes
    // win32k.sys .text:0x11424, 0x388c7 bytes
    // win32k.sys .text:0x12828, 0x3e907 bytes
    // win32k.sys .text:0x11424, 0x388c7 bytes
    //
    _x99(sdk::unknown_ptr) gdi_dd_ddi_create_overlay;
    
    // [NtGdiDdDDICreatePagingQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148750, 0x13864 bytes
    // win32k.sys .text:0x11438, 0x388c7 bytes
    // win32k.sys .text:0x1283c, 0x3e907 bytes
    // win32k.sys .text:0x11438, 0x388c7 bytes
    //
    _y00(sdk::unknown_ptr) gdi_dd_ddi_create_paging_queue;
    
    // [NtGdiDdDDICreateSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148760, 0x13864 bytes
    // win32k.sys .text:0x11460, 0x388c7 bytes
    // win32k.sys .text:0x12864, 0x3e907 bytes
    // win32k.sys .text:0x11460, 0x388c7 bytes
    //
    _y01(sdk::unknown_ptr) gdi_dd_ddi_create_swap_chain;
    
    // [NtGdiDdDDICreateSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148770, 0x13864 bytes
    // win32k.sys .text:0x11474, 0x388c7 bytes
    // win32k.sys .text:0x12878, 0x3e907 bytes
    // win32k.sys .text:0x11474, 0x388c7 bytes
    //
    _y02(sdk::unknown_ptr) gdi_dd_ddi_create_synchronization_object;
    
    // [NtGdiDdDDIDestroyAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148780, 0x13864 bytes
    // win32k.sys .text:0x1149c, 0x388c7 bytes
    // win32k.sys .text:0x128a0, 0x3e907 bytes
    // win32k.sys .text:0x1149c, 0x388c7 bytes
    //
    _y03(sdk::unknown_ptr) gdi_dd_ddi_destroy_allocation;
    
    // [NtGdiDdDDIDestroyAllocation2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148790, 0x13864 bytes
    // win32k.sys .text:0x114b0, 0x388c7 bytes
    // win32k.sys .text:0x128b4, 0x3e907 bytes
    // win32k.sys .text:0x114b0, 0x388c7 bytes
    //
    _y04(sdk::unknown_ptr) gdi_dd_ddi_destroy_allocation2;
    
    // [NtGdiDdDDIDestroyContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1487a0, 0x13864 bytes
    // win32k.sys .text:0x114c4, 0x388c7 bytes
    // win32k.sys .text:0x128c8, 0x3e907 bytes
    // win32k.sys .text:0x114c4, 0x388c7 bytes
    //
    _y05(sdk::unknown_ptr) gdi_dd_ddi_destroy_context;
    
    // [NtGdiDdDDIDestroyDCFromMemory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7ed0, 0x13864 bytes
    // win32kfull.sys .text:0x10fe80, 0x1596d bytes
    // win32kfull.sys .text:0xba840, 0x1659e bytes
    // win32kfull.sys .text:0x110db0, 0x1596d bytes
    //
    _y06(sdk::unknown_ptr) gdi_dd_ddi_destroy_dc_from_memory;
    
    // [NtGdiDdDDIDestroyDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1487b0, 0x13864 bytes
    // win32k.sys .text:0x114d8, 0x388c7 bytes
    // win32k.sys .text:0x128dc, 0x3e907 bytes
    // win32k.sys .text:0x114d8, 0x388c7 bytes
    //
    _y07(sdk::unknown_ptr) gdi_dd_ddi_destroy_device;
    
    // [NtGdiDdDDIDestroyKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1487c0, 0x13864 bytes
    // win32k.sys .text:0x11514, 0x388c7 bytes
    // win32k.sys .text:0x12918, 0x3e907 bytes
    // win32k.sys .text:0x11514, 0x388c7 bytes
    //
    _y08(sdk::unknown_ptr) gdi_dd_ddi_destroy_keyed_mutex;
    
    // [NtGdiDdDDIDestroyOutputDupl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1487d0, 0x13864 bytes
    // win32k.sys .text:0x11528, 0x388c7 bytes
    // win32k.sys .text:0x1292c, 0x3e907 bytes
    // win32k.sys .text:0x11528, 0x388c7 bytes
    //
    _y09(sdk::unknown_ptr) gdi_dd_ddi_destroy_output_dupl;
    
    // [NtGdiDdDDIDestroyOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1487e0, 0x13864 bytes
    // win32k.sys .text:0x1153c, 0x388c7 bytes
    // win32k.sys .text:0x12940, 0x3e907 bytes
    // win32k.sys .text:0x1153c, 0x388c7 bytes
    //
    _y10(sdk::unknown_ptr) gdi_dd_ddi_destroy_overlay;
    
    // [NtGdiDdDDIDestroyPagingQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1487f0, 0x13864 bytes
    // win32k.sys .text:0x11550, 0x388c7 bytes
    // win32k.sys .text:0x12954, 0x3e907 bytes
    // win32k.sys .text:0x11550, 0x388c7 bytes
    //
    _y11(sdk::unknown_ptr) gdi_dd_ddi_destroy_paging_queue;
    
    // [NtGdiDdDDIDestroySynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148800, 0x13864 bytes
    // win32k.sys .text:0x11578, 0x388c7 bytes
    // win32k.sys .text:0x1297c, 0x3e907 bytes
    // win32k.sys .text:0x11578, 0x388c7 bytes
    //
    _y12(sdk::unknown_ptr) gdi_dd_ddi_destroy_synchronization_object;
    
    // [NtGdiDdDDIEnumAdapters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148810, 0x13864 bytes
    // win32k.sys .text:0x115c8, 0x388c7 bytes
    // win32k.sys .text:0x129cc, 0x3e907 bytes
    // win32k.sys .text:0x115c8, 0x388c7 bytes
    //
    _y13(sdk::unknown_ptr) gdi_dd_ddi_enum_adapters;
    
    // [NtGdiDdDDIEnumAdapters2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148820, 0x13864 bytes
    // win32k.sys .text:0x115dc, 0x388c7 bytes
    // win32k.sys .text:0x129e0, 0x3e907 bytes
    // win32k.sys .text:0x115dc, 0x388c7 bytes
    //
    _y14(sdk::unknown_ptr) gdi_dd_ddi_enum_adapters2;
    
    // [NtGdiDdDDIEscape]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148830, 0x13864 bytes
    // win32k.sys .text:0x115f0, 0x388c7 bytes
    // win32k.sys .text:0x129f4, 0x3e907 bytes
    // win32k.sys .text:0x115f0, 0x388c7 bytes
    //
    _y15(sdk::unknown_ptr) gdi_dd_ddi_escape;
    
    // [NtGdiDdDDIEvict]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148840, 0x13864 bytes
    // win32k.sys .text:0x11604, 0x388c7 bytes
    // win32k.sys .text:0x12a08, 0x3e907 bytes
    // win32k.sys .text:0x11604, 0x388c7 bytes
    //
    _y16(sdk::unknown_ptr) gdi_dd_ddi_evict;
    
    // [NtGdiDdDDIFlipOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148850, 0x13864 bytes
    // win32k.sys .text:0x1162c, 0x388c7 bytes
    // win32k.sys .text:0x12a30, 0x3e907 bytes
    // win32k.sys .text:0x1162c, 0x388c7 bytes
    //
    _y17(sdk::unknown_ptr) gdi_dd_ddi_flip_overlay;
    
    // [NtGdiDdDDIFlushHeapTransitions]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148860, 0x13864 bytes
    // win32k.sys .text:0x11640, 0x388c7 bytes
    // win32k.sys .text:0x12a44, 0x3e907 bytes
    // win32k.sys .text:0x11640, 0x388c7 bytes
    //
    _y18(sdk::unknown_ptr) gdi_dd_ddi_flush_heap_transitions;
    
    // [NtGdiDdDDIFreeGpuVirtualAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148870, 0x13864 bytes
    // win32k.sys .text:0x11654, 0x388c7 bytes
    // win32k.sys .text:0x12a58, 0x3e907 bytes
    // win32k.sys .text:0x11654, 0x388c7 bytes
    //
    _y19(sdk::unknown_ptr) gdi_dd_ddi_free_gpu_virtual_address;
    
    // [NtGdiDdDDIGetCachedHybridQueryValue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148880, 0x13864 bytes
    // win32k.sys .text:0x1167c, 0x388c7 bytes
    // win32k.sys .text:0x12a80, 0x3e907 bytes
    // win32k.sys .text:0x1167c, 0x388c7 bytes
    //
    _y20(sdk::unknown_ptr) gdi_dd_ddi_get_cached_hybrid_query_value;
    
    // [NtGdiDdDDIGetContextInProcessSchedulingPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148890, 0x13864 bytes
    // win32k.sys .text:0x11690, 0x388c7 bytes
    // win32k.sys .text:0x12a94, 0x3e907 bytes
    // win32k.sys .text:0x11690, 0x388c7 bytes
    //
    _y21(sdk::unknown_ptr) gdi_dd_ddi_get_context_in_process_scheduling_priority;
    
    // [NtGdiDdDDIGetContextSchedulingPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1488a0, 0x13864 bytes
    // win32k.sys .text:0x116a4, 0x388c7 bytes
    // win32k.sys .text:0x12aa8, 0x3e907 bytes
    // win32k.sys .text:0x116a4, 0x388c7 bytes
    //
    _y22(sdk::unknown_ptr) gdi_dd_ddi_get_context_scheduling_priority;
    
    // [NtGdiDdDDIGetDeviceState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1488c0, 0x13864 bytes
    // win32k.sys .text:0x116cc, 0x388c7 bytes
    // win32k.sys .text:0x12ad0, 0x3e907 bytes
    // win32k.sys .text:0x116cc, 0x388c7 bytes
    //
    _y23(sdk::unknown_ptr) gdi_dd_ddi_get_device_state;
    
    // [NtGdiDdDDIGetDisplayModeList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1488d0, 0x13864 bytes
    // win32k.sys .text:0x116e0, 0x388c7 bytes
    // win32k.sys .text:0x12ae4, 0x3e907 bytes
    // win32k.sys .text:0x116e0, 0x388c7 bytes
    //
    _y24(sdk::unknown_ptr) gdi_dd_ddi_get_display_mode_list;
    
    // [NtGdiDdDDIGetDWMVerticalBlankEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1488b0, 0x13864 bytes
    // win32k.sys .text:0x116b8, 0x388c7 bytes
    // win32k.sys .text:0x12abc, 0x3e907 bytes
    // win32k.sys .text:0x116b8, 0x388c7 bytes
    //
    _y25(sdk::unknown_ptr) gdi_dd_ddi_get_dwm_vertical_blank_event;
    
    // [NtGdiDdDDIGetMultisampleMethodList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1488e0, 0x13864 bytes
    // win32k.sys .text:0x1171c, 0x388c7 bytes
    // win32k.sys .text:0x12b20, 0x3e907 bytes
    // win32k.sys .text:0x1171c, 0x388c7 bytes
    //
    _y26(sdk::unknown_ptr) gdi_dd_ddi_get_multisample_method_list;
    
    // [NtGdiDdDDIGetOverlayState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1488f0, 0x13864 bytes
    // win32k.sys .text:0x11730, 0x388c7 bytes
    // win32k.sys .text:0x12b34, 0x3e907 bytes
    // win32k.sys .text:0x11730, 0x388c7 bytes
    //
    _y27(sdk::unknown_ptr) gdi_dd_ddi_get_overlay_state;
    
    // [NtGdiDdDDIGetPresentHistory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148900, 0x13864 bytes
    // win32k.sys .text:0x11758, 0x388c7 bytes
    // win32k.sys .text:0x12b5c, 0x3e907 bytes
    // win32k.sys .text:0x11758, 0x388c7 bytes
    //
    _y28(sdk::unknown_ptr) gdi_dd_ddi_get_present_history;
    
    // [NtGdiDdDDIGetPresentQueueEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262ab0, 0x13864 bytes
    // win32kfull.sys .text:0x278560, 0x1596d bytes
    // win32kfull.sys .text:0x278200, 0x1659e bytes
    // win32kfull.sys .text:0x2784d0, 0x1596d bytes
    //
    _y29(sdk::unknown_ptr) gdi_dd_ddi_get_present_queue_event;
    
    // [NtGdiDdDDIGetProcessSchedulingPriorityClass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148910, 0x13864 bytes
    // win32k.sys .text:0x11794, 0x388c7 bytes
    // win32k.sys .text:0x12b98, 0x3e907 bytes
    // win32k.sys .text:0x11794, 0x388c7 bytes
    //
    _y30(sdk::unknown_ptr) gdi_dd_ddi_get_process_scheduling_priority_class;
    
    // [NtGdiDdDDIGetResourcePresentPrivateDriverData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148920, 0x13864 bytes
    // win32k.sys .text:0x117a8, 0x388c7 bytes
    // win32k.sys .text:0x12bac, 0x3e907 bytes
    // win32k.sys .text:0x117a8, 0x388c7 bytes
    //
    _y31(sdk::unknown_ptr) gdi_dd_ddi_get_resource_present_private_driver_data;
    
    // [NtGdiDdDDIGetRuntimeData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148930, 0x13864 bytes
    // win32k.sys .text:0x117bc, 0x388c7 bytes
    // win32k.sys .text:0x12bc0, 0x3e907 bytes
    // win32k.sys .text:0x117bc, 0x388c7 bytes
    //
    _y32(sdk::unknown_ptr) gdi_dd_ddi_get_runtime_data;
    
    // [NtGdiDdDDIGetScanLine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148940, 0x13864 bytes
    // win32k.sys .text:0x117d0, 0x388c7 bytes
    // win32k.sys .text:0x12bd4, 0x3e907 bytes
    // win32k.sys .text:0x117d0, 0x388c7 bytes
    //
    _y33(sdk::unknown_ptr) gdi_dd_ddi_get_scan_line;
    
    // [NtGdiDdDDIGetSetSwapChainMetadata]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148950, 0x13864 bytes
    // win32k.sys .text:0x117e4, 0x388c7 bytes
    // win32k.sys .text:0x12be8, 0x3e907 bytes
    // win32k.sys .text:0x117e4, 0x388c7 bytes
    //
    _y34(sdk::unknown_ptr) gdi_dd_ddi_get_set_swap_chain_metadata;
    
    // [NtGdiDdDDIGetSharedPrimaryHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148960, 0x13864 bytes
    // win32k.sys .text:0x117f8, 0x388c7 bytes
    // win32k.sys .text:0x12bfc, 0x3e907 bytes
    // win32k.sys .text:0x117f8, 0x388c7 bytes
    //
    _y35(sdk::unknown_ptr) gdi_dd_ddi_get_shared_primary_handle;
    
    // [NtGdiDdDDIGetSharedResourceAdapterLuid]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148970, 0x13864 bytes
    // win32k.sys .text:0x1180c, 0x388c7 bytes
    // win32k.sys .text:0x12c10, 0x3e907 bytes
    // win32k.sys .text:0x1180c, 0x388c7 bytes
    //
    _y36(sdk::unknown_ptr) gdi_dd_ddi_get_shared_resource_adapter_luid;
    
    // [NtGdiDdDDIInvalidateActiveVidPn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148980, 0x13864 bytes
    // win32k.sys .text:0x11848, 0x388c7 bytes
    // win32k.sys .text:0x12c60, 0x3e907 bytes
    // win32k.sys .text:0x11848, 0x388c7 bytes
    //
    _y37(sdk::unknown_ptr) gdi_dd_ddi_invalidate_active_vid_pn;
    
    // [NtGdiDdDDIInvalidateCache]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148990, 0x13864 bytes
    // win32k.sys .text:0x1185c, 0x388c7 bytes
    // win32k.sys .text:0x12c74, 0x3e907 bytes
    // win32k.sys .text:0x1185c, 0x388c7 bytes
    //
    _y38(sdk::unknown_ptr) gdi_dd_ddi_invalidate_cache;
    
    // [NtGdiDdDDILock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1489a0, 0x13864 bytes
    // win32k.sys .text:0x11870, 0x388c7 bytes
    // win32k.sys .text:0x12c88, 0x3e907 bytes
    // win32k.sys .text:0x11870, 0x388c7 bytes
    //
    _y39(sdk::unknown_ptr) gdi_dd_ddi_lock;
    
    // [NtGdiDdDDILock2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1489b0, 0x13864 bytes
    // win32k.sys .text:0x11884, 0x388c7 bytes
    // win32k.sys .text:0x12c9c, 0x3e907 bytes
    // win32k.sys .text:0x11884, 0x388c7 bytes
    //
    _y40(sdk::unknown_ptr) gdi_dd_ddi_lock2;
    
    // [NtGdiDdDDIMakeResident]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1489c0, 0x13864 bytes
    // win32k.sys .text:0x11898, 0x388c7 bytes
    // win32k.sys .text:0x12cb0, 0x3e907 bytes
    // win32k.sys .text:0x11898, 0x388c7 bytes
    //
    _y41(sdk::unknown_ptr) gdi_dd_ddi_make_resident;
    
    // [NtGdiDdDDIMapGpuVirtualAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1489d0, 0x13864 bytes
    // win32k.sys .text:0x118ac, 0x388c7 bytes
    // win32k.sys .text:0x12cc4, 0x3e907 bytes
    // win32k.sys .text:0x118ac, 0x388c7 bytes
    //
    _y42(sdk::unknown_ptr) gdi_dd_ddi_map_gpu_virtual_address;
    
    // [NtGdiDdDDIMarkDeviceAsError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1489e0, 0x13864 bytes
    // win32k.sys .text:0x118c0, 0x388c7 bytes
    // win32k.sys .text:0x12cd8, 0x3e907 bytes
    // win32k.sys .text:0x118c0, 0x388c7 bytes
    //
    _y43(sdk::unknown_ptr) gdi_dd_ddi_mark_device_as_error;
    
    // [NtGdiDdDDINetDispGetNextChunkInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1489f0, 0x13864 bytes
    // win32k.sys .text:0x118d4, 0x388c7 bytes
    // win32k.sys .text:0x12cec, 0x3e907 bytes
    // win32k.sys .text:0x118d4, 0x388c7 bytes
    //
    _y44(sdk::unknown_ptr) gdi_dd_ddi_net_disp_get_next_chunk_info;
    
    // [NtGdiDdDDINetDispQueryMiracastDisplayDeviceStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a00, 0x13864 bytes
    // win32k.sys .text:0x118e8, 0x388c7 bytes
    // win32k.sys .text:0x12d00, 0x3e907 bytes
    // win32k.sys .text:0x118e8, 0x388c7 bytes
    //
    _y45(sdk::unknown_ptr) gdi_dd_ddi_net_disp_query_miracast_display_device_status;
    
    // [NtGdiDdDDINetDispQueryMiracastDisplayDeviceSupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a10, 0x13864 bytes
    // win32k.sys .text:0x118fc, 0x388c7 bytes
    // win32k.sys .text:0x12d14, 0x3e907 bytes
    // win32k.sys .text:0x118fc, 0x388c7 bytes
    //
    _y46(sdk::unknown_ptr) gdi_dd_ddi_net_disp_query_miracast_display_device_support;
    
    // [NtGdiDdDDINetDispStartMiracastDisplayDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a20, 0x13864 bytes
    // win32k.sys .text:0x11910, 0x388c7 bytes
    // win32k.sys .text:0x12d28, 0x3e907 bytes
    // win32k.sys .text:0x11910, 0x388c7 bytes
    //
    _y47(sdk::unknown_ptr) gdi_dd_ddi_net_disp_start_miracast_display_device;
    
    // [NtGdiDdDDINetDispStopMiracastDisplayDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a30, 0x13864 bytes
    // win32k.sys .text:0x11924, 0x388c7 bytes
    // win32k.sys .text:0x12d3c, 0x3e907 bytes
    // win32k.sys .text:0x11924, 0x388c7 bytes
    //
    _y48(sdk::unknown_ptr) gdi_dd_ddi_net_disp_stop_miracast_display_device;
    
    // [NtGdiDdDDIOfferAllocations]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a50, 0x13864 bytes
    // win32k.sys .text:0x11938, 0x388c7 bytes
    // win32k.sys .text:0x12d50, 0x3e907 bytes
    // win32k.sys .text:0x11938, 0x388c7 bytes
    //
    _y49(sdk::unknown_ptr) gdi_dd_ddi_offer_allocations;
    
    // [NtGdiDdDDIOpenAdapterFromDeviceName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a60, 0x13864 bytes
    // win32k.sys .text:0x1194c, 0x388c7 bytes
    // win32k.sys .text:0x12d64, 0x3e907 bytes
    // win32k.sys .text:0x1194c, 0x388c7 bytes
    //
    _y50(sdk::unknown_ptr) gdi_dd_ddi_open_adapter_from_device_name;
    
    // [NtGdiDdDDIOpenAdapterFromHdc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a70, 0x13864 bytes
    // win32k.sys .text:0x11960, 0x388c7 bytes
    // win32k.sys .text:0x12d78, 0x3e907 bytes
    // win32k.sys .text:0x11960, 0x388c7 bytes
    //
    _y51(sdk::unknown_ptr) gdi_dd_ddi_open_adapter_from_hdc;
    
    // [NtGdiDdDDIOpenAdapterFromLuid]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a80, 0x13864 bytes
    // win32k.sys .text:0x11974, 0x388c7 bytes
    // win32k.sys .text:0x12d8c, 0x3e907 bytes
    // win32k.sys .text:0x11974, 0x388c7 bytes
    //
    _y52(sdk::unknown_ptr) gdi_dd_ddi_open_adapter_from_luid;
    
    // [NtGdiDdDDIOpenKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148a90, 0x13864 bytes
    // win32k.sys .text:0x1199c, 0x388c7 bytes
    // win32k.sys .text:0x12db4, 0x3e907 bytes
    // win32k.sys .text:0x1199c, 0x388c7 bytes
    //
    _y53(sdk::unknown_ptr) gdi_dd_ddi_open_keyed_mutex;
    
    // [NtGdiDdDDIOpenKeyedMutex2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148aa0, 0x13864 bytes
    // win32k.sys .text:0x119b0, 0x388c7 bytes
    // win32k.sys .text:0x12dc8, 0x3e907 bytes
    // win32k.sys .text:0x119b0, 0x388c7 bytes
    //
    _y54(sdk::unknown_ptr) gdi_dd_ddi_open_keyed_mutex2;
    
    // [NtGdiDdDDIOpenNtHandleFromName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ab0, 0x13864 bytes
    // win32k.sys .text:0x119d8, 0x388c7 bytes
    // win32k.sys .text:0x12df0, 0x3e907 bytes
    // win32k.sys .text:0x119d8, 0x388c7 bytes
    //
    _y55(sdk::unknown_ptr) gdi_dd_ddi_open_nt_handle_from_name;
    
    // [NtGdiDdDDIOpenResource]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ac0, 0x13864 bytes
    // win32k.sys .text:0x11a00, 0x388c7 bytes
    // win32k.sys .text:0x12e18, 0x3e907 bytes
    // win32k.sys .text:0x11a00, 0x388c7 bytes
    //
    _y56(sdk::unknown_ptr) gdi_dd_ddi_open_resource;
    
    // [NtGdiDdDDIOpenResourceFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ad0, 0x13864 bytes
    // win32k.sys .text:0x11a14, 0x388c7 bytes
    // win32k.sys .text:0x12e2c, 0x3e907 bytes
    // win32k.sys .text:0x11a14, 0x388c7 bytes
    //
    _y57(sdk::unknown_ptr) gdi_dd_ddi_open_resource_from_nt_handle;
    
    // [NtGdiDdDDIOpenSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ae0, 0x13864 bytes
    // win32k.sys .text:0x11a28, 0x388c7 bytes
    // win32k.sys .text:0x12e40, 0x3e907 bytes
    // win32k.sys .text:0x11a28, 0x388c7 bytes
    //
    _y58(sdk::unknown_ptr) gdi_dd_ddi_open_swap_chain;
    
    // [NtGdiDdDDIOpenSyncObjectFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148af0, 0x13864 bytes
    // win32k.sys .text:0x11a3c, 0x388c7 bytes
    // win32k.sys .text:0x12e54, 0x3e907 bytes
    // win32k.sys .text:0x11a3c, 0x388c7 bytes
    //
    _y59(sdk::unknown_ptr) gdi_dd_ddi_open_sync_object_from_nt_handle;
    
    // [NtGdiDdDDIOpenSyncObjectFromNtHandle2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b00, 0x13864 bytes
    // win32k.sys .text:0x11a50, 0x388c7 bytes
    // win32k.sys .text:0x12e68, 0x3e907 bytes
    // win32k.sys .text:0x11a50, 0x388c7 bytes
    //
    _y60(sdk::unknown_ptr) gdi_dd_ddi_open_sync_object_from_nt_handle2;
    
    // [NtGdiDdDDIOpenSyncObjectNtHandleFromName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b10, 0x13864 bytes
    // win32k.sys .text:0x11a64, 0x388c7 bytes
    // win32k.sys .text:0x12e7c, 0x3e907 bytes
    // win32k.sys .text:0x11a64, 0x388c7 bytes
    //
    _y61(sdk::unknown_ptr) gdi_dd_ddi_open_sync_object_nt_handle_from_name;
    
    // [NtGdiDdDDIOpenSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b20, 0x13864 bytes
    // win32k.sys .text:0x11a78, 0x388c7 bytes
    // win32k.sys .text:0x12e90, 0x3e907 bytes
    // win32k.sys .text:0x11a78, 0x388c7 bytes
    //
    _y62(sdk::unknown_ptr) gdi_dd_ddi_open_synchronization_object;
    
    // [NtGdiDdDDIOutputDuplGetFrameInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b30, 0x13864 bytes
    // win32k.sys .text:0x11a8c, 0x388c7 bytes
    // win32k.sys .text:0x12ea4, 0x3e907 bytes
    // win32k.sys .text:0x11a8c, 0x388c7 bytes
    //
    _y63(sdk::unknown_ptr) gdi_dd_ddi_output_dupl_get_frame_info;
    
    // [NtGdiDdDDIOutputDuplGetMetaData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b40, 0x13864 bytes
    // win32k.sys .text:0x11aa0, 0x388c7 bytes
    // win32k.sys .text:0x12eb8, 0x3e907 bytes
    // win32k.sys .text:0x11aa0, 0x388c7 bytes
    //
    _y64(sdk::unknown_ptr) gdi_dd_ddi_output_dupl_get_meta_data;
    
    // [NtGdiDdDDIOutputDuplGetPointerShapeData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b50, 0x13864 bytes
    // win32k.sys .text:0x11ab4, 0x388c7 bytes
    // win32k.sys .text:0x12ecc, 0x3e907 bytes
    // win32k.sys .text:0x11ab4, 0x388c7 bytes
    //
    _y65(sdk::unknown_ptr) gdi_dd_ddi_output_dupl_get_pointer_shape_data;
    
    // [NtGdiDdDDIOutputDuplPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b60, 0x13864 bytes
    // win32k.sys .text:0x11ac8, 0x388c7 bytes
    // win32k.sys .text:0x12ee0, 0x3e907 bytes
    // win32k.sys .text:0x11ac8, 0x388c7 bytes
    //
    _y66(sdk::unknown_ptr) gdi_dd_ddi_output_dupl_present;
    
    // [NtGdiDdDDIOutputDuplReleaseFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b70, 0x13864 bytes
    // win32k.sys .text:0x11adc, 0x388c7 bytes
    // win32k.sys .text:0x12ef4, 0x3e907 bytes
    // win32k.sys .text:0x11adc, 0x388c7 bytes
    //
    _y67(sdk::unknown_ptr) gdi_dd_ddi_output_dupl_release_frame;
    
    // [NtGdiDdDDIPollDisplayChildren]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148b90, 0x13864 bytes
    // win32k.sys .text:0x11af0, 0x388c7 bytes
    // win32k.sys .text:0x12f08, 0x3e907 bytes
    // win32k.sys .text:0x11af0, 0x388c7 bytes
    //
    _y68(sdk::unknown_ptr) gdi_dd_ddi_poll_display_children;
    
    // [NtGdiDdDDIPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ba0, 0x13864 bytes
    // win32k.sys .text:0x11b04, 0x388c7 bytes
    // win32k.sys .text:0x12f1c, 0x3e907 bytes
    // win32k.sys .text:0x11b04, 0x388c7 bytes
    //
    _y69(sdk::unknown_ptr) gdi_dd_ddi_present;
    
    // [NtGdiDdDDIPresentMultiPlaneOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148bb0, 0x13864 bytes
    // win32k.sys .text:0x11b18, 0x388c7 bytes
    // win32k.sys .text:0x12f30, 0x3e907 bytes
    // win32k.sys .text:0x11b18, 0x388c7 bytes
    //
    _y70(sdk::unknown_ptr) gdi_dd_ddi_present_multi_plane_overlay;
    
    // [NtGdiDdDDIPresentMultiPlaneOverlay2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148bc0, 0x13864 bytes
    // win32k.sys .text:0x11b2c, 0x388c7 bytes
    // win32k.sys .text:0x12f44, 0x3e907 bytes
    // win32k.sys .text:0x11b2c, 0x388c7 bytes
    //
    _y71(sdk::unknown_ptr) gdi_dd_ddi_present_multi_plane_overlay2;
    
    // [NtGdiDdDDIPresentMultiPlaneOverlay3]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148bd0, 0x13864 bytes
    // win32k.sys .text:0x11b40, 0x388c7 bytes
    // win32k.sys .text:0x12f58, 0x3e907 bytes
    // win32k.sys .text:0x11b40, 0x388c7 bytes
    //
    _y72(sdk::unknown_ptr) gdi_dd_ddi_present_multi_plane_overlay3;
    
    // [NtGdiDdDDIQueryAdapterInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148be0, 0x13864 bytes
    // win32k.sys .text:0x11b68, 0x388c7 bytes
    // win32k.sys .text:0x12f80, 0x3e907 bytes
    // win32k.sys .text:0x11b68, 0x388c7 bytes
    //
    _y73(sdk::unknown_ptr) gdi_dd_ddi_query_adapter_info;
    
    // [NtGdiDdDDIQueryAllocationResidency]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148bf0, 0x13864 bytes
    // win32k.sys .text:0x11b7c, 0x388c7 bytes
    // win32k.sys .text:0x12f94, 0x3e907 bytes
    // win32k.sys .text:0x11b7c, 0x388c7 bytes
    //
    _y74(sdk::unknown_ptr) gdi_dd_ddi_query_allocation_residency;
    
    // [NtGdiDdDDIQueryClockCalibration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c00, 0x13864 bytes
    // win32k.sys .text:0x11b90, 0x388c7 bytes
    // win32k.sys .text:0x12fa8, 0x3e907 bytes
    // win32k.sys .text:0x11b90, 0x388c7 bytes
    //
    _y75(sdk::unknown_ptr) gdi_dd_ddi_query_clock_calibration;
    
    // [NtGdiDdDDIQueryFSEBlock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c10, 0x13864 bytes
    // win32k.sys .text:0x11ba4, 0x388c7 bytes
    // win32k.sys .text:0x12fbc, 0x3e907 bytes
    // win32k.sys .text:0x11ba4, 0x388c7 bytes
    //
    _y76(sdk::unknown_ptr) gdi_dd_ddi_query_fse_block;
    
    // [NtGdiDdDDIQueryProcessOfferInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c20, 0x13864 bytes
    // win32k.sys .text:0x11bb8, 0x388c7 bytes
    // win32k.sys .text:0x12fd0, 0x3e907 bytes
    // win32k.sys .text:0x11bb8, 0x388c7 bytes
    //
    _y77(sdk::unknown_ptr) gdi_dd_ddi_query_process_offer_info;
    
    // [NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c30, 0x13864 bytes
    // win32k.sys .text:0x11bf4, 0x388c7 bytes
    // win32k.sys .text:0x1300c, 0x3e907 bytes
    // win32k.sys .text:0x11bf4, 0x388c7 bytes
    //
    _y78(sdk::unknown_ptr) gdi_dd_ddi_query_remote_vid_pn_source_from_gdi_display_name;
    
    // [NtGdiDdDDIQueryResourceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c40, 0x13864 bytes
    // win32k.sys .text:0x11c08, 0x388c7 bytes
    // win32k.sys .text:0x13020, 0x3e907 bytes
    // win32k.sys .text:0x11c08, 0x388c7 bytes
    //
    _y79(sdk::unknown_ptr) gdi_dd_ddi_query_resource_info;
    
    // [NtGdiDdDDIQueryResourceInfoFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c50, 0x13864 bytes
    // win32k.sys .text:0x11c1c, 0x388c7 bytes
    // win32k.sys .text:0x13034, 0x3e907 bytes
    // win32k.sys .text:0x11c1c, 0x388c7 bytes
    //
    _y80(sdk::unknown_ptr) gdi_dd_ddi_query_resource_info_from_nt_handle;
    
    // [NtGdiDdDDIQueryStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c60, 0x13864 bytes
    // win32k.sys .text:0x11c30, 0x388c7 bytes
    // win32k.sys .text:0x13048, 0x3e907 bytes
    // win32k.sys .text:0x11c30, 0x388c7 bytes
    //
    _y81(sdk::unknown_ptr) gdi_dd_ddi_query_statistics;
    
    // [NtGdiDdDDIQueryVidPnExclusiveOwnership]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c70, 0x13864 bytes
    // win32k.sys .text:0x11c44, 0x388c7 bytes
    // win32k.sys .text:0x1305c, 0x3e907 bytes
    // win32k.sys .text:0x11c44, 0x388c7 bytes
    //
    _y82(sdk::unknown_ptr) gdi_dd_ddi_query_vid_pn_exclusive_ownership;
    
    // [NtGdiDdDDIQueryVideoMemoryInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c80, 0x13864 bytes
    // win32k.sys .text:0x11c58, 0x388c7 bytes
    // win32k.sys .text:0x13070, 0x3e907 bytes
    // win32k.sys .text:0x11c58, 0x388c7 bytes
    //
    _y83(sdk::unknown_ptr) gdi_dd_ddi_query_video_memory_info;
    
    // [NtGdiDdDDIReclaimAllocations]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148c90, 0x13864 bytes
    // win32k.sys .text:0x11c6c, 0x388c7 bytes
    // win32k.sys .text:0x13084, 0x3e907 bytes
    // win32k.sys .text:0x11c6c, 0x388c7 bytes
    //
    _y84(sdk::unknown_ptr) gdi_dd_ddi_reclaim_allocations;
    
    // [NtGdiDdDDIReclaimAllocations2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ca0, 0x13864 bytes
    // win32k.sys .text:0x11c80, 0x388c7 bytes
    // win32k.sys .text:0x13098, 0x3e907 bytes
    // win32k.sys .text:0x11c80, 0x388c7 bytes
    //
    _y85(sdk::unknown_ptr) gdi_dd_ddi_reclaim_allocations2;
    
    // [NtGdiDdDDIReleaseKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148cb0, 0x13864 bytes
    // win32k.sys .text:0x11c94, 0x388c7 bytes
    // win32k.sys .text:0x130ac, 0x3e907 bytes
    // win32k.sys .text:0x11c94, 0x388c7 bytes
    //
    _y86(sdk::unknown_ptr) gdi_dd_ddi_release_keyed_mutex;
    
    // [NtGdiDdDDIReleaseKeyedMutex2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148cc0, 0x13864 bytes
    // win32k.sys .text:0x11ca8, 0x388c7 bytes
    // win32k.sys .text:0x130c0, 0x3e907 bytes
    // win32k.sys .text:0x11ca8, 0x388c7 bytes
    //
    _y87(sdk::unknown_ptr) gdi_dd_ddi_release_keyed_mutex2;
    
    // [NtGdiDdDDIReleaseProcessVidPnSourceOwners]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148cd0, 0x13864 bytes
    // win32k.sys .text:0x11cbc, 0x388c7 bytes
    // win32k.sys .text:0x130d4, 0x3e907 bytes
    // win32k.sys .text:0x11cbc, 0x388c7 bytes
    //
    _y88(sdk::unknown_ptr) gdi_dd_ddi_release_process_vid_pn_source_owners;
    
    // [NtGdiDdDDIReleaseSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ce0, 0x13864 bytes
    // win32k.sys .text:0x11cd0, 0x388c7 bytes
    // win32k.sys .text:0x130e8, 0x3e907 bytes
    // win32k.sys .text:0x11cd0, 0x388c7 bytes
    //
    _y89(sdk::unknown_ptr) gdi_dd_ddi_release_swap_chain;
    
    // [NtGdiDdDDIRender]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148cf0, 0x13864 bytes
    // win32k.sys .text:0x11cf8, 0x388c7 bytes
    // win32k.sys .text:0x13110, 0x3e907 bytes
    // win32k.sys .text:0x11cf8, 0x388c7 bytes
    //
    _y90(sdk::unknown_ptr) gdi_dd_ddi_render;
    
    // [NtGdiDdDDIReserveGpuVirtualAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d00, 0x13864 bytes
    // win32k.sys .text:0x11d0c, 0x388c7 bytes
    // win32k.sys .text:0x13124, 0x3e907 bytes
    // win32k.sys .text:0x11d0c, 0x388c7 bytes
    //
    _y91(sdk::unknown_ptr) gdi_dd_ddi_reserve_gpu_virtual_address;
    
    // [NtGdiDdDDISetAllocationPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d10, 0x13864 bytes
    // win32k.sys .text:0x11d20, 0x388c7 bytes
    // win32k.sys .text:0x13138, 0x3e907 bytes
    // win32k.sys .text:0x11d20, 0x388c7 bytes
    //
    _y92(sdk::unknown_ptr) gdi_dd_ddi_set_allocation_priority;
    
    // [NtGdiDdDDISetContextInProcessSchedulingPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d20, 0x13864 bytes
    // win32k.sys .text:0x11d34, 0x388c7 bytes
    // win32k.sys .text:0x1314c, 0x3e907 bytes
    // win32k.sys .text:0x11d34, 0x388c7 bytes
    //
    _y93(sdk::unknown_ptr) gdi_dd_ddi_set_context_in_process_scheduling_priority;
    
    // [NtGdiDdDDISetContextSchedulingPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d30, 0x13864 bytes
    // win32k.sys .text:0x11d48, 0x388c7 bytes
    // win32k.sys .text:0x13160, 0x3e907 bytes
    // win32k.sys .text:0x11d48, 0x388c7 bytes
    //
    _y94(sdk::unknown_ptr) gdi_dd_ddi_set_context_scheduling_priority;
    
    // [NtGdiDdDDISetDisplayMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d40, 0x13864 bytes
    // win32k.sys .text:0x11d5c, 0x388c7 bytes
    // win32k.sys .text:0x13174, 0x3e907 bytes
    // win32k.sys .text:0x11d5c, 0x388c7 bytes
    //
    _y95(sdk::unknown_ptr) gdi_dd_ddi_set_display_mode;
    
    // [NtGdiDdDDISetDodIndirectSwapchain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d60, 0x13864 bytes
    // win32k.sys .text:0x11d70, 0x388c7 bytes
    // win32k.sys .text:0x13188, 0x3e907 bytes
    // win32k.sys .text:0x11d70, 0x388c7 bytes
    //
    _y96(sdk::unknown_ptr) gdi_dd_ddi_set_dod_indirect_swapchain;
    
    // [NtGdiDdDDISetFSEBlock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d70, 0x13864 bytes
    // win32k.sys .text:0x11d84, 0x388c7 bytes
    // win32k.sys .text:0x1319c, 0x3e907 bytes
    // win32k.sys .text:0x11d84, 0x388c7 bytes
    //
    _y97(sdk::unknown_ptr) gdi_dd_ddi_set_fse_block;
    
    // [NtGdiDdDDISetGammaRamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d80, 0x13864 bytes
    // win32k.sys .text:0x11d98, 0x388c7 bytes
    // win32k.sys .text:0x131b0, 0x3e907 bytes
    // win32k.sys .text:0x11d98, 0x388c7 bytes
    //
    _y98(sdk::unknown_ptr) gdi_dd_ddi_set_gamma_ramp;
    
    // [NtGdiDdDDISetHwProtectionTeardownRecovery]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148d90, 0x13864 bytes
    // win32k.sys .text:0x11dac, 0x388c7 bytes
    // win32k.sys .text:0x131c4, 0x3e907 bytes
    // win32k.sys .text:0x11dac, 0x388c7 bytes
    //
    _y99(sdk::unknown_ptr) gdi_dd_ddi_set_hw_protection_teardown_recovery;
    
    // [NtGdiDdDDISetProcessSchedulingPriorityClass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148da0, 0x13864 bytes
    // win32k.sys .text:0x11e10, 0x388c7 bytes
    // win32k.sys .text:0x13228, 0x3e907 bytes
    // win32k.sys .text:0x11e10, 0x388c7 bytes
    //
    _z00(sdk::unknown_ptr) gdi_dd_ddi_set_process_scheduling_priority_class;
    
    // [NtGdiDdDDISetQueuedLimit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148db0, 0x13864 bytes
    // win32k.sys .text:0x11e24, 0x388c7 bytes
    // win32k.sys .text:0x1323c, 0x3e907 bytes
    // win32k.sys .text:0x11e24, 0x388c7 bytes
    //
    _z01(sdk::unknown_ptr) gdi_dd_ddi_set_queued_limit;
    
    // [NtGdiDdDDISetStablePowerState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148dc0, 0x13864 bytes
    // win32k.sys .text:0x11e38, 0x388c7 bytes
    // win32k.sys .text:0x13250, 0x3e907 bytes
    // win32k.sys .text:0x11e38, 0x388c7 bytes
    //
    _z02(sdk::unknown_ptr) gdi_dd_ddi_set_stable_power_state;
    
    // [NtGdiDdDDISetStereoEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148dd0, 0x13864 bytes
    // win32k.sys .text:0x11e4c, 0x388c7 bytes
    // win32k.sys .text:0x13264, 0x3e907 bytes
    // win32k.sys .text:0x11e4c, 0x388c7 bytes
    //
    _z03(sdk::unknown_ptr) gdi_dd_ddi_set_stereo_enabled;
    
    // [NtGdiDdDDISetSyncRefreshCountWaitTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148de0, 0x13864 bytes
    // win32k.sys .text:0x11e60, 0x388c7 bytes
    // win32k.sys .text:0x13278, 0x3e907 bytes
    // win32k.sys .text:0x11e60, 0x388c7 bytes
    //
    _z04(sdk::unknown_ptr) gdi_dd_ddi_set_sync_refresh_count_wait_target;
    
    // [NtGdiDdDDISetVidPnSourceHwProtection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148df0, 0x13864 bytes
    // win32k.sys .text:0x11e74, 0x388c7 bytes
    // win32k.sys .text:0x1328c, 0x3e907 bytes
    // win32k.sys .text:0x11e74, 0x388c7 bytes
    //
    _z05(sdk::unknown_ptr) gdi_dd_ddi_set_vid_pn_source_hw_protection;
    
    // [NtGdiDdDDISetVidPnSourceOwner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e00, 0x13864 bytes
    // win32k.sys .text:0x11e88, 0x388c7 bytes
    // win32k.sys .text:0x132a0, 0x3e907 bytes
    // win32k.sys .text:0x11e88, 0x388c7 bytes
    //
    _z06(sdk::unknown_ptr) gdi_dd_ddi_set_vid_pn_source_owner;
    
    // [NtGdiDdDDIShareObjects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e20, 0x13864 bytes
    // win32k.sys .text:0x11eb0, 0x388c7 bytes
    // win32k.sys .text:0x132c8, 0x3e907 bytes
    // win32k.sys .text:0x11eb0, 0x388c7 bytes
    //
    _z07(sdk::unknown_ptr) gdi_dd_ddi_share_objects;
    
    // [NtGdiDdDDISharedPrimaryLockNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262b40, 0x13864 bytes
    // win32kfull.sys .text:0x278610, 0x1596d bytes
    // win32kfull.sys .text:0x2782b0, 0x1659e bytes
    // win32kfull.sys .text:0x278580, 0x1596d bytes
    //
    _z08(sdk::unknown_ptr) gdi_dd_ddi_shared_primary_lock_notification;
    
    // [NtGdiDdDDISharedPrimaryUnLockNotification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262bc0, 0x13864 bytes
    // win32kfull.sys .text:0x2786a0, 0x1596d bytes
    // win32kfull.sys .text:0x278340, 0x1659e bytes
    // win32kfull.sys .text:0x278610, 0x1596d bytes
    //
    _z09(sdk::unknown_ptr) gdi_dd_ddi_shared_primary_un_lock_notification;
    
    // [NtGdiDdDDISignalSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e30, 0x13864 bytes
    // win32k.sys .text:0x11ec4, 0x388c7 bytes
    // win32k.sys .text:0x132dc, 0x3e907 bytes
    // win32k.sys .text:0x11ec4, 0x388c7 bytes
    //
    _z10(sdk::unknown_ptr) gdi_dd_ddi_signal_synchronization_object;
    
    // [NtGdiDdDDISignalSynchronizationObjectFromCpu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e40, 0x13864 bytes
    // win32k.sys .text:0x11ed8, 0x388c7 bytes
    // win32k.sys .text:0x132f0, 0x3e907 bytes
    // win32k.sys .text:0x11ed8, 0x388c7 bytes
    //
    _z11(sdk::unknown_ptr) gdi_dd_ddi_signal_synchronization_object_from_cpu;
    
    // [NtGdiDdDDISignalSynchronizationObjectFromGpu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e50, 0x13864 bytes
    // win32k.sys .text:0x11eec, 0x388c7 bytes
    // win32k.sys .text:0x13304, 0x3e907 bytes
    // win32k.sys .text:0x11eec, 0x388c7 bytes
    //
    _z12(sdk::unknown_ptr) gdi_dd_ddi_signal_synchronization_object_from_gpu;
    
    // [NtGdiDdDDISignalSynchronizationObjectFromGpu2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e60, 0x13864 bytes
    // win32k.sys .text:0x11f00, 0x388c7 bytes
    // win32k.sys .text:0x13318, 0x3e907 bytes
    // win32k.sys .text:0x11f00, 0x388c7 bytes
    //
    _z13(sdk::unknown_ptr) gdi_dd_ddi_signal_synchronization_object_from_gpu2;
    
    // [NtGdiDdDDISubmitCommand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e70, 0x13864 bytes
    // win32k.sys .text:0x11f14, 0x388c7 bytes
    // win32k.sys .text:0x1332c, 0x3e907 bytes
    // win32k.sys .text:0x11f14, 0x388c7 bytes
    //
    _z14(sdk::unknown_ptr) gdi_dd_ddi_submit_command;
    
    // [NtGdiDdDDITrimProcessCommitment]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e80, 0x13864 bytes
    // win32k.sys .text:0x11f64, 0x388c7 bytes
    // win32k.sys .text:0x1337c, 0x3e907 bytes
    // win32k.sys .text:0x11f64, 0x388c7 bytes
    //
    _z15(sdk::unknown_ptr) gdi_dd_ddi_trim_process_commitment;
    
    // [NtGdiDdDDIUnlock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148e90, 0x13864 bytes
    // win32k.sys .text:0x11f8c, 0x388c7 bytes
    // win32k.sys .text:0x133a4, 0x3e907 bytes
    // win32k.sys .text:0x11f8c, 0x388c7 bytes
    //
    _z16(sdk::unknown_ptr) gdi_dd_ddi_unlock;
    
    // [NtGdiDdDDIUnlock2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ea0, 0x13864 bytes
    // win32k.sys .text:0x11fa0, 0x388c7 bytes
    // win32k.sys .text:0x133b8, 0x3e907 bytes
    // win32k.sys .text:0x11fa0, 0x388c7 bytes
    //
    _z17(sdk::unknown_ptr) gdi_dd_ddi_unlock2;
    
    // [NtGdiDdDDIUpdateAllocationProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ec0, 0x13864 bytes
    // win32k.sys .text:0x11fb4, 0x388c7 bytes
    // win32k.sys .text:0x133cc, 0x3e907 bytes
    // win32k.sys .text:0x11fb4, 0x388c7 bytes
    //
    _z18(sdk::unknown_ptr) gdi_dd_ddi_update_allocation_property;
    
    // [NtGdiDdDDIUpdateGpuVirtualAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ed0, 0x13864 bytes
    // win32k.sys .text:0x11fc8, 0x388c7 bytes
    // win32k.sys .text:0x133e0, 0x3e907 bytes
    // win32k.sys .text:0x11fc8, 0x388c7 bytes
    //
    _z19(sdk::unknown_ptr) gdi_dd_ddi_update_gpu_virtual_address;
    
    // [NtGdiDdDDIUpdateOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ee0, 0x13864 bytes
    // win32k.sys .text:0x11fdc, 0x388c7 bytes
    // win32k.sys .text:0x133f4, 0x3e907 bytes
    // win32k.sys .text:0x11fdc, 0x388c7 bytes
    //
    _z20(sdk::unknown_ptr) gdi_dd_ddi_update_overlay;
    
    // [NtGdiDdDDIWaitForIdle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ef0, 0x13864 bytes
    // win32k.sys .text:0x11ff0, 0x388c7 bytes
    // win32k.sys .text:0x13408, 0x3e907 bytes
    // win32k.sys .text:0x11ff0, 0x388c7 bytes
    //
    _z21(sdk::unknown_ptr) gdi_dd_ddi_wait_for_idle;
    
    // [NtGdiDdDDIWaitForSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f00, 0x13864 bytes
    // win32k.sys .text:0x12004, 0x388c7 bytes
    // win32k.sys .text:0x1341c, 0x3e907 bytes
    // win32k.sys .text:0x12004, 0x388c7 bytes
    //
    _z22(sdk::unknown_ptr) gdi_dd_ddi_wait_for_synchronization_object;
    
    // [NtGdiDdDDIWaitForSynchronizationObjectFromCpu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f10, 0x13864 bytes
    // win32k.sys .text:0x12018, 0x388c7 bytes
    // win32k.sys .text:0x13430, 0x3e907 bytes
    // win32k.sys .text:0x12018, 0x388c7 bytes
    //
    _z23(sdk::unknown_ptr) gdi_dd_ddi_wait_for_synchronization_object_from_cpu;
    
    // [NtGdiDdDDIWaitForSynchronizationObjectFromGpu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f20, 0x13864 bytes
    // win32k.sys .text:0x1202c, 0x388c7 bytes
    // win32k.sys .text:0x13444, 0x3e907 bytes
    // win32k.sys .text:0x1202c, 0x388c7 bytes
    //
    _z24(sdk::unknown_ptr) gdi_dd_ddi_wait_for_synchronization_object_from_gpu;
    
    // [NtGdiDdDDIWaitForVerticalBlankEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f30, 0x13864 bytes
    // win32k.sys .text:0x12040, 0x388c7 bytes
    // win32k.sys .text:0x13458, 0x3e907 bytes
    // win32k.sys .text:0x12040, 0x388c7 bytes
    //
    _z25(sdk::unknown_ptr) gdi_dd_ddi_wait_for_vertical_blank_event;
    
    // [NtGdiDdDDIWaitForVerticalBlankEvent2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f40, 0x13864 bytes
    // win32k.sys .text:0x12054, 0x388c7 bytes
    // win32k.sys .text:0x1346c, 0x3e907 bytes
    // win32k.sys .text:0x12054, 0x388c7 bytes
    //
    _z26(sdk::unknown_ptr) gdi_dd_ddi_wait_for_vertical_blank_event2;
    
    // [NtGdiDdDestroyFullscreenSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262c10, 0x13864 bytes
    // win32kfull.sys .text:0x278700, 0x1596d bytes
    // win32kfull.sys .text:0x2783a0, 0x1659e bytes
    // win32kfull.sys .text:0x278670, 0x1596d bytes
    //
    _z27(sdk::unknown_ptr) gdi_dd_destroy_fullscreen_sprite;
    
    // [NtGdiDdNotifyFullscreenSpriteUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262c20, 0x13864 bytes
    // win32kfull.sys .text:0x278720, 0x1596d bytes
    // win32kfull.sys .text:0x2783c0, 0x1659e bytes
    // win32kfull.sys .text:0x278690, 0x1596d bytes
    //
    _z28(sdk::unknown_ptr) gdi_dd_notify_fullscreen_sprite_update;
    
    // [NtGdiDdQueryVisRgnUniqueness]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262c30, 0x13864 bytes
    // win32kfull.sys .text:0x278740, 0x1596d bytes
    // win32kfull.sys .text:0x2783e0, 0x1659e bytes
    // win32kfull.sys .text:0x2786b0, 0x1596d bytes
    //
    _z29(sdk::unknown_ptr) gdi_dd_query_vis_rgn_uniqueness;
    
    // [NtGdiDDCCIGetCapabilitiesString]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b700, 0x13864 bytes
    // win32kfull.sys .text:0x272870, 0x1596d bytes
    // win32kfull.sys .text:0x272900, 0x1659e bytes
    // win32kfull.sys .text:0x2727c0, 0x1596d bytes
    //
    _z30(sdk::unknown_ptr) gdi_ddcci_get_capabilities_string;
    
    // [NtGdiDDCCIGetCapabilitiesStringLength]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b720, 0x13864 bytes
    // win32kfull.sys .text:0x2728a0, 0x1596d bytes
    // win32kfull.sys .text:0x272930, 0x1659e bytes
    // win32kfull.sys .text:0x2727f0, 0x1596d bytes
    //
    _z31(sdk::unknown_ptr) gdi_ddcci_get_capabilities_string_length;
    
    // [NtGdiDDCCIGetTimingReport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b770, 0x13864 bytes
    // win32kfull.sys .text:0x272900, 0x1596d bytes
    // win32kfull.sys .text:0x272990, 0x1659e bytes
    // win32kfull.sys .text:0x272850, 0x1596d bytes
    //
    _z32(sdk::unknown_ptr) gdi_ddcci_get_timing_report;
    
    // [NtGdiDDCCIGetVCPFeature]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b7d0, 0x13864 bytes
    // win32kfull.sys .text:0x272980, 0x1596d bytes
    // win32kfull.sys .text:0x272a10, 0x1659e bytes
    // win32kfull.sys .text:0x2728d0, 0x1596d bytes
    //
    _z33(sdk::unknown_ptr) gdi_ddcci_get_vcp_feature;
    
    // [NtGdiDDCCISaveCurrentSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b890, 0x13864 bytes
    // win32kfull.sys .text:0x272a70, 0x1596d bytes
    // win32kfull.sys .text:0x272b00, 0x1659e bytes
    // win32kfull.sys .text:0x2729c0, 0x1596d bytes
    //
    _z34(sdk::unknown_ptr) gdi_ddcci_save_current_settings;
    
    // [NtGdiDDCCISetVCPFeature]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b8f0, 0x13864 bytes
    // win32kfull.sys .text:0x272af0, 0x1596d bytes
    // win32kfull.sys .text:0x272b80, 0x1659e bytes
    // win32kfull.sys .text:0x272a40, 0x1596d bytes
    //
    _z35(sdk::unknown_ptr) gdi_ddcci_set_vcp_feature;
    
    // [NtGdiDeleteClientObj]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119f10, 0x13864 bytes
    // win32kfull.sys .text:0x111a80, 0x1596d bytes
    // win32kfull.sys .text:0x13c880, 0x1659e bytes
    // win32kfull.sys .text:0x1129b0, 0x1596d bytes
    //
    _z36(sdk::unknown_ptr) gdi_delete_client_obj;
    
    // [NtGdiDeleteColorSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f50, 0x13864 bytes
    // win32kfull.sys .text:0x153dc0, 0x1596d bytes
    // win32kfull.sys .text:0x14a890, 0x1659e bytes
    // win32kfull.sys .text:0x154d00, 0x1596d bytes
    //
    _z37(sdk::unknown_ptr) gdi_delete_color_space;
    
    // [NtGdiDeleteColorTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b1fa0, 0x13864 bytes
    // win32kfull.sys .text:0x2b65f0, 0x1596d bytes
    // win32kfull.sys .text:0x2b7940, 0x1659e bytes
    // win32kfull.sys .text:0x2b6560, 0x1596d bytes
    //
    _z38(sdk::unknown_ptr) gdi_delete_color_transform;
    
    // [NtGdiDeleteObjectApp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f60, 0x13864 bytes
    // win32kbase.sys .text:0x4e050, 0x243e0 bytes
    // win32kbase.sys .text:0x38a60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b060, 0x243e0 bytes
    //
    _z39(sdk::unknown_ptr) gdi_delete_object_app;
    
    // [NtGdiDescribePixelFormat]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6df0, 0x13864 bytes
    // win32kfull.sys .text:0x2ae3b0, 0x1596d bytes
    // win32kfull.sys .text:0x2af2b0, 0x1659e bytes
    // win32kfull.sys .text:0x2ae320, 0x1596d bytes
    //
    _z40(sdk::unknown_ptr) gdi_describe_pixel_format;
    
    // [NtGdiDestroyOPMProtectedOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f70, 0x13864 bytes
    // win32kbase.sys .text:0x1514a0, 0x243e0 bytes
    // win32kbase.sys .text:0x1846f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x14f340, 0x243e0 bytes
    //
    _z41(sdk::unknown_ptr) gdi_destroy_opm_protected_output;
    
    // [NtGdiDestroyPhysicalMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b970, 0x13864 bytes
    // win32kfull.sys .text:0x272850, 0x1596d bytes
    // win32kfull.sys .text:0x2728e0, 0x1659e bytes
    // win32kfull.sys .text:0x2727a0, 0x1596d bytes
    //
    _z42(sdk::unknown_ptr) gdi_destroy_physical_monitor;
    
    // [NtGdiDoBanding]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269370, 0x13864 bytes
    // win32kfull.sys .text:0x141d00, 0x1596d bytes
    // win32kfull.sys .text:0x1345f0, 0x1659e bytes
    // win32kfull.sys .text:0x142c40, 0x1596d bytes
    //
    _z43(sdk::unknown_ptr) gdi_do_banding;
    
    // [NtGdiDoPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xded90, 0x13864 bytes
    // win32kfull.sys .text:0x105590, 0x1596d bytes
    // win32kfull.sys .text:0xf9c30, 0x1659e bytes
    // win32kfull.sys .text:0x1064c0, 0x1596d bytes
    //
    _z44(sdk::unknown_ptr) gdi_do_palette;
    
    // [NtGdiDrawEscape]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6e90, 0x13864 bytes
    // win32kfull.sys .text:0x2ae460, 0x1596d bytes
    // win32kfull.sys .text:0x2af360, 0x1659e bytes
    // win32kfull.sys .text:0x2ae3d0, 0x1596d bytes
    //
    _z45(sdk::unknown_ptr) gdi_draw_escape;
    
    // [NtGdiDrawStream]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x780a0, 0x13864 bytes
    // win32kfull.sys .text:0x99a40, 0x1596d bytes
    // win32kfull.sys .text:0x16150, 0x1659e bytes
    // win32kfull.sys .text:0x9a5b0, 0x1596d bytes
    //
    _z46(sdk::unknown_ptr) gdi_draw_stream;
    
    // [NtGdiDrawStreamInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x91270, 0x13864 bytes
    // win32kfull.sys .text:0x99300, 0x1596d bytes
    // win32kfull.sys .text:0x16230, 0x1659e bytes
    // win32kfull.sys .text:0x99e70, 0x1596d bytes
    //
    _z47(sdk::unknown_ptr) gdi_draw_stream_internal;
    
    // [NtGdiDwmCreatedBitmapRemotingOutput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x144630, 0x13864 bytes
    // win32kfull.sys .text:0x1522d0, 0x1596d bytes
    // win32kfull.sys .text:0x146790, 0x1659e bytes
    // win32kfull.sys .text:0x153210, 0x1596d bytes
    //
    _z48(sdk::unknown_ptr) gdi_dwm_created_bitmap_remoting_output;
    
    // [NtGdiEllipse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293340, 0x13864 bytes
    // win32kfull.sys .text:0x2a09d0, 0x1596d bytes
    // win32kfull.sys .text:0x2a1990, 0x1659e bytes
    // win32kfull.sys .text:0x2a0940, 0x1596d bytes
    //
    _z49(sdk::unknown_ptr) gdi_ellipse;
    
    // [NtGdiEnableEudc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xedc40, 0x13864 bytes
    // win32kfull.sys .text:0x117940, 0x1596d bytes
    // win32kfull.sys .text:0x1188a0, 0x1659e bytes
    // win32kfull.sys .text:0x118870, 0x1596d bytes
    //
    _z50(sdk::unknown_ptr) gdi_enable_eudc;
    
    // [NtGdiEndDoc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269410, 0x13864 bytes
    // win32kfull.sys .text:0x1502f0, 0x1596d bytes
    // win32kfull.sys .text:0x121f60, 0x1659e bytes
    // win32kfull.sys .text:0x151230, 0x1596d bytes
    //
    _z51(sdk::unknown_ptr) gdi_end_doc;
    
    // [NtGdiEndGdiRendering]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4500, 0x13864 bytes
    // win32kfull.sys .text:0xd0f40, 0x1596d bytes
    // win32kfull.sys .text:0xb4be0, 0x1659e bytes
    // win32kfull.sys .text:0xd1c00, 0x1596d bytes
    //
    _z52(sdk::unknown_ptr) gdi_end_gdi_rendering;
    
    // [NtGdiEndPage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269420, 0x13864 bytes
    // win32kfull.sys .text:0x27d590, 0x1596d bytes
    // win32kfull.sys .text:0x27d6f0, 0x1659e bytes
    // win32kfull.sys .text:0x27d500, 0x1596d bytes
    //
    _z53(sdk::unknown_ptr) gdi_end_page;
    
    // [NtGdiEndPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a5f80, 0x13864 bytes
    // win32kfull.sys .text:0x1423c0, 0x1596d bytes
    // win32kfull.sys .text:0x134bb0, 0x1659e bytes
    // win32kfull.sys .text:0x143300, 0x1596d bytes
    //
    _z54(sdk::unknown_ptr) gdi_end_path;
    
    // [NtGdiEngAlphaBlend]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ac0c0, 0x13864 bytes
    // win32kfull.sys .text:0x2b21e0, 0x1596d bytes
    // win32kfull.sys .text:0x2b3550, 0x1659e bytes
    // win32kfull.sys .text:0x2b2150, 0x1596d bytes
    //
    _z55(sdk::unknown_ptr) gdi_eng_alpha_blend;
    
    // [NtGdiEngAssociateSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ac310, 0x13864 bytes
    // win32kfull.sys .text:0x149a30, 0x1596d bytes
    // win32kfull.sys .text:0x13e240, 0x1659e bytes
    // win32kfull.sys .text:0x14a970, 0x1596d bytes
    //
    _z56(sdk::unknown_ptr) gdi_eng_associate_surface;
    
    // [NtGdiEngBitBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ac3c0, 0x13864 bytes
    // win32kfull.sys .text:0x12c130, 0x1596d bytes
    // win32kfull.sys .text:0x11e3b0, 0x1659e bytes
    // win32kfull.sys .text:0x12d070, 0x1596d bytes
    //
    _z57(sdk::unknown_ptr) gdi_eng_bit_blt;
    
    // [NtGdiEngCheckAbort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ac830, 0x13864 bytes
    // win32kfull.sys .text:0x2b2460, 0x1596d bytes
    // win32kfull.sys .text:0x2b37d0, 0x1659e bytes
    // win32kfull.sys .text:0x2b23d0, 0x1596d bytes
    //
    _z58(sdk::unknown_ptr) gdi_eng_check_abort;
    
    // [NtGdiEngComputeGlyphSet]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ac8b0, 0x13864 bytes
    // win32kfull.sys .text:0x2b2500, 0x1596d bytes
    // win32kfull.sys .text:0x2b3870, 0x1659e bytes
    // win32kfull.sys .text:0x2b2470, 0x1596d bytes
    //
    _z59(sdk::unknown_ptr) gdi_eng_compute_glyph_set;
    
    // [NtGdiEngCopyBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ac970, 0x13864 bytes
    // win32kfull.sys .text:0x12b910, 0x1596d bytes
    // win32kfull.sys .text:0x11c3f0, 0x1659e bytes
    // win32kfull.sys .text:0x12c850, 0x1596d bytes
    //
    _z60(sdk::unknown_ptr) gdi_eng_copy_bits;
    
    // [NtGdiEngCreateBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2acbc0, 0x13864 bytes
    // win32kfull.sys .text:0x14bc80, 0x1596d bytes
    // win32kfull.sys .text:0x140110, 0x1659e bytes
    // win32kfull.sys .text:0x14cbc0, 0x1596d bytes
    //
    _z61(sdk::unknown_ptr) gdi_eng_create_bitmap;
    
    // [NtGdiEngCreateClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ace00, 0x13864 bytes
    // win32kfull.sys .text:0x2b25e0, 0x1596d bytes
    // win32kfull.sys .text:0x2b3940, 0x1659e bytes
    // win32kfull.sys .text:0x2b2550, 0x1596d bytes
    //
    _z62(sdk::unknown_ptr) gdi_eng_create_clip;
    
    // [NtGdiEngCreateDeviceBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ace40, 0x13864 bytes
    // win32kfull.sys .text:0x2b2640, 0x1596d bytes
    // win32kfull.sys .text:0x2b3990, 0x1659e bytes
    // win32kfull.sys .text:0x2b25b0, 0x1596d bytes
    //
    _z63(sdk::unknown_ptr) gdi_eng_create_device_bitmap;
    
    // [NtGdiEngCreateDeviceSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ace80, 0x13864 bytes
    // win32kfull.sys .text:0x14bdc0, 0x1596d bytes
    // win32kfull.sys .text:0x140250, 0x1659e bytes
    // win32kfull.sys .text:0x14cd00, 0x1596d bytes
    //
    _z64(sdk::unknown_ptr) gdi_eng_create_device_surface;
    
    // [NtGdiEngCreatePalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2acf20, 0x13864 bytes
    // win32kfull.sys .text:0x11c460, 0x1596d bytes
    // win32kfull.sys .text:0x136690, 0x1659e bytes
    // win32kfull.sys .text:0x11d390, 0x1596d bytes
    //
    _z65(sdk::unknown_ptr) gdi_eng_create_palette;
    
    // [NtGdiEngDeleteClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ad040, 0x13864 bytes
    // win32kfull.sys .text:0x2b2690, 0x1596d bytes
    // win32kfull.sys .text:0x2b39e0, 0x1659e bytes
    // win32kfull.sys .text:0x2b2600, 0x1596d bytes
    //
    _z66(sdk::unknown_ptr) gdi_eng_delete_clip;
    
    // [NtGdiEngDeletePalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ad0c0, 0x13864 bytes
    // win32kfull.sys .text:0x128360, 0x1596d bytes
    // win32kfull.sys .text:0x143480, 0x1659e bytes
    // win32kfull.sys .text:0x1292a0, 0x1596d bytes
    //
    _z67(sdk::unknown_ptr) gdi_eng_delete_palette;
    
    // [NtGdiEngDeletePath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ad0d0, 0x13864 bytes
    // win32kfull.sys .text:0x2b2720, 0x1596d bytes
    // win32kfull.sys .text:0x2b3a70, 0x1659e bytes
    // win32kfull.sys .text:0x2b2690, 0x1596d bytes
    //
    _z68(sdk::unknown_ptr) gdi_eng_delete_path;
    
    // [NtGdiEngDeleteSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ad150, 0x13864 bytes
    // win32kfull.sys .text:0x14c7c0, 0x1596d bytes
    // win32kfull.sys .text:0x140c90, 0x1659e bytes
    // win32kfull.sys .text:0x14d700, 0x1596d bytes
    //
    _z69(sdk::unknown_ptr) gdi_eng_delete_surface;
    
    // [NtGdiEngEraseSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ad1e0, 0x13864 bytes
    // win32kfull.sys .text:0x2b27b0, 0x1596d bytes
    // win32kfull.sys .text:0x2b3b00, 0x1659e bytes
    // win32kfull.sys .text:0x2b2720, 0x1596d bytes
    //
    _z70(sdk::unknown_ptr) gdi_eng_erase_surface;
    
    // [NtGdiEngFillPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ad330, 0x13864 bytes
    // win32kfull.sys .text:0x2b2930, 0x1596d bytes
    // win32kfull.sys .text:0x2b3c80, 0x1659e bytes
    // win32kfull.sys .text:0x2b28a0, 0x1596d bytes
    //
    _z71(sdk::unknown_ptr) gdi_eng_fill_path;
    
    // [NtGdiEngGradientFill]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ad520, 0x13864 bytes
    // win32kfull.sys .text:0x2b2b40, 0x1596d bytes
    // win32kfull.sys .text:0x2b3e90, 0x1659e bytes
    // win32kfull.sys .text:0x2b2ab0, 0x1596d bytes
    //
    _z72(sdk::unknown_ptr) gdi_eng_gradient_fill;
    
    // [NtGdiEngLineTo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ad880, 0x13864 bytes
    // win32kfull.sys .text:0x2b2f60, 0x1596d bytes
    // win32kfull.sys .text:0x2b42f0, 0x1659e bytes
    // win32kfull.sys .text:0x2b2ed0, 0x1596d bytes
    //
    _z73(sdk::unknown_ptr) gdi_eng_line_to;
    
    // [NtGdiEngLockSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ada70, 0x13864 bytes
    // win32kfull.sys .text:0x14b160, 0x1596d bytes
    // win32kfull.sys .text:0x13fe40, 0x1659e bytes
    // win32kfull.sys .text:0x14c0a0, 0x1596d bytes
    //
    _z74(sdk::unknown_ptr) gdi_eng_lock_surface;
    
    // [NtGdiEngMarkBandingSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2adac0, 0x13864 bytes
    // win32kfull.sys .text:0x14cc90, 0x1596d bytes
    // win32kfull.sys .text:0x140fa0, 0x1659e bytes
    // win32kfull.sys .text:0x14dbd0, 0x1596d bytes
    //
    _z75(sdk::unknown_ptr) gdi_eng_mark_banding_surface;
    
    // [NtGdiEngPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2adb40, 0x13864 bytes
    // win32kfull.sys .text:0x2b3170, 0x1596d bytes
    // win32kfull.sys .text:0x2b4500, 0x1659e bytes
    // win32kfull.sys .text:0x2b30e0, 0x1596d bytes
    //
    _z76(sdk::unknown_ptr) gdi_eng_paint;
    
    // [NtGdiEngPlgBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2adcc0, 0x13864 bytes
    // win32kfull.sys .text:0x2b3320, 0x1596d bytes
    // win32kfull.sys .text:0x2b46b0, 0x1659e bytes
    // win32kfull.sys .text:0x2b3290, 0x1596d bytes
    //
    _z77(sdk::unknown_ptr) gdi_eng_plg_blt;
    
    // [NtGdiEngStretchBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ae010, 0x13864 bytes
    // win32kfull.sys .text:0x12ca40, 0x1596d bytes
    // win32kfull.sys .text:0x11ecb0, 0x1659e bytes
    // win32kfull.sys .text:0x12d980, 0x1596d bytes
    //
    _z78(sdk::unknown_ptr) gdi_eng_stretch_blt;
    
    // [NtGdiEngStretchBltROP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ae3f0, 0x13864 bytes
    // win32kfull.sys .text:0x12bc70, 0x1596d bytes
    // win32kfull.sys .text:0x11d4e0, 0x1659e bytes
    // win32kfull.sys .text:0x12cbb0, 0x1596d bytes
    //
    _z79(sdk::unknown_ptr) gdi_eng_stretch_blt_rop;
    
    // [NtGdiEngStrokeAndFillPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ae900, 0x13864 bytes
    // win32kfull.sys .text:0x2b3790, 0x1596d bytes
    // win32kfull.sys .text:0x2b4b20, 0x1659e bytes
    // win32kfull.sys .text:0x2b3700, 0x1596d bytes
    //
    _z80(sdk::unknown_ptr) gdi_eng_stroke_and_fill_path;
    
    // [NtGdiEngStrokePath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aebd0, 0x13864 bytes
    // win32kfull.sys .text:0x2b3aa0, 0x1596d bytes
    // win32kfull.sys .text:0x2b4e30, 0x1659e bytes
    // win32kfull.sys .text:0x2b3a10, 0x1596d bytes
    //
    _z81(sdk::unknown_ptr) gdi_eng_stroke_path;
    
    // [NtGdiEngTextOut]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aee50, 0x13864 bytes
    // win32kfull.sys .text:0x12c6e0, 0x1596d bytes
    // win32kfull.sys .text:0x11e950, 0x1659e bytes
    // win32kfull.sys .text:0x12d620, 0x1596d bytes
    //
    _z82(sdk::unknown_ptr) gdi_eng_text_out;
    
    // [NtGdiEngTransparentBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2af190, 0x13864 bytes
    // win32kfull.sys .text:0x2b3d60, 0x1596d bytes
    // win32kfull.sys .text:0x2b50f0, 0x1659e bytes
    // win32kfull.sys .text:0x2b3cd0, 0x1596d bytes
    //
    _z83(sdk::unknown_ptr) gdi_eng_transparent_blt;
    
    // [NtGdiEngUnlockSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2af3c0, 0x13864 bytes
    // win32kfull.sys .text:0x14d000, 0x1596d bytes
    // win32kfull.sys .text:0x1411a0, 0x1659e bytes
    // win32kfull.sys .text:0x14df40, 0x1596d bytes
    //
    _z84(sdk::unknown_ptr) gdi_eng_unlock_surface;
    
    // [NtGdiEnumFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfe6f0, 0x13864 bytes
    // win32kfull.sys .text:0x38ce0, 0x1596d bytes
    // win32kfull.sys .text:0x7da90, 0x1659e bytes
    // win32kfull.sys .text:0x390f0, 0x1596d bytes
    //
    _z85(sdk::unknown_ptr) gdi_enum_fonts;
    
    // [NtGdiEnumObjects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b4460, 0x13864 bytes
    // win32kfull.sys .text:0x2b8680, 0x1596d bytes
    // win32kfull.sys .text:0x2b99e0, 0x1659e bytes
    // win32kfull.sys .text:0x2b85f0, 0x1596d bytes
    //
    _z86(sdk::unknown_ptr) gdi_enum_objects;
    
    // [NtGdiEqualRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f80, 0x13864 bytes
    // win32kbase.sys .text:0xaa330, 0x243e0 bytes
    // win32kbase.sys .text:0x53df0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9fb40, 0x243e0 bytes
    //
    _z87(sdk::unknown_ptr) gdi_equal_rgn;
    
    // [NtGdiEudcLoadUnloadLink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28b4b0, 0x13864 bytes
    // win32kfull.sys .text:0x298ec0, 0x1596d bytes
    // win32kfull.sys .text:0x299e60, 0x1659e bytes
    // win32kfull.sys .text:0x298e30, 0x1596d bytes
    //
    _z88(sdk::unknown_ptr) gdi_eudc_load_unload_link;
    
    // [NtGdiExcludeClipRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b40, 0x13864 bytes
    // win32kfull.sys .text:0x44ac0, 0x1596d bytes
    // win32kfull.sys .text:0x62270, 0x1659e bytes
    // win32kfull.sys .text:0x44ed0, 0x1596d bytes
    //
    _z89(sdk::unknown_ptr) gdi_exclude_clip_rect;
    
    // [NtGdiExtCreatePen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6fe0, 0x13864 bytes
    // win32kfull.sys .text:0x14a4a0, 0x1596d bytes
    // win32kfull.sys .text:0x13eea0, 0x1659e bytes
    // win32kfull.sys .text:0x14b3e0, 0x1596d bytes
    //
    _z90(sdk::unknown_ptr) gdi_ext_create_pen;
    
    // [NtGdiExtCreateRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148f90, 0x13864 bytes
    // win32kbase.sys .text:0x3bf90, 0x243e0 bytes
    // win32kbase.sys .text:0x2e080, 0x27ef0 bytes
    // win32kbase.sys .text:0x16100, 0x243e0 bytes
    //
    _z91(sdk::unknown_ptr) gdi_ext_create_region;
    
    // [NtGdiExtEscape]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a71e0, 0x13864 bytes
    // win32kfull.sys .text:0x3d590, 0x1596d bytes
    // win32kfull.sys .text:0x6ba40, 0x1659e bytes
    // win32kfull.sys .text:0x3d9a0, 0x1596d bytes
    //
    _z92(sdk::unknown_ptr) gdi_ext_escape;
    
    // [NtGdiExtFloodFill]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296f0, 0x13864 bytes
    // win32kfull.sys .text:0x2b9700, 0x1596d bytes
    // win32kfull.sys .text:0x2baa80, 0x1659e bytes
    // win32kfull.sys .text:0x2b9670, 0x1596d bytes
    //
    _z93(sdk::unknown_ptr) gdi_ext_flood_fill;
    
    // [NtGdiExtGetObjectW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x90190, 0x13864 bytes
    // win32kfull.sys .text:0x79520, 0x1596d bytes
    // win32kfull.sys .text:0xab910, 0x1659e bytes
    // win32kfull.sys .text:0x7a090, 0x1596d bytes
    //
    _z94(sdk::unknown_ptr) gdi_ext_get_object_w;
    
    // [NtGdiExtSelectClipRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6cf00, 0x13864 bytes
    // win32kfull.sys .text:0x89270, 0x1596d bytes
    // win32kfull.sys .text:0x17ad0, 0x1659e bytes
    // win32kfull.sys .text:0x89de0, 0x1596d bytes
    //
    _z95(sdk::unknown_ptr) gdi_ext_select_clip_rgn;
    
    // [NtGdiExtTextOutW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x93c00, 0x13864 bytes
    // win32kfull.sys .text:0x406b0, 0x1596d bytes
    // win32kfull.sys .text:0xddc0, 0x1659e bytes
    // win32kfull.sys .text:0x40ac0, 0x1596d bytes
    //
    _z96(sdk::unknown_ptr) gdi_ext_text_out_w;
    
    // [NtGdiFastPolyPolyline]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb9ef0, 0x13864 bytes
    // win32kfull.sys .text:0x132f90, 0x1596d bytes
    // win32kfull.sys .text:0x12d090, 0x1659e bytes
    // win32kfull.sys .text:0x133ed0, 0x1596d bytes
    //
    _z97(sdk::unknown_ptr) gdi_fast_poly_polyline;
    
    // [NtGdiFillPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a5fe0, 0x13864 bytes
    // win32kfull.sys .text:0x133b50, 0x1596d bytes
    // win32kfull.sys .text:0x12ace0, 0x1659e bytes
    // win32kfull.sys .text:0x134a90, 0x1596d bytes
    //
    _z98(sdk::unknown_ptr) gdi_fill_path;
    
    // [NtGdiFillRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12b700, 0x13864 bytes
    // win32kfull.sys .text:0x136010, 0x1596d bytes
    // win32kfull.sys .text:0x123450, 0x1659e bytes
    // win32kfull.sys .text:0x136f50, 0x1596d bytes
    //
    _z99(sdk::unknown_ptr) gdi_fill_rgn;
    
    // [NtGdiFlattenPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a60e0, 0x13864 bytes
    // win32kfull.sys .text:0x2ad700, 0x1596d bytes
    // win32kfull.sys .text:0x2ae600, 0x1659e bytes
    // win32kfull.sys .text:0x2ad670, 0x1596d bytes
    //
    _a00(sdk::unknown_ptr) gdi_flatten_path;
    
    // [NtGdiFlush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148fa0, 0x13864 bytes
    // win32kbase.sys .text:0xa0600, 0x243e0 bytes
    // win32kbase.sys .text:0xacab0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f310, 0x243e0 bytes
    //
    _a01(sdk::unknown_ptr) gdi_flush;
    
    // [NtGdiFlushUserBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x67490, 0x13864 bytes
    // win32kfull.sys .text:0x8e130, 0x1596d bytes
    // win32kfull.sys .text:0x1c6b0, 0x1659e bytes
    // win32kfull.sys .text:0x8eca0, 0x1596d bytes
    //
    _a02(sdk::unknown_ptr) gdi_flush_user_batch;
    
    // [NtGdiFlushUserBatchInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x674d0, 0x13864 bytes
    // win32kfull.sys .text:0x8e160, 0x1596d bytes
    // win32kfull.sys .text:0x1c6e0, 0x1659e bytes
    // win32kfull.sys .text:0x8ecd0, 0x1596d bytes
    //
    _a03(sdk::unknown_ptr) gdi_flush_user_batch_internal;
    
    // [NtGdiFontIsLinked]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x111a90, 0x13864 bytes
    // win32kfull.sys .text:0x104620, 0x1596d bytes
    // win32kfull.sys .text:0x1028f0, 0x1659e bytes
    // win32kfull.sys .text:0x105550, 0x1596d bytes
    //
    _a04(sdk::unknown_ptr) gdi_font_is_linked;
    
    // [NtGdiFONTOBJ_cGetAllGlyphHandles]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2af420, 0x13864 bytes
    // win32kfull.sys .text:0x2b3fb0, 0x1596d bytes
    // win32kfull.sys .text:0x2b5340, 0x1659e bytes
    // win32kfull.sys .text:0x2b3f20, 0x1596d bytes
    //
    _a05(sdk::unknown_ptr) gdi_fontobj_c_get_all_glyph_handles;
    
    // [NtGdiFONTOBJ_cGetGlyphs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2af520, 0x13864 bytes
    // win32kfull.sys .text:0x2b40c0, 0x1596d bytes
    // win32kfull.sys .text:0x2b5460, 0x1659e bytes
    // win32kfull.sys .text:0x2b4030, 0x1596d bytes
    //
    _a06(sdk::unknown_ptr) gdi_fontobj_c_get_glyphs;
    
    // [NtGdiFONTOBJ_pQueryGlyphAttrs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2af760, 0x13864 bytes
    // win32kfull.sys .text:0x2b4310, 0x1596d bytes
    // win32kfull.sys .text:0x2b56b0, 0x1659e bytes
    // win32kfull.sys .text:0x2b4280, 0x1596d bytes
    //
    _a07(sdk::unknown_ptr) gdi_fontobj_p_query_glyph_attrs;
    
    // [NtGdiFONTOBJ_pfdg]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2af890, 0x13864 bytes
    // win32kfull.sys .text:0x2b4450, 0x1596d bytes
    // win32kfull.sys .text:0x2b57f0, 0x1659e bytes
    // win32kfull.sys .text:0x2b43c0, 0x1596d bytes
    //
    _a08(sdk::unknown_ptr) gdi_fontobj_pfdg;
    
    // [NtGdiFONTOBJ_pifi]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2af9d0, 0x13864 bytes
    // win32kfull.sys .text:0x12d4f0, 0x1596d bytes
    // win32kfull.sys .text:0x120720, 0x1659e bytes
    // win32kfull.sys .text:0x12e430, 0x1596d bytes
    //
    _a09(sdk::unknown_ptr) gdi_fontobj_pifi;
    
    // [NtGdiFONTOBJ_pvTrueTypeFontFile]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2afb10, 0x13864 bytes
    // win32kfull.sys .text:0x2b45a0, 0x1596d bytes
    // win32kfull.sys .text:0x2b5940, 0x1659e bytes
    // win32kfull.sys .text:0x2b4510, 0x1596d bytes
    //
    _a10(sdk::unknown_ptr) gdi_fontobj_pv_true_type_font_file;
    
    // [NtGdiFONTOBJ_pxoGetXform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2afc10, 0x13864 bytes
    // win32kfull.sys .text:0x12d480, 0x1596d bytes
    // win32kfull.sys .text:0x1206c0, 0x1659e bytes
    // win32kfull.sys .text:0x12e3c0, 0x1596d bytes
    //
    _a11(sdk::unknown_ptr) gdi_fontobj_pxo_get_xform;
    
    // [NtGdiFONTOBJ_vGetInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2afc60, 0x13864 bytes
    // win32kfull.sys .text:0x2b46b0, 0x1596d bytes
    // win32kfull.sys .text:0x2b5a50, 0x1659e bytes
    // win32kfull.sys .text:0x2b4620, 0x1596d bytes
    //
    _a12(sdk::unknown_ptr) gdi_fontobj_v_get_info;
    
    // [NtGdiForceUFIMapping]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7760, 0x13864 bytes
    // win32kfull.sys .text:0x13e870, 0x1596d bytes
    // win32kfull.sys .text:0x130150, 0x1659e bytes
    // win32kfull.sys .text:0x13f7b0, 0x1596d bytes
    //
    _a13(sdk::unknown_ptr) gdi_force_ufi_mapping;
    
    // [NtGdiFrameRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12b140, 0x13864 bytes
    // win32kfull.sys .text:0x12e460, 0x1596d bytes
    // win32kfull.sys .text:0x126bc0, 0x1659e bytes
    // win32kfull.sys .text:0x12f3a0, 0x1596d bytes
    //
    _a14(sdk::unknown_ptr) gdi_frame_rgn;
    
    // [NtGdiFullscreenControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d730, 0x13864 bytes
    // win32kfull.sys .text:0x1ebc00, 0x1596d bytes
    // win32kfull.sys .text:0x1e8790, 0x1659e bytes
    // win32kfull.sys .text:0x1eba60, 0x1596d bytes
    //
    _a15(sdk::unknown_ptr) gdi_fullscreen_control;
    
    // [NtGdiGetAndSetDCDword]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117f20, 0x13864 bytes
    // win32kfull.sys .text:0x100170, 0x1596d bytes
    // win32kfull.sys .text:0x131cf0, 0x1659e bytes
    // win32kfull.sys .text:0x1010a0, 0x1596d bytes
    //
    _a16(sdk::unknown_ptr) gdi_get_and_set_dc_dword;
    
    // [NtGdiGetAppClipBox]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7a0f0, 0x13864 bytes
    // win32kfull.sys .text:0x41c20, 0x1596d bytes
    // win32kfull.sys .text:0x62550, 0x1659e bytes
    // win32kfull.sys .text:0x42030, 0x1596d bytes
    //
    _a17(sdk::unknown_ptr) gdi_get_app_clip_box;
    
    // [NtGdiGetBitmapBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1020e0, 0x13864 bytes
    // win32kfull.sys .text:0xd10c0, 0x1596d bytes
    // win32kfull.sys .text:0xb6420, 0x1659e bytes
    // win32kfull.sys .text:0xd1d80, 0x1596d bytes
    //
    _a18(sdk::unknown_ptr) gdi_get_bitmap_bits;
    
    // [NtGdiGetBitmapDimension]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a77b0, 0x13864 bytes
    // win32kfull.sys .text:0x2ae5e0, 0x1596d bytes
    // win32kfull.sys .text:0x2af4e0, 0x1659e bytes
    // win32kfull.sys .text:0x2ae550, 0x1596d bytes
    //
    _a19(sdk::unknown_ptr) gdi_get_bitmap_dimension;
    
    // [NtGdiGetBoundsRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1113a0, 0x13864 bytes
    // win32kfull.sys .text:0xec070, 0x1596d bytes
    // win32kfull.sys .text:0x14aa0, 0x1659e bytes
    // win32kfull.sys .text:0xecdb0, 0x1596d bytes
    //
    _a20(sdk::unknown_ptr) gdi_get_bounds_rect;
    
    // [NtGdiGetCertificate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148fc0, 0x13864 bytes
    // win32kbase.sys .text:0x1515e0, 0x243e0 bytes
    // win32kbase.sys .text:0x184830, 0x27ef0 bytes
    // win32kbase.sys .text:0x14f480, 0x243e0 bytes
    //
    _a21(sdk::unknown_ptr) gdi_get_certificate;
    
    // [NtGdiGetCertificateByHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148fd0, 0x13864 bytes
    // win32kbase.sys .text:0xcc360, 0x243e0 bytes
    // win32kbase.sys .text:0xdd820, 0x27ef0 bytes
    // win32kbase.sys .text:0xcad00, 0x243e0 bytes
    //
    _a22(sdk::unknown_ptr) gdi_get_certificate_by_handle;
    
    // [NtGdiGetCertificateSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148fe0, 0x13864 bytes
    // win32kbase.sys .text:0x151740, 0x243e0 bytes
    // win32kbase.sys .text:0x184990, 0x27ef0 bytes
    // win32kbase.sys .text:0x14f5e0, 0x243e0 bytes
    //
    _a23(sdk::unknown_ptr) gdi_get_certificate_size;
    
    // [NtGdiGetCertificateSizeByHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148ff0, 0x13864 bytes
    // win32kbase.sys .text:0xcc2d0, 0x243e0 bytes
    // win32kbase.sys .text:0xdd790, 0x27ef0 bytes
    // win32kbase.sys .text:0xcac70, 0x243e0 bytes
    //
    _a24(sdk::unknown_ptr) gdi_get_certificate_size_by_handle;
    
    // [NtGdiGetCharABCWidthsW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf5d10, 0x13864 bytes
    // win32kfull.sys .text:0xece60, 0x1596d bytes
    // win32kfull.sys .text:0x6ea70, 0x1659e bytes
    // win32kfull.sys .text:0xedba0, 0x1596d bytes
    //
    _a25(sdk::unknown_ptr) gdi_get_char_abc_widths_w;
    
    // [NtGdiGetCharSet]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7d9a0, 0x13864 bytes
    // win32kfull.sys .text:0x67410, 0x1596d bytes
    // win32kfull.sys .text:0x1005b0, 0x1659e bytes
    // win32kfull.sys .text:0x67f80, 0x1596d bytes
    //
    _a26(sdk::unknown_ptr) gdi_get_char_set;
    
    // [NtGdiGetCharWidthInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x116420, 0x13864 bytes
    // win32kfull.sys .text:0x10ed60, 0x1596d bytes
    // win32kfull.sys .text:0x1035a0, 0x1659e bytes
    // win32kfull.sys .text:0x10fc90, 0x1596d bytes
    //
    _a27(sdk::unknown_ptr) gdi_get_char_width_info;
    
    // [NtGdiGetCharWidthW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13cdc0, 0x13864 bytes
    // win32kfull.sys .text:0xf69f0, 0x1596d bytes
    // win32kfull.sys .text:0x12f410, 0x1659e bytes
    // win32kfull.sys .text:0xf7880, 0x1596d bytes
    //
    _a28(sdk::unknown_ptr) gdi_get_char_width_w;
    
    // [NtGdiGetCharacterPlacementW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7800, 0x13864 bytes
    // win32kfull.sys .text:0x2ae660, 0x1596d bytes
    // win32kfull.sys .text:0x2af560, 0x1659e bytes
    // win32kfull.sys .text:0x2ae5d0, 0x1596d bytes
    //
    _a29(sdk::unknown_ptr) gdi_get_character_placement_w;
    
    // [NtGdiGetColorAdjustment]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7da0, 0x13864 bytes
    // win32kfull.sys .text:0x2aec20, 0x1596d bytes
    // win32kfull.sys .text:0x2afb20, 0x1659e bytes
    // win32kfull.sys .text:0x2aeb90, 0x1596d bytes
    //
    _a30(sdk::unknown_ptr) gdi_get_color_adjustment;
    
    // [NtGdiGetColorSpaceforBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b4760, 0x13864 bytes
    // win32kfull.sys .text:0x2ba430, 0x1596d bytes
    // win32kfull.sys .text:0x2bb950, 0x1659e bytes
    // win32kfull.sys .text:0x2ba3a0, 0x1596d bytes
    //
    _a31(sdk::unknown_ptr) gdi_get_color_spacefor_bitmap;
    
    // [NtGdiGetCOPPCompatibleOPMInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148fb0, 0x13864 bytes
    // win32kbase.sys .text:0x1514c0, 0x243e0 bytes
    // win32kbase.sys .text:0x184710, 0x27ef0 bytes
    // win32kbase.sys .text:0x14f360, 0x243e0 bytes
    //
    _a32(sdk::unknown_ptr) gdi_get_copp_compatible_opm_information;
    
    // [NtGdiGetCurrentDpiInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149000, 0x13864 bytes
    // win32kbase.sys .text:0x21cd0, 0x243e0 bytes
    // win32kbase.sys .text:0xb9f90, 0x27ef0 bytes
    // win32kbase.sys .text:0x9fc20, 0x243e0 bytes
    //
    _a33(sdk::unknown_ptr) gdi_get_current_dpi_info;
    
    // [NtGdiGetDCforBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfb9a0, 0x13864 bytes
    // win32kfull.sys .text:0xfe5b0, 0x1596d bytes
    // win32kfull.sys .text:0xf4ee0, 0x1659e bytes
    // win32kfull.sys .text:0xff4e0, 0x1596d bytes
    //
    _a34(sdk::unknown_ptr) gdi_get_d_cfor_bitmap;
    
    // [NtGdiGetDCDword]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe82e0, 0x13864 bytes
    // win32kfull.sys .text:0xe5ef0, 0x1596d bytes
    // win32kfull.sys .text:0xdf560, 0x1659e bytes
    // win32kfull.sys .text:0xe6c30, 0x1596d bytes
    //
    _a35(sdk::unknown_ptr) gdi_get_dc_dword;
    
    // [NtGdiGetDCObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x94380, 0x13864 bytes
    // win32kfull.sys .text:0x3fec0, 0x1596d bytes
    // win32kfull.sys .text:0xcd10, 0x1659e bytes
    // win32kfull.sys .text:0x402d0, 0x1596d bytes
    //
    _a36(sdk::unknown_ptr) gdi_get_dc_object;
    
    // [NtGdiGetDCPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7670, 0x13864 bytes
    // win32kfull.sys .text:0x100f30, 0x1596d bytes
    // win32kfull.sys .text:0x132560, 0x1659e bytes
    // win32kfull.sys .text:0x101e60, 0x1596d bytes
    //
    _a37(sdk::unknown_ptr) gdi_get_dc_point;
    
    // [NtGdiGetDeviceCaps]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149010, 0x13864 bytes
    // win32kbase.sys .text:0x57040, 0x243e0 bytes
    // win32kbase.sys .text:0x3cb40, 0x27ef0 bytes
    // win32kbase.sys .text:0xfa40, 0x243e0 bytes
    //
    _a38(sdk::unknown_ptr) gdi_get_device_caps;
    
    // [NtGdiGetDeviceCapsAll]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149020, 0x13864 bytes
    // win32kbase.sys .text:0x2ad10, 0x243e0 bytes
    // win32kbase.sys .text:0xdcab0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8a170, 0x243e0 bytes
    //
    _a39(sdk::unknown_ptr) gdi_get_device_caps_all;
    
    // [NtGdiGetDeviceWidth]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7df0, 0x13864 bytes
    // win32kfull.sys .text:0x2aec80, 0x1596d bytes
    // win32kfull.sys .text:0x2afb80, 0x1659e bytes
    // win32kfull.sys .text:0x2aebf0, 0x1596d bytes
    //
    _a40(sdk::unknown_ptr) gdi_get_device_width;
    
    // [NtGdiGetDhpdev]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2afd60, 0x13864 bytes
    // win32kfull.sys .text:0x2b47c0, 0x1596d bytes
    // win32kfull.sys .text:0x2b5b60, 0x1659e bytes
    // win32kfull.sys .text:0x2b4730, 0x1596d bytes
    //
    _a41(sdk::unknown_ptr) gdi_get_dhpdev;
    
    // [NtGdiGetDIBitsInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8fcf0, 0x13864 bytes
    // win32kfull.sys .text:0xe8710, 0x1596d bytes
    // win32kfull.sys .text:0xe2300, 0x1659e bytes
    // win32kfull.sys .text:0xe9450, 0x1596d bytes
    //
    _a42(sdk::unknown_ptr) gdi_get_di_bits_internal;
    
    // [NtGdiGetEmbUFI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7e40, 0x13864 bytes
    // win32kfull.sys .text:0x2aecd0, 0x1596d bytes
    // win32kfull.sys .text:0x2afbd0, 0x1659e bytes
    // win32kfull.sys .text:0x2aec40, 0x1596d bytes
    //
    _a43(sdk::unknown_ptr) gdi_get_emb_ufi;
    
    // [NtGdiGetEmbedFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7f90, 0x13864 bytes
    // win32kfull.sys .text:0x2aee70, 0x1596d bytes
    // win32kfull.sys .text:0x2afd70, 0x1659e bytes
    // win32kfull.sys .text:0x2aede0, 0x1596d bytes
    //
    _a44(sdk::unknown_ptr) gdi_get_embed_fonts;
    
    // [NtGdiGetEntry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d950, 0x1eb80 bytes
    // win32kbase.sys .text:0xbbd40, 0x243e0 bytes
    // win32kbase.sys .text:0xdf3a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5d40, 0x243e0 bytes
    //
    _a45(sdk::unknown_ptr) gdi_get_entry;
    
    // [NtGdiGetETM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b4dd0, 0x13864 bytes
    // win32kfull.sys .text:0x12ef50, 0x1596d bytes
    // win32kfull.sys .text:0x124010, 0x1659e bytes
    // win32kfull.sys .text:0x12fe90, 0x1596d bytes
    //
    _a46(sdk::unknown_ptr) gdi_get_etm;
    
    // [NtGdiGetEudcTimeStampEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28b660, 0x13864 bytes
    // win32kfull.sys .text:0x299090, 0x1596d bytes
    // win32kfull.sys .text:0x29a030, 0x1659e bytes
    // win32kfull.sys .text:0x299000, 0x1596d bytes
    //
    _a47(sdk::unknown_ptr) gdi_get_eudc_time_stamp_ex;
    
    // [NtGdiGetFontData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7c870, 0x13864 bytes
    // win32kfull.sys .text:0x692a0, 0x1596d bytes
    // win32kfull.sys .text:0x70d50, 0x1659e bytes
    // win32kfull.sys .text:0x69e10, 0x1596d bytes
    //
    _a48(sdk::unknown_ptr) gdi_get_font_data;
    
    // [NtGdiGetFontFileData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b5860, 0x13864 bytes
    // win32kfull.sys .text:0x2bb550, 0x1596d bytes
    // win32kfull.sys .text:0x2bc9c0, 0x1659e bytes
    // win32kfull.sys .text:0x2bb4c0, 0x1596d bytes
    //
    _a49(sdk::unknown_ptr) gdi_get_font_file_data;
    
    // [NtGdiGetFontFileInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11bba0, 0x13864 bytes
    // win32kfull.sys .text:0x14f490, 0x1596d bytes
    // win32kfull.sys .text:0x10af50, 0x1659e bytes
    // win32kfull.sys .text:0x1503d0, 0x1596d bytes
    //
    _a50(sdk::unknown_ptr) gdi_get_font_file_info;
    
    // [NtGdiGetFontResourceInfoInternalW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7fd0, 0x13864 bytes
    // win32kfull.sys .text:0x2aeeb0, 0x1596d bytes
    // win32kfull.sys .text:0x2afdb0, 0x1659e bytes
    // win32kfull.sys .text:0x2aee20, 0x1596d bytes
    //
    _a51(sdk::unknown_ptr) gdi_get_font_resource_info_internal_w;
    
    // [NtGdiGetFontUnicodeRanges]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114e90, 0x13864 bytes
    // win32kfull.sys .text:0x14a8e0, 0x1596d bytes
    // win32kfull.sys .text:0x101660, 0x1659e bytes
    // win32kfull.sys .text:0x14b820, 0x1596d bytes
    //
    _a52(sdk::unknown_ptr) gdi_get_font_unicode_ranges;
    
    // [NtGdiGetGlyphIndicesW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x109b60, 0x13864 bytes
    // win32kfull.sys .text:0x106340, 0x1596d bytes
    // win32kfull.sys .text:0xfe0b0, 0x1659e bytes
    // win32kfull.sys .text:0x107270, 0x1596d bytes
    //
    _a53(sdk::unknown_ptr) gdi_get_glyph_indices_w;
    
    // [NtGdiGetGlyphIndicesWInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x109b80, 0x13864 bytes
    // win32kfull.sys .text:0x106370, 0x1596d bytes
    // win32kfull.sys .text:0xfe0e0, 0x1659e bytes
    // win32kfull.sys .text:0x1072a0, 0x1596d bytes
    //
    _a54(sdk::unknown_ptr) gdi_get_glyph_indices_w_internal;
    
    // [NtGdiGetGlyphOutline]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1176f0, 0x13864 bytes
    // win32kfull.sys .text:0xf3fa0, 0x1596d bytes
    // win32kfull.sys .text:0x71170, 0x1659e bytes
    // win32kfull.sys .text:0xf4e30, 0x1596d bytes
    //
    _a55(sdk::unknown_ptr) gdi_get_glyph_outline;
    
    // [NtGdiGetKerningPairs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a81f0, 0x13864 bytes
    // win32kfull.sys .text:0x12f3a0, 0x1596d bytes
    // win32kfull.sys .text:0x124aa0, 0x1659e bytes
    // win32kfull.sys .text:0x1302e0, 0x1596d bytes
    //
    _a56(sdk::unknown_ptr) gdi_get_kerning_pairs;
    
    // [NtGdiGetLinkedUFIs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2695a0, 0x13864 bytes
    // win32kfull.sys .text:0x140920, 0x1596d bytes
    // win32kfull.sys .text:0x119d70, 0x1659e bytes
    // win32kfull.sys .text:0x141860, 0x1596d bytes
    //
    _a57(sdk::unknown_ptr) gdi_get_linked_uf_is;
    
    // [NtGdiGetMiterLimit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a82d0, 0x13864 bytes
    // win32kfull.sys .text:0x14acf0, 0x1596d bytes
    // win32kfull.sys .text:0x13fa20, 0x1659e bytes
    // win32kfull.sys .text:0x14bc30, 0x1596d bytes
    //
    _a58(sdk::unknown_ptr) gdi_get_miter_limit;
    
    // [NtGdiGetMonitorID]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d740, 0x13864 bytes
    // win32kfull.sys .text:0x2748f0, 0x1596d bytes
    // win32kfull.sys .text:0x4a20, 0x1659e bytes
    // win32kfull.sys .text:0x274860, 0x1596d bytes
    //
    _a59(sdk::unknown_ptr) gdi_get_monitor_id;
    
    // [NtGdiGetNearestColor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x120e70, 0x13864 bytes
    // win32kfull.sys .text:0x14b140, 0x1596d bytes
    // win32kfull.sys .text:0x140000, 0x1659e bytes
    // win32kfull.sys .text:0x14c080, 0x1596d bytes
    //
    _a60(sdk::unknown_ptr) gdi_get_nearest_color;
    
    // [NtGdiGetNearestPaletteIndex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b38f0, 0x13864 bytes
    // win32kfull.sys .text:0x1499b0, 0x1596d bytes
    // win32kfull.sys .text:0x13e1c0, 0x1659e bytes
    // win32kfull.sys .text:0x14a8f0, 0x1596d bytes
    //
    _a61(sdk::unknown_ptr) gdi_get_nearest_palette_index;
    
    // [NtGdiGetNumberOfPhysicalMonitors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b980, 0x13864 bytes
    // win32kfull.sys .text:0x127fe0, 0x1596d bytes
    // win32kfull.sys .text:0x117870, 0x1659e bytes
    // win32kfull.sys .text:0x128f20, 0x1596d bytes
    //
    _a62(sdk::unknown_ptr) gdi_get_number_of_physical_monitors;
    
    // [NtGdiGetObjectBitmapHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8320, 0x13864 bytes
    // win32kfull.sys .text:0x2af0f0, 0x1596d bytes
    // win32kfull.sys .text:0x2b0000, 0x1659e bytes
    // win32kfull.sys .text:0x2af060, 0x1596d bytes
    //
    _a63(sdk::unknown_ptr) gdi_get_object_bitmap_handle;
    
    // [NtGdiGetOPMInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149030, 0x13864 bytes
    // win32kbase.sys .text:0xccb20, 0x243e0 bytes
    // win32kbase.sys .text:0xddfd0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb4c0, 0x243e0 bytes
    //
    _a64(sdk::unknown_ptr) gdi_get_opm_information;
    
    // [NtGdiGetOPMRandomNumber]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149040, 0x13864 bytes
    // win32kbase.sys .text:0xcc480, 0x243e0 bytes
    // win32kbase.sys .text:0xdd940, 0x27ef0 bytes
    // win32kbase.sys .text:0xcae20, 0x243e0 bytes
    //
    _a65(sdk::unknown_ptr) gdi_get_opm_random_number;
    
    // [NtGdiGetOutlineTextMetricsInternalW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbba10, 0x13864 bytes
    // win32kfull.sys .text:0x6b570, 0x1596d bytes
    // win32kfull.sys .text:0x708d0, 0x1659e bytes
    // win32kfull.sys .text:0x6c0e0, 0x1596d bytes
    //
    _a66(sdk::unknown_ptr) gdi_get_outline_text_metrics_internal_w;
    
    // [NtGdiGetPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6180, 0x13864 bytes
    // win32kfull.sys .text:0x2ad7c0, 0x1596d bytes
    // win32kfull.sys .text:0x2ae6c0, 0x1659e bytes
    // win32kfull.sys .text:0x2ad730, 0x1596d bytes
    //
    _a67(sdk::unknown_ptr) gdi_get_path;
    
    // [NtGdiGetPerBandInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269740, 0x13864 bytes
    // win32kfull.sys .text:0x1437f0, 0x1596d bytes
    // win32kfull.sys .text:0x135940, 0x1659e bytes
    // win32kfull.sys .text:0x144730, 0x1596d bytes
    //
    _a68(sdk::unknown_ptr) gdi_get_per_band_info;
    
    // [NtGdiGetPhysicalMonitorDescription]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b9c0, 0x13864 bytes
    // win32kfull.sys .text:0x272b10, 0x1596d bytes
    // win32kfull.sys .text:0x272ba0, 0x1659e bytes
    // win32kfull.sys .text:0x272a60, 0x1596d bytes
    //
    _a69(sdk::unknown_ptr) gdi_get_physical_monitor_description;
    
    // [NtGdiGetPhysicalMonitors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25bac0, 0x13864 bytes
    // win32kfull.sys .text:0x272c20, 0x1596d bytes
    // win32kfull.sys .text:0x272cb0, 0x1659e bytes
    // win32kfull.sys .text:0x272b70, 0x1596d bytes
    //
    _a70(sdk::unknown_ptr) gdi_get_physical_monitors;
    
    // [NtGdiGetPixel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70460, 0x13864 bytes
    // win32kfull.sys .text:0x1092b0, 0x1596d bytes
    // win32kfull.sys .text:0xa370, 0x1659e bytes
    // win32kfull.sys .text:0x10a1e0, 0x1596d bytes
    //
    _a71(sdk::unknown_ptr) gdi_get_pixel;
    
    // [NtGdiGetProcessSessionFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf8610, 0x13864 bytes
    // win32kfull.sys .text:0x36fc0, 0x1596d bytes
    // win32kfull.sys .text:0x68f80, 0x1659e bytes
    // win32kfull.sys .text:0x373d0, 0x1596d bytes
    //
    _a72(sdk::unknown_ptr) gdi_get_process_session_fonts;
    
    // [NtGdiGetPublicFontTableChangeCookie]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x110790, 0x13864 bytes
    // win32kfull.sys .text:0x111750, 0x1596d bytes
    // win32kfull.sys .text:0x105b10, 0x1659e bytes
    // win32kfull.sys .text:0x112680, 0x1596d bytes
    //
    _a73(sdk::unknown_ptr) gdi_get_public_font_table_change_cookie;
    
    // [NtGdiGetRandomRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5c580, 0x13864 bytes
    // win32kfull.sys .text:0x89bc0, 0x1596d bytes
    // win32kfull.sys .text:0x17d90, 0x1659e bytes
    // win32kfull.sys .text:0x8a730, 0x1596d bytes
    //
    _a74(sdk::unknown_ptr) gdi_get_random_rgn;
    
    // [NtGdiGetRasterizerCaps]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8380, 0x13864 bytes
    // win32kfull.sys .text:0x2af160, 0x1596d bytes
    // win32kfull.sys .text:0x2b0070, 0x1659e bytes
    // win32kfull.sys .text:0x2af0d0, 0x1596d bytes
    //
    _a75(sdk::unknown_ptr) gdi_get_rasterizer_caps;
    
    // [NtGdiGetRealizationInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xff5a0, 0x13864 bytes
    // win32kfull.sys .text:0x8e050, 0x1596d bytes
    // win32kfull.sys .text:0x1c5d0, 0x1659e bytes
    // win32kfull.sys .text:0x8ebc0, 0x1596d bytes
    //
    _a76(sdk::unknown_ptr) gdi_get_realization_info;
    
    // [NtGdiGetRegionData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149050, 0x13864 bytes
    // win32kbase.sys .text:0x39810, 0x243e0 bytes
    // win32kbase.sys .text:0xa69a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c550, 0x243e0 bytes
    //
    _a77(sdk::unknown_ptr) gdi_get_region_data;
    
    // [NtGdiGetRgnBox]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149060, 0x13864 bytes
    // win32kbase.sys .text:0xb1c30, 0x243e0 bytes
    // win32kbase.sys .text:0xabd50, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8070, 0x243e0 bytes
    //
    _a78(sdk::unknown_ptr) gdi_get_rgn_box;
    
    // [NtGdiGetServerMetaFileBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b3fb0, 0x13864 bytes
    // win32kfull.sys .text:0x2b81a0, 0x1596d bytes
    // win32kfull.sys .text:0x2b9500, 0x1659e bytes
    // win32kfull.sys .text:0x2b8110, 0x1596d bytes
    //
    _a79(sdk::unknown_ptr) gdi_get_server_meta_file_bits;
    
    // [NtGdiGetSpoolMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _a80(sdk::unknown_ptr) gdi_get_spool_message;
    
    // [NtGdiGetStats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149070, 0x13864 bytes
    // win32kfull.sys .text:0x153de0, 0x1596d bytes
    // win32kfull.sys .text:0x14a8b0, 0x1659e bytes
    // win32kfull.sys .text:0x154d20, 0x1596d bytes
    //
    _a81(sdk::unknown_ptr) gdi_get_stats;
    
    // [NtGdiGetStringBitmapW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28b7a0, 0x13864 bytes
    // win32kfull.sys .text:0x2991f0, 0x1596d bytes
    // win32kfull.sys .text:0x29a190, 0x1659e bytes
    // win32kfull.sys .text:0x299160, 0x1596d bytes
    //
    _a82(sdk::unknown_ptr) gdi_get_string_bitmap_w;
    
    // [NtGdiGetSuggestedOPMProtectedOutputArraySize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149080, 0x13864 bytes
    // win32kbase.sys .text:0xce4f0, 0x243e0 bytes
    // win32kbase.sys .text:0xdfbc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcce90, 0x243e0 bytes
    //
    _a83(sdk::unknown_ptr) gdi_get_suggested_opm_protected_output_array_size;
    
    // [NtGdiGetSystemPaletteUse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8410, 0x13864 bytes
    // win32kfull.sys .text:0xdabe0, 0x1596d bytes
    // win32kfull.sys .text:0x143e40, 0x1659e bytes
    // win32kfull.sys .text:0xdb8a0, 0x1596d bytes
    //
    _a84(sdk::unknown_ptr) gdi_get_system_palette_use;
    
    // [NtGdiGetTextCharsetInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7d9b0, 0x13864 bytes
    // win32kfull.sys .text:0x66f30, 0x1596d bytes
    // win32kfull.sys .text:0xeae00, 0x1659e bytes
    // win32kfull.sys .text:0x67aa0, 0x1596d bytes
    //
    _a85(sdk::unknown_ptr) gdi_get_text_charset_info;
    
    // [NtGdiGetTextExtent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8420, 0x13864 bytes
    // win32kfull.sys .text:0x2af210, 0x1596d bytes
    // win32kfull.sys .text:0x2b0120, 0x1659e bytes
    // win32kfull.sys .text:0x2af180, 0x1596d bytes
    //
    _a86(sdk::unknown_ptr) gdi_get_text_extent;
    
    // [NtGdiGetTextExtentExW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x102aa0, 0x13864 bytes
    // win32kfull.sys .text:0x8dcc0, 0x1596d bytes
    // win32kfull.sys .text:0x1c2c0, 0x1659e bytes
    // win32kfull.sys .text:0x8e830, 0x1596d bytes
    //
    _a87(sdk::unknown_ptr) gdi_get_text_extent_ex_w;
    
    // [NtGdiGetTextFaceW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7d170, 0x13864 bytes
    // win32kfull.sys .text:0x64650, 0x1596d bytes
    // win32kfull.sys .text:0x7a1f0, 0x1659e bytes
    // win32kfull.sys .text:0x651c0, 0x1596d bytes
    //
    _a88(sdk::unknown_ptr) gdi_get_text_face_w;
    
    // [NtGdiGetTextMetricsW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbab00, 0x13864 bytes
    // win32kfull.sys .text:0x8d0f0, 0x1596d bytes
    // win32kfull.sys .text:0x1bbd0, 0x1659e bytes
    // win32kfull.sys .text:0x8dc60, 0x1596d bytes
    //
    _a89(sdk::unknown_ptr) gdi_get_text_metrics_w;
    
    // [NtGdiGetTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfcea0, 0x13864 bytes
    // win32kfull.sys .text:0xe8d70, 0x1596d bytes
    // win32kfull.sys .text:0x15290, 0x1659e bytes
    // win32kfull.sys .text:0xe9ab0, 0x1596d bytes
    //
    _a90(sdk::unknown_ptr) gdi_get_transform;
    
    // [NtGdiGetUFI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a85b0, 0x13864 bytes
    // win32kfull.sys .text:0x13e5d0, 0x1596d bytes
    // win32kfull.sys .text:0x12feb0, 0x1659e bytes
    // win32kfull.sys .text:0x13f510, 0x1596d bytes
    //
    _a91(sdk::unknown_ptr) gdi_get_ufi;
    
    // [NtGdiGetUFIPathname]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a86d0, 0x13864 bytes
    // win32kfull.sys .text:0x2af3b0, 0x1596d bytes
    // win32kfull.sys .text:0x2b02c0, 0x1659e bytes
    // win32kfull.sys .text:0x2af320, 0x1596d bytes
    //
    _a92(sdk::unknown_ptr) gdi_get_ufi_pathname;
    
    // [NtGdiGetWidthTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfbe40, 0x13864 bytes
    // win32kfull.sys .text:0x688f0, 0x1596d bytes
    // win32kfull.sys .text:0x72260, 0x1659e bytes
    // win32kfull.sys .text:0x69460, 0x1596d bytes
    //
    _a93(sdk::unknown_ptr) gdi_get_width_table;
    
    // [NtGdiGradientFill]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7bed0, 0x13864 bytes
    // win32kfull.sys .text:0x3fb90, 0x1596d bytes
    // win32kfull.sys .text:0x615d0, 0x1659e bytes
    // win32kfull.sys .text:0x3ffa0, 0x1596d bytes
    //
    _a94(sdk::unknown_ptr) gdi_gradient_fill;
    
    // [NtGdiHfontCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7b7c0, 0x13864 bytes
    // win32kfull.sys .text:0xe8610, 0x1596d bytes
    // win32kfull.sys .text:0xdfd90, 0x1659e bytes
    // win32kfull.sys .text:0xe9350, 0x1596d bytes
    //
    _a95(sdk::unknown_ptr) gdi_hfont_create;
    
    // [NtGdiHLSurfGetInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x61620, 0x13864 bytes
    // win32kfull.sys .text:0x71aa0, 0x1596d bytes
    // win32kfull.sys .text:0x3ab90, 0x1659e bytes
    // win32kfull.sys .text:0x72610, 0x1596d bytes
    //
    _a96(sdk::unknown_ptr) gdi_hl_surf_get_information;
    
    // [NtGdiHLSurfSetInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x48660, 0x13864 bytes
    // win32kfull.sys .text:0xcd640, 0x1596d bytes
    // win32kfull.sys .text:0xb82d0, 0x1659e bytes
    // win32kfull.sys .text:0xce300, 0x1596d bytes
    //
    _a97(sdk::unknown_ptr) gdi_hl_surf_set_information;
    
    // [NtGdiHT_Get8BPPFormatPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2afda0, 0x13864 bytes
    // win32kfull.sys .text:0x2b4810, 0x1596d bytes
    // win32kfull.sys .text:0x2b5bb0, 0x1659e bytes
    // win32kfull.sys .text:0x2b4780, 0x1596d bytes
    //
    _a98(sdk::unknown_ptr) gdi_ht_get8bpp_format_palette;
    
    // [NtGdiHT_Get8BPPMaskPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2afe40, 0x13864 bytes
    // win32kfull.sys .text:0x1444c0, 0x1596d bytes
    // win32kfull.sys .text:0x136410, 0x1659e bytes
    // win32kfull.sys .text:0x145400, 0x1596d bytes
    //
    _a99(sdk::unknown_ptr) gdi_ht_get8bpp_mask_palette;
    
    // [NtGdiIcmBrushInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b2040, 0x13864 bytes
    // win32kfull.sys .text:0x2b66b0, 0x1596d bytes
    // win32kfull.sys .text:0x2b7960, 0x1659e bytes
    // win32kfull.sys .text:0x2b6620, 0x1596d bytes
    //
    _b00(sdk::unknown_ptr) gdi_icm_brush_info;
    
    // [NtGdiInit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149090, 0x13864 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _b01(sdk::unknown_ptr) gdi_init;
    
    // [NtGdiInitSpool]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27ca10, 0x13864 bytes
    // win32kfull.sys .text:0x27cb90, 0x1596d bytes
    // win32kfull.sys .text:0x27ccf0, 0x1659e bytes
    // win32kfull.sys .text:0x27cb00, 0x1596d bytes
    //
    _b02(sdk::unknown_ptr) gdi_init_spool;
    
    // [NtGdiIntersectClipRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xff990, 0x13864 bytes
    // win32kfull.sys .text:0xfe310, 0x1596d bytes
    // win32kfull.sys .text:0xf0d30, 0x1659e bytes
    // win32kfull.sys .text:0xff240, 0x1596d bytes
    //
    _b03(sdk::unknown_ptr) gdi_intersect_clip_rect;
    
    // [NtGdiInvertRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2912f0, 0x13864 bytes
    // win32kfull.sys .text:0x1387d0, 0x1596d bytes
    // win32kfull.sys .text:0x12caf0, 0x1659e bytes
    // win32kfull.sys .text:0x139710, 0x1596d bytes
    //
    _b04(sdk::unknown_ptr) gdi_invert_rgn;
    
    // [NtGdiInvertRgnInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290af4, 0x13864 bytes
    // win32kfull.sys .text:0x138438, 0x1596d bytes
    // win32kfull.sys .text:0x12cba4, 0x1659e bytes
    // win32kfull.sys .text:0x139378, 0x1596d bytes
    //
    _b05(sdk::unknown_ptr) gdi_invert_rgn_internal;
    
    // [NtGdiLineTo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb8c00, 0x13864 bytes
    // win32kfull.sys .text:0x134d50, 0x1596d bytes
    // win32kfull.sys .text:0x12bec0, 0x1659e bytes
    // win32kfull.sys .text:0x135c90, 0x1596d bytes
    //
    _b06(sdk::unknown_ptr) gdi_line_to;
    
    // [NtGdiMakeFontDir]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8ab0, 0x13864 bytes
    // win32kfull.sys .text:0x2af820, 0x1596d bytes
    // win32kfull.sys .text:0x2b0730, 0x1659e bytes
    // win32kfull.sys .text:0x2af790, 0x1596d bytes
    //
    _b07(sdk::unknown_ptr) gdi_make_font_dir;
    
    // [NtGdiMakeInfoDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b47a0, 0x13864 bytes
    // win32kfull.sys .text:0x149460, 0x1596d bytes
    // win32kfull.sys .text:0x13d3e0, 0x1659e bytes
    // win32kfull.sys .text:0x14a3a0, 0x1596d bytes
    //
    _b08(sdk::unknown_ptr) gdi_make_info_dc;
    
    // [NtGdiMakeObjectUnXferable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290a20, 0x13864 bytes
    // win32kfull.sys .text:0x10e920, 0x1596d bytes
    // win32kfull.sys .text:0x13a220, 0x1659e bytes
    // win32kfull.sys .text:0x10f850, 0x1596d bytes
    //
    _b09(sdk::unknown_ptr) gdi_make_object_un_xferable;
    
    // [NtGdiMakeObjectXferable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290a80, 0x13864 bytes
    // win32kfull.sys .text:0x106210, 0x1596d bytes
    // win32kfull.sys .text:0x134430, 0x1659e bytes
    // win32kfull.sys .text:0x107140, 0x1596d bytes
    //
    _b10(sdk::unknown_ptr) gdi_make_object_xferable;
    
    // [NtGdiMaskBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x101520, 0x13864 bytes
    // win32kfull.sys .text:0x1119c0, 0x1596d bytes
    // win32kfull.sys .text:0x63d60, 0x1659e bytes
    // win32kfull.sys .text:0x1128f0, 0x1596d bytes
    //
    _b11(sdk::unknown_ptr) gdi_mask_blt;
    
    // [NtGdiMirrorWindowOrg]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8cb0, 0x13864 bytes
    // win32kfull.sys .text:0x2afa40, 0x1596d bytes
    // win32kfull.sys .text:0x2b0950, 0x1659e bytes
    // win32kfull.sys .text:0x2af9b0, 0x1596d bytes
    //
    _b12(sdk::unknown_ptr) gdi_mirror_window_org;
    
    // [NtGdiModifyWorldTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfb4a0, 0x13864 bytes
    // win32kfull.sys .text:0x6d570, 0x1596d bytes
    // win32kfull.sys .text:0x761f0, 0x1659e bytes
    // win32kfull.sys .text:0x6e0e0, 0x1596d bytes
    //
    _b13(sdk::unknown_ptr) gdi_modify_world_transform;
    
    // [NtGdiMonoBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b3070, 0x13864 bytes
    // win32kfull.sys .text:0x2b7080, 0x1596d bytes
    // win32kfull.sys .text:0x2b83b0, 0x1659e bytes
    // win32kfull.sys .text:0x2b6ff0, 0x1596d bytes
    //
    _b14(sdk::unknown_ptr) gdi_mono_bitmap;
    
    // [NtGdiMoveTo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8d00, 0x13864 bytes
    // win32kfull.sys .text:0x2afa80, 0x1596d bytes
    // win32kfull.sys .text:0x2b0990, 0x1659e bytes
    // win32kfull.sys .text:0x2af9f0, 0x1596d bytes
    //
    _b15(sdk::unknown_ptr) gdi_move_to;
    
    // [NtGdiOffsetClipRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2913e0, 0x13864 bytes
    // win32kfull.sys .text:0x1448d0, 0x1596d bytes
    // win32kfull.sys .text:0x138ea0, 0x1659e bytes
    // win32kfull.sys .text:0x145810, 0x1596d bytes
    //
    _b16(sdk::unknown_ptr) gdi_offset_clip_rgn;
    
    // [NtGdiOffsetRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1490a0, 0x13864 bytes
    // win32kbase.sys .text:0xc0b80, 0x243e0 bytes
    // win32kbase.sys .text:0x57320, 0x27ef0 bytes
    // win32kbase.sys .text:0xba2b0, 0x243e0 bytes
    //
    _b17(sdk::unknown_ptr) gdi_offset_rgn;
    
    // [NtGdiOpenDCW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1490b0, 0x13864 bytes
    // win32kbase.sys .text:0x3bd80, 0x243e0 bytes
    // win32kbase.sys .text:0x51ed0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3c550, 0x243e0 bytes
    //
    _b18(sdk::unknown_ptr) gdi_open_dcw;
    
    // [NtGdiPatBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x36310, 0x13864 bytes
    // win32kfull.sys .text:0x98110, 0x1596d bytes
    // win32kfull.sys .text:0xf850, 0x1659e bytes
    // win32kfull.sys .text:0x98c80, 0x1596d bytes
    //
    _b19(sdk::unknown_ptr) gdi_pat_blt;
    
    // [NtGdiPathToRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a63c0, 0x13864 bytes
    // win32kfull.sys .text:0x2ada40, 0x1596d bytes
    // win32kfull.sys .text:0x2ae940, 0x1659e bytes
    // win32kfull.sys .text:0x2ad9b0, 0x1596d bytes
    //
    _b20(sdk::unknown_ptr) gdi_path_to_region;
    
    // [NtGdiPATHOBJ_bEnum]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aff40, 0x13864 bytes
    // win32kfull.sys .text:0x2b48c0, 0x1596d bytes
    // win32kfull.sys .text:0x2b5c70, 0x1659e bytes
    // win32kfull.sys .text:0x2b4830, 0x1596d bytes
    //
    _b21(sdk::unknown_ptr) gdi_pathobj_b_enum;
    
    // [NtGdiPATHOBJ_bEnumClipLines]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b00b0, 0x13864 bytes
    // win32kfull.sys .text:0x2b4a30, 0x1596d bytes
    // win32kfull.sys .text:0x2b5de0, 0x1659e bytes
    // win32kfull.sys .text:0x2b49a0, 0x1596d bytes
    //
    _b22(sdk::unknown_ptr) gdi_pathobj_b_enum_clip_lines;
    
    // [NtGdiPATHOBJ_vEnumStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0270, 0x13864 bytes
    // win32kfull.sys .text:0x2b4c00, 0x1596d bytes
    // win32kfull.sys .text:0x2b5fc0, 0x1659e bytes
    // win32kfull.sys .text:0x2b4b70, 0x1596d bytes
    //
    _b23(sdk::unknown_ptr) gdi_pathobj_v_enum_start;
    
    // [NtGdiPATHOBJ_vEnumStartClipLines]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0310, 0x13864 bytes
    // win32kfull.sys .text:0x2b4cc0, 0x1596d bytes
    // win32kfull.sys .text:0x2b6080, 0x1659e bytes
    // win32kfull.sys .text:0x2b4c30, 0x1596d bytes
    //
    _b24(sdk::unknown_ptr) gdi_pathobj_v_enum_start_clip_lines;
    
    // [NtGdiPATHOBJ_vGetBounds]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0480, 0x13864 bytes
    // win32kfull.sys .text:0x2b4e70, 0x1596d bytes
    // win32kfull.sys .text:0x2b6230, 0x1659e bytes
    // win32kfull.sys .text:0x2b4de0, 0x1596d bytes
    //
    _b25(sdk::unknown_ptr) gdi_pathobj_v_get_bounds;
    
    // [NtGdiPlgBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1010, 0x13864 bytes
    // win32kfull.sys .text:0x28e3c0, 0x1596d bytes
    // win32kfull.sys .text:0x28e6d0, 0x1659e bytes
    // win32kfull.sys .text:0x28e330, 0x1596d bytes
    //
    _b26(sdk::unknown_ptr) gdi_plg_blt;
    
    // [NtGdiPolyDraw]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8d50, 0x13864 bytes
    // win32kfull.sys .text:0x2afae0, 0x1596d bytes
    // win32kfull.sys .text:0x2b09f0, 0x1659e bytes
    // win32kfull.sys .text:0x2afa50, 0x1596d bytes
    //
    _b27(sdk::unknown_ptr) gdi_poly_draw;
    
    // [NtGdiPolyPatBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8f6a0, 0x13864 bytes
    // win32kfull.sys .text:0x9a040, 0x1596d bytes
    // win32kfull.sys .text:0xf620, 0x1659e bytes
    // win32kfull.sys .text:0x9abb0, 0x1596d bytes
    //
    _b28(sdk::unknown_ptr) gdi_poly_pat_blt;
    
    // [NtGdiPolyPolyDraw]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1490c0, 0x13864 bytes
    // win32kbase.sys .text:0xcb0b0, 0x243e0 bytes
    // win32kbase.sys .text:0xaee40, 0x27ef0 bytes
    // win32kbase.sys .text:0xc9a50, 0x243e0 bytes
    //
    _b29(sdk::unknown_ptr) gdi_poly_poly_draw;
    
    // [NtGdiPolyTextOutW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8c360, 0x13864 bytes
    // win32kfull.sys .text:0x40130, 0x1596d bytes
    // win32kfull.sys .text:0xd840, 0x1659e bytes
    // win32kfull.sys .text:0x40540, 0x1596d bytes
    //
    _b30(sdk::unknown_ptr) gdi_poly_text_out_w;
    
    // [NtGdiPtInRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1490d0, 0x13864 bytes
    // win32kfull.sys .text:0x153e00, 0x1596d bytes
    // win32kfull.sys .text:0x14a8d0, 0x1659e bytes
    // win32kfull.sys .text:0x154d40, 0x1596d bytes
    //
    _b31(sdk::unknown_ptr) gdi_pt_in_region;
    
    // [NtGdiPtVisible]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x291590, 0x13864 bytes
    // win32kfull.sys .text:0x29f8b0, 0x1596d bytes
    // win32kfull.sys .text:0x2a08c0, 0x1659e bytes
    // win32kfull.sys .text:0x29f820, 0x1596d bytes
    //
    _b32(sdk::unknown_ptr) gdi_pt_visible;
    
    // [NtGdiQueryFontAssocInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10e1f0, 0x13864 bytes
    // win32kfull.sys .text:0x105da0, 0x1596d bytes
    // win32kfull.sys .text:0x103ee0, 0x1659e bytes
    // win32kfull.sys .text:0x106cd0, 0x1596d bytes
    //
    _b33(sdk::unknown_ptr) gdi_query_font_assoc_info;
    
    // [NtGdiQueryFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8eb0, 0x13864 bytes
    // win32kfull.sys .text:0x143940, 0x1596d bytes
    // win32kfull.sys .text:0x135e50, 0x1659e bytes
    // win32kfull.sys .text:0x144880, 0x1596d bytes
    //
    _b34(sdk::unknown_ptr) gdi_query_fonts;
    
    // [NtGdiRectInRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1490e0, 0x13864 bytes
    // win32kbase.sys .text:0xcc0c0, 0x243e0 bytes
    // win32kbase.sys .text:0xde560, 0x27ef0 bytes
    // win32kbase.sys .text:0xcaa60, 0x243e0 bytes
    //
    _b35(sdk::unknown_ptr) gdi_rect_in_region;
    
    // [NtGdiRectVisible]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe7b50, 0x13864 bytes
    // win32kfull.sys .text:0x3f9b0, 0x1596d bytes
    // win32kfull.sys .text:0x62370, 0x1659e bytes
    // win32kfull.sys .text:0x3fdc0, 0x1596d bytes
    //
    _b36(sdk::unknown_ptr) gdi_rect_visible;
    
    // [NtGdiRectangle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb80c0, 0x13864 bytes
    // win32kfull.sys .text:0x133f00, 0x1596d bytes
    // win32kfull.sys .text:0x12b070, 0x1659e bytes
    // win32kfull.sys .text:0x134e40, 0x1596d bytes
    //
    _b37(sdk::unknown_ptr) gdi_rectangle;
    
    // [NtGdiRemoveFontMemResourceEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8fd0, 0x13864 bytes
    // win32kfull.sys .text:0x2afc70, 0x1596d bytes
    // win32kfull.sys .text:0x2b0b80, 0x1659e bytes
    // win32kfull.sys .text:0x2afbe0, 0x1596d bytes
    //
    _b38(sdk::unknown_ptr) gdi_remove_font_mem_resource_ex;
    
    // [NtGdiRemoveFontResourceW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a8fe0, 0x13864 bytes
    // win32kfull.sys .text:0x2afc90, 0x1596d bytes
    // win32kfull.sys .text:0x2b0ba0, 0x1659e bytes
    // win32kfull.sys .text:0x2afc00, 0x1596d bytes
    //
    _b39(sdk::unknown_ptr) gdi_remove_font_resource_w;
    
    // [NtGdiRemoveMergeFont]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269800, 0x13864 bytes
    // win32kfull.sys .text:0x27d740, 0x1596d bytes
    // win32kfull.sys .text:0x27d8a0, 0x1659e bytes
    // win32kfull.sys .text:0x27d6b0, 0x1596d bytes
    //
    _b40(sdk::unknown_ptr) gdi_remove_merge_font;
    
    // [NtGdiResetDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a9170, 0x13864 bytes
    // win32kfull.sys .text:0x1494c0, 0x1596d bytes
    // win32kfull.sys .text:0x13dce0, 0x1659e bytes
    // win32kfull.sys .text:0x14a400, 0x1596d bytes
    //
    _b41(sdk::unknown_ptr) gdi_reset_dc;
    
    // [NtGdiResizePalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b3970, 0x13864 bytes
    // win32kfull.sys .text:0x2b7ad0, 0x1596d bytes
    // win32kfull.sys .text:0x2b8e40, 0x1659e bytes
    // win32kfull.sys .text:0x2b7a40, 0x1596d bytes
    //
    _b42(sdk::unknown_ptr) gdi_resize_palette;
    
    // [NtGdiRestoreDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfdec0, 0x13864 bytes
    // win32kfull.sys .text:0x104fd0, 0x1596d bytes
    // win32kfull.sys .text:0xf7740, 0x1659e bytes
    // win32kfull.sys .text:0x105f00, 0x1596d bytes
    //
    _b43(sdk::unknown_ptr) gdi_restore_dc;
    
    // [NtGdiRoundRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293550, 0x13864 bytes
    // win32kfull.sys .text:0x132990, 0x1596d bytes
    // win32kfull.sys .text:0x2a1be0, 0x1659e bytes
    // win32kfull.sys .text:0x1338d0, 0x1596d bytes
    //
    _b44(sdk::unknown_ptr) gdi_round_rect;
    
    // [NtGdiSaveDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3a1b0, 0x13864 bytes
    // win32kfull.sys .text:0x49f40, 0x1596d bytes
    // win32kfull.sys .text:0xdee50, 0x1659e bytes
    // win32kfull.sys .text:0x4a350, 0x1596d bytes
    //
    _b45(sdk::unknown_ptr) gdi_save_dc;
    
    // [NtGdiScaleViewportExtEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b29e0, 0x13864 bytes
    // win32kfull.sys .text:0x2b6db0, 0x1596d bytes
    // win32kfull.sys .text:0x2b80e0, 0x1659e bytes
    // win32kfull.sys .text:0x2b6d20, 0x1596d bytes
    //
    _b46(sdk::unknown_ptr) gdi_scale_viewport_ext_ex;
    
    // [NtGdiScaleWindowExtEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a92a0, 0x13864 bytes
    // win32kfull.sys .text:0x14f730, 0x1596d bytes
    // win32kfull.sys .text:0x2b0ea0, 0x1659e bytes
    // win32kfull.sys .text:0x150670, 0x1596d bytes
    //
    _b47(sdk::unknown_ptr) gdi_scale_window_ext_ex;
    
    // [NtGdiSelectBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf6ae0, 0x13864 bytes
    // win32kfull.sys .text:0xf7590, 0x1596d bytes
    // win32kfull.sys .text:0xe9fb0, 0x1659e bytes
    // win32kfull.sys .text:0xf8420, 0x1596d bytes
    //
    _b48(sdk::unknown_ptr) gdi_select_bitmap;
    
    // [NtGdiSelectBrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a9300, 0x13864 bytes
    // win32kfull.sys .text:0x2aff90, 0x1596d bytes
    // win32kfull.sys .text:0x2b0f00, 0x1659e bytes
    // win32kfull.sys .text:0x2aff00, 0x1596d bytes
    //
    _b49(sdk::unknown_ptr) gdi_select_brush;
    
    // [NtGdiSelectClipPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a64e0, 0x13864 bytes
    // win32kfull.sys .text:0x134600, 0x1596d bytes
    // win32kfull.sys .text:0x12b750, 0x1659e bytes
    // win32kfull.sys .text:0x135540, 0x1596d bytes
    //
    _b50(sdk::unknown_ptr) gdi_select_clip_path;
    
    // [NtGdiSelectFont]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x65920, 0x13864 bytes
    // win32kfull.sys .text:0x47a70, 0x1596d bytes
    // win32kfull.sys .text:0xa79f0, 0x1659e bytes
    // win32kfull.sys .text:0x47e80, 0x1596d bytes
    //
    _b51(sdk::unknown_ptr) gdi_select_font;
    
    // [NtGdiSelectPen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a9310, 0x13864 bytes
    // win32kfull.sys .text:0x2affb0, 0x1596d bytes
    // win32kfull.sys .text:0x2b0f20, 0x1659e bytes
    // win32kfull.sys .text:0x2aff20, 0x1596d bytes
    //
    _b52(sdk::unknown_ptr) gdi_select_pen;
    
    // [NtGdiSetBitmapAttributes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1064d0, 0x13864 bytes
    // win32kfull.sys .text:0x3f2a0, 0x1596d bytes
    // win32kfull.sys .text:0xaa80, 0x1659e bytes
    // win32kfull.sys .text:0x3f6b0, 0x1596d bytes
    //
    _b53(sdk::unknown_ptr) gdi_set_bitmap_attributes;
    
    // [NtGdiSetBitmapBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfb860, 0x13864 bytes
    // win32kfull.sys .text:0xd1420, 0x1596d bytes
    // win32kfull.sys .text:0xb67a0, 0x1659e bytes
    // win32kfull.sys .text:0xd20e0, 0x1596d bytes
    //
    _b54(sdk::unknown_ptr) gdi_set_bitmap_bits;
    
    // [NtGdiSetBitmapDimension]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a9320, 0x13864 bytes
    // win32kfull.sys .text:0x2affd0, 0x1596d bytes
    // win32kfull.sys .text:0x2b0f40, 0x1659e bytes
    // win32kfull.sys .text:0x2aff40, 0x1596d bytes
    //
    _b55(sdk::unknown_ptr) gdi_set_bitmap_dimension;
    
    // [NtGdiSetBoundsRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x110cc0, 0x13864 bytes
    // win32kfull.sys .text:0x45ac0, 0x1596d bytes
    // win32kfull.sys .text:0xadf0, 0x1659e bytes
    // win32kfull.sys .text:0x45ed0, 0x1596d bytes
    //
    _b56(sdk::unknown_ptr) gdi_set_bounds_rect;
    
    // [NtGdiSetBrushAttributes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _b57(sdk::unknown_ptr) gdi_set_brush_attributes;
    
    // [NtGdiSetBrushOrg]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13ac10, 0x13864 bytes
    // win32kfull.sys .text:0x474d0, 0x1596d bytes
    // win32kfull.sys .text:0x13b290, 0x1659e bytes
    // win32kfull.sys .text:0x478e0, 0x1596d bytes
    //
    _b58(sdk::unknown_ptr) gdi_set_brush_org;
    
    // [NtGdiSetColorAdjustment]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a9370, 0x13864 bytes
    // win32kfull.sys .text:0x2b0030, 0x1596d bytes
    // win32kfull.sys .text:0x2b0fa0, 0x1659e bytes
    // win32kfull.sys .text:0x2affa0, 0x1596d bytes
    //
    _b59(sdk::unknown_ptr) gdi_set_color_adjustment;
    
    // [NtGdiSetColorSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b2390, 0x13864 bytes
    // win32kfull.sys .text:0x14ab80, 0x1596d bytes
    // win32kfull.sys .text:0x13f940, 0x1659e bytes
    // win32kfull.sys .text:0x14bac0, 0x1596d bytes
    //
    _b60(sdk::unknown_ptr) gdi_set_color_space;
    
    // [NtGdiSetDIBitsToDeviceInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x63a00, 0x13864 bytes
    // win32kfull.sys .text:0x7a480, 0x1596d bytes
    // win32kfull.sys .text:0xe9180, 0x1659e bytes
    // win32kfull.sys .text:0x7aff0, 0x1596d bytes
    //
    _b61(sdk::unknown_ptr) gdi_set_di_bits_to_device_internal;
    
    // [NtGdiSetFontEnumeration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293780, 0x13864 bytes
    // win32kfull.sys .text:0x2a0c40, 0x1596d bytes
    // win32kfull.sys .text:0x2a1e50, 0x1659e bytes
    // win32kfull.sys .text:0x2a0bb0, 0x1596d bytes
    //
    _b62(sdk::unknown_ptr) gdi_set_font_enumeration;
    
    // [NtGdiSetFontXform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141d30, 0x13864 bytes
    // win32kfull.sys .text:0x13bd70, 0x1596d bytes
    // win32kfull.sys .text:0x12e400, 0x1659e bytes
    // win32kfull.sys .text:0x13ccb0, 0x1596d bytes
    //
    _b63(sdk::unknown_ptr) gdi_set_font_xform;
    
    // [NtGdiSetIcmMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b24f0, 0x13864 bytes
    // win32kfull.sys .text:0x13bae0, 0x1596d bytes
    // win32kfull.sys .text:0xe180, 0x1659e bytes
    // win32kfull.sys .text:0x13ca20, 0x1596d bytes
    //
    _b64(sdk::unknown_ptr) gdi_set_icm_mode;
    
    // [NtGdiSetLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11c0e0, 0x13864 bytes
    // win32kfull.sys .text:0x1166b0, 0x1596d bytes
    // win32kfull.sys .text:0x108c10, 0x1659e bytes
    // win32kfull.sys .text:0x1175e0, 0x1596d bytes
    //
    _b65(sdk::unknown_ptr) gdi_set_layout;
    
    // [NtGdiSetLinkedUFIs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2698b0, 0x13864 bytes
    // win32kfull.sys .text:0x27d7f0, 0x1596d bytes
    // win32kfull.sys .text:0x27d950, 0x1659e bytes
    // win32kfull.sys .text:0x27d760, 0x1596d bytes
    //
    _b66(sdk::unknown_ptr) gdi_set_linked_uf_is;
    
    // [NtGdiSetMagicColors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1490f0, 0x13864 bytes
    // win32kfull.sys .text:0x153e20, 0x1596d bytes
    // win32kfull.sys .text:0x14a8f0, 0x1659e bytes
    // win32kfull.sys .text:0x154d60, 0x1596d bytes
    //
    _b67(sdk::unknown_ptr) gdi_set_magic_colors;
    
    // [NtGdiSetMetaRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10fa90, 0x13864 bytes
    // win32kfull.sys .text:0xf6e90, 0x1596d bytes
    // win32kfull.sys .text:0xea220, 0x1659e bytes
    // win32kfull.sys .text:0xf7d20, 0x1596d bytes
    //
    _b68(sdk::unknown_ptr) gdi_set_meta_rgn;
    
    // [NtGdiSetMiterLimit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x135620, 0x13864 bytes
    // win32kfull.sys .text:0x102ff0, 0x1596d bytes
    // win32kfull.sys .text:0x11a610, 0x1659e bytes
    // win32kfull.sys .text:0x103f20, 0x1596d bytes
    //
    _b69(sdk::unknown_ptr) gdi_set_miter_limit;
    
    // [NtGdiSetOPMSigningKeyAndSequenceNumbers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149100, 0x13864 bytes
    // win32kbase.sys .text:0xcc530, 0x243e0 bytes
    // win32kbase.sys .text:0xdd9f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcaed0, 0x243e0 bytes
    //
    _b70(sdk::unknown_ptr) gdi_set_opm_signing_key_and_sequence_numbers;
    
    // [NtGdiSetPixel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f680, 0x13864 bytes
    // win32kfull.sys .text:0x1452b0, 0x1596d bytes
    // win32kfull.sys .text:0x1239f0, 0x1659e bytes
    // win32kfull.sys .text:0x1461f0, 0x1596d bytes
    //
    _b71(sdk::unknown_ptr) gdi_set_pixel;
    
    // [NtGdiSetPixelFormat]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b5c50, 0x13864 bytes
    // win32kfull.sys .text:0x2bc370, 0x1596d bytes
    // win32kfull.sys .text:0x2bd7c0, 0x1659e bytes
    // win32kfull.sys .text:0x2bc2e0, 0x1596d bytes
    //
    _b72(sdk::unknown_ptr) gdi_set_pixel_format;
    
    // [NtGdiSetPUMPDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0770, 0x13864 bytes
    // win32kfull.sys .text:0x18f00, 0x1596d bytes
    // win32kfull.sys .text:0x11df30, 0x1659e bytes
    // win32kfull.sys .text:0x192b0, 0x1596d bytes
    //
    _b73(sdk::unknown_ptr) gdi_set_pumpdobj;
    
    // [NtGdiSetRectRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149110, 0x13864 bytes
    // win32kbase.sys .text:0x150380, 0x243e0 bytes
    // win32kbase.sys .text:0x183360, 0x27ef0 bytes
    // win32kbase.sys .text:0x14e220, 0x243e0 bytes
    //
    _b74(sdk::unknown_ptr) gdi_set_rect_rgn;
    
    // [NtGdiSetSizeDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13e110, 0x13864 bytes
    // win32kfull.sys .text:0x10ba20, 0x1596d bytes
    // win32kfull.sys .text:0x1360c0, 0x1659e bytes
    // win32kfull.sys .text:0x10c950, 0x1596d bytes
    //
    _b75(sdk::unknown_ptr) gdi_set_size_device;
    
    // [NtGdiSetSystemPaletteUse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a94a0, 0x13864 bytes
    // win32kfull.sys .text:0x2b0180, 0x1596d bytes
    // win32kfull.sys .text:0x2b10f0, 0x1659e bytes
    // win32kfull.sys .text:0x2b00f0, 0x1596d bytes
    //
    _b76(sdk::unknown_ptr) gdi_set_system_palette_use;
    
    // [NtGdiSetTextJustification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x291e60, 0x13864 bytes
    // win32kfull.sys .text:0x2bbff0, 0x1596d bytes
    // win32kfull.sys .text:0x2bd440, 0x1659e bytes
    // win32kfull.sys .text:0x2bbf60, 0x1596d bytes
    //
    _b77(sdk::unknown_ptr) gdi_set_text_justification;
    
    // [NtGdiSetUMPDSandboxState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0a80, 0x13864 bytes
    // win32kfull.sys .text:0x127ad0, 0x1596d bytes
    // win32kfull.sys .text:0x143940, 0x1659e bytes
    // win32kfull.sys .text:0x128a10, 0x1596d bytes
    //
    _b78(sdk::unknown_ptr) gdi_set_umpd_sandbox_state;
    
    // [NtGdiSetVirtualResolution]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13c220, 0x13864 bytes
    // win32kfull.sys .text:0x109120, 0x1596d bytes
    // win32kfull.sys .text:0x135260, 0x1659e bytes
    // win32kfull.sys .text:0x10a050, 0x1596d bytes
    //
    _b79(sdk::unknown_ptr) gdi_set_virtual_resolution;
    
    // [NtGdiStartDoc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269a00, 0x13864 bytes
    // win32kfull.sys .text:0x13eaf0, 0x1596d bytes
    // win32kfull.sys .text:0x1222c0, 0x1659e bytes
    // win32kfull.sys .text:0x13fa30, 0x1596d bytes
    //
    _b80(sdk::unknown_ptr) gdi_start_doc;
    
    // [NtGdiStartPage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x269e40, 0x13864 bytes
    // win32kfull.sys .text:0x13f400, 0x1596d bytes
    // win32kfull.sys .text:0x121d70, 0x1659e bytes
    // win32kfull.sys .text:0x140340, 0x1596d bytes
    //
    _b81(sdk::unknown_ptr) gdi_start_page;
    
    // [NtGdiStretchBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf6c60, 0x13864 bytes
    // win32kfull.sys .text:0xfe9e0, 0x1596d bytes
    // win32kfull.sys .text:0xf5130, 0x1659e bytes
    // win32kfull.sys .text:0xff910, 0x1596d bytes
    //
    _b82(sdk::unknown_ptr) gdi_stretch_blt;
    
    // [NtGdiStretchDIBitsInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x63c00, 0x13864 bytes
    // win32kfull.sys .text:0x87c40, 0x1596d bytes
    // win32kfull.sys .text:0x12ea0, 0x1659e bytes
    // win32kfull.sys .text:0x887b0, 0x1596d bytes
    //
    _b83(sdk::unknown_ptr) gdi_stretch_di_bits_internal;
    
    // [NtGdiSTROBJ_bEnum]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0540, 0x13864 bytes
    // win32kfull.sys .text:0x2b4f50, 0x1596d bytes
    // win32kfull.sys .text:0x2b6310, 0x1659e bytes
    // win32kfull.sys .text:0x2b4ec0, 0x1596d bytes
    //
    _b84(sdk::unknown_ptr) gdi_strobj_b_enum;
    
    // [NtGdiSTROBJ_bEnumInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aaec0, 0x13864 bytes
    // win32kfull.sys .text:0x2b17c8, 0x1596d bytes
    // win32kfull.sys .text:0x2b2b84, 0x1659e bytes
    // win32kfull.sys .text:0x2b1738, 0x1596d bytes
    //
    _b85(sdk::unknown_ptr) gdi_strobj_b_enum_internal;
    
    // [NtGdiSTROBJ_bEnumPositionsOnly]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0550, 0x13864 bytes
    // win32kfull.sys .text:0x2b4f70, 0x1596d bytes
    // win32kfull.sys .text:0x2b6330, 0x1659e bytes
    // win32kfull.sys .text:0x2b4ee0, 0x1596d bytes
    //
    _b86(sdk::unknown_ptr) gdi_strobj_b_enum_positions_only;
    
    // [NtGdiSTROBJ_bGetAdvanceWidths]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0560, 0x13864 bytes
    // win32kfull.sys .text:0x2b4f90, 0x1596d bytes
    // win32kfull.sys .text:0x2b6350, 0x1659e bytes
    // win32kfull.sys .text:0x2b4f00, 0x1596d bytes
    //
    _b87(sdk::unknown_ptr) gdi_strobj_b_get_advance_widths;
    
    // [NtGdiSTROBJ_dwGetCodePage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0690, 0x13864 bytes
    // win32kfull.sys .text:0x2b50b0, 0x1596d bytes
    // win32kfull.sys .text:0x2b6470, 0x1659e bytes
    // win32kfull.sys .text:0x2b5020, 0x1596d bytes
    //
    _b88(sdk::unknown_ptr) gdi_strobj_dw_get_code_page;
    
    // [NtGdiSTROBJ_vEnumStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0700, 0x13864 bytes
    // win32kfull.sys .text:0x2b5120, 0x1596d bytes
    // win32kfull.sys .text:0x2b64e0, 0x1659e bytes
    // win32kfull.sys .text:0x2b5090, 0x1596d bytes
    //
    _b89(sdk::unknown_ptr) gdi_strobj_v_enum_start;
    
    // [NtGdiStrokeAndFillPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6600, 0x13864 bytes
    // win32kfull.sys .text:0x2adba0, 0x1596d bytes
    // win32kfull.sys .text:0x2aeaa0, 0x1659e bytes
    // win32kfull.sys .text:0x2adb10, 0x1596d bytes
    //
    _b90(sdk::unknown_ptr) gdi_stroke_and_fill_path;
    
    // [NtGdiStrokePath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6740, 0x13864 bytes
    // win32kfull.sys .text:0x2add30, 0x1596d bytes
    // win32kfull.sys .text:0x2aec30, 0x1659e bytes
    // win32kfull.sys .text:0x2adca0, 0x1596d bytes
    //
    _b91(sdk::unknown_ptr) gdi_stroke_path;
    
    // [NtGdiSwapBuffers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b5e40, 0x13864 bytes
    // win32kfull.sys .text:0x2bc5b0, 0x1596d bytes
    // win32kfull.sys .text:0x2bda00, 0x1659e bytes
    // win32kfull.sys .text:0x2bc520, 0x1596d bytes
    //
    _b92(sdk::unknown_ptr) gdi_swap_buffers;
    
    // [NtGdiTransformPoints]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xed330, 0x13864 bytes
    // win32kfull.sys .text:0xe7af0, 0x1596d bytes
    // win32kfull.sys .text:0xfc440, 0x1659e bytes
    // win32kfull.sys .text:0xe8830, 0x1596d bytes
    //
    _b93(sdk::unknown_ptr) gdi_transform_points;
    
    // [NtGdiTransparentBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12be60, 0x13864 bytes
    // win32kfull.sys .text:0x145700, 0x1596d bytes
    // win32kfull.sys .text:0x13b2f0, 0x1659e bytes
    // win32kfull.sys .text:0x146640, 0x1596d bytes
    //
    _b94(sdk::unknown_ptr) gdi_transparent_blt;
    
    // [NtGdiUMPDEngFreeUserMem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0ab0, 0x13864 bytes
    // win32kfull.sys .text:0x2b51a0, 0x1596d bytes
    // win32kfull.sys .text:0x2b6560, 0x1659e bytes
    // win32kfull.sys .text:0x2b5110, 0x1596d bytes
    //
    _b95(sdk::unknown_ptr) gdi_umpd_eng_free_user_mem;
    
    // [NtGdiUnloadPrinterDriver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _b96(sdk::unknown_ptr) gdi_unload_printer_driver;
    
    // [NtGdiUnmapMemFont]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x127910, 0x13864 bytes
    // win32kfull.sys .text:0x128e40, 0x1596d bytes
    // win32kfull.sys .text:0x1188c0, 0x1659e bytes
    // win32kfull.sys .text:0x129d80, 0x1596d bytes
    //
    _b97(sdk::unknown_ptr) gdi_unmap_mem_font;
    
    // [NtGdiUnrealizeObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a94b0, 0x13864 bytes
    // win32kfull.sys .text:0x2b01a0, 0x1596d bytes
    // win32kfull.sys .text:0x2b1110, 0x1659e bytes
    // win32kfull.sys .text:0x2b0110, 0x1596d bytes
    //
    _b98(sdk::unknown_ptr) gdi_unrealize_object;
    
    // [NtGdiUpdateColors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b3c20, 0x13864 bytes
    // win32kfull.sys .text:0x2b7d80, 0x1596d bytes
    // win32kfull.sys .text:0x2b90f0, 0x1659e bytes
    // win32kfull.sys .text:0x2b7cf0, 0x1596d bytes
    //
    _b99(sdk::unknown_ptr) gdi_update_colors;
    
    // [NtGdiUpdateTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b2b40, 0x13864 bytes
    // win32kfull.sys .text:0x2b6f40, 0x1596d bytes
    // win32kfull.sys .text:0x2b8270, 0x1659e bytes
    // win32kfull.sys .text:0x2b6eb0, 0x1596d bytes
    //
    _c00(sdk::unknown_ptr) gdi_update_transform;
    
    // [NtGdiWidenPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a6850, 0x13864 bytes
    // win32kfull.sys .text:0x2ade90, 0x1596d bytes
    // win32kfull.sys .text:0x2aed90, 0x1659e bytes
    // win32kfull.sys .text:0x2ade00, 0x1596d bytes
    //
    _c01(sdk::unknown_ptr) gdi_widen_path;
    
    // [NtGdiXFORMOBJ_bApplyXform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0b50, 0x13864 bytes
    // win32kfull.sys .text:0x2b5250, 0x1596d bytes
    // win32kfull.sys .text:0x2b6610, 0x1659e bytes
    // win32kfull.sys .text:0x2b51c0, 0x1596d bytes
    //
    _c02(sdk::unknown_ptr) gdi_xformobj_b_apply_xform;
    
    // [NtGdiXFORMOBJ_iGetXform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0cf0, 0x13864 bytes
    // win32kfull.sys .text:0x13ddc0, 0x1596d bytes
    // win32kfull.sys .text:0x12f100, 0x1659e bytes
    // win32kfull.sys .text:0x13ed00, 0x1596d bytes
    //
    _c03(sdk::unknown_ptr) gdi_xformobj_i_get_xform;
    
    // [NtGdiXLATEOBJ_cGetPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0de0, 0x13864 bytes
    // win32kfull.sys .text:0x2b5400, 0x1596d bytes
    // win32kfull.sys .text:0x2b67d0, 0x1659e bytes
    // win32kfull.sys .text:0x2b5370, 0x1596d bytes
    //
    _c04(sdk::unknown_ptr) gdi_xlateobj_c_get_palette;
    
    // [NtGdiXLATEOBJ_hGetColorTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0ed0, 0x13864 bytes
    // win32kfull.sys .text:0x2b5510, 0x1596d bytes
    // win32kfull.sys .text:0x2b68e0, 0x1659e bytes
    // win32kfull.sys .text:0x2b5480, 0x1596d bytes
    //
    _c05(sdk::unknown_ptr) gdi_xlateobj_h_get_color_transform;
    
    // [NtGdiXLATEOBJ_iXlate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0f40, 0x13864 bytes
    // win32kfull.sys .text:0x2b5580, 0x1596d bytes
    // win32kfull.sys .text:0x2b6960, 0x1659e bytes
    // win32kfull.sys .text:0x2b54f0, 0x1596d bytes
    //
    _c06(sdk::unknown_ptr) gdi_xlateobj_i_xlate;
    
    // [NtHWCursorUpdatePointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149120, 0x13864 bytes
    // win32kfull.sys .text:0x153e40, 0x1596d bytes
    // win32kfull.sys .text:0x14a910, 0x1659e bytes
    // win32kfull.sys .text:0x154d80, 0x1596d bytes
    //
    _c07(sdk::unknown_ptr) hw_cursor_update_pointer;
    
    // [NtNotifyPresentToCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae70, 0x1eb80 bytes
    // win32k.sys .text:0x10e98, 0x388c7 bytes
    // win32k.sys .text:0x12238, 0x3e907 bytes
    // win32k.sys .text:0x10e98, 0x388c7 bytes
    //
    _c08(sdk::unknown_ptr) notify_present_to_composition_surface;
    
    // [NtOpenCompositionSurfaceDirtyRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x323a0, 0x1eb80 bytes
    // win32k.sys .text:0x10eac, 0x388c7 bytes
    // win32k.sys .text:0x1224c, 0x3e907 bytes
    // win32k.sys .text:0x10eac, 0x388c7 bytes
    //
    _c09(sdk::unknown_ptr) open_composition_surface_dirty_region;
    
    // [NtOpenCompositionSurfaceSectionInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf68b0, 0x1eb80 bytes
    // win32k.sys .text:0x10ec0, 0x388c7 bytes
    // win32k.sys .text:0x12274, 0x3e907 bytes
    // win32k.sys .text:0x10ec0, 0x388c7 bytes
    //
    _c10(sdk::unknown_ptr) open_composition_surface_section_info;
    
    // [NtQueryCompositionInputIsImplicit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6550, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1cf0, 0x243e0 bytes
    // win32kbase.sys .text:0xcb500, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8130, 0x243e0 bytes
    //
    _c11(sdk::unknown_ptr) query_composition_input_is_implicit;
    
    // [NtQueryCompositionInputQueueAndTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf65d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x731d0, 0x243e0 bytes
    // win32kbase.sys .text:0xaf860, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2e0, 0x243e0 bytes
    //
    _c12(sdk::unknown_ptr) query_composition_input_queue_and_transform;
    
    // [NtQueryCompositionInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x32890, 0x1eb80 bytes
    // win32kbase.sys .text:0xac830, 0x243e0 bytes
    // win32kbase.sys .text:0xaf630, 0x27ef0 bytes
    // win32kbase.sys .text:0xa2fa0, 0x243e0 bytes
    //
    _c13(sdk::unknown_ptr) query_composition_input_sink;
    
    // [NtQueryCompositionInputSinkLuid]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ab70, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9530, 0x243e0 bytes
    // win32kbase.sys .text:0xb9f00, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e610, 0x243e0 bytes
    //
    _c14(sdk::unknown_ptr) query_composition_input_sink_luid;
    
    // [NtQueryCompositionInputSinkViewId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6740, 0x1eb80 bytes
    // win32kbase.sys .text:0x2c70, 0x243e0 bytes
    // win32kbase.sys .text:0x8280, 0x27ef0 bytes
    // win32kbase.sys .text:0x2c70, 0x243e0 bytes
    //
    _c15(sdk::unknown_ptr) query_composition_input_sink_view_id;
    
    // [NtQueryCompositionSurfaceBinding]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77500, 0x1eb80 bytes
    // win32k.sys .text:0x10ee8, 0x388c7 bytes
    // win32k.sys .text:0x12288, 0x3e907 bytes
    // win32k.sys .text:0x10ee8, 0x388c7 bytes
    //
    _c16(sdk::unknown_ptr) query_composition_surface_binding;
    
    // [NtQueryCompositionSurfaceHDRMetaData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6a60, 0x1eb80 bytes
    // win32k.sys .text:0x10efc, 0x388c7 bytes
    // win32k.sys .text:0x122b0, 0x3e907 bytes
    // win32k.sys .text:0x10efc, 0x388c7 bytes
    //
    _c17(sdk::unknown_ptr) query_composition_surface_hdr_meta_data;
    
    // [NtQueryCompositionSurfaceRenderingRealization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x31c00, 0x1eb80 bytes
    // win32k.sys .text:0x10f10, 0x388c7 bytes
    // win32k.sys .text:0x122c4, 0x3e907 bytes
    // win32k.sys .text:0x10f10, 0x388c7 bytes
    //
    _c18(sdk::unknown_ptr) query_composition_surface_rendering_realization;
    
    // [NtQueryCompositionSurfaceStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x75120, 0x1eb80 bytes
    // win32k.sys .text:0x10f24, 0x388c7 bytes
    // win32k.sys .text:0x122d8, 0x3e907 bytes
    // win32k.sys .text:0x10f24, 0x388c7 bytes
    //
    _c19(sdk::unknown_ptr) query_composition_surface_statistics;
    
    // [NtRIMAddInputObserver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2160, 0x1eb80 bytes
    // win32kbase.sys .text:0x162f10, 0x243e0 bytes
    // win32kbase.sys .text:0x196db0, 0x27ef0 bytes
    // win32kbase.sys .text:0x161300, 0x243e0 bytes
    //
    _c20(sdk::unknown_ptr) rim_add_input_observer;
    
    // [NtRIMGetDevicePreparsedDataLockfree]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2200, 0x1eb80 bytes
    // win32kbase.sys .text:0x1636e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1974b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x161ad0, 0x243e0 bytes
    //
    _c21(sdk::unknown_ptr) rim_get_device_preparsed_data_lockfree;
    
    // [NtRIMObserveNextInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2210, 0x1eb80 bytes
    // win32kbase.sys .text:0x163820, 0x243e0 bytes
    // win32kbase.sys .text:0x197580, 0x27ef0 bytes
    // win32kbase.sys .text:0x161c10, 0x243e0 bytes
    //
    _c22(sdk::unknown_ptr) rim_observe_next_input;
    
    // [NtRIMRemoveInputObserver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2220, 0x1eb80 bytes
    // win32kbase.sys .text:0x163f90, 0x243e0 bytes
    // win32kbase.sys .text:0x198140, 0x27ef0 bytes
    // win32kbase.sys .text:0x162380, 0x243e0 bytes
    //
    _c23(sdk::unknown_ptr) rim_remove_input_observer;
    
    // [NtRIMUpdateInputObserverRegistration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2230, 0x1eb80 bytes
    // win32kbase.sys .text:0x164580, 0x243e0 bytes
    // win32kbase.sys .text:0x198660, 0x27ef0 bytes
    // win32kbase.sys .text:0x162970, 0x243e0 bytes
    //
    _c24(sdk::unknown_ptr) rim_update_input_observer_registration;
    
    // [NtSetCompositionSurfaceAnalogExclusive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6ce0, 0x1eb80 bytes
    // win32k.sys .text:0x10f38, 0x388c7 bytes
    // win32k.sys .text:0x122ec, 0x3e907 bytes
    // win32k.sys .text:0x10f38, 0x388c7 bytes
    //
    _c25(sdk::unknown_ptr) set_composition_surface_analog_exclusive;
    
    // [NtSetCompositionSurfaceDirectFlipState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6d70, 0x1eb80 bytes
    // win32k.sys .text:0x10f60, 0x388c7 bytes
    // win32k.sys .text:0x12314, 0x3e907 bytes
    // win32k.sys .text:0x10f60, 0x388c7 bytes
    //
    _c26(sdk::unknown_ptr) set_composition_surface_direct_flip_state;
    
    // [NtSetCompositionSurfaceIndependentFlipInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf7080, 0x1eb80 bytes
    // win32k.sys .text:0x10f74, 0x388c7 bytes
    // win32k.sys .text:0x12328, 0x3e907 bytes
    // win32k.sys .text:0x10f74, 0x388c7 bytes
    //
    _c27(sdk::unknown_ptr) set_composition_surface_independent_flip_info;
    
    // [NtSetCompositionSurfaceStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf7260, 0x1eb80 bytes
    // win32k.sys .text:0x10f88, 0x388c7 bytes
    // win32k.sys .text:0x1233c, 0x3e907 bytes
    // win32k.sys .text:0x10f88, 0x388c7 bytes
    //
    _c28(sdk::unknown_ptr) set_composition_surface_statistics;
    
    // [NtTokenManagerConfirmOutstandingAnalogToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf7e20, 0x1eb80 bytes
    // win32k.sys .text:0x10fc4, 0x388c7 bytes
    // win32k.sys .text:0x12378, 0x3e907 bytes
    // win32k.sys .text:0x10fc4, 0x388c7 bytes
    //
    _c29(sdk::unknown_ptr) token_manager_confirm_outstanding_analog_token;
    
    // [NtTokenManagerCreateCompositionTokenHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d0c0, 0x1eb80 bytes
    // win32k.sys .text:0x10fd8, 0x388c7 bytes
    // win32k.sys .text:0x1238c, 0x3e907 bytes
    // win32k.sys .text:0x10fd8, 0x388c7 bytes
    //
    _c30(sdk::unknown_ptr) token_manager_create_composition_token_handle;
    
    // [NtTokenManagerGetAnalogExclusiveSurfaceUpdates]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf7e60, 0x1eb80 bytes
    // win32k.sys .text:0x11014, 0x388c7 bytes
    // win32k.sys .text:0x123c8, 0x3e907 bytes
    // win32k.sys .text:0x11014, 0x388c7 bytes
    //
    _c31(sdk::unknown_ptr) token_manager_get_analog_exclusive_surface_updates;
    
    // [NtTokenManagerGetAnalogExclusiveTokenEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf8060, 0x1eb80 bytes
    // win32k.sys .text:0x11028, 0x388c7 bytes
    // win32k.sys .text:0x123dc, 0x3e907 bytes
    // win32k.sys .text:0x11028, 0x388c7 bytes
    //
    _c32(sdk::unknown_ptr) token_manager_get_analog_exclusive_token_event;
    
    // [NtTokenManagerOpenSectionAndEvents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x80db0, 0x1eb80 bytes
    // win32k.sys .text:0x1103c, 0x388c7 bytes
    // win32k.sys .text:0x123f0, 0x3e907 bytes
    // win32k.sys .text:0x1103c, 0x388c7 bytes
    //
    _c33(sdk::unknown_ptr) token_manager_open_section_and_events;
    
    // [NtTokenManagerThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2f830, 0x1eb80 bytes
    // win32k.sys .text:0x11050, 0x388c7 bytes
    // win32k.sys .text:0x12404, 0x3e907 bytes
    // win32k.sys .text:0x11050, 0x388c7 bytes
    //
    _c34(sdk::unknown_ptr) token_manager_thread;
    
    // [NtUnBindCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79af0, 0x1eb80 bytes
    // win32k.sys .text:0x10f9c, 0x388c7 bytes
    // win32k.sys .text:0x12350, 0x3e907 bytes
    // win32k.sys .text:0x10f9c, 0x388c7 bytes
    //
    _c35(sdk::unknown_ptr) un_bind_composition_surface;
    
    // [NtUpdateInputSinkTransforms]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2fc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1a50, 0x243e0 bytes
    // win32kbase.sys .text:0xafac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a50, 0x243e0 bytes
    //
    _c36(sdk::unknown_ptr) update_input_sink_transforms;
    
    // [NtUserAcquireIAMKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1256d0, 0x13864 bytes
    // win32kfull.sys .text:0x126070, 0x1596d bytes
    // win32kfull.sys .text:0x115ee0, 0x1659e bytes
    // win32kfull.sys .text:0x126fb0, 0x1596d bytes
    //
    _c37(sdk::unknown_ptr) user_acquire_iam_key;
    
    // [NtUserAcquireInteractiveControlBackgroundAccess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1165b0, 0x13864 bytes
    // win32kfull.sys .text:0xb9c40, 0x1596d bytes
    // win32kfull.sys .text:0x8ccd0, 0x1659e bytes
    // win32kfull.sys .text:0xba7b0, 0x1596d bytes
    //
    _c38(sdk::unknown_ptr) user_acquire_interactive_control_background_access;
    
    // [NtUserActivateKeyboardLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212d00, 0x13864 bytes
    // win32kbase.sys .text:0x85c30, 0x243e0 bytes
    // win32kbase.sys .text:0xc5a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x87a30, 0x243e0 bytes
    //
    _c39(sdk::unknown_ptr) user_activate_keyboard_layout;
    
    // [NtUserAddClipboardFormatListener]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd70, 0x13864 bytes
    // win32kfull.sys .text:0x1252c0, 0x1596d bytes
    // win32kfull.sys .text:0xcd620, 0x1659e bytes
    // win32kfull.sys .text:0x126200, 0x1596d bytes
    //
    _c40(sdk::unknown_ptr) user_add_clipboard_format_listener;
    
    // [NtUserAlterWindowStyle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212da0, 0x13864 bytes
    // win32kfull.sys .text:0x122a10, 0x1596d bytes
    // win32kfull.sys .text:0x115d90, 0x1659e bytes
    // win32kfull.sys .text:0x123950, 0x1596d bytes
    //
    _c41(sdk::unknown_ptr) user_alter_window_style;
    
    // [NtUserAssociateInputContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x115360, 0x13864 bytes
    // win32kfull.sys .text:0x10bb30, 0x1596d bytes
    // win32kfull.sys .text:0x102430, 0x1659e bytes
    // win32kfull.sys .text:0x10ca60, 0x1596d bytes
    //
    _c42(sdk::unknown_ptr) user_associate_input_context;
    
    // [NtUserAttachThreadInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x227e0, 0x13864 bytes
    // win32kfull.sys .text:0x2eea0, 0x1596d bytes
    // win32kfull.sys .text:0xc1f80, 0x1659e bytes
    // win32kfull.sys .text:0x2f2b0, 0x1596d bytes
    //
    _c43(sdk::unknown_ptr) user_attach_thread_input;
    
    // [NtUserAutoPromoteMouseInPointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212e30, 0x13864 bytes
    // win32kfull.sys .text:0x1f77d0, 0x1596d bytes
    // win32kfull.sys .text:0x1f3fa0, 0x1659e bytes
    // win32kfull.sys .text:0x1f7640, 0x1596d bytes
    //
    _c44(sdk::unknown_ptr) user_auto_promote_mouse_in_pointer;
    
    // [NtUserAutoRotateScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212ec0, 0x13864 bytes
    // win32kfull.sys .text:0x1f7850, 0x1596d bytes
    // win32kfull.sys .text:0x1f4020, 0x1659e bytes
    // win32kfull.sys .text:0x1f76c0, 0x1596d bytes
    //
    _c45(sdk::unknown_ptr) user_auto_rotate_screen;
    
    // [NtUserBeginPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5dd40, 0x13864 bytes
    // win32kfull.sys .text:0xf7120, 0x1596d bytes
    // win32kfull.sys .text:0x3fb30, 0x1659e bytes
    // win32kfull.sys .text:0xf7fb0, 0x1596d bytes
    //
    _c46(sdk::unknown_ptr) user_begin_paint;
    
    // [NtUserBitBltSysBmp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13b6f0, 0x13864 bytes
    // win32kfull.sys .text:0xfc650, 0x1596d bytes
    // win32kfull.sys .text:0x13e6e0, 0x1659e bytes
    // win32kfull.sys .text:0xfd580, 0x1596d bytes
    //
    _c47(sdk::unknown_ptr) user_bit_blt_sys_bmp;
    
    // [NtUserBlockInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212f40, 0x13864 bytes
    // win32kfull.sys .text:0x1f78f0, 0x1596d bytes
    // win32kfull.sys .text:0x1f40c0, 0x1659e bytes
    // win32kfull.sys .text:0x1f7760, 0x1596d bytes
    //
    _c48(sdk::unknown_ptr) user_block_input;
    
    // [NtUserBroadcastThemeChangeEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11c340, 0x13864 bytes
    // win32kfull.sys .text:0x11ea90, 0x1596d bytes
    // win32kfull.sys .text:0x10e4a0, 0x1659e bytes
    // win32kfull.sys .text:0x11f990, 0x1596d bytes
    //
    _c49(sdk::unknown_ptr) user_broadcast_theme_change_event;
    
    // [NtUserBuildHimcList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x115860, 0x13864 bytes
    // win32kfull.sys .text:0x119290, 0x1596d bytes
    // win32kfull.sys .text:0x108780, 0x1659e bytes
    // win32kfull.sys .text:0x11a1c0, 0x1596d bytes
    //
    _c50(sdk::unknown_ptr) user_build_himc_list;
    
    // [NtUserBuildHwndList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x99590, 0x13864 bytes
    // win32kfull.sys .text:0x7f970, 0x1596d bytes
    // win32kfull.sys .text:0x46a20, 0x1659e bytes
    // win32kfull.sys .text:0x804e0, 0x1596d bytes
    //
    _c51(sdk::unknown_ptr) user_build_hwnd_list;
    
    // [NtUserBuildNameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x105f30, 0x13864 bytes
    // win32kfull.sys .text:0x108e10, 0x1596d bytes
    // win32kfull.sys .text:0x100d40, 0x1659e bytes
    // win32kfull.sys .text:0x109d40, 0x1596d bytes
    //
    _c52(sdk::unknown_ptr) user_build_name_list;
    
    // [NtUserBuildPropList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1026f0, 0x13864 bytes
    // win32kfull.sys .text:0x105b70, 0x1596d bytes
    // win32kfull.sys .text:0x830c0, 0x1659e bytes
    // win32kfull.sys .text:0x106aa0, 0x1596d bytes
    //
    _c53(sdk::unknown_ptr) user_build_prop_list;
    
    // [NtUserCalcMenuBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28bc0, 0x13864 bytes
    // win32kfull.sys .text:0x20810, 0x1596d bytes
    // win32kfull.sys .text:0x98590, 0x1659e bytes
    // win32kfull.sys .text:0x20c20, 0x1596d bytes
    //
    _c54(sdk::unknown_ptr) user_calc_menu_bar;
    
    // [NtUserCalculatePopupWindowPosition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12c780, 0x13864 bytes
    // win32kfull.sys .text:0x1f7950, 0x1596d bytes
    // win32kfull.sys .text:0x1f4200, 0x1659e bytes
    // win32kfull.sys .text:0x1f77c0, 0x1596d bytes
    //
    _c55(sdk::unknown_ptr) user_calculate_popup_window_position;
    
    // [NtUserCallMsgFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1009d0, 0x13864 bytes
    // win32kfull.sys .text:0x150390, 0x1596d bytes
    // win32kfull.sys .text:0x132360, 0x1659e bytes
    // win32kfull.sys .text:0x1512d0, 0x1596d bytes
    //
    _c56(sdk::unknown_ptr) user_call_msg_filter;
    
    // [NtUserCallNextHookEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4ceb0, 0x13864 bytes
    // win32kfull.sys .text:0x1407c0, 0x1596d bytes
    // win32kfull.sys .text:0x133e50, 0x1659e bytes
    // win32kfull.sys .text:0x141700, 0x1596d bytes
    //
    _c57(sdk::unknown_ptr) user_call_next_hook_ex;
    
    // [NtUserCanBrokerForceForeground]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8cb0, 0x13864 bytes
    // win32kfull.sys .text:0x65c0, 0x1596d bytes
    // win32kfull.sys .text:0x5520, 0x1659e bytes
    // win32kfull.sys .text:0x6970, 0x1596d bytes
    //
    _c58(sdk::unknown_ptr) user_can_broker_force_foreground;
    
    // [NtUserChangeClipboardChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1419c0, 0x13864 bytes
    // win32kfull.sys .text:0x14d560, 0x1596d bytes
    // win32kfull.sys .text:0x1419f0, 0x1659e bytes
    // win32kfull.sys .text:0x14e4a0, 0x1596d bytes
    //
    _c59(sdk::unknown_ptr) user_change_clipboard_chain;
    
    // [NtUserChangeDisplaySettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149130, 0x13864 bytes
    // win32kbase.sys .text:0x92ae0, 0x243e0 bytes
    // win32kbase.sys .text:0x60d90, 0x27ef0 bytes
    // win32kbase.sys .text:0x49870, 0x243e0 bytes
    //
    _c60(sdk::unknown_ptr) user_change_display_settings;
    
    // [NtUserChangeWindowMessageFilterEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x46470, 0x13864 bytes
    // win32kfull.sys .text:0x341d0, 0x1596d bytes
    // win32kfull.sys .text:0x889b0, 0x1659e bytes
    // win32kfull.sys .text:0x345e0, 0x1596d bytes
    //
    _c61(sdk::unknown_ptr) user_change_window_message_filter_ex;
    
    // [NtUserCheckAccessForIntegrityLevel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212f80, 0x13864 bytes
    // win32kfull.sys .text:0x1f7bc0, 0x1596d bytes
    // win32kfull.sys .text:0x1f44d0, 0x1659e bytes
    // win32kfull.sys .text:0x1f7a30, 0x1596d bytes
    //
    _c62(sdk::unknown_ptr) user_check_access_for_integrity_level;
    
    // [NtUserCheckMenuItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141c90, 0x13864 bytes
    // win32kfull.sys .text:0x14a260, 0x1596d bytes
    // win32kfull.sys .text:0x13e870, 0x1659e bytes
    // win32kfull.sys .text:0x14b1a0, 0x1596d bytes
    //
    _c63(sdk::unknown_ptr) user_check_menu_item;
    
    // [NtUserCheckProcessForClipboardAccess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213100, 0x13864 bytes
    // win32kfull.sys .text:0x8300, 0x1596d bytes
    // win32kfull.sys .text:0x3fe0, 0x1659e bytes
    // win32kfull.sys .text:0x86b0, 0x1596d bytes
    //
    _c64(sdk::unknown_ptr) user_check_process_for_clipboard_access;
    
    // [NtUserCheckProcessSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d100, 0x1eb80 bytes
    // win32kbase.sys .text:0x29800, 0x243e0 bytes
    // win32kbase.sys .text:0xbece0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7c360, 0x243e0 bytes
    //
    _c65(sdk::unknown_ptr) user_check_process_session;
    
    // [NtUserCheckWindowThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2131e0, 0x13864 bytes
    // win32kfull.sys .text:0x1f7d50, 0x1596d bytes
    // win32kfull.sys .text:0x1f4660, 0x1659e bytes
    // win32kfull.sys .text:0x1f7bc0, 0x1596d bytes
    //
    _c66(sdk::unknown_ptr) user_check_window_thread_desktop;
    
    // [NtUserChildWindowFromPointEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13b550, 0x13864 bytes
    // win32kfull.sys .text:0x14da00, 0x1596d bytes
    // win32kfull.sys .text:0x1f4730, 0x1659e bytes
    // win32kfull.sys .text:0x14e940, 0x1596d bytes
    //
    _c67(sdk::unknown_ptr) user_child_window_from_point_ex;
    
    // [NtUserClearForeground]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213280, 0x13864 bytes
    // win32kfull.sys .text:0x1f7e20, 0x1596d bytes
    // win32kfull.sys .text:0x1f47b0, 0x1659e bytes
    // win32kfull.sys .text:0x1f7c90, 0x1596d bytes
    //
    _c68(sdk::unknown_ptr) user_clear_foreground;
    
    // [NtUserClipCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213300, 0x13864 bytes
    // win32kbase.sys .text:0xcc230, 0x243e0 bytes
    // win32kbase.sys .text:0xde7f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcabd0, 0x243e0 bytes
    //
    _c69(sdk::unknown_ptr) user_clip_cursor;
    
    // [NtUserCloseClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xec300, 0x13864 bytes
    // win32kfull.sys .text:0xd74c0, 0x1596d bytes
    // win32kfull.sys .text:0xd05b0, 0x1659e bytes
    // win32kfull.sys .text:0xd8180, 0x1596d bytes
    //
    _c70(sdk::unknown_ptr) user_close_clipboard;
    
    // [NtUserCloseDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1bb30, 0x13864 bytes
    // win32kbase.sys .text:0xb61f0, 0x243e0 bytes
    // win32kbase.sys .text:0xc7d10, 0x27ef0 bytes
    // win32kbase.sys .text:0xafb30, 0x243e0 bytes
    //
    _c71(sdk::unknown_ptr) user_close_desktop;
    
    // [NtUserCloseWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x145c0, 0x13864 bytes
    // win32kbase.sys .text:0xb47c0, 0x243e0 bytes
    // win32kbase.sys .text:0xc8770, 0x27ef0 bytes
    // win32kbase.sys .text:0xade20, 0x243e0 bytes
    //
    _c72(sdk::unknown_ptr) user_close_window_station;
    
    // [NtUserCompositionInputSinkLuidFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2133e0, 0x13864 bytes
    // win32kfull.sys .text:0x1f7ec0, 0x1596d bytes
    // win32kfull.sys .text:0x1f4890, 0x1659e bytes
    // win32kfull.sys .text:0x1f7d30, 0x1596d bytes
    //
    _c73(sdk::unknown_ptr) user_composition_input_sink_luid_from_point;
    
    // [NtUserConsoleControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x54da0, 0x13864 bytes
    // win32kfull.sys .text:0x514e0, 0x1596d bytes
    // win32kfull.sys .text:0xa1a50, 0x1659e bytes
    // win32kfull.sys .text:0x51900, 0x1596d bytes
    //
    _c74(sdk::unknown_ptr) user_console_control;
    
    // [NtUserConvertMemHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2135c0, 0x13864 bytes
    // win32kfull.sys .text:0xdaad0, 0x1596d bytes
    // win32kfull.sys .text:0x139a60, 0x1659e bytes
    // win32kfull.sys .text:0xdb790, 0x1596d bytes
    //
    _c75(sdk::unknown_ptr) user_convert_mem_handle;
    
    // [NtUserCopyAcceleratorTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf69c0, 0x13864 bytes
    // win32kfull.sys .text:0xff030, 0x1596d bytes
    // win32kfull.sys .text:0xf4f30, 0x1659e bytes
    // win32kfull.sys .text:0xfff60, 0x1596d bytes
    //
    _c76(sdk::unknown_ptr) user_copy_accelerator_table;
    
    // [NtUserCountClipboardFormats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13a450, 0x13864 bytes
    // win32kfull.sys .text:0xd7820, 0x1596d bytes
    // win32kfull.sys .text:0xcdc80, 0x1659e bytes
    // win32kfull.sys .text:0xd84e0, 0x1596d bytes
    //
    _c77(sdk::unknown_ptr) user_count_clipboard_formats;
    
    // [NtUserCreateAcceleratorTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114720, 0x13864 bytes
    // win32kfull.sys .text:0x10e9e0, 0x1596d bytes
    // win32kfull.sys .text:0x102c90, 0x1659e bytes
    // win32kfull.sys .text:0x10f910, 0x1596d bytes
    //
    _c78(sdk::unknown_ptr) user_create_accelerator_table;
    
    // [NtUserCreateCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x36fe0, 0x13864 bytes
    // win32kfull.sys .text:0x105ed0, 0x1596d bytes
    // win32kfull.sys .text:0x66a0, 0x1659e bytes
    // win32kfull.sys .text:0x106e00, 0x1596d bytes
    //
    _c79(sdk::unknown_ptr) user_create_caret;
    
    // [NtUserCreateDCompositionHwndTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd2f0, 0x13864 bytes
    // win32kfull.sys .text:0xbc760, 0x1596d bytes
    // win32kfull.sys .text:0x89e40, 0x1659e bytes
    // win32kfull.sys .text:0xbd2d0, 0x1596d bytes
    //
    _c80(sdk::unknown_ptr) user_create_d_composition_hwnd_target;
    
    // [NtUserCreateDesktopEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12e80, 0x13864 bytes
    // win32kbase.sys .text:0xbd810, 0x243e0 bytes
    // win32kbase.sys .text:0xcfe80, 0x27ef0 bytes
    // win32kbase.sys .text:0xb7620, 0x243e0 bytes
    //
    _c81(sdk::unknown_ptr) user_create_desktop_ex;
    
    // [NtUserCreateInputContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213640, 0x13864 bytes
    // win32kfull.sys .text:0x14f920, 0x1596d bytes
    // win32kfull.sys .text:0x1432e0, 0x1659e bytes
    // win32kfull.sys .text:0x150860, 0x1596d bytes
    //
    _c82(sdk::unknown_ptr) user_create_input_context;
    
    // [NtUserCreateLocalMemHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x142080, 0x13864 bytes
    // win32kfull.sys .text:0x11b2b0, 0x1596d bytes
    // win32kfull.sys .text:0x140020, 0x1659e bytes
    // win32kfull.sys .text:0x11c1e0, 0x1596d bytes
    //
    _c83(sdk::unknown_ptr) user_create_local_mem_handle;
    
    // [NtUserCreateWindowEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x560a0, 0x13864 bytes
    // win32kfull.sys .text:0xa4b30, 0x1596d bytes
    // win32kfull.sys .text:0x4c170, 0x1659e bytes
    // win32kfull.sys .text:0xa56a0, 0x1596d bytes
    //
    _c84(sdk::unknown_ptr) user_create_window_ex;
    
    // [NtUserCreateWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10460, 0x13864 bytes
    // win32kbase.sys .text:0xab7d0, 0x243e0 bytes
    // win32kbase.sys .text:0xb6e20, 0x27ef0 bytes
    // win32kbase.sys .text:0xa14a0, 0x243e0 bytes
    //
    _c85(sdk::unknown_ptr) user_create_window_station;
    
    // [NtUserCtxDisplayIOCtl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2136b0, 0x13864 bytes
    // win32kfull.sys .text:0x1f8480, 0x1596d bytes
    // win32kfull.sys .text:0x1f4d00, 0x1659e bytes
    // win32kfull.sys .text:0x1f82f0, 0x1596d bytes
    //
    _c86(sdk::unknown_ptr) user_ctx_display_io_ctl;
    
    // [NtUserDdeInitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11cfb0, 0x13864 bytes
    // win32kfull.sys .text:0x11b4e0, 0x1596d bytes
    // win32kfull.sys .text:0x106d90, 0x1659e bytes
    // win32kfull.sys .text:0x11c410, 0x1596d bytes
    //
    _c87(sdk::unknown_ptr) user_dde_initialize;
    
    // [NtUserDefSetText]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x111fc0, 0x13864 bytes
    // win32kfull.sys .text:0x144cc0, 0x1596d bytes
    // win32kfull.sys .text:0x13bec0, 0x1659e bytes
    // win32kfull.sys .text:0x145c00, 0x1596d bytes
    //
    _c88(sdk::unknown_ptr) user_def_set_text;
    
    // [NtUserDeferWindowPosAndBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5a5d0, 0x13864 bytes
    // win32kfull.sys .text:0x78920, 0x1596d bytes
    // win32kfull.sys .text:0x50180, 0x1659e bytes
    // win32kfull.sys .text:0x79490, 0x1596d bytes
    //
    _c89(sdk::unknown_ptr) user_defer_window_pos_and_band;
    
    // [NtUserDelegateCapturePointers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2137d0, 0x13864 bytes
    // win32kfull.sys .text:0x1f85d0, 0x1596d bytes
    // win32kfull.sys .text:0x15bdd0, 0x1659e bytes
    // win32kfull.sys .text:0x1f8440, 0x1596d bytes
    //
    _c90(sdk::unknown_ptr) user_delegate_capture_pointers;
    
    // [NtUserDelegateInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1151e0, 0x13864 bytes
    // win32kfull.sys .text:0x110570, 0x1596d bytes
    // win32kfull.sys .text:0x107910, 0x1659e bytes
    // win32kfull.sys .text:0x1114a0, 0x1596d bytes
    //
    _c91(sdk::unknown_ptr) user_delegate_input;
    
    // [NtUserDeleteMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118480, 0x13864 bytes
    // win32kfull.sys .text:0xfe730, 0x1596d bytes
    // win32kfull.sys .text:0xf4db0, 0x1659e bytes
    // win32kfull.sys .text:0xff660, 0x1596d bytes
    //
    _c92(sdk::unknown_ptr) user_delete_menu;
    
    // [NtUserDestroyAcceleratorTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11c2e0, 0x13864 bytes
    // win32kfull.sys .text:0x119cf0, 0x1596d bytes
    // win32kfull.sys .text:0x109df0, 0x1659e bytes
    // win32kfull.sys .text:0x11ac20, 0x1596d bytes
    //
    _c93(sdk::unknown_ptr) user_destroy_accelerator_table;
    
    // [NtUserDestroyCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2f930, 0x13864 bytes
    // win32kfull.sys .text:0x77fe0, 0x1596d bytes
    // win32kfull.sys .text:0xaa3b0, 0x1659e bytes
    // win32kfull.sys .text:0x78b50, 0x1596d bytes
    //
    _c94(sdk::unknown_ptr) user_destroy_cursor;
    
    // [NtUserDestroyDCompositionHwndTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xce10, 0x13864 bytes
    // win32kfull.sys .text:0xbc100, 0x1596d bytes
    // win32kfull.sys .text:0x89c20, 0x1659e bytes
    // win32kfull.sys .text:0xbcc70, 0x1596d bytes
    //
    _c95(sdk::unknown_ptr) user_destroy_d_composition_hwnd_target;
    
    // [NtUserDestroyInputContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2139d0, 0x13864 bytes
    // win32kfull.sys .text:0x147060, 0x1596d bytes
    // win32kfull.sys .text:0x13c060, 0x1659e bytes
    // win32kfull.sys .text:0x147fa0, 0x1596d bytes
    //
    _c96(sdk::unknown_ptr) user_destroy_input_context;
    
    // [NtUserDestroyMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117160, 0x13864 bytes
    // win32kfull.sys .text:0x10ec80, 0x1596d bytes
    // win32kfull.sys .text:0x1033d0, 0x1659e bytes
    // win32kfull.sys .text:0x10fbb0, 0x1596d bytes
    //
    _c97(sdk::unknown_ptr) user_destroy_menu;
    
    // [NtUserDestroyWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1067c0, 0x13864 bytes
    // win32kfull.sys .text:0x100980, 0x1596d bytes
    // win32kfull.sys .text:0xfcb70, 0x1659e bytes
    // win32kfull.sys .text:0x1018b0, 0x1596d bytes
    //
    _c98(sdk::unknown_ptr) user_destroy_window;
    
    // [NtUserDisableImmersiveOwner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213a50, 0x13864 bytes
    // win32kfull.sys .text:0x1f86d0, 0x1596d bytes
    // win32kfull.sys .text:0x1f4f90, 0x1659e bytes
    // win32kfull.sys .text:0x1f8540, 0x1596d bytes
    //
    _c99(sdk::unknown_ptr) user_disable_immersive_owner;
    
    // [NtUserDisableProcessWindowFiltering]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x115c90, 0x13864 bytes
    // win32kfull.sys .text:0x116190, 0x1596d bytes
    // win32kfull.sys .text:0x109b40, 0x1659e bytes
    // win32kfull.sys .text:0x1170c0, 0x1596d bytes
    //
    _d00(sdk::unknown_ptr) user_disable_process_window_filtering;
    
    // [NtUserDisableThreadIme]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11aae0, 0x13864 bytes
    // win32kfull.sys .text:0x1199e0, 0x1596d bytes
    // win32kfull.sys .text:0x109a60, 0x1659e bytes
    // win32kfull.sys .text:0x11a910, 0x1596d bytes
    //
    _d01(sdk::unknown_ptr) user_disable_thread_ime;
    
    // [NtUserDiscardPointerFrameMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213b40, 0x13864 bytes
    // win32kfull.sys .text:0x1f8800, 0x1596d bytes
    // win32kfull.sys .text:0x1f50d0, 0x1659e bytes
    // win32kfull.sys .text:0x1f8670, 0x1596d bytes
    //
    _d02(sdk::unknown_ptr) user_discard_pointer_frame_messages;
    
    // [NtUserDispatchMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x96b50, 0x13864 bytes
    // win32kfull.sys .text:0xa2250, 0x1596d bytes
    // win32kfull.sys .text:0x52fd0, 0x1659e bytes
    // win32kfull.sys .text:0xa2dc0, 0x1596d bytes
    //
    _d03(sdk::unknown_ptr) user_dispatch_message;
    
    // [NtUserDisplayConfigGetDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149140, 0x13864 bytes
    // win32kbase.sys .text:0x3ef90, 0x243e0 bytes
    // win32kbase.sys .text:0x561f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x474e0, 0x243e0 bytes
    //
    _d04(sdk::unknown_ptr) user_display_config_get_device_info;
    
    // [NtUserDisplayConfigSetDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149150, 0x13864 bytes
    // win32kbase.sys .text:0x140280, 0x243e0 bytes
    // win32kbase.sys .text:0x171490, 0x27ef0 bytes
    // win32kbase.sys .text:0x13d8a0, 0x243e0 bytes
    //
    _d05(sdk::unknown_ptr) user_display_config_set_device_info;
    
    // [NtUserDoSoundConnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121f90, 0x13864 bytes
    // win32kfull.sys .text:0x126da0, 0x1596d bytes
    // win32kfull.sys .text:0x1168f0, 0x1659e bytes
    // win32kfull.sys .text:0x127ce0, 0x1596d bytes
    //
    _d06(sdk::unknown_ptr) user_do_sound_connect;
    
    // [NtUserDoSoundDisconnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1267e0, 0x13864 bytes
    // win32kfull.sys .text:0x128f40, 0x1596d bytes
    // win32kfull.sys .text:0x1187d0, 0x1659e bytes
    // win32kfull.sys .text:0x129e80, 0x1596d bytes
    //
    _d07(sdk::unknown_ptr) user_do_sound_disconnect;
    
    // [NtUserDragDetect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213bd0, 0x13864 bytes
    // win32kfull.sys .text:0x1f88a0, 0x1596d bytes
    // win32kfull.sys .text:0x1f5190, 0x1659e bytes
    // win32kfull.sys .text:0x1f8710, 0x1596d bytes
    //
    _d08(sdk::unknown_ptr) user_drag_detect;
    
    // [NtUserDragObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213c50, 0x13864 bytes
    // win32kfull.sys .text:0x1f8970, 0x1596d bytes
    // win32kfull.sys .text:0x1f5260, 0x1659e bytes
    // win32kfull.sys .text:0x1f87e0, 0x1596d bytes
    //
    _d09(sdk::unknown_ptr) user_drag_object;
    
    // [NtUserDrawAnimatedRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213da0, 0x13864 bytes
    // win32kfull.sys .text:0x1f8b40, 0x1596d bytes
    // win32kfull.sys .text:0x1f5420, 0x1659e bytes
    // win32kfull.sys .text:0x1f89b0, 0x1596d bytes
    //
    _d10(sdk::unknown_ptr) user_draw_animated_rects;
    
    // [NtUserDrawCaption]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213ed0, 0x13864 bytes
    // win32kfull.sys .text:0x1f8cc0, 0x1596d bytes
    // win32kfull.sys .text:0x1f5560, 0x1659e bytes
    // win32kfull.sys .text:0x1f8b30, 0x1596d bytes
    //
    _d11(sdk::unknown_ptr) user_draw_caption;
    
    // [NtUserDrawCaptionTemp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213ff0, 0x13864 bytes
    // win32kfull.sys .text:0x1f8e30, 0x1596d bytes
    // win32kfull.sys .text:0x1f56d0, 0x1659e bytes
    // win32kfull.sys .text:0x1f8ca0, 0x1596d bytes
    //
    _d12(sdk::unknown_ptr) user_draw_caption_temp;
    
    // [NtUserDrawIconEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a1a0, 0x13864 bytes
    // win32kfull.sys .text:0x494e0, 0x1596d bytes
    // win32kfull.sys .text:0xb1570, 0x1659e bytes
    // win32kfull.sys .text:0x498f0, 0x1596d bytes
    //
    _d13(sdk::unknown_ptr) user_draw_icon_ex;
    
    // [NtUserDrawMenuBarTemp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214280, 0x13864 bytes
    // win32kfull.sys .text:0x1f9150, 0x1596d bytes
    // win32kfull.sys .text:0x1f59f0, 0x1659e bytes
    // win32kfull.sys .text:0x1f8fc0, 0x1596d bytes
    //
    _d14(sdk::unknown_ptr) user_draw_menu_bar_temp;
    
    // [NtUserDwmGetRemoteSessionOcclusionEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124c50, 0x13864 bytes
    // win32kfull.sys .text:0x1523f0, 0x1596d bytes
    // win32kfull.sys .text:0x1468b0, 0x1659e bytes
    // win32kfull.sys .text:0x153330, 0x1596d bytes
    //
    _d15(sdk::unknown_ptr) user_dwm_get_remote_session_occlusion_event;
    
    // [NtUserDwmGetRemoteSessionOcclusionState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x144970, 0x13864 bytes
    // win32kfull.sys .text:0x1524e0, 0x1596d bytes
    // win32kfull.sys .text:0x146930, 0x1659e bytes
    // win32kfull.sys .text:0x153420, 0x1596d bytes
    //
    _d16(sdk::unknown_ptr) user_dwm_get_remote_session_occlusion_state;
    
    // [NtUserDwmKernelShutdown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2142f0, 0x13864 bytes
    // win32kfull.sys .text:0x1f9170, 0x1596d bytes
    // win32kfull.sys .text:0x1f5a10, 0x1659e bytes
    // win32kfull.sys .text:0x1f8fe0, 0x1596d bytes
    //
    _d17(sdk::unknown_ptr) user_dwm_kernel_shutdown;
    
    // [NtUserDwmKernelStartup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc4f0, 0x13864 bytes
    // win32kfull.sys .text:0xbb9f0, 0x1596d bytes
    // win32kfull.sys .text:0x8cc30, 0x1659e bytes
    // win32kfull.sys .text:0xbc560, 0x1596d bytes
    //
    _d18(sdk::unknown_ptr) user_dwm_kernel_startup;
    
    // [NtUserDwmValidateWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x46e90, 0x13864 bytes
    // win32kfull.sys .text:0x52010, 0x1596d bytes
    // win32kfull.sys .text:0xa1970, 0x1659e bytes
    // win32kfull.sys .text:0x52430, 0x1596d bytes
    //
    _d19(sdk::unknown_ptr) user_dwm_validate_window;
    
    // [NtUserEmptyClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214380, 0x13864 bytes
    // win32kfull.sys .text:0xda200, 0x1596d bytes
    // win32kfull.sys .text:0x1437a0, 0x1659e bytes
    // win32kfull.sys .text:0xdaec0, 0x1596d bytes
    //
    _d20(sdk::unknown_ptr) user_empty_clipboard;
    
    // [NtUserEnableChildWindowDpiMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3a770, 0x13864 bytes
    // win32kfull.sys .text:0xf49a0, 0x1596d bytes
    // win32kfull.sys .text:0x106960, 0x1659e bytes
    // win32kfull.sys .text:0xf5830, 0x1596d bytes
    //
    _d21(sdk::unknown_ptr) user_enable_child_window_dpi_message;
    
    // [NtUserEnableIAMAccess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x43ab0, 0x13864 bytes
    // win32kfull.sys .text:0x101660, 0x1596d bytes
    // win32kfull.sys .text:0xae660, 0x1659e bytes
    // win32kfull.sys .text:0x102590, 0x1596d bytes
    //
    _d22(sdk::unknown_ptr) user_enable_iam_access;
    
    // [NtUserEnableMenuItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140cd0, 0x13864 bytes
    // win32kfull.sys .text:0x11d360, 0x1596d bytes
    // win32kfull.sys .text:0x140340, 0x1659e bytes
    // win32kfull.sys .text:0x11e260, 0x1596d bytes
    //
    _d23(sdk::unknown_ptr) user_enable_menu_item;
    
    // [NtUserEnableMouseInPointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1028a0, 0x13864 bytes
    // win32kbase.sys .text:0xb9d40, 0x243e0 bytes
    // win32kbase.sys .text:0xcedd0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3620, 0x243e0 bytes
    //
    _d24(sdk::unknown_ptr) user_enable_mouse_in_pointer;
    
    // [NtUserEnableMouseInputForCursorSuppression]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11db40, 0x13864 bytes
    // win32kfull.sys .text:0x2c4b0, 0x1596d bytes
    // win32kfull.sys .text:0x8ff60, 0x1659e bytes
    // win32kfull.sys .text:0x2c8c0, 0x1596d bytes
    //
    _d25(sdk::unknown_ptr) user_enable_mouse_input_for_cursor_suppression;
    
    // [NtUserEnableNonClientDpiScaling]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2143b0, 0x13864 bytes
    // win32kfull.sys .text:0x1f9220, 0x1596d bytes
    // win32kfull.sys .text:0x4860, 0x1659e bytes
    // win32kfull.sys .text:0x1f9090, 0x1596d bytes
    //
    _d26(sdk::unknown_ptr) user_enable_non_client_dpi_scaling;
    
    // [NtUserEnableScrollBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf6130, 0x13864 bytes
    // win32kfull.sys .text:0xe6cb0, 0x1596d bytes
    // win32kfull.sys .text:0x6340, 0x1659e bytes
    // win32kfull.sys .text:0xe79f0, 0x1596d bytes
    //
    _d27(sdk::unknown_ptr) user_enable_scroll_bar;
    
    // [NtUserEnableTouchPad]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214430, 0x13864 bytes
    // win32kbase.sys .text:0x140690, 0x243e0 bytes
    // win32kbase.sys .text:0x171bb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13dcb0, 0x243e0 bytes
    //
    _d28(sdk::unknown_ptr) user_enable_touch_pad;
    
    // [NtUserEndDeferWindowPosEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10f970, 0x13864 bytes
    // win32kfull.sys .text:0x77ab0, 0x1596d bytes
    // win32kfull.sys .text:0xfa400, 0x1659e bytes
    // win32kfull.sys .text:0x78620, 0x1596d bytes
    //
    _d29(sdk::unknown_ptr) user_end_defer_window_pos_ex;
    
    // [NtUserEndMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x126e40, 0x13864 bytes
    // win32kfull.sys .text:0x126400, 0x1596d bytes
    // win32kfull.sys .text:0x116440, 0x1659e bytes
    // win32kfull.sys .text:0x127340, 0x1596d bytes
    //
    _d30(sdk::unknown_ptr) user_end_menu;
    
    // [NtUserEndPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x38480, 0x13864 bytes
    // win32kfull.sys .text:0xdb960, 0x1596d bytes
    // win32kfull.sys .text:0x7ae0, 0x1659e bytes
    // win32kfull.sys .text:0xdc620, 0x1596d bytes
    //
    _d31(sdk::unknown_ptr) user_end_paint;
    
    // [NtUserEnumDisplayDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149160, 0x13864 bytes
    // win32kbase.sys .text:0x414e0, 0x243e0 bytes
    // win32kbase.sys .text:0x59960, 0x27ef0 bytes
    // win32kbase.sys .text:0x3a880, 0x243e0 bytes
    //
    _d32(sdk::unknown_ptr) user_enum_display_devices;
    
    // [NtUserEnumDisplayMonitors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149170, 0x13864 bytes
    // win32kbase.sys .text:0x209a0, 0x243e0 bytes
    // win32kbase.sys .text:0x583a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x596f0, 0x243e0 bytes
    //
    _d33(sdk::unknown_ptr) user_enum_display_monitors;
    
    // [NtUserEnumDisplaySettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149180, 0x13864 bytes
    // win32kbase.sys .text:0x39af0, 0x243e0 bytes
    // win32kbase.sys .text:0x58d60, 0x27ef0 bytes
    // win32kbase.sys .text:0x3f3c0, 0x243e0 bytes
    //
    _d34(sdk::unknown_ptr) user_enum_display_settings;
    
    // [NtUserEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2144d0, 0x13864 bytes
    // win32kfull.sys .text:0x1f9460, 0x1596d bytes
    // win32kfull.sys .text:0x1f5c50, 0x1659e bytes
    // win32kfull.sys .text:0x1f92d0, 0x1596d bytes
    //
    _d35(sdk::unknown_ptr) user_event;
    
    // [NtUserExcludeUpdateRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2145c0, 0x13864 bytes
    // win32kfull.sys .text:0x14ada0, 0x1596d bytes
    // win32kfull.sys .text:0x13f9b0, 0x1659e bytes
    // win32kfull.sys .text:0x14bce0, 0x1596d bytes
    //
    _d36(sdk::unknown_ptr) user_exclude_update_rgn;
    
    // [NtUserFillWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106920, 0x13864 bytes
    // win32kfull.sys .text:0x13fcb0, 0x1596d bytes
    // win32kfull.sys .text:0x143e90, 0x1659e bytes
    // win32kfull.sys .text:0x140bf0, 0x1596d bytes
    //
    _d37(sdk::unknown_ptr) user_fill_window;
    
    // [NtUserFindExistingCursorIcon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x54810, 0x13864 bytes
    // win32kfull.sys .text:0xacde0, 0x1596d bytes
    // win32kfull.sys .text:0xacb60, 0x1659e bytes
    // win32kfull.sys .text:0xad950, 0x1596d bytes
    //
    _d38(sdk::unknown_ptr) user_find_existing_cursor_icon;
    
    // [NtUserFindWindowEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb7530, 0x13864 bytes
    // win32kfull.sys .text:0x7f060, 0x1596d bytes
    // win32kfull.sys .text:0x466f0, 0x1659e bytes
    // win32kfull.sys .text:0x7fbd0, 0x1596d bytes
    //
    _d39(sdk::unknown_ptr) user_find_window_ex;
    
    // [NtUserFlashWindowEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214620, 0x13864 bytes
    // win32kfull.sys .text:0x1f9550, 0x1596d bytes
    // win32kfull.sys .text:0x1f5d40, 0x1659e bytes
    // win32kfull.sys .text:0x1f93c0, 0x1596d bytes
    //
    _d40(sdk::unknown_ptr) user_flash_window_ex;
    
    // [NtUserFrostCrashedWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214750, 0x13864 bytes
    // win32kfull.sys .text:0x1f9800, 0x1596d bytes
    // win32kfull.sys .text:0x1f5ff0, 0x1659e bytes
    // win32kfull.sys .text:0x1f9670, 0x1596d bytes
    //
    _d41(sdk::unknown_ptr) user_frost_crashed_window;
    
    // [NtUserGetAltTabInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2147d0, 0x13864 bytes
    // win32kfull.sys .text:0x1f98a0, 0x1596d bytes
    // win32kfull.sys .text:0x1f6090, 0x1659e bytes
    // win32kfull.sys .text:0x1f9710, 0x1596d bytes
    //
    _d42(sdk::unknown_ptr) user_get_alt_tab_info;
    
    // [NtUserGetAncestor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe80b0, 0x13864 bytes
    // win32kfull.sys .text:0xe2210, 0x1596d bytes
    // win32kfull.sys .text:0xdf430, 0x1659e bytes
    // win32kfull.sys .text:0xe2ed0, 0x1596d bytes
    //
    _d43(sdk::unknown_ptr) user_get_ancestor;
    
    // [NtUserGetAppImeLevel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214ae0, 0x13864 bytes
    // win32kfull.sys .text:0x1f9c30, 0x1596d bytes
    // win32kfull.sys .text:0x1f6400, 0x1659e bytes
    // win32kfull.sys .text:0x1f9aa0, 0x1596d bytes
    //
    _d44(sdk::unknown_ptr) user_get_app_ime_level;
    
    // [NtUserGetAsyncKeyState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x38ac0, 0x13864 bytes
    // win32kbase.sys .text:0x108c0, 0x243e0 bytes
    // win32kbase.sys .text:0x13960, 0x27ef0 bytes
    // win32kbase.sys .text:0x713a0, 0x243e0 bytes
    //
    _d45(sdk::unknown_ptr) user_get_async_key_state;
    
    // [NtUserGetAtomName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x101a00, 0x13864 bytes
    // win32kfull.sys .text:0xf9760, 0x1596d bytes
    // win32kfull.sys .text:0xf6cc0, 0x1659e bytes
    // win32kfull.sys .text:0xfa690, 0x1596d bytes
    //
    _d46(sdk::unknown_ptr) user_get_atom_name;
    
    // [NtUserGetAutoRotationState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc0f0, 0x13864 bytes
    // win32kfull.sys .text:0x89c0, 0x1596d bytes
    // win32kfull.sys .text:0x5160, 0x1659e bytes
    // win32kfull.sys .text:0x8d70, 0x1596d bytes
    //
    _d47(sdk::unknown_ptr) user_get_auto_rotation_state;
    
    // [NtUserGetCaretBlinkTime]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xff860, 0x13864 bytes
    // win32kfull.sys .text:0xd4790, 0x1596d bytes
    // win32kfull.sys .text:0xf1980, 0x1659e bytes
    // win32kfull.sys .text:0xd5450, 0x1596d bytes
    //
    _d48(sdk::unknown_ptr) user_get_caret_blink_time;
    
    // [NtUserGetCaretPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x123570, 0x13864 bytes
    // win32kfull.sys .text:0x11e4d0, 0x1596d bytes
    // win32kfull.sys .text:0x10b3b0, 0x1659e bytes
    // win32kfull.sys .text:0x11f3d0, 0x1596d bytes
    //
    _d49(sdk::unknown_ptr) user_get_caret_pos;
    
    // [NtUserGetCIMSSM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214b80, 0x13864 bytes
    // win32kfull.sys .text:0x1447c0, 0x1596d bytes
    // win32kfull.sys .text:0x143690, 0x1659e bytes
    // win32kfull.sys .text:0x145700, 0x1596d bytes
    //
    _d50(sdk::unknown_ptr) user_get_cimssm;
    
    // [NtUserGetClassInfoEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x50c10, 0x13864 bytes
    // win32kfull.sys .text:0x71320, 0x1596d bytes
    // win32kfull.sys .text:0xa9770, 0x1659e bytes
    // win32kfull.sys .text:0x71e90, 0x1596d bytes
    //
    _d51(sdk::unknown_ptr) user_get_class_info_ex;
    
    // [NtUserGetClassName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe83f0, 0x13864 bytes
    // win32kfull.sys .text:0xe46f0, 0x1596d bytes
    // win32kfull.sys .text:0xe29c0, 0x1659e bytes
    // win32kfull.sys .text:0xe53b0, 0x1596d bytes
    //
    _d52(sdk::unknown_ptr) user_get_class_name;
    
    // [NtUserGetClipCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214ca0, 0x13864 bytes
    // win32kbase.sys .text:0x141110, 0x243e0 bytes
    // win32kbase.sys .text:0x172700, 0x27ef0 bytes
    // win32kbase.sys .text:0x13e730, 0x243e0 bytes
    //
    _d53(sdk::unknown_ptr) user_get_clip_cursor;
    
    // [NtUserGetClipboardAccessToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214da0, 0x13864 bytes
    // win32kfull.sys .text:0x1f9ce0, 0x1596d bytes
    // win32kfull.sys .text:0x1f64b0, 0x1659e bytes
    // win32kfull.sys .text:0x1f9b50, 0x1596d bytes
    //
    _d54(sdk::unknown_ptr) user_get_clipboard_access_token;
    
    // [NtUserGetClipboardData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140080, 0x13864 bytes
    // win32kfull.sys .text:0xd86f0, 0x1596d bytes
    // win32kfull.sys .text:0x13d530, 0x1659e bytes
    // win32kfull.sys .text:0xd93b0, 0x1596d bytes
    //
    _d55(sdk::unknown_ptr) user_get_clipboard_data;
    
    // [NtUserGetClipboardFormatName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1252b0, 0x13864 bytes
    // win32kfull.sys .text:0x1107e0, 0x1596d bytes
    // win32kfull.sys .text:0x1057b0, 0x1659e bytes
    // win32kfull.sys .text:0x111710, 0x1596d bytes
    //
    _d56(sdk::unknown_ptr) user_get_clipboard_format_name;
    
    // [NtUserGetClipboardOwner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc1d0, 0x13864 bytes
    // win32kfull.sys .text:0xd7de0, 0x1596d bytes
    // win32kfull.sys .text:0x141f80, 0x1659e bytes
    // win32kfull.sys .text:0xd8aa0, 0x1596d bytes
    //
    _d57(sdk::unknown_ptr) user_get_clipboard_owner;
    
    // [NtUserGetClipboardSequenceNumber]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xec5f0, 0x13864 bytes
    // win32kfull.sys .text:0xd77d0, 0x1596d bytes
    // win32kfull.sys .text:0xd07d0, 0x1659e bytes
    // win32kfull.sys .text:0xd8490, 0x1596d bytes
    //
    _d58(sdk::unknown_ptr) user_get_clipboard_sequence_number;
    
    // [NtUserGetClipboardViewer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214ec0, 0x13864 bytes
    // win32kfull.sys .text:0x1f9e30, 0x1596d bytes
    // win32kfull.sys .text:0x15be30, 0x1659e bytes
    // win32kfull.sys .text:0x1f9ca0, 0x1596d bytes
    //
    _d59(sdk::unknown_ptr) user_get_clipboard_viewer;
    
    // [NtUserGetComboBoxInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x136890, 0x13864 bytes
    // win32kfull.sys .text:0x142470, 0x1596d bytes
    // win32kfull.sys .text:0x135340, 0x1659e bytes
    // win32kfull.sys .text:0x1433b0, 0x1596d bytes
    //
    _d60(sdk::unknown_ptr) user_get_combo_box_info;
    
    // [NtUserGetControlBrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106c80, 0x13864 bytes
    // win32kfull.sys .text:0x1403f0, 0x1596d bytes
    // win32kfull.sys .text:0x13e4f0, 0x1659e bytes
    // win32kfull.sys .text:0x141330, 0x1596d bytes
    //
    _d61(sdk::unknown_ptr) user_get_control_brush;
    
    // [NtUserGetControlColor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x214f00, 0x13864 bytes
    // win32kfull.sys .text:0x1f9e80, 0x1596d bytes
    // win32kfull.sys .text:0x1f6610, 0x1659e bytes
    // win32kfull.sys .text:0x1f9cf0, 0x1596d bytes
    //
    _d62(sdk::unknown_ptr) user_get_control_color;
    
    // [NtUserGetCPD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11ae00, 0x13864 bytes
    // win32kfull.sys .text:0xa23b0, 0x1596d bytes
    // win32kfull.sys .text:0xe59c0, 0x1659e bytes
    // win32kfull.sys .text:0xa2f20, 0x1596d bytes
    //
    _d63(sdk::unknown_ptr) user_get_cpd;
    
    // [NtUserGetCurrentInputMessageSource]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x110340, 0x13864 bytes
    // win32kfull.sys .text:0xfacb0, 0x1596d bytes
    // win32kfull.sys .text:0xefa80, 0x1659e bytes
    // win32kfull.sys .text:0xfbbe0, 0x1596d bytes
    //
    _d64(sdk::unknown_ptr) user_get_current_input_message_source;
    
    // [NtUserGetCursorFrameInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x142160, 0x13864 bytes
    // win32kfull.sys .text:0x150500, 0x1596d bytes
    // win32kfull.sys .text:0x13d150, 0x1659e bytes
    // win32kfull.sys .text:0x151440, 0x1596d bytes
    //
    _d65(sdk::unknown_ptr) user_get_cursor_frame_info;
    
    // [NtUserGetCursorInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x34110, 0x13864 bytes
    // win32kfull.sys .text:0xd2c60, 0x1596d bytes
    // win32kfull.sys .text:0x968e0, 0x1659e bytes
    // win32kfull.sys .text:0xd3920, 0x1596d bytes
    //
    _d66(sdk::unknown_ptr) user_get_cursor_info;
    
    // [NtUserGetDManipHookInitFunction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11bad0, 0x13864 bytes
    // win32kfull.sys .text:0x1190e0, 0x1596d bytes
    // win32kfull.sys .text:0x10e030, 0x1659e bytes
    // win32kfull.sys .text:0x11a010, 0x1596d bytes
    //
    _d67(sdk::unknown_ptr) user_get_d_manip_hook_init_function;
    
    // [NtUserGetDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149190, 0x13864 bytes
    // win32kbase.sys .text:0x64210, 0x243e0 bytes
    // win32kbase.sys .text:0x1bba0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2d980, 0x243e0 bytes
    //
    _d68(sdk::unknown_ptr) user_get_dc;
    
    // [NtUserGetDCEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x109ef0, 0x13864 bytes
    // win32kfull.sys .text:0x106740, 0x1596d bytes
    // win32kfull.sys .text:0xfe840, 0x1659e bytes
    // win32kfull.sys .text:0x107670, 0x1596d bytes
    //
    _d69(sdk::unknown_ptr) user_get_dc_ex;
    
    // [NtUserGetDesktopID]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10bf20, 0x13864 bytes
    // win32kfull.sys .text:0x108660, 0x1596d bytes
    // win32kfull.sys .text:0x100240, 0x1659e bytes
    // win32kfull.sys .text:0x109590, 0x1596d bytes
    //
    _d70(sdk::unknown_ptr) user_get_desktop_id;
    
    // [NtUserGetDisplayAutoRotationPreferences]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215000, 0x13864 bytes
    // win32kfull.sys .text:0x1f9fe0, 0x1596d bytes
    // win32kfull.sys .text:0x1f68d0, 0x1659e bytes
    // win32kfull.sys .text:0x1f9e50, 0x1596d bytes
    //
    _d71(sdk::unknown_ptr) user_get_display_auto_rotation_preferences;
    
    // [NtUserGetDisplayAutoRotationPreferencesByProcessId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2150b0, 0x13864 bytes
    // win32kfull.sys .text:0x1fa0b0, 0x1596d bytes
    // win32kfull.sys .text:0x1f6990, 0x1659e bytes
    // win32kfull.sys .text:0x1f9f20, 0x1596d bytes
    //
    _d72(sdk::unknown_ptr) user_get_display_auto_rotation_preferences_by_process_id;
    
    // [NtUserGetDisplayConfigBufferSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1491a0, 0x13864 bytes
    // win32kbase.sys .text:0x3e090, 0x243e0 bytes
    // win32kbase.sys .text:0x57120, 0x27ef0 bytes
    // win32kbase.sys .text:0x47030, 0x243e0 bytes
    //
    _d73(sdk::unknown_ptr) user_get_display_config_buffer_sizes;
    
    // [NtUserGetDoubleClickTime]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xff760, 0x13864 bytes
    // win32kbase.sys .text:0xb1ec0, 0x243e0 bytes
    // win32kbase.sys .text:0x172840, 0x27ef0 bytes
    // win32kbase.sys .text:0xa82b0, 0x243e0 bytes
    //
    _d74(sdk::unknown_ptr) user_get_double_click_time;
    
    // [NtUserGetDpiForMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1491b0, 0x13864 bytes
    // win32kbase.sys .text:0x22ad0, 0x243e0 bytes
    // win32kbase.sys .text:0x18b10, 0x27ef0 bytes
    // win32kbase.sys .text:0xf7a0, 0x243e0 bytes
    //
    _d75(sdk::unknown_ptr) user_get_dpi_for_monitor;
    
    // [NtUserGetForegroundWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf90f0, 0x13864 bytes
    // win32kfull.sys .text:0x79c10, 0x1596d bytes
    // win32kfull.sys .text:0xaeb80, 0x1659e bytes
    // win32kfull.sys .text:0x7a780, 0x1596d bytes
    //
    _d76(sdk::unknown_ptr) user_get_foreground_window;
    
    // [NtUserGetGestureConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2151b0, 0x13864 bytes
    // win32kfull.sys .text:0x1fa1d0, 0x1596d bytes
    // win32kfull.sys .text:0x1f6ab0, 0x1659e bytes
    // win32kfull.sys .text:0x1fa040, 0x1596d bytes
    //
    _d77(sdk::unknown_ptr) user_get_gesture_config;
    
    // [NtUserGetGestureExtArgs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215460, 0x13864 bytes
    // win32kfull.sys .text:0x1fa4e0, 0x1596d bytes
    // win32kfull.sys .text:0x1f6dc0, 0x1659e bytes
    // win32kfull.sys .text:0x1fa350, 0x1596d bytes
    //
    _d78(sdk::unknown_ptr) user_get_gesture_ext_args;
    
    // [NtUserGetGestureInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2155b0, 0x13864 bytes
    // win32kfull.sys .text:0x1fa640, 0x1596d bytes
    // win32kfull.sys .text:0x1f6f20, 0x1659e bytes
    // win32kfull.sys .text:0x1fa4b0, 0x1596d bytes
    //
    _d79(sdk::unknown_ptr) user_get_gesture_info;
    
    // [NtUserGetGuiResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124e90, 0x13864 bytes
    // win32kfull.sys .text:0x125f20, 0x1596d bytes
    // win32kfull.sys .text:0x115e40, 0x1659e bytes
    // win32kfull.sys .text:0x126e60, 0x1596d bytes
    //
    _d80(sdk::unknown_ptr) user_get_gui_resources;
    
    // [NtUserGetGUIThreadInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe72f0, 0x13864 bytes
    // win32kfull.sys .text:0xea4b0, 0x1596d bytes
    // win32kfull.sys .text:0xe8d30, 0x1659e bytes
    // win32kfull.sys .text:0xeb1f0, 0x1596d bytes
    //
    _d81(sdk::unknown_ptr) user_get_gui_thread_info;
    
    // [NtUserGetHimetricScaleFactorFromPixelLocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215740, 0x13864 bytes
    // win32kfull.sys .text:0x1fa7f0, 0x1596d bytes
    // win32kfull.sys .text:0x1f70c0, 0x1659e bytes
    // win32kfull.sys .text:0x1fa660, 0x1596d bytes
    //
    _d82(sdk::unknown_ptr) user_get_himetric_scale_factor_from_pixel_location;
    
    // [NtUserGetIconInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x653f0, 0x13864 bytes
    // win32kfull.sys .text:0x7ba70, 0x1596d bytes
    // win32kfull.sys .text:0x3ee70, 0x1659e bytes
    // win32kfull.sys .text:0x7c5e0, 0x1596d bytes
    //
    _d83(sdk::unknown_ptr) user_get_icon_info;
    
    // [NtUserGetIconSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfc0e0, 0x13864 bytes
    // win32kfull.sys .text:0x1030e0, 0x1596d bytes
    // win32kfull.sys .text:0xfa4d0, 0x1659e bytes
    // win32kfull.sys .text:0x104010, 0x1596d bytes
    //
    _d84(sdk::unknown_ptr) user_get_icon_size;
    
    // [NtUserGetImeHotKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215990, 0x13864 bytes
    // win32kfull.sys .text:0x1fa9f0, 0x1596d bytes
    // win32kfull.sys .text:0x1f72d0, 0x1659e bytes
    // win32kfull.sys .text:0x1fa860, 0x1596d bytes
    //
    _d85(sdk::unknown_ptr) user_get_ime_hot_key;
    
    // [NtUserGetImeInfoEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x161d0, 0x13864 bytes
    // win32kfull.sys .text:0xc5a10, 0x1596d bytes
    // win32kfull.sys .text:0xd1eb0, 0x1659e bytes
    // win32kfull.sys .text:0xc66d0, 0x1596d bytes
    //
    _d86(sdk::unknown_ptr) user_get_ime_info_ex;
    
    // [NtUserGetInputLocaleInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x113060, 0x13864 bytes
    // win32kfull.sys .text:0x10b8e0, 0x1596d bytes
    // win32kfull.sys .text:0x102e10, 0x1659e bytes
    // win32kfull.sys .text:0x10c810, 0x1596d bytes
    //
    _d87(sdk::unknown_ptr) user_get_input_locale_info;
    
    // [NtUserGetInteractiveControlDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215ad0, 0x13864 bytes
    // win32kfull.sys .text:0x1fab50, 0x1596d bytes
    // win32kfull.sys .text:0x1f7500, 0x1659e bytes
    // win32kfull.sys .text:0x1fa9c0, 0x1596d bytes
    //
    _d88(sdk::unknown_ptr) user_get_interactive_control_device_info;
    
    // [NtUserGetInteractiveControlInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215c10, 0x13864 bytes
    // win32kfull.sys .text:0x1facc0, 0x1596d bytes
    // win32kfull.sys .text:0x1f7670, 0x1659e bytes
    // win32kfull.sys .text:0x1fab30, 0x1596d bytes
    //
    _d89(sdk::unknown_ptr) user_get_interactive_control_info;
    
    // [NtUserGetInternalWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215d90, 0x13864 bytes
    // win32kfull.sys .text:0x1fb040, 0x1596d bytes
    // win32kfull.sys .text:0x1f79d0, 0x1659e bytes
    // win32kfull.sys .text:0x1faeb0, 0x1596d bytes
    //
    _d90(sdk::unknown_ptr) user_get_internal_window_pos;
    
    // [NtUserGetKeyNameText]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215eb0, 0x13864 bytes
    // win32kfull.sys .text:0x111910, 0x1596d bytes
    // win32kfull.sys .text:0x145630, 0x1659e bytes
    // win32kfull.sys .text:0x112840, 0x1596d bytes
    //
    _d91(sdk::unknown_ptr) user_get_key_name_text;
    
    // [NtUserGetKeyState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x39430, 0x13864 bytes
    // win32kbase.sys .text:0x10e40, 0x243e0 bytes
    // win32kbase.sys .text:0x1a000, 0x27ef0 bytes
    // win32kbase.sys .text:0x71920, 0x243e0 bytes
    //
    _d92(sdk::unknown_ptr) user_get_key_state;
    
    // [NtUserGetKeyboardLayoutList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x16090, 0x13864 bytes
    // win32kbase.sys .text:0xaab20, 0x243e0 bytes
    // win32kbase.sys .text:0xc1ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa0630, 0x243e0 bytes
    //
    _d93(sdk::unknown_ptr) user_get_keyboard_layout_list;
    
    // [NtUserGetKeyboardLayoutName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11cbf0, 0x13864 bytes
    // win32kfull.sys .text:0x119670, 0x1596d bytes
    // win32kfull.sys .text:0x10ae00, 0x1659e bytes
    // win32kfull.sys .text:0x11a5a0, 0x1596d bytes
    //
    _d94(sdk::unknown_ptr) user_get_keyboard_layout_name;
    
    // [NtUserGetKeyboardState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x39230, 0x13864 bytes
    // win32kbase.sys .text:0x10c80, 0x243e0 bytes
    // win32kbase.sys .text:0x1d3e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x71760, 0x243e0 bytes
    //
    _d95(sdk::unknown_ptr) user_get_keyboard_state;
    
    // [NtUserGetLayeredWindowAttributes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x215f60, 0x13864 bytes
    // win32kfull.sys .text:0x1fb180, 0x1596d bytes
    // win32kfull.sys .text:0x122f60, 0x1659e bytes
    // win32kfull.sys .text:0x1faff0, 0x1596d bytes
    //
    _d96(sdk::unknown_ptr) user_get_layered_window_attributes;
    
    // [NtUserGetListBoxInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2160b0, 0x13864 bytes
    // win32kfull.sys .text:0x1fb300, 0x1596d bytes
    // win32kfull.sys .text:0x1f7b20, 0x1659e bytes
    // win32kfull.sys .text:0x1fb170, 0x1596d bytes
    //
    _d97(sdk::unknown_ptr) user_get_list_box_info;
    
    // [NtUserGetMenuBarInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b260, 0x13864 bytes
    // win32kfull.sys .text:0xab490, 0x1596d bytes
    // win32kfull.sys .text:0x98e40, 0x1659e bytes
    // win32kfull.sys .text:0xac000, 0x1596d bytes
    //
    _d98(sdk::unknown_ptr) user_get_menu_bar_info;
    
    // [NtUserGetMenuIndex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216130, 0x13864 bytes
    // win32kfull.sys .text:0x1fb3c0, 0x1596d bytes
    // win32kfull.sys .text:0x1f7be0, 0x1659e bytes
    // win32kfull.sys .text:0x1fb230, 0x1596d bytes
    //
    _d99(sdk::unknown_ptr) user_get_menu_index;
    
    // [NtUserGetMenuItemRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13a800, 0x13864 bytes
    // win32kfull.sys .text:0x1fb470, 0x1596d bytes
    // win32kfull.sys .text:0x1f7c90, 0x1659e bytes
    // win32kfull.sys .text:0x1fb2e0, 0x1596d bytes
    //
    _e00(sdk::unknown_ptr) user_get_menu_item_rect;
    
    // [NtUserGetMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xaa340, 0x13864 bytes
    // win32kfull.sys .text:0x59c10, 0x1596d bytes
    // win32kfull.sys .text:0xe55e0, 0x1659e bytes
    // win32kfull.sys .text:0x5a030, 0x1596d bytes
    //
    _e01(sdk::unknown_ptr) user_get_message;
    
    // [NtUserGetMouseMovePointsEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2161c0, 0x13864 bytes
    // win32kfull.sys .text:0x1fb750, 0x1596d bytes
    // win32kfull.sys .text:0x1f7f30, 0x1659e bytes
    // win32kfull.sys .text:0x1fb5c0, 0x1596d bytes
    //
    _e02(sdk::unknown_ptr) user_get_mouse_move_points_ex;
    
    // [NtUserGetObjectInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x99400, 0x13864 bytes
    // win32kbase.sys .text:0xa44a0, 0x243e0 bytes
    // win32kbase.sys .text:0xacaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x93b90, 0x243e0 bytes
    //
    _e03(sdk::unknown_ptr) user_get_object_information;
    
    // [NtUserGetOpenClipboardWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x142550, 0x13864 bytes
    // win32kfull.sys .text:0xd96a0, 0x1596d bytes
    // win32kfull.sys .text:0xcdf00, 0x1659e bytes
    // win32kfull.sys .text:0xda360, 0x1596d bytes
    //
    _e04(sdk::unknown_ptr) user_get_open_clipboard_window;
    
    // [NtUserGetOwnerTransformedMonitorRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1406f0, 0x13864 bytes
    // win32kfull.sys .text:0x14fc80, 0x1596d bytes
    // win32kfull.sys .text:0x1f80b0, 0x1659e bytes
    // win32kfull.sys .text:0x150bc0, 0x1596d bytes
    //
    _e05(sdk::unknown_ptr) user_get_owner_transformed_monitor_rect;
    
    // [NtUserGetPhysicalDeviceRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216320, 0x13864 bytes
    // win32kfull.sys .text:0x1fb8d0, 0x1596d bytes
    // win32kfull.sys .text:0x1f81e0, 0x1659e bytes
    // win32kfull.sys .text:0x1fb740, 0x1596d bytes
    //
    _e06(sdk::unknown_ptr) user_get_physical_device_rect;
    
    // [NtUserGetPointerCursorId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216430, 0x13864 bytes
    // win32kbase.sys .text:0x1415e0, 0x243e0 bytes
    // win32kbase.sys .text:0x173300, 0x27ef0 bytes
    // win32kbase.sys .text:0x13ec00, 0x243e0 bytes
    //
    _e07(sdk::unknown_ptr) user_get_pointer_cursor_id;
    
    // [NtUserGetPointerDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13ca00, 0x13864 bytes
    // win32kfull.sys .text:0x1fb9f0, 0x1596d bytes
    // win32kfull.sys .text:0x1f8300, 0x1659e bytes
    // win32kfull.sys .text:0x1fb860, 0x1596d bytes
    //
    _e08(sdk::unknown_ptr) user_get_pointer_device;
    
    // [NtUserGetPointerDeviceCursors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13b380, 0x13864 bytes
    // win32kfull.sys .text:0x1fbb00, 0x1596d bytes
    // win32kfull.sys .text:0x1f8410, 0x1659e bytes
    // win32kfull.sys .text:0x1fb970, 0x1596d bytes
    //
    _e09(sdk::unknown_ptr) user_get_pointer_device_cursors;
    
    // [NtUserGetPointerDeviceProperties]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x19480, 0x13864 bytes
    // win32kfull.sys .text:0x1fbd00, 0x1596d bytes
    // win32kfull.sys .text:0x1f8600, 0x1659e bytes
    // win32kfull.sys .text:0x1fbb70, 0x1596d bytes
    //
    _e10(sdk::unknown_ptr) user_get_pointer_device_properties;
    
    // [NtUserGetPointerDeviceRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x191e0, 0x13864 bytes
    // win32kfull.sys .text:0x113cf0, 0x1596d bytes
    // win32kfull.sys .text:0xc6f90, 0x1659e bytes
    // win32kfull.sys .text:0x114c20, 0x1596d bytes
    //
    _e11(sdk::unknown_ptr) user_get_pointer_device_rects;
    
    // [NtUserGetPointerDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x19700, 0x13864 bytes
    // win32kfull.sys .text:0x1056f0, 0x1596d bytes
    // win32kfull.sys .text:0xfc750, 0x1659e bytes
    // win32kfull.sys .text:0x106620, 0x1596d bytes
    //
    _e12(sdk::unknown_ptr) user_get_pointer_devices;
    
    // [NtUserGetPointerInfoList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9980, 0x13864 bytes
    // win32kbase.sys .text:0x1419c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1735b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13efe0, 0x243e0 bytes
    //
    _e13(sdk::unknown_ptr) user_get_pointer_info_list;
    
    // [NtUserGetPointerInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216600, 0x13864 bytes
    // win32kbase.sys .text:0x141ec0, 0x243e0 bytes
    // win32kbase.sys .text:0x173a00, 0x27ef0 bytes
    // win32kbase.sys .text:0x13f4e0, 0x243e0 bytes
    //
    _e14(sdk::unknown_ptr) user_get_pointer_input_transform;
    
    // [NtUserGetPointerType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216710, 0x13864 bytes
    // win32kbase.sys .text:0x1420c0, 0x243e0 bytes
    // win32kbase.sys .text:0x173c00, 0x27ef0 bytes
    // win32kbase.sys .text:0x13f6e0, 0x243e0 bytes
    //
    _e15(sdk::unknown_ptr) user_get_pointer_type;
    
    // [NtUserGetPrecisionTouchPadConfiguration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb360, 0x13864 bytes
    // win32kbase.sys .text:0x4ca0, 0x243e0 bytes
    // win32kbase.sys .text:0x173d00, 0x27ef0 bytes
    // win32kbase.sys .text:0x4ca0, 0x243e0 bytes
    //
    _e16(sdk::unknown_ptr) user_get_precision_touch_pad_configuration;
    
    // [NtUserGetPriorityClipboardFormat]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216810, 0x13864 bytes
    // win32kfull.sys .text:0x1fc020, 0x1596d bytes
    // win32kfull.sys .text:0x1f8910, 0x1659e bytes
    // win32kfull.sys .text:0x1fbe90, 0x1596d bytes
    //
    _e17(sdk::unknown_ptr) user_get_priority_clipboard_format;
    
    // [NtUserGetProcessDpiAwarenessContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x75610, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2f0, 0x243e0 bytes
    // win32kbase.sys .text:0xccba0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb1fa0, 0x243e0 bytes
    //
    _e18(sdk::unknown_ptr) user_get_process_dpi_awareness_context;
    
    // [NtUserGetProcessUIContextInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfb2e0, 0x13864 bytes
    // win32kfull.sys .text:0xf95b0, 0x1596d bytes
    // win32kfull.sys .text:0xecd40, 0x1659e bytes
    // win32kfull.sys .text:0xfa4e0, 0x1596d bytes
    //
    _e19(sdk::unknown_ptr) user_get_process_ui_context_information;
    
    // [NtUserGetProcessWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x164a0, 0x13864 bytes
    // win32kbase.sys .text:0xab910, 0x243e0 bytes
    // win32kbase.sys .text:0xb6fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa15e0, 0x243e0 bytes
    //
    _e20(sdk::unknown_ptr) user_get_process_window_station;
    
    // [NtUserGetProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xde920, 0x13864 bytes
    // win32kfull.sys .text:0xe3e00, 0x1596d bytes
    // win32kfull.sys .text:0xdc3b0, 0x1659e bytes
    // win32kfull.sys .text:0xe4ac0, 0x1596d bytes
    //
    _e21(sdk::unknown_ptr) user_get_prop;
    
    // [NtUserGetQueueStatusReadonly]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7620, 0x13864 bytes
    // win32kfull.sys .text:0xe5280, 0x1596d bytes
    // win32kfull.sys .text:0xe54f0, 0x1659e bytes
    // win32kfull.sys .text:0xe5fc0, 0x1596d bytes
    //
    _e22(sdk::unknown_ptr) user_get_queue_status_readonly;
    
    // [NtUserGetRawInputBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216900, 0x13864 bytes
    // win32kfull.sys .text:0x1fc110, 0x1596d bytes
    // win32kfull.sys .text:0x1f8a50, 0x1659e bytes
    // win32kfull.sys .text:0x1fbf80, 0x1596d bytes
    //
    _e23(sdk::unknown_ptr) user_get_raw_input_buffer;
    
    // [NtUserGetRawInputData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6470, 0x13864 bytes
    // win32kfull.sys .text:0x2ff0, 0x1596d bytes
    // win32kfull.sys .text:0x1be0, 0x1659e bytes
    // win32kfull.sys .text:0x2ff0, 0x1596d bytes
    //
    _e24(sdk::unknown_ptr) user_get_raw_input_data;
    
    // [NtUserGetRawInputDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x116d80, 0x13864 bytes
    // win32kfull.sys .text:0x1fc490, 0x1596d bytes
    // win32kfull.sys .text:0x1f8db0, 0x1659e bytes
    // win32kfull.sys .text:0x1fc300, 0x1596d bytes
    //
    _e25(sdk::unknown_ptr) user_get_raw_input_device_info;
    
    // [NtUserGetRawInputDeviceList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216c40, 0x13864 bytes
    // win32kfull.sys .text:0x1fc950, 0x1596d bytes
    // win32kfull.sys .text:0x4390, 0x1659e bytes
    // win32kfull.sys .text:0x1fc7c0, 0x1596d bytes
    //
    _e26(sdk::unknown_ptr) user_get_raw_input_device_list;
    
    // [NtUserGetRawPointerDeviceData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x216e90, 0x13864 bytes
    // win32kbase.sys .text:0x1421d0, 0x243e0 bytes
    // win32kbase.sys .text:0x173ee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13f7f0, 0x243e0 bytes
    //
    _e27(sdk::unknown_ptr) user_get_raw_pointer_device_data;
    
    // [NtUserGetRegisteredRawInputDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2170e0, 0x13864 bytes
    // win32kfull.sys .text:0x1fcbb0, 0x1596d bytes
    // win32kfull.sys .text:0x1f9260, 0x1659e bytes
    // win32kfull.sys .text:0x1fca20, 0x1596d bytes
    //
    _e28(sdk::unknown_ptr) user_get_registered_raw_input_devices;
    
    // [NtUserGetScrollBarInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3ede0, 0x13864 bytes
    // win32kfull.sys .text:0x67f50, 0x1596d bytes
    // win32kfull.sys .text:0x45250, 0x1659e bytes
    // win32kfull.sys .text:0x68ac0, 0x1596d bytes
    //
    _e29(sdk::unknown_ptr) user_get_scroll_bar_info;
    
    // [NtUserGetSystemMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3a9c0, 0x13864 bytes
    // win32kfull.sys .text:0x1f890, 0x1596d bytes
    // win32kfull.sys .text:0x99bb0, 0x1659e bytes
    // win32kfull.sys .text:0x1fca0, 0x1596d bytes
    //
    _e30(sdk::unknown_ptr) user_get_system_menu;
    
    // [NtUserGetThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa15a0, 0x13864 bytes
    // win32kbase.sys .text:0xa5410, 0x243e0 bytes
    // win32kbase.sys .text:0xadc40, 0x27ef0 bytes
    // win32kbase.sys .text:0x94710, 0x243e0 bytes
    //
    _e31(sdk::unknown_ptr) user_get_thread_desktop;
    
    // [NtUserGetThreadState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf6eb0, 0x13864 bytes
    // win32kfull.sys .text:0xe78e0, 0x1596d bytes
    // win32kfull.sys .text:0xe93a0, 0x1659e bytes
    // win32kfull.sys .text:0xe8620, 0x1596d bytes
    //
    _e32(sdk::unknown_ptr) user_get_thread_state;
    
    // [NtUserGetTitleBarInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x57e40, 0x13864 bytes
    // win32kfull.sys .text:0x61720, 0x1596d bytes
    // win32kfull.sys .text:0x491f0, 0x1659e bytes
    // win32kfull.sys .text:0x62290, 0x1596d bytes
    //
    _e33(sdk::unknown_ptr) user_get_title_bar_info;
    
    // [NtUserGetTopLevelWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217160, 0x13864 bytes
    // win32kfull.sys .text:0x1fcc50, 0x1596d bytes
    // win32kfull.sys .text:0x1f93f0, 0x1659e bytes
    // win32kfull.sys .text:0x1fcac0, 0x1596d bytes
    //
    _e34(sdk::unknown_ptr) user_get_top_level_window;
    
    // [NtUserGetTouchInputInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2171c0, 0x13864 bytes
    // win32kfull.sys .text:0x1fccd0, 0x1596d bytes
    // win32kfull.sys .text:0x1f9460, 0x1659e bytes
    // win32kfull.sys .text:0x1fcb40, 0x1596d bytes
    //
    _e35(sdk::unknown_ptr) user_get_touch_input_info;
    
    // [NtUserGetTouchValidationStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217310, 0x13864 bytes
    // win32kfull.sys .text:0x1fce30, 0x1596d bytes
    // win32kfull.sys .text:0x1f95c0, 0x1659e bytes
    // win32kfull.sys .text:0x1fcca0, 0x1596d bytes
    //
    _e36(sdk::unknown_ptr) user_get_touch_validation_status;
    
    // [NtUserGetUpdateRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10a300, 0x13864 bytes
    // win32kfull.sys .text:0x4b990, 0x1596d bytes
    // win32kfull.sys .text:0x87510, 0x1659e bytes
    // win32kfull.sys .text:0x4bda0, 0x1596d bytes
    //
    _e37(sdk::unknown_ptr) user_get_update_rect;
    
    // [NtUserGetUpdateRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217380, 0x13864 bytes
    // win32kfull.sys .text:0x1197b0, 0x1596d bytes
    // win32kfull.sys .text:0x13c2f0, 0x1659e bytes
    // win32kfull.sys .text:0x11a6e0, 0x1596d bytes
    //
    _e38(sdk::unknown_ptr) user_get_update_rgn;
    
    // [NtUserGetUpdatedClipboardFormats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217420, 0x13864 bytes
    // win32kfull.sys .text:0x1fceb0, 0x1596d bytes
    // win32kfull.sys .text:0x1f9690, 0x1659e bytes
    // win32kfull.sys .text:0x1fcd20, 0x1596d bytes
    //
    _e39(sdk::unknown_ptr) user_get_updated_clipboard_formats;
    
    // [NtUserGetWindowBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xecb80, 0x13864 bytes
    // win32kfull.sys .text:0xf7360, 0x1596d bytes
    // win32kfull.sys .text:0xeabd0, 0x1659e bytes
    // win32kfull.sys .text:0xf81f0, 0x1596d bytes
    //
    _e40(sdk::unknown_ptr) user_get_window_band;
    
    // [NtUserGetWindowCompositionAttribute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x95e70, 0x13864 bytes
    // win32kfull.sys .text:0x76560, 0x1596d bytes
    // win32kfull.sys .text:0x4b450, 0x1659e bytes
    // win32kfull.sys .text:0x770d0, 0x1596d bytes
    //
    _e41(sdk::unknown_ptr) user_get_window_composition_attribute;
    
    // [NtUserGetWindowCompositionInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2176b0, 0x13864 bytes
    // win32kfull.sys .text:0x1fd1f0, 0x1596d bytes
    // win32kfull.sys .text:0x1f9a00, 0x1659e bytes
    // win32kfull.sys .text:0x1fd060, 0x1596d bytes
    //
    _e42(sdk::unknown_ptr) user_get_window_composition_info;
    
    // [NtUserGetWindowDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf85b0, 0x13864 bytes
    // win32kfull.sys .text:0xf3350, 0x1596d bytes
    // win32kfull.sys .text:0xea3b0, 0x1659e bytes
    // win32kfull.sys .text:0xf41e0, 0x1596d bytes
    //
    _e43(sdk::unknown_ptr) user_get_window_dc;
    
    // [NtUserGetWindowDisplayAffinity]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217850, 0x13864 bytes
    // win32kfull.sys .text:0x1fd3d0, 0x1596d bytes
    // win32kfull.sys .text:0x1f9cc0, 0x1659e bytes
    // win32kfull.sys .text:0x1fd240, 0x1596d bytes
    //
    _e44(sdk::unknown_ptr) user_get_window_display_affinity;
    
    // [NtUserGetWindowFeedbackSetting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217920, 0x13864 bytes
    // win32kfull.sys .text:0x1fd4c0, 0x1596d bytes
    // win32kfull.sys .text:0x1f9db0, 0x1659e bytes
    // win32kfull.sys .text:0x1fd330, 0x1596d bytes
    //
    _e45(sdk::unknown_ptr) user_get_window_feedback_setting;
    
    // [NtUserGetWindowMinimizeRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114030, 0x13864 bytes
    // win32kfull.sys .text:0x1162f0, 0x1596d bytes
    // win32kfull.sys .text:0x1074b0, 0x1659e bytes
    // win32kfull.sys .text:0x117220, 0x1596d bytes
    //
    _e46(sdk::unknown_ptr) user_get_window_minimize_rect;
    
    // [NtUserGetWindowPlacement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3e8e0, 0x13864 bytes
    // win32kfull.sys .text:0xcbab0, 0x1596d bytes
    // win32kfull.sys .text:0xbcd20, 0x1659e bytes
    // win32kfull.sys .text:0xcc770, 0x1596d bytes
    //
    _e47(sdk::unknown_ptr) user_get_window_placement;
    
    // [NtUserGetWindowRgnEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9fa00, 0x13864 bytes
    // win32kfull.sys .text:0x1fd6a0, 0x1596d bytes
    // win32kfull.sys .text:0x1f9f80, 0x1659e bytes
    // win32kfull.sys .text:0x1fd510, 0x1596d bytes
    //
    _e48(sdk::unknown_ptr) user_get_window_rgn_ex;
    
    // [NtUserGetWOWClass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217600, 0x13864 bytes
    // win32kfull.sys .text:0x1fd0d0, 0x1596d bytes
    // win32kfull.sys .text:0x1f98b0, 0x1659e bytes
    // win32kfull.sys .text:0x1fcf40, 0x1596d bytes
    //
    _e49(sdk::unknown_ptr) user_get_wow_class;
    
    // [NtUserGhostWindowFromHungWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x42980, 0x13864 bytes
    // win32kfull.sys .text:0x50640, 0x1596d bytes
    // win32kfull.sys .text:0xae600, 0x1659e bytes
    // win32kfull.sys .text:0x50a60, 0x1596d bytes
    //
    _e50(sdk::unknown_ptr) user_ghost_window_from_hung_window;
    
    // [NtUserHandleDelegatedInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217ae0, 0x13864 bytes
    // win32kfull.sys .text:0x1fd900, 0x1596d bytes
    // win32kfull.sys .text:0x1fa1c0, 0x1659e bytes
    // win32kfull.sys .text:0x1fd770, 0x1596d bytes
    //
    _e51(sdk::unknown_ptr) user_handle_delegated_input;
    
    // [NtUserHardErrorControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217bc0, 0x13864 bytes
    // win32kfull.sys .text:0x1fd9f0, 0x1596d bytes
    // win32kfull.sys .text:0x1fa300, 0x1659e bytes
    // win32kfull.sys .text:0x1fd860, 0x1596d bytes
    //
    _e52(sdk::unknown_ptr) user_hard_error_control;
    
    // [NtUserHideCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3afa0, 0x13864 bytes
    // win32kfull.sys .text:0x770a0, 0x1596d bytes
    // win32kfull.sys .text:0x47b80, 0x1659e bytes
    // win32kfull.sys .text:0x77c10, 0x1596d bytes
    //
    _e53(sdk::unknown_ptr) user_hide_caret;
    
    // [NtUserHidePointerContactVisualization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217cb0, 0x13864 bytes
    // win32kfull.sys .text:0x1fdb10, 0x1596d bytes
    // win32kfull.sys .text:0x15be80, 0x1659e bytes
    // win32kfull.sys .text:0x1fd980, 0x1596d bytes
    //
    _e54(sdk::unknown_ptr) user_hide_pointer_contact_visualization;
    
    // [NtUserHiliteMenuItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217d00, 0x13864 bytes
    // win32kfull.sys .text:0x1fdb90, 0x1596d bytes
    // win32kfull.sys .text:0x1fa4b0, 0x1659e bytes
    // win32kfull.sys .text:0x1fda00, 0x1596d bytes
    //
    _e55(sdk::unknown_ptr) user_hilite_menu_item;
    
    // [NtUserHungWindowFromGhostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141970, 0x13864 bytes
    // win32kfull.sys .text:0xdfeb0, 0x1596d bytes
    // win32kfull.sys .text:0x10d840, 0x1659e bytes
    // win32kfull.sys .text:0xe0b70, 0x1596d bytes
    //
    _e56(sdk::unknown_ptr) user_hung_window_from_ghost_window;
    
    // [NtUserHwndQueryRedirectionInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x217e00, 0x13864 bytes
    // win32kfull.sys .text:0x1fdd40, 0x1596d bytes
    // win32kfull.sys .text:0x15bf00, 0x1659e bytes
    // win32kfull.sys .text:0x1fdbb0, 0x1596d bytes
    //
    _e57(sdk::unknown_ptr) user_hwnd_query_redirection_info;
    
    // [NtUserHwndSetRedirectionInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218380, 0x13864 bytes
    // win32kfull.sys .text:0x1fe290, 0x1596d bytes
    // win32kfull.sys .text:0x1fa660, 0x1659e bytes
    // win32kfull.sys .text:0x1fe100, 0x1596d bytes
    //
    _e58(sdk::unknown_ptr) user_hwnd_set_redirection_info;
    
    // [NtUserImpersonateDdeClientWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218630, 0x13864 bytes
    // win32kfull.sys .text:0x1fe430, 0x1596d bytes
    // win32kfull.sys .text:0x1fa800, 0x1659e bytes
    // win32kfull.sys .text:0x1fe2a0, 0x1596d bytes
    //
    _e59(sdk::unknown_ptr) user_impersonate_dde_client_window;
    
    // [NtUserInheritWindowMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2186f0, 0x13864 bytes
    // win32kfull.sys .text:0x148920, 0x1596d bytes
    // win32kfull.sys .text:0x13d2a0, 0x1659e bytes
    // win32kfull.sys .text:0x149860, 0x1596d bytes
    //
    _e60(sdk::unknown_ptr) user_inherit_window_monitor;
    
    // [NtUserInitTask]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d730, 0x13864 bytes
    // win32kfull.sys .text:0x1ebc00, 0x1596d bytes
    // win32kfull.sys .text:0x1e8790, 0x1659e bytes
    // win32kfull.sys .text:0x1eba60, 0x1596d bytes
    //
    _e61(sdk::unknown_ptr) user_init_task;
    
    // [NtUserInitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1491c0, 0x13864 bytes
    // win32k.sys .text:0x1450, 0x388c7 bytes
    // win32k.sys .text:0x1440, 0x3e907 bytes
    // win32k.sys .text:0x1450, 0x388c7 bytes
    //
    _e62(sdk::unknown_ptr) user_initialize;
    
    // [NtUserInitializeClientPfnArrays]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1201b0, 0x13864 bytes
    // win32kfull.sys .text:0x1226b0, 0x1596d bytes
    // win32kfull.sys .text:0x112450, 0x1659e bytes
    // win32kfull.sys .text:0x1235f0, 0x1596d bytes
    //
    _e63(sdk::unknown_ptr) user_initialize_client_pfn_arrays;
    
    // [NtUserInitializeInputDeviceInjection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0990, 0x1eb80 bytes
    // win32kbase.sys .text:0x142b50, 0x243e0 bytes
    // win32kbase.sys .text:0x175300, 0x27ef0 bytes
    // win32kbase.sys .text:0x140170, 0x243e0 bytes
    //
    _e64(sdk::unknown_ptr) user_initialize_input_device_injection;
    
    // [NtUserInitializePointerDeviceInjection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0d40, 0x1eb80 bytes
    // win32kbase.sys .text:0x142d80, 0x243e0 bytes
    // win32kbase.sys .text:0x175b80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1403a0, 0x243e0 bytes
    //
    _e65(sdk::unknown_ptr) user_initialize_pointer_device_injection;
    
    // [NtUserInitializeTouchInjection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2187e0, 0x13864 bytes
    // win32kfull.sys .text:0x1fe510, 0x1596d bytes
    // win32kfull.sys .text:0x1fa8e0, 0x1659e bytes
    // win32kfull.sys .text:0x1fe380, 0x1596d bytes
    //
    _e66(sdk::unknown_ptr) user_initialize_touch_injection;
    
    // [NtUserInjectDeviceInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc1010, 0x1eb80 bytes
    // win32kbase.sys .text:0x142f20, 0x243e0 bytes
    // win32kbase.sys .text:0x175fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x140540, 0x243e0 bytes
    //
    _e67(sdk::unknown_ptr) user_inject_device_input;
    
    // [NtUserInjectGesture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218860, 0x13864 bytes
    // win32kfull.sys .text:0x1fe5d0, 0x1596d bytes
    // win32kfull.sys .text:0x1faa10, 0x1659e bytes
    // win32kfull.sys .text:0x1fe440, 0x1596d bytes
    //
    _e68(sdk::unknown_ptr) user_inject_gesture;
    
    // [NtUserInjectKeyboardInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc12b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x143b60, 0x243e0 bytes
    // win32kbase.sys .text:0x3020, 0x27ef0 bytes
    // win32kbase.sys .text:0x141180, 0x243e0 bytes
    //
    _e69(sdk::unknown_ptr) user_inject_keyboard_input;
    
    // [NtUserInjectMouseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc1580, 0x1eb80 bytes
    // win32kbase.sys .text:0x143f80, 0x243e0 bytes
    // win32kbase.sys .text:0x177340, 0x27ef0 bytes
    // win32kbase.sys .text:0x1415a0, 0x243e0 bytes
    //
    _e70(sdk::unknown_ptr) user_inject_mouse_input;
    
    // [NtUserInjectPointerInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc1840, 0x1eb80 bytes
    // win32kbase.sys .text:0x1443a0, 0x243e0 bytes
    // win32kbase.sys .text:0x177f50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1419c0, 0x243e0 bytes
    //
    _e71(sdk::unknown_ptr) user_inject_pointer_input;
    
    // [NtUserInjectTouchInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218b40, 0x13864 bytes
    // win32kfull.sys .text:0x1fe8e0, 0x1596d bytes
    // win32kfull.sys .text:0x1fad20, 0x1659e bytes
    // win32kfull.sys .text:0x1fe750, 0x1596d bytes
    //
    _e72(sdk::unknown_ptr) user_inject_touch_input;
    
    // [NtUserInteractiveControlQueryUsage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218d10, 0x13864 bytes
    // win32kfull.sys .text:0x1febe0, 0x1596d bytes
    // win32kfull.sys .text:0x1fb200, 0x1659e bytes
    // win32kfull.sys .text:0x1fea50, 0x1596d bytes
    //
    _e73(sdk::unknown_ptr) user_interactive_control_query_usage;
    
    // [NtUserInternalGetWindowIcon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1424e0, 0x13864 bytes
    // win32kfull.sys .text:0x7db0, 0x1596d bytes
    // win32kfull.sys .text:0x1427a0, 0x1659e bytes
    // win32kfull.sys .text:0x8160, 0x1596d bytes
    //
    _e74(sdk::unknown_ptr) user_internal_get_window_icon;
    
    // [NtUserInternalGetWindowText]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4beb0, 0x13864 bytes
    // win32kfull.sys .text:0xecb90, 0x1596d bytes
    // win32kfull.sys .text:0xb0550, 0x1659e bytes
    // win32kfull.sys .text:0xed8d0, 0x1596d bytes
    //
    _e75(sdk::unknown_ptr) user_internal_get_window_text;
    
    // [NtUserInvalidateRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa5ee0, 0x13864 bytes
    // win32kfull.sys .text:0x84c10, 0x1596d bytes
    // win32kfull.sys .text:0x34550, 0x1659e bytes
    // win32kfull.sys .text:0x85780, 0x1596d bytes
    //
    _e76(sdk::unknown_ptr) user_invalidate_rect;
    
    // [NtUserInvalidateRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x112490, 0x13864 bytes
    // win32kfull.sys .text:0x107990, 0x1596d bytes
    // win32kfull.sys .text:0xfd050, 0x1659e bytes
    // win32kfull.sys .text:0x1088c0, 0x1596d bytes
    //
    _e77(sdk::unknown_ptr) user_invalidate_rgn;
    
    // [NtUserIsChildWindowDpiMessageEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xed0d0, 0x13864 bytes
    // win32kfull.sys .text:0xe9040, 0x1596d bytes
    // win32kfull.sys .text:0xe6a90, 0x1659e bytes
    // win32kfull.sys .text:0xe9d80, 0x1596d bytes
    //
    _e78(sdk::unknown_ptr) user_is_child_window_dpi_message_enabled;
    
    // [NtUserIsClipboardFormatAvailable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xec620, 0x13864 bytes
    // win32kfull.sys .text:0xd79b0, 0x1596d bytes
    // win32kfull.sys .text:0xd0810, 0x1659e bytes
    // win32kfull.sys .text:0xd8670, 0x1596d bytes
    //
    _e79(sdk::unknown_ptr) user_is_clipboard_format_available;
    
    // [NtUserIsMouseInPointerEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218e30, 0x13864 bytes
    // win32kbase.sys .text:0x144860, 0x243e0 bytes
    // win32kbase.sys .text:0x178cb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x141e80, 0x243e0 bytes
    //
    _e80(sdk::unknown_ptr) user_is_mouse_in_pointer_enabled;
    
    // [NtUserIsMouseInputEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218e80, 0x13864 bytes
    // win32kfull.sys .text:0x1fed20, 0x1596d bytes
    // win32kfull.sys .text:0x1fb330, 0x1659e bytes
    // win32kfull.sys .text:0x1feb90, 0x1596d bytes
    //
    _e81(sdk::unknown_ptr) user_is_mouse_input_enabled;
    
    // [NtUserIsNonClientDpiScalingEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xed700, 0x13864 bytes
    // win32kfull.sys .text:0xea8e0, 0x1596d bytes
    // win32kfull.sys .text:0xe3f10, 0x1659e bytes
    // win32kfull.sys .text:0xeb620, 0x1596d bytes
    //
    _e82(sdk::unknown_ptr) user_is_non_client_dpi_scaling_enabled;
    
    // [NtUserIsTopLevelWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf2ce0, 0x13864 bytes
    // win32kfull.sys .text:0xeada0, 0x1596d bytes
    // win32kfull.sys .text:0xe4730, 0x1659e bytes
    // win32kfull.sys .text:0xebae0, 0x1596d bytes
    //
    _e83(sdk::unknown_ptr) user_is_top_level_window;
    
    // [NtUserIsTouchWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218ec0, 0x13864 bytes
    // win32kfull.sys .text:0x1fee50, 0x1596d bytes
    // win32kfull.sys .text:0x1fb460, 0x1659e bytes
    // win32kfull.sys .text:0x1fecc0, 0x1596d bytes
    //
    _e84(sdk::unknown_ptr) user_is_touch_window;
    
    // [NtUserIsWindowBroadcastingDpiToChildren]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x110670, 0x13864 bytes
    // win32kfull.sys .text:0x100810, 0x1596d bytes
    // win32kfull.sys .text:0x102050, 0x1659e bytes
    // win32kfull.sys .text:0x101740, 0x1596d bytes
    //
    _e85(sdk::unknown_ptr) user_is_window_broadcasting_dpi_to_children;
    
    // [NtUserKillTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x998b0, 0x13864 bytes
    // win32kfull.sys .text:0xc2340, 0x1596d bytes
    // win32kfull.sys .text:0x47370, 0x1659e bytes
    // win32kfull.sys .text:0xc3000, 0x1596d bytes
    //
    _e86(sdk::unknown_ptr) user_kill_timer;
    
    // [NtUserLayoutCompleted]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1193e0, 0x13864 bytes
    // win32kfull.sys .text:0x10e650, 0x1596d bytes
    // win32kfull.sys .text:0x9a670, 0x1659e bytes
    // win32kfull.sys .text:0x10f580, 0x1596d bytes
    //
    _e87(sdk::unknown_ptr) user_layout_completed;
    
    // [NtUserLinkDpiCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218f90, 0x13864 bytes
    // win32kfull.sys .text:0x1ff000, 0x1596d bytes
    // win32kfull.sys .text:0x1fb6d0, 0x1659e bytes
    // win32kfull.sys .text:0x1fee70, 0x1596d bytes
    //
    _e88(sdk::unknown_ptr) user_link_dpi_cursor;
    
    // [NtUserLoadKeyboardLayoutEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x16510, 0x13864 bytes
    // win32kbase.sys .text:0x144ba0, 0x243e0 bytes
    // win32kbase.sys .text:0xb460, 0x27ef0 bytes
    // win32kbase.sys .text:0x1421c0, 0x243e0 bytes
    //
    _e89(sdk::unknown_ptr) user_load_keyboard_layout_ex;
    
    // [NtUserLockWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x120a20, 0x13864 bytes
    // win32kfull.sys .text:0x120680, 0x1596d bytes
    // win32kfull.sys .text:0x1107f0, 0x1659e bytes
    // win32kfull.sys .text:0x1215c0, 0x1596d bytes
    //
    _e90(sdk::unknown_ptr) user_lock_window_station;
    
    // [NtUserLockWindowUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb7f0, 0x13864 bytes
    // win32kfull.sys .text:0x1ff0d0, 0x1596d bytes
    // win32kfull.sys .text:0x4be0, 0x1659e bytes
    // win32kfull.sys .text:0x1fef40, 0x1596d bytes
    //
    _e91(sdk::unknown_ptr) user_lock_window_update;
    
    // [NtUserLockWorkStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc230, 0x13864 bytes
    // win32kfull.sys .text:0x8ad0, 0x1596d bytes
    // win32kfull.sys .text:0x5270, 0x1659e bytes
    // win32kfull.sys .text:0x8e80, 0x1596d bytes
    //
    _e92(sdk::unknown_ptr) user_lock_work_station;
    
    // [NtUserLogicalToPerMonitorDPIPhysicalPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1408c0, 0x13864 bytes
    // win32kfull.sys .text:0x14f9e0, 0x1596d bytes
    // win32kfull.sys .text:0x1fb7e0, 0x1659e bytes
    // win32kfull.sys .text:0x150920, 0x1596d bytes
    //
    _e93(sdk::unknown_ptr) user_logical_to_per_monitor_dpi_physical_point;
    
    // [NtUserLogicalToPhysicalPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf22a0, 0x13864 bytes
    // win32kfull.sys .text:0x105390, 0x1596d bytes
    // win32kfull.sys .text:0xf5cc0, 0x1659e bytes
    // win32kfull.sys .text:0x1062c0, 0x1596d bytes
    //
    _e94(sdk::unknown_ptr) user_logical_to_physical_point;
    
    // [NtUserMagControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2191d0, 0x13864 bytes
    // win32kfull.sys .text:0x1ff440, 0x1596d bytes
    // win32kfull.sys .text:0x1fbd70, 0x1659e bytes
    // win32kfull.sys .text:0x1ff2b0, 0x1596d bytes
    //
    _e95(sdk::unknown_ptr) user_mag_control;
    
    // [NtUserMagGetContextInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x219270, 0x13864 bytes
    // win32kfull.sys .text:0x1ff4f0, 0x1596d bytes
    // win32kfull.sys .text:0x1fbe20, 0x1659e bytes
    // win32kfull.sys .text:0x1ff360, 0x1596d bytes
    //
    _e96(sdk::unknown_ptr) user_mag_get_context_information;
    
    // [NtUserMagSetContextInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x219720, 0x13864 bytes
    // win32kfull.sys .text:0x1ffa10, 0x1596d bytes
    // win32kfull.sys .text:0x1fc320, 0x1659e bytes
    // win32kfull.sys .text:0x1ff880, 0x1596d bytes
    //
    _e97(sdk::unknown_ptr) user_mag_set_context_information;
    
    // [NtUserMapVirtualKeyEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13bf0, 0x13864 bytes
    // win32kbase.sys .text:0x68110, 0x243e0 bytes
    // win32kbase.sys .text:0x10140, 0x27ef0 bytes
    // win32kbase.sys .text:0x11a90, 0x243e0 bytes
    //
    _e98(sdk::unknown_ptr) user_map_virtual_key_ex;
    
    // [NtUserMenuItemFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a070, 0x13864 bytes
    // win32kfull.sys .text:0x200450, 0x1596d bytes
    // win32kfull.sys .text:0x1fccc0, 0x1659e bytes
    // win32kfull.sys .text:0x2002c0, 0x1596d bytes
    //
    _e99(sdk::unknown_ptr) user_menu_item_from_point;
    
    // [NtUserMessageCall]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb23f0, 0x13864 bytes
    // win32kfull.sys .text:0xe4540, 0x1596d bytes
    // win32kfull.sys .text:0xde220, 0x1659e bytes
    // win32kfull.sys .text:0xe5200, 0x1596d bytes
    //
    _f00(sdk::unknown_ptr) user_message_call;
    
    // [NtUserMinMaximize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a1c0, 0x13864 bytes
    // win32kfull.sys .text:0x2006a0, 0x1596d bytes
    // win32kfull.sys .text:0x1fced0, 0x1659e bytes
    // win32kfull.sys .text:0x200510, 0x1596d bytes
    //
    _f01(sdk::unknown_ptr) user_min_maximize;
    
    // [NtUserMNDragLeave]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x219070, 0x13864 bytes
    // win32kfull.sys .text:0x1ff2c0, 0x1596d bytes
    // win32kfull.sys .text:0x1fbbf0, 0x1659e bytes
    // win32kfull.sys .text:0x1ff130, 0x1596d bytes
    //
    _f02(sdk::unknown_ptr) user_mn_drag_leave;
    
    // [NtUserMNDragOver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x219100, 0x13864 bytes
    // win32kfull.sys .text:0x1ff360, 0x1596d bytes
    // win32kfull.sys .text:0x1fbc90, 0x1659e bytes
    // win32kfull.sys .text:0x1ff1d0, 0x1596d bytes
    //
    _f03(sdk::unknown_ptr) user_mn_drag_over;
    
    // [NtUserModifyUserStartupInfoFlags]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a290, 0x13864 bytes
    // win32kfull.sys .text:0x2007c0, 0x1596d bytes
    // win32kfull.sys .text:0x1fcfe0, 0x1659e bytes
    // win32kfull.sys .text:0x200630, 0x1596d bytes
    //
    _f04(sdk::unknown_ptr) user_modify_user_startup_info_flags;
    
    // [NtUserModifyWindowTouchCapability]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121830, 0x13864 bytes
    // win32kfull.sys .text:0x200840, 0x1596d bytes
    // win32kfull.sys .text:0x1fd060, 0x1659e bytes
    // win32kfull.sys .text:0x2006b0, 0x1596d bytes
    //
    _f05(sdk::unknown_ptr) user_modify_window_touch_capability;
    
    // [NtUserMoveWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x104fd0, 0x13864 bytes
    // win32kfull.sys .text:0x1009e0, 0x1596d bytes
    // win32kfull.sys .text:0xae3c0, 0x1659e bytes
    // win32kfull.sys .text:0x101910, 0x1596d bytes
    //
    _f06(sdk::unknown_ptr) user_move_window;
    
    // [NtUserNavigateFocus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a2f0, 0x13864 bytes
    // win32kfull.sys .text:0x7370, 0x1596d bytes
    // win32kfull.sys .text:0x1fd110, 0x1659e bytes
    // win32kfull.sys .text:0x7720, 0x1596d bytes
    //
    _f07(sdk::unknown_ptr) user_navigate_focus;
    
    // [NtUserNotifyIMEStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x107b40, 0x13864 bytes
    // win32kfull.sys .text:0x105960, 0x1596d bytes
    // win32kfull.sys .text:0xfcc20, 0x1659e bytes
    // win32kfull.sys .text:0x106890, 0x1596d bytes
    //
    _f08(sdk::unknown_ptr) user_notify_ime_status;
    
    // [NtUserNotifyProcessCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfd6a0, 0x13864 bytes
    // win32kfull.sys .text:0x50ed0, 0x1596d bytes
    // win32kfull.sys .text:0xa3ea0, 0x1659e bytes
    // win32kfull.sys .text:0x512f0, 0x1596d bytes
    //
    _f09(sdk::unknown_ptr) user_notify_process_create;
    
    // [NtUserNotifyWinEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb2780, 0x13864 bytes
    // win32kfull.sys .text:0x9b0d0, 0x1596d bytes
    // win32kfull.sys .text:0x57570, 0x1659e bytes
    // win32kfull.sys .text:0x9bc40, 0x1596d bytes
    //
    _f10(sdk::unknown_ptr) user_notify_win_event;
    
    // [NtUserOpenClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xec420, 0x13864 bytes
    // win32kfull.sys .text:0xd71c0, 0x1596d bytes
    // win32kfull.sys .text:0xd0230, 0x1659e bytes
    // win32kfull.sys .text:0xd7e80, 0x1596d bytes
    //
    _f11(sdk::unknown_ptr) user_open_clipboard;
    
    // [NtUserOpenDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14790, 0x13864 bytes
    // win32kfull.sys .text:0xc5ff0, 0x1596d bytes
    // win32kfull.sys .text:0xd2480, 0x1659e bytes
    // win32kfull.sys .text:0xc6cb0, 0x1596d bytes
    //
    _f12(sdk::unknown_ptr) user_open_desktop;
    
    // [NtUserOpenInputDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14650, 0x13864 bytes
    // win32kbase.sys .text:0xbada0, 0x243e0 bytes
    // win32kbase.sys .text:0xcc8f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb46c0, 0x243e0 bytes
    //
    _f13(sdk::unknown_ptr) user_open_input_desktop;
    
    // [NtUserOpenThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a410, 0x13864 bytes
    // win32kfull.sys .text:0x2008f0, 0x1596d bytes
    // win32kfull.sys .text:0x1fd4d0, 0x1659e bytes
    // win32kfull.sys .text:0x200760, 0x1596d bytes
    //
    _f14(sdk::unknown_ptr) user_open_thread_desktop;
    
    // [NtUserOpenWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x143f0, 0x13864 bytes
    // win32kfull.sys .text:0xc5d90, 0x1596d bytes
    // win32kfull.sys .text:0xd2220, 0x1659e bytes
    // win32kfull.sys .text:0xc6a50, 0x1596d bytes
    //
    _f15(sdk::unknown_ptr) user_open_window_station;
    
    // [NtUserPaintDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a4a0, 0x13864 bytes
    // win32kfull.sys .text:0x2009a0, 0x1596d bytes
    // win32kfull.sys .text:0x1fd580, 0x1659e bytes
    // win32kfull.sys .text:0x200810, 0x1596d bytes
    //
    _f16(sdk::unknown_ptr) user_paint_desktop;
    
    // [NtUserPaintMenuBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bbd0, 0x13864 bytes
    // win32kfull.sys .text:0x20470, 0x1596d bytes
    // win32kfull.sys .text:0xffed0, 0x1659e bytes
    // win32kfull.sys .text:0x20880, 0x1596d bytes
    //
    _f17(sdk::unknown_ptr) user_paint_menu_bar;
    
    // [NtUserPaintMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a540, 0x13864 bytes
    // win32kfull.sys .text:0x200a70, 0x1596d bytes
    // win32kfull.sys .text:0x1fd650, 0x1659e bytes
    // win32kfull.sys .text:0x2008e0, 0x1596d bytes
    //
    _f18(sdk::unknown_ptr) user_paint_monitor;
    
    // [NtUserPeekMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa96d0, 0x13864 bytes
    // win32kfull.sys .text:0x59d20, 0x1596d bytes
    // win32kfull.sys .text:0x29ff0, 0x1659e bytes
    // win32kfull.sys .text:0x5a140, 0x1596d bytes
    //
    _f19(sdk::unknown_ptr) user_peek_message;
    
    // [NtUserPerMonitorDPIPhysicalToLogicalPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a660, 0x13864 bytes
    // win32kfull.sys .text:0x200c00, 0x1596d bytes
    // win32kfull.sys .text:0x1fd7e0, 0x1659e bytes
    // win32kfull.sys .text:0x200a70, 0x1596d bytes
    //
    _f20(sdk::unknown_ptr) user_per_monitor_dpi_physical_to_logical_point;
    
    // [NtUserPhysicalToLogicalPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x96940, 0x13864 bytes
    // win32kfull.sys .text:0xa43e0, 0x1596d bytes
    // win32kfull.sys .text:0xf5e80, 0x1659e bytes
    // win32kfull.sys .text:0xa4f50, 0x1596d bytes
    //
    _f21(sdk::unknown_ptr) user_physical_to_logical_point;
    
    // [NtUserPostMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xaa440, 0x13864 bytes
    // win32kfull.sys .text:0x59170, 0x1596d bytes
    // win32kfull.sys .text:0x29480, 0x1659e bytes
    // win32kfull.sys .text:0x59590, 0x1596d bytes
    //
    _f22(sdk::unknown_ptr) user_post_message;
    
    // [NtUserPostThreadMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa13b0, 0x13864 bytes
    // win32kfull.sys .text:0x530f0, 0x1596d bytes
    // win32kfull.sys .text:0x86fc0, 0x1659e bytes
    // win32kfull.sys .text:0x53510, 0x1596d bytes
    //
    _f23(sdk::unknown_ptr) user_post_thread_message;
    
    // [NtUserPrintWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a820, 0x13864 bytes
    // win32kfull.sys .text:0x200fb0, 0x1596d bytes
    // win32kfull.sys .text:0x1fdbd0, 0x1659e bytes
    // win32kfull.sys .text:0x200e20, 0x1596d bytes
    //
    _f24(sdk::unknown_ptr) user_print_window;
    
    // [NtUserProcessConnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf4420, 0x13864 bytes
    // win32kfull.sys .text:0xaf820, 0x1596d bytes
    // win32kfull.sys .text:0xa2930, 0x1659e bytes
    // win32kfull.sys .text:0xb0390, 0x1596d bytes
    //
    _f25(sdk::unknown_ptr) user_process_connect;
    
    // [NtUserPromoteMouseInPointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a8e0, 0x13864 bytes
    // win32kfull.sys .text:0x201210, 0x1596d bytes
    // win32kfull.sys .text:0x1fde30, 0x1659e bytes
    // win32kfull.sys .text:0x201080, 0x1596d bytes
    //
    _f26(sdk::unknown_ptr) user_promote_mouse_in_pointer;
    
    // [NtUserPromotePointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21a960, 0x13864 bytes
    // win32kfull.sys .text:0x201280, 0x1596d bytes
    // win32kfull.sys .text:0x1fdea0, 0x1659e bytes
    // win32kfull.sys .text:0x2010f0, 0x1596d bytes
    //
    _f27(sdk::unknown_ptr) user_promote_pointer;
    
    // [NtUserQueryBSDRWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21aa10, 0x13864 bytes
    // win32kfull.sys .text:0x201340, 0x1596d bytes
    // win32kfull.sys .text:0x1fdf60, 0x1659e bytes
    // win32kfull.sys .text:0x2011b0, 0x1596d bytes
    //
    _f28(sdk::unknown_ptr) user_query_bsdr_window;
    
    // [NtUserQueryDisplayConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1491d0, 0x13864 bytes
    // win32kbase.sys .text:0x3dcb0, 0x243e0 bytes
    // win32kbase.sys .text:0x56c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x471f0, 0x243e0 bytes
    //
    _f29(sdk::unknown_ptr) user_query_display_config;
    
    // [NtUserQueryInformationThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x18b90, 0x13864 bytes
    // win32kfull.sys .text:0xbe720, 0x1596d bytes
    // win32kfull.sys .text:0xfb610, 0x1659e bytes
    // win32kfull.sys .text:0xbf290, 0x1596d bytes
    //
    _f30(sdk::unknown_ptr) user_query_information_thread;
    
    // [NtUserQueryInputContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10aa50, 0x13864 bytes
    // win32kfull.sys .text:0x109200, 0x1596d bytes
    // win32kfull.sys .text:0x101ac0, 0x1659e bytes
    // win32kfull.sys .text:0x10a130, 0x1596d bytes
    //
    _f31(sdk::unknown_ptr) user_query_input_context;
    
    // [NtUserQuerySendMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21aa50, 0x13864 bytes
    // win32kfull.sys .text:0x201390, 0x1596d bytes
    // win32kfull.sys .text:0x1fdfa0, 0x1659e bytes
    // win32kfull.sys .text:0x201200, 0x1596d bytes
    //
    _f32(sdk::unknown_ptr) user_query_send_message;
    
    // [NtUserQueryWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xde5c0, 0x13864 bytes
    // win32kfull.sys .text:0xe01c0, 0x1596d bytes
    // win32kfull.sys .text:0xa3980, 0x1659e bytes
    // win32kfull.sys .text:0xe0e80, 0x1596d bytes
    //
    _f33(sdk::unknown_ptr) user_query_window;
    
    // [NtUserRealChildWindowFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ab00, 0x13864 bytes
    // win32kfull.sys .text:0x201480, 0x1596d bytes
    // win32kfull.sys .text:0x1fe080, 0x1659e bytes
    // win32kfull.sys .text:0x2012f0, 0x1596d bytes
    //
    _f34(sdk::unknown_ptr) user_real_child_window_from_point;
    
    // [NtUserRealInternalGetMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf9480, 0x13864 bytes
    // win32kfull.sys .text:0x59080, 0x1596d bytes
    // win32kfull.sys .text:0xf1c00, 0x1659e bytes
    // win32kfull.sys .text:0x594a0, 0x1596d bytes
    //
    _f35(sdk::unknown_ptr) user_real_internal_get_message;
    
    // [NtUserRealWaitMessageEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ab50, 0x13864 bytes
    // win32kfull.sys .text:0x2014f0, 0x1596d bytes
    // win32kfull.sys .text:0x1fe0f0, 0x1659e bytes
    // win32kfull.sys .text:0x201360, 0x1596d bytes
    //
    _f36(sdk::unknown_ptr) user_real_wait_message_ex;
    
    // [NtUserRedrawWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa45c0, 0x13864 bytes
    // win32kfull.sys .text:0x82cc0, 0x1596d bytes
    // win32kfull.sys .text:0xeac80, 0x1659e bytes
    // win32kfull.sys .text:0x83830, 0x1596d bytes
    //
    _f37(sdk::unknown_ptr) user_redraw_window;
    
    // [NtUserRegisterBSDRWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x122830, 0x13864 bytes
    // win32kfull.sys .text:0x125a80, 0x1596d bytes
    // win32kfull.sys .text:0x115000, 0x1659e bytes
    // win32kfull.sys .text:0x1269c0, 0x1596d bytes
    //
    _f38(sdk::unknown_ptr) user_register_bsdr_window;
    
    // [NtUserRegisterClassExWOW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x52bb0, 0x13864 bytes
    // win32kfull.sys .text:0xa2cd0, 0x1596d bytes
    // win32kfull.sys .text:0x50370, 0x1659e bytes
    // win32kfull.sys .text:0xa3840, 0x1596d bytes
    //
    _f39(sdk::unknown_ptr) user_register_class_ex_wow;
    
    // [NtUserRegisterDManipHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x103d40, 0x13864 bytes
    // win32kfull.sys .text:0x119400, 0x1596d bytes
    // win32kfull.sys .text:0x8af60, 0x1659e bytes
    // win32kfull.sys .text:0x11a330, 0x1596d bytes
    //
    _f40(sdk::unknown_ptr) user_register_d_manip_hook;
    
    // [NtUserRegisterEdgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114a70, 0x13864 bytes
    // win32kfull.sys .text:0x201570, 0x1596d bytes
    // win32kfull.sys .text:0x1fe1b0, 0x1659e bytes
    // win32kfull.sys .text:0x2013e0, 0x1596d bytes
    //
    _f41(sdk::unknown_ptr) user_register_edgy;
    
    // [NtUserRegisterErrorReportingDialog]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21abc0, 0x13864 bytes
    // win32kfull.sys .text:0x2017a0, 0x1596d bytes
    // win32kfull.sys .text:0x1fe3e0, 0x1659e bytes
    // win32kfull.sys .text:0x201610, 0x1596d bytes
    //
    _f42(sdk::unknown_ptr) user_register_error_reporting_dialog;
    
    // [NtUserRegisterHotKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x33cb0, 0x13864 bytes
    // win32kfull.sys .text:0xd2f10, 0x1596d bytes
    // win32kfull.sys .text:0x95f20, 0x1659e bytes
    // win32kfull.sys .text:0xd3bd0, 0x1596d bytes
    //
    _f43(sdk::unknown_ptr) user_register_hot_key;
    
    // [NtUserRegisterManipulationThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x126a40, 0x13864 bytes
    // win32kbase.sys .text:0xc57a0, 0x243e0 bytes
    // win32kbase.sys .text:0xd7da0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbe790, 0x243e0 bytes
    //
    _f44(sdk::unknown_ptr) user_register_manipulation_thread;
    
    // [NtUserRegisterPointerDeviceNotifications]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11c400, 0x13864 bytes
    // win32kfull.sys .text:0x125d80, 0x1596d bytes
    // win32kfull.sys .text:0x115410, 0x1659e bytes
    // win32kfull.sys .text:0x126cc0, 0x1596d bytes
    //
    _f45(sdk::unknown_ptr) user_register_pointer_device_notifications;
    
    // [NtUserRegisterPointerInputTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ac10, 0x13864 bytes
    // win32kfull.sys .text:0x201810, 0x1596d bytes
    // win32kfull.sys .text:0x1fe440, 0x1659e bytes
    // win32kfull.sys .text:0x201680, 0x1596d bytes
    //
    _f46(sdk::unknown_ptr) user_register_pointer_input_target;
    
    // [NtUserRegisterRawInputDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c140, 0x13864 bytes
    // win32kfull.sys .text:0xfd000, 0x1596d bytes
    // win32kfull.sys .text:0xf8ab0, 0x1659e bytes
    // win32kfull.sys .text:0xfdf30, 0x1596d bytes
    //
    _f47(sdk::unknown_ptr) user_register_raw_input_devices;
    
    // [NtUserRegisterServicesProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ad00, 0x13864 bytes
    // win32kfull.sys .text:0x201920, 0x1596d bytes
    // win32kfull.sys .text:0x1fe550, 0x1659e bytes
    // win32kfull.sys .text:0x201790, 0x1596d bytes
    //
    _f48(sdk::unknown_ptr) user_register_services_process;
    
    // [NtUserRegisterSessionPort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1491e0, 0x13864 bytes
    // win32kbase.sys .text:0x2b400, 0x243e0 bytes
    // win32kbase.sys .text:0x6df90, 0x27ef0 bytes
    // win32kbase.sys .text:0xc1790, 0x243e0 bytes
    //
    _f49(sdk::unknown_ptr) user_register_session_port;
    
    // [NtUserRegisterShellPTPListener]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124b50, 0x13864 bytes
    // win32kfull.sys .text:0x124750, 0x1596d bytes
    // win32kfull.sys .text:0x113ee0, 0x1659e bytes
    // win32kfull.sys .text:0x125690, 0x1596d bytes
    //
    _f50(sdk::unknown_ptr) user_register_shell_ptp_listener;
    
    // [NtUserRegisterTasklist]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21af90, 0x13864 bytes
    // win32kfull.sys .text:0x2019b0, 0x1596d bytes
    // win32kfull.sys .text:0x1fe670, 0x1659e bytes
    // win32kfull.sys .text:0x201820, 0x1596d bytes
    //
    _f51(sdk::unknown_ptr) user_register_tasklist;
    
    // [NtUserRegisterTouchHitTestingWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x113f20, 0x13864 bytes
    // win32kfull.sys .text:0xcc850, 0x1596d bytes
    // win32kfull.sys .text:0x106b50, 0x1659e bytes
    // win32kfull.sys .text:0xcd510, 0x1596d bytes
    //
    _f52(sdk::unknown_ptr) user_register_touch_hit_testing_window;
    
    // [NtUserRegisterTouchPadCapable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x126cb0, 0x13864 bytes
    // win32kbase.sys .text:0xbb460, 0x243e0 bytes
    // win32kbase.sys .text:0xd87b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4fc0, 0x243e0 bytes
    //
    _f53(sdk::unknown_ptr) user_register_touch_pad_capable;
    
    // [NtUserRegisterUserApiHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x103ad0, 0x13864 bytes
    // win32kfull.sys .text:0x122ed0, 0x1596d bytes
    // win32kfull.sys .text:0x8b1e0, 0x1659e bytes
    // win32kfull.sys .text:0x123e10, 0x1596d bytes
    //
    _f54(sdk::unknown_ptr) user_register_user_api_hook;
    
    // [NtUserRegisterWindowMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xecf50, 0x13864 bytes
    // win32kfull.sys .text:0xe8ea0, 0x1596d bytes
    // win32kfull.sys .text:0xe1680, 0x1659e bytes
    // win32kfull.sys .text:0xe9be0, 0x1596d bytes
    //
    _f55(sdk::unknown_ptr) user_register_window_message;
    
    // [NtUserReleaseDwmHitTestWaiters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _f56(sdk::unknown_ptr) user_release_dwm_hit_test_waiters;
    
    // [NtUserRemoteConnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1133b0, 0x13864 bytes
    // win32kfull.sys .text:0x1231d0, 0x1596d bytes
    // win32kfull.sys .text:0x112b80, 0x1659e bytes
    // win32kfull.sys .text:0x124110, 0x1596d bytes
    //
    _f57(sdk::unknown_ptr) user_remote_connect;
    
    // [NtUserRemoteRedrawRectangle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21aff0, 0x13864 bytes
    // win32kfull.sys .text:0x201a30, 0x1596d bytes
    // win32kfull.sys .text:0x1fe800, 0x1659e bytes
    // win32kfull.sys .text:0x2018a0, 0x1596d bytes
    //
    _f58(sdk::unknown_ptr) user_remote_redraw_rectangle;
    
    // [NtUserRemoteRedrawScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b080, 0x13864 bytes
    // win32kfull.sys .text:0x201ae0, 0x1596d bytes
    // win32kfull.sys .text:0x1fe8a0, 0x1659e bytes
    // win32kfull.sys .text:0x201950, 0x1596d bytes
    //
    _f59(sdk::unknown_ptr) user_remote_redraw_screen;
    
    // [NtUserRemoteStopScreenUpdates]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b0e0, 0x13864 bytes
    // win32kfull.sys .text:0x201b60, 0x1596d bytes
    // win32kfull.sys .text:0x1fea40, 0x1659e bytes
    // win32kfull.sys .text:0x2019d0, 0x1596d bytes
    //
    _f60(sdk::unknown_ptr) user_remote_stop_screen_updates;
    
    // [NtUserRemoveClipboardFormatListener]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbb90, 0x13864 bytes
    // win32kfull.sys .text:0xc53d0, 0x1596d bytes
    // win32kfull.sys .text:0xd19b0, 0x1659e bytes
    // win32kfull.sys .text:0xc6090, 0x1596d bytes
    //
    _f61(sdk::unknown_ptr) user_remove_clipboard_format_listener;
    
    // [NtUserRemoveInjectionDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc1ae0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1453e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1796c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x142a00, 0x243e0 bytes
    //
    _f62(sdk::unknown_ptr) user_remove_injection_device;
    
    // [NtUserRemoveMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11c570, 0x13864 bytes
    // win32kfull.sys .text:0x1123b0, 0x1596d bytes
    // win32kfull.sys .text:0x106c60, 0x1659e bytes
    // win32kfull.sys .text:0x1132e0, 0x1596d bytes
    //
    _f63(sdk::unknown_ptr) user_remove_menu;
    
    // [NtUserRemoveProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x98b80, 0x13864 bytes
    // win32kfull.sys .text:0xf22a0, 0x1596d bytes
    // win32kfull.sys .text:0xe2120, 0x1659e bytes
    // win32kfull.sys .text:0xf30c0, 0x1596d bytes
    //
    _f64(sdk::unknown_ptr) user_remove_prop;
    
    // [NtUserReportInertia]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc70, 0x13864 bytes
    // win32kbase.sys .text:0x3c10, 0x243e0 bytes
    // win32kbase.sys .text:0x2cc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3c10, 0x243e0 bytes
    //
    _f65(sdk::unknown_ptr) user_report_inertia;
    
    // [NtUserResolveDesktopForWOW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b140, 0x13864 bytes
    // win32kfull.sys .text:0x201d10, 0x1596d bytes
    // win32kfull.sys .text:0x1feb80, 0x1659e bytes
    // win32kfull.sys .text:0x201b80, 0x1596d bytes
    //
    _f66(sdk::unknown_ptr) user_resolve_desktop_for_wow;
    
    // [NtUserSBGetParms]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf30c0, 0x13864 bytes
    // win32kfull.sys .text:0xeaf60, 0x1596d bytes
    // win32kfull.sys .text:0xe4590, 0x1659e bytes
    // win32kfull.sys .text:0xebca0, 0x1596d bytes
    //
    _f67(sdk::unknown_ptr) user_sb_get_parms;
    
    // [NtUserScrollDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa22a0, 0x13864 bytes
    // win32kfull.sys .text:0xec740, 0x1596d bytes
    // win32kfull.sys .text:0x39290, 0x1659e bytes
    // win32kfull.sys .text:0xed480, 0x1596d bytes
    //
    _f68(sdk::unknown_ptr) user_scroll_dc;
    
    // [NtUserScrollWindowEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3d830, 0x13864 bytes
    // win32kfull.sys .text:0x7d0a0, 0x1596d bytes
    // win32kfull.sys .text:0x39f90, 0x1659e bytes
    // win32kfull.sys .text:0x7dc10, 0x1596d bytes
    //
    _f69(sdk::unknown_ptr) user_scroll_window_ex;
    
    // [NtUserSelectPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf76b0, 0x13864 bytes
    // win32kfull.sys .text:0xf79b0, 0x1596d bytes
    // win32kfull.sys .text:0xeb9f0, 0x1659e bytes
    // win32kfull.sys .text:0xf8840, 0x1596d bytes
    //
    _f70(sdk::unknown_ptr) user_select_palette;
    
    // [NtUserSendEventMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xba90, 0x13864 bytes
    // win32kfull.sys .text:0x6c30, 0x1596d bytes
    // win32kfull.sys .text:0x3b40, 0x1659e bytes
    // win32kfull.sys .text:0x6fe0, 0x1596d bytes
    //
    _f71(sdk::unknown_ptr) user_send_event_message;
    
    // [NtUserSendInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x506f0, 0x13864 bytes
    // win32kfull.sys .text:0xd3ee0, 0x1596d bytes
    // win32kfull.sys .text:0xa85f0, 0x1659e bytes
    // win32kfull.sys .text:0xd4ba0, 0x1596d bytes
    //
    _f72(sdk::unknown_ptr) user_send_input;
    
    // [NtUserSendInteractiveControlHapticsReport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b2e0, 0x13864 bytes
    // win32kfull.sys .text:0x201f10, 0x1596d bytes
    // win32kfull.sys .text:0x1fedd0, 0x1659e bytes
    // win32kfull.sys .text:0x201d80, 0x1596d bytes
    //
    _f73(sdk::unknown_ptr) user_send_interactive_control_haptics_report;
    
    // [NtUserSetActivationFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xac50, 0x13864 bytes
    // win32kfull.sys .text:0x7fd0, 0x1596d bytes
    // win32kfull.sys .text:0x4210, 0x1659e bytes
    // win32kfull.sys .text:0x8380, 0x1596d bytes
    //
    _f74(sdk::unknown_ptr) user_set_activation_filter;
    
    // [NtUserSetActiveProcessForMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x36e70, 0x13864 bytes
    // win32kfull.sys .text:0x1174e0, 0x1596d bytes
    // win32kfull.sys .text:0x1088f0, 0x1659e bytes
    // win32kfull.sys .text:0x118410, 0x1596d bytes
    //
    _f75(sdk::unknown_ptr) user_set_active_process_for_monitor;
    
    // [NtUserSetActiveWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121ea0, 0x13864 bytes
    // win32kfull.sys .text:0x1166d0, 0x1596d bytes
    // win32kfull.sys .text:0x108c30, 0x1659e bytes
    // win32kfull.sys .text:0x117600, 0x1596d bytes
    //
    _f76(sdk::unknown_ptr) user_set_active_window;
    
    // [NtUserSetAppImeLevel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b3e0, 0x13864 bytes
    // win32kfull.sys .text:0x202000, 0x1596d bytes
    // win32kfull.sys .text:0x1feec0, 0x1659e bytes
    // win32kfull.sys .text:0x201e70, 0x1596d bytes
    //
    _f77(sdk::unknown_ptr) user_set_app_ime_level;
    
    // [NtUserSetAutoRotation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b480, 0x13864 bytes
    // win32kfull.sys .text:0x2020c0, 0x1596d bytes
    // win32kfull.sys .text:0x1fef80, 0x1659e bytes
    // win32kfull.sys .text:0x201f30, 0x1596d bytes
    //
    _f78(sdk::unknown_ptr) user_set_auto_rotation;
    
    // [NtUserSetBrokeredForeground]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf700, 0x13864 bytes
    // win32kfull.sys .text:0xc13d0, 0x1596d bytes
    // win32kfull.sys .text:0x1152a0, 0x1659e bytes
    // win32kfull.sys .text:0xc1f40, 0x1596d bytes
    //
    _f79(sdk::unknown_ptr) user_set_brokered_foreground;
    
    // [NtUserSetCalibrationData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b4e0, 0x13864 bytes
    // win32kfull.sys .text:0x2022c0, 0x1596d bytes
    // win32kfull.sys .text:0x1ff180, 0x1659e bytes
    // win32kfull.sys .text:0x202130, 0x1596d bytes
    //
    _f80(sdk::unknown_ptr) user_set_calibration_data;
    
    // [NtUserSetCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21870, 0x13864 bytes
    // win32kfull.sys .text:0x329a0, 0x1596d bytes
    // win32kfull.sys .text:0xa66b0, 0x1659e bytes
    // win32kfull.sys .text:0x32db0, 0x1596d bytes
    //
    _f81(sdk::unknown_ptr) user_set_capture;
    
    // [NtUserSetChildWindowNoActivate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x120c00, 0x13864 bytes
    // win32kfull.sys .text:0x121310, 0x1596d bytes
    // win32kfull.sys .text:0x111aa0, 0x1659e bytes
    // win32kfull.sys .text:0x122250, 0x1596d bytes
    //
    _f82(sdk::unknown_ptr) user_set_child_window_no_activate;
    
    // [NtUserSetClassLong]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b760, 0x13864 bytes
    // win32kfull.sys .text:0x14fef0, 0x1596d bytes
    // win32kfull.sys .text:0x1ff500, 0x1659e bytes
    // win32kfull.sys .text:0x150e30, 0x1596d bytes
    //
    _f83(sdk::unknown_ptr) user_set_class_long;
    
    // [NtUserSetClassLongPtr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1171c0, 0x13864 bytes
    // win32kfull.sys .text:0xf1930, 0x1596d bytes
    // win32kfull.sys .text:0x10cab0, 0x1659e bytes
    // win32kfull.sys .text:0xf2750, 0x1596d bytes
    //
    _f84(sdk::unknown_ptr) user_set_class_long_ptr;
    
    // [NtUserSetClassWord]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b820, 0x13864 bytes
    // win32kfull.sys .text:0x202580, 0x1596d bytes
    // win32kfull.sys .text:0x1ff600, 0x1659e bytes
    // win32kfull.sys .text:0x2023f0, 0x1596d bytes
    //
    _f85(sdk::unknown_ptr) user_set_class_word;
    
    // [NtUserSetClipboardData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b880, 0x13864 bytes
    // win32kfull.sys .text:0xd6480, 0x1596d bytes
    // win32kfull.sys .text:0x139580, 0x1659e bytes
    // win32kfull.sys .text:0xd7140, 0x1596d bytes
    //
    _f86(sdk::unknown_ptr) user_set_clipboard_data;
    
    // [NtUserSetClipboardViewer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141330, 0x13864 bytes
    // win32kfull.sys .text:0xda130, 0x1596d bytes
    // win32kfull.sys .text:0x139b70, 0x1659e bytes
    // win32kfull.sys .text:0xdadf0, 0x1596d bytes
    //
    _f87(sdk::unknown_ptr) user_set_clipboard_viewer;
    
    // [NtUserSetCoreWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23210, 0x13864 bytes
    // win32kfull.sys .text:0xc8bc0, 0x1596d bytes
    // win32kfull.sys .text:0x8bd30, 0x1659e bytes
    // win32kfull.sys .text:0xc9880, 0x1596d bytes
    //
    _f88(sdk::unknown_ptr) user_set_core_window;
    
    // [NtUserSetCoreWindowPartner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21b9e0, 0x13864 bytes
    // win32kfull.sys .text:0x47e0, 0x1596d bytes
    // win32kfull.sys .text:0x1ff680, 0x1659e bytes
    // win32kfull.sys .text:0x4b90, 0x1596d bytes
    //
    _f89(sdk::unknown_ptr) user_set_core_window_partner;
    
    // [NtUserSetCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x108730, 0x13864 bytes
    // win32kfull.sys .text:0xae100, 0x1596d bytes
    // win32kfull.sys .text:0xaab90, 0x1659e bytes
    // win32kfull.sys .text:0xaec70, 0x1596d bytes
    //
    _f90(sdk::unknown_ptr) user_set_cursor;
    
    // [NtUserSetCursorContents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ba80, 0x13864 bytes
    // win32kfull.sys .text:0x202600, 0x1596d bytes
    // win32kfull.sys .text:0x1ff810, 0x1659e bytes
    // win32kfull.sys .text:0x202470, 0x1596d bytes
    //
    _f91(sdk::unknown_ptr) user_set_cursor_contents;
    
    // [NtUserSetCursorIconData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x625d0, 0x13864 bytes
    // win32kfull.sys .text:0x79930, 0x1596d bytes
    // win32kfull.sys .text:0x1ff860, 0x1659e bytes
    // win32kfull.sys .text:0x7a4a0, 0x1596d bytes
    //
    _f92(sdk::unknown_ptr) user_set_cursor_icon_data;
    
    // [NtUserSetDisplayAutoRotationPreferences]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc160, 0x13864 bytes
    // win32kfull.sys .text:0x88f0, 0x1596d bytes
    // win32kfull.sys .text:0x5090, 0x1659e bytes
    // win32kfull.sys .text:0x8ca0, 0x1596d bytes
    //
    _f93(sdk::unknown_ptr) user_set_display_auto_rotation_preferences;
    
    // [NtUserSetDisplayConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1491f0, 0x13864 bytes
    // win32kbase.sys .text:0x145b60, 0x243e0 bytes
    // win32kbase.sys .text:0x179c20, 0x27ef0 bytes
    // win32kbase.sys .text:0x143180, 0x243e0 bytes
    //
    _f94(sdk::unknown_ptr) user_set_display_config;
    
    // [NtUserSetDisplayMapping]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21bb00, 0x13864 bytes
    // win32kfull.sys .text:0x202890, 0x1596d bytes
    // win32kfull.sys .text:0x1ffa70, 0x1659e bytes
    // win32kfull.sys .text:0x202700, 0x1596d bytes
    //
    _f95(sdk::unknown_ptr) user_set_display_mapping;
    
    // [NtUserSetFallbackForeground]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21bc40, 0x13864 bytes
    // win32kfull.sys .text:0x202a10, 0x1596d bytes
    // win32kfull.sys .text:0x1ffd20, 0x1659e bytes
    // win32kfull.sys .text:0x202880, 0x1596d bytes
    //
    _f96(sdk::unknown_ptr) user_set_fallback_foreground;
    
    // [NtUserSetFeatureReportResponse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc2550, 0x1eb80 bytes
    // win32kbase.sys .text:0x146230, 0x243e0 bytes
    // win32kbase.sys .text:0x17a5c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x143850, 0x243e0 bytes
    //
    _f97(sdk::unknown_ptr) user_set_feature_report_response;
    
    // [NtUserSetFocus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x42bb0, 0x13864 bytes
    // win32kfull.sys .text:0x31370, 0x1596d bytes
    // win32kfull.sys .text:0xc0b10, 0x1659e bytes
    // win32kfull.sys .text:0x31780, 0x1596d bytes
    //
    _f98(sdk::unknown_ptr) user_set_focus;
    
    // [NtUserSetGestureConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11c660, 0x13864 bytes
    // win32kfull.sys .text:0x122b90, 0x1596d bytes
    // win32kfull.sys .text:0x1127a0, 0x1659e bytes
    // win32kfull.sys .text:0x123ad0, 0x1596d bytes
    //
    _f99(sdk::unknown_ptr) user_set_gesture_config;
    
    // [NtUserSetImeHotKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10aed0, 0x13864 bytes
    // win32kfull.sys .text:0x109600, 0x1596d bytes
    // win32kfull.sys .text:0xff410, 0x1659e bytes
    // win32kfull.sys .text:0x10a530, 0x1596d bytes
    //
    _g00(sdk::unknown_ptr) user_set_ime_hot_key;
    
    // [NtUserSetImeInfoEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x122c60, 0x13864 bytes
    // win32kfull.sys .text:0xc4730, 0x1596d bytes
    // win32kfull.sys .text:0x113500, 0x1659e bytes
    // win32kfull.sys .text:0xc53f0, 0x1596d bytes
    //
    _g01(sdk::unknown_ptr) user_set_ime_info_ex;
    
    // [NtUserSetImeOwnerWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4c520, 0x13864 bytes
    // win32kfull.sys .text:0x4e030, 0x1596d bytes
    // win32kfull.sys .text:0xb1ff0, 0x1659e bytes
    // win32kfull.sys .text:0x4e450, 0x1596d bytes
    //
    _g02(sdk::unknown_ptr) user_set_ime_owner_window;
    
    // [NtUserSetInformationThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1bcb0, 0x13864 bytes
    // win32kfull.sys .text:0xbed90, 0x1596d bytes
    // win32kfull.sys .text:0x9bf80, 0x1659e bytes
    // win32kfull.sys .text:0xbf900, 0x1596d bytes
    //
    _g03(sdk::unknown_ptr) user_set_information_thread;
    
    // [NtUserSetInteractiveControlFocus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21bd10, 0x13864 bytes
    // win32kfull.sys .text:0x202ba0, 0x1596d bytes
    // win32kfull.sys .text:0x1ffea0, 0x1659e bytes
    // win32kfull.sys .text:0x202a10, 0x1596d bytes
    //
    _g04(sdk::unknown_ptr) user_set_interactive_control_focus;
    
    // [NtUserSetInteractiveCtrlRotationAngle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21bde0, 0x13864 bytes
    // win32kfull.sys .text:0x202cc0, 0x1596d bytes
    // win32kfull.sys .text:0x1fffe0, 0x1659e bytes
    // win32kfull.sys .text:0x202b30, 0x1596d bytes
    //
    _g05(sdk::unknown_ptr) user_set_interactive_ctrl_rotation_angle;
    
    // [NtUserSetInternalWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21be60, 0x13864 bytes
    // win32kfull.sys .text:0x202d50, 0x1596d bytes
    // win32kfull.sys .text:0x200070, 0x1659e bytes
    // win32kfull.sys .text:0x202bc0, 0x1596d bytes
    //
    _g06(sdk::unknown_ptr) user_set_internal_window_pos;
    
    // [NtUserSetKeyboardState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1047f0, 0x13864 bytes
    // win32kfull.sys .text:0x141940, 0x1596d bytes
    // win32kbase.sys .text:0x5910, 0x27ef0 bytes
    // win32kfull.sys .text:0x142880, 0x1596d bytes
    //
    _g07(sdk::unknown_ptr) user_set_keyboard_state;
    
    // [NtUserSetLayeredWindowAttributes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1066f0, 0x13864 bytes
    // win32kfull.sys .text:0x70e60, 0x1596d bytes
    // win32kfull.sys .text:0xb53f0, 0x1659e bytes
    // win32kfull.sys .text:0x719d0, 0x1596d bytes
    //
    _g08(sdk::unknown_ptr) user_set_layered_window_attributes;
    
    // [NtUserSetManipulationInputTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21bf90, 0x13864 bytes
    // win32kbase.sys .text:0x1464f0, 0x243e0 bytes
    // win32kbase.sys .text:0x17aeb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x143b10, 0x243e0 bytes
    //
    _g09(sdk::unknown_ptr) user_set_manipulation_input_target;
    
    // [NtUserSetMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13bee0, 0x13864 bytes
    // win32kfull.sys .text:0x145f90, 0x1596d bytes
    // win32kfull.sys .text:0x13ad50, 0x1659e bytes
    // win32kfull.sys .text:0x146ed0, 0x1596d bytes
    //
    _g10(sdk::unknown_ptr) user_set_menu;
    
    // [NtUserSetMenuContextHelpId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c1a0, 0x13864 bytes
    // win32kfull.sys .text:0x202f40, 0x1596d bytes
    // win32kfull.sys .text:0x200260, 0x1659e bytes
    // win32kfull.sys .text:0x202db0, 0x1596d bytes
    //
    _g11(sdk::unknown_ptr) user_set_menu_context_help_id;
    
    // [NtUserSetMenuDefaultItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10b130, 0x13864 bytes
    // win32kfull.sys .text:0x11d7c0, 0x1596d bytes
    // win32kfull.sys .text:0x10d750, 0x1659e bytes
    // win32kfull.sys .text:0x11e6c0, 0x1596d bytes
    //
    _g12(sdk::unknown_ptr) user_set_menu_default_item;
    
    // [NtUserSetMenuFlagRtoL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c210, 0x13864 bytes
    // win32kfull.sys .text:0x203010, 0x1596d bytes
    // win32kfull.sys .text:0x200340, 0x1659e bytes
    // win32kfull.sys .text:0x202e80, 0x1596d bytes
    //
    _g13(sdk::unknown_ptr) user_set_menu_flag_rto_l;
    
    // [NtUserSetMirrorRendering]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c270, 0x13864 bytes
    // win32kfull.sys .text:0x2030d0, 0x1596d bytes
    // win32kfull.sys .text:0x200460, 0x1659e bytes
    // win32kfull.sys .text:0x202f40, 0x1596d bytes
    //
    _g14(sdk::unknown_ptr) user_set_mirror_rendering;
    
    // [NtUserSetObjectInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c330, 0x13864 bytes
    // win32kfull.sys .text:0x2031d0, 0x1596d bytes
    // win32kfull.sys .text:0x200630, 0x1659e bytes
    // win32kfull.sys .text:0x203040, 0x1596d bytes
    //
    _g15(sdk::unknown_ptr) user_set_object_information;
    
    // [NtUserSetParent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1120f0, 0x13864 bytes
    // win32kfull.sys .text:0x10c180, 0x1596d bytes
    // win32kfull.sys .text:0x1014a0, 0x1659e bytes
    // win32kfull.sys .text:0x10d0b0, 0x1596d bytes
    //
    _g16(sdk::unknown_ptr) user_set_parent;
    
    // [NtUserSetPrecisionTouchPadConfiguration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c4a0, 0x13864 bytes
    // win32kbase.sys .text:0x146bd0, 0x243e0 bytes
    // win32kbase.sys .text:0x17b800, 0x27ef0 bytes
    // win32kbase.sys .text:0x1441f0, 0x243e0 bytes
    //
    _g17(sdk::unknown_ptr) user_set_precision_touch_pad_configuration;
    
    // [NtUserSetProcessDpiAwarenessContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73030, 0x1eb80 bytes
    // win32kbase.sys .text:0x9b710, 0x243e0 bytes
    // win32kbase.sys .text:0xa4cd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x84540, 0x243e0 bytes
    //
    _g18(sdk::unknown_ptr) user_set_process_dpi_awareness_context;
    
    // [NtUserSetProcessInteractionFlags]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c6c0, 0x13864 bytes
    // win32kfull.sys .text:0x203360, 0x1596d bytes
    // win32kfull.sys .text:0x200830, 0x1659e bytes
    // win32kfull.sys .text:0x2031d0, 0x1596d bytes
    //
    _g19(sdk::unknown_ptr) user_set_process_interaction_flags;
    
    // [NtUserSetProcessRestrictionExemption]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c720, 0x13864 bytes
    // win32kfull.sys .text:0x2033e0, 0x1596d bytes
    // win32kfull.sys .text:0x2008a0, 0x1659e bytes
    // win32kfull.sys .text:0x203250, 0x1596d bytes
    //
    _g20(sdk::unknown_ptr) user_set_process_restriction_exemption;
    
    // [NtUserSetProcessUIAccessZorder]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c780, 0x13864 bytes
    // win32kfull.sys .text:0x203470, 0x1596d bytes
    // win32kfull.sys .text:0x200930, 0x1659e bytes
    // win32kfull.sys .text:0x2032e0, 0x1596d bytes
    //
    _g21(sdk::unknown_ptr) user_set_process_ui_access_zorder;
    
    // [NtUserSetProcessWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf8250, 0x13864 bytes
    // win32kbase.sys .text:0xb57f0, 0x243e0 bytes
    // win32kbase.sys .text:0xc89b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xaee70, 0x243e0 bytes
    //
    _g22(sdk::unknown_ptr) user_set_process_window_station;
    
    // [NtUserSetProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x98a80, 0x13864 bytes
    // win32kfull.sys .text:0xd1f50, 0x1596d bytes
    // win32kfull.sys .text:0x84410, 0x1659e bytes
    // win32kfull.sys .text:0xd2c10, 0x1596d bytes
    //
    _g23(sdk::unknown_ptr) user_set_prop;
    
    // [NtUserSetScrollInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3cd40, 0x13864 bytes
    // win32kfull.sys .text:0xe65b0, 0x1596d bytes
    // win32kfull.sys .text:0x5d70, 0x1659e bytes
    // win32kfull.sys .text:0xe72f0, 0x1596d bytes
    //
    _g24(sdk::unknown_ptr) user_set_scroll_info;
    
    // [NtUserSetSensorPresence]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c7d0, 0x13864 bytes
    // win32kfull.sys .text:0x2034e0, 0x1596d bytes
    // win32kfull.sys .text:0x200a20, 0x1659e bytes
    // win32kfull.sys .text:0x203350, 0x1596d bytes
    //
    _g25(sdk::unknown_ptr) user_set_sensor_presence;
    
    // [NtUserSetShellWindowEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc570, 0x13864 bytes
    // win32kfull.sys .text:0xbbbb0, 0x1596d bytes
    // win32kfull.sys .text:0x8bb80, 0x1659e bytes
    // win32kfull.sys .text:0xbc720, 0x1596d bytes
    //
    _g26(sdk::unknown_ptr) user_set_shell_window_ex;
    
    // [NtUserSetSysColors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149200, 0x13864 bytes
    // win32kbase.sys .text:0xbcbc0, 0x243e0 bytes
    // win32kbase.sys .text:0x81ef0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8acc0, 0x243e0 bytes
    //
    _g27(sdk::unknown_ptr) user_set_sys_colors;
    
    // [NtUserSetSystemCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c820, 0x13864 bytes
    // win32kfull.sys .text:0x203560, 0x1596d bytes
    // win32kfull.sys .text:0x200a90, 0x1659e bytes
    // win32kfull.sys .text:0x2033d0, 0x1596d bytes
    //
    _g28(sdk::unknown_ptr) user_set_system_cursor;
    
    // [NtUserSetSystemMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c870, 0x13864 bytes
    // win32kfull.sys .text:0x144e00, 0x1596d bytes
    // win32kfull.sys .text:0x139e10, 0x1659e bytes
    // win32kfull.sys .text:0x145d40, 0x1596d bytes
    //
    _g29(sdk::unknown_ptr) user_set_system_menu;
    
    // [NtUserSetSystemTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c940, 0x13864 bytes
    // win32kfull.sys .text:0x203620, 0x1596d bytes
    // win32kfull.sys .text:0x200b30, 0x1659e bytes
    // win32kfull.sys .text:0x203490, 0x1596d bytes
    //
    _g30(sdk::unknown_ptr) user_set_system_timer;
    
    // [NtUserSetThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x46e00, 0x13864 bytes
    // win32kfull.sys .text:0x4c930, 0x1596d bytes
    // win32kfull.sys .text:0x9a980, 0x1659e bytes
    // win32kfull.sys .text:0x4cd40, 0x1596d bytes
    //
    _g31(sdk::unknown_ptr) user_set_thread_desktop;
    
    // [NtUserSetThreadInputBlocked]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x99370, 0x13864 bytes
    // win32kfull.sys .text:0x7bd90, 0x1596d bytes
    // win32kfull.sys .text:0x50b10, 0x1659e bytes
    // win32kfull.sys .text:0x7c900, 0x1596d bytes
    //
    _g32(sdk::unknown_ptr) user_set_thread_input_blocked;
    
    // [NtUserSetThreadLayoutHandles]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c9d0, 0x13864 bytes
    // win32kfull.sys .text:0x2036c0, 0x1596d bytes
    // win32kfull.sys .text:0x200d40, 0x1659e bytes
    // win32kfull.sys .text:0x203530, 0x1596d bytes
    //
    _g33(sdk::unknown_ptr) user_set_thread_layout_handles;
    
    // [NtUserSetThreadState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x120950, 0x13864 bytes
    // win32kfull.sys .text:0x11e690, 0x1596d bytes
    // win32kfull.sys .text:0x10e3e0, 0x1659e bytes
    // win32kfull.sys .text:0x11f590, 0x1596d bytes
    //
    _g34(sdk::unknown_ptr) user_set_thread_state;
    
    // [NtUserSetTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3b590, 0x13864 bytes
    // win32kfull.sys .text:0x9c7e0, 0x1596d bytes
    // win32kfull.sys .text:0x58f10, 0x1659e bytes
    // win32kfull.sys .text:0x9d350, 0x1596d bytes
    //
    _g35(sdk::unknown_ptr) user_set_timer;
    
    // [NtUserSetWinEventHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfd250, 0x13864 bytes
    // win32kfull.sys .text:0x1cc20, 0x1596d bytes
    // win32kfull.sys .text:0x851b0, 0x1659e bytes
    // win32kfull.sys .text:0x1d030, 0x1596d bytes
    //
    _g36(sdk::unknown_ptr) user_set_win_event_hook;
    
    // [NtUserSetWindowBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10b3e0, 0x13864 bytes
    // win32kfull.sys .text:0xd2790, 0x1596d bytes
    // win32kfull.sys .text:0x95af0, 0x1659e bytes
    // win32kfull.sys .text:0xd3450, 0x1596d bytes
    //
    _g37(sdk::unknown_ptr) user_set_window_band;
    
    // [NtUserSetWindowCompositionAttribute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x43d10, 0x13864 bytes
    // win32kfull.sys .text:0x79c90, 0x1596d bytes
    // win32kfull.sys .text:0xaec00, 0x1659e bytes
    // win32kfull.sys .text:0x7a800, 0x1596d bytes
    //
    _g38(sdk::unknown_ptr) user_set_window_composition_attribute;
    
    // [NtUserSetWindowCompositionTransition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118060, 0x13864 bytes
    // win32kfull.sys .text:0x114900, 0x1596d bytes
    // win32kfull.sys .text:0x108310, 0x1659e bytes
    // win32kfull.sys .text:0x115830, 0x1596d bytes
    //
    _g39(sdk::unknown_ptr) user_set_window_composition_transition;
    
    // [NtUserSetWindowDisplayAffinity]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21cc50, 0x13864 bytes
    // win32kfull.sys .text:0x2039f0, 0x1596d bytes
    // win32kfull.sys .text:0x200f90, 0x1659e bytes
    // win32kfull.sys .text:0x203860, 0x1596d bytes
    //
    _g40(sdk::unknown_ptr) user_set_window_display_affinity;
    
    // [NtUserSetWindowFeedbackSetting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44480, 0x13864 bytes
    // win32kfull.sys .text:0xceaf0, 0x1596d bytes
    // win32kfull.sys .text:0xfd970, 0x1659e bytes
    // win32kfull.sys .text:0xcf7b0, 0x1596d bytes
    //
    _g41(sdk::unknown_ptr) user_set_window_feedback_setting;
    
    // [NtUserSetWindowFNID]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10ae30, 0x13864 bytes
    // win32kfull.sys .text:0xce690, 0x1596d bytes
    // win32kfull.sys .text:0xb3f10, 0x1659e bytes
    // win32kfull.sys .text:0xcf350, 0x1596d bytes
    //
    _g42(sdk::unknown_ptr) user_set_window_fnid;
    
    // [NtUserSetWindowLong]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf3230, 0x13864 bytes
    // win32kfull.sys .text:0xebca0, 0x1596d bytes
    // win32kfull.sys .text:0xa5cb0, 0x1659e bytes
    // win32kfull.sys .text:0xec9e0, 0x1596d bytes
    //
    _g43(sdk::unknown_ptr) user_set_window_long;
    
    // [NtUserSetWindowLongPtr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x517e0, 0x13864 bytes
    // win32kfull.sys .text:0xa52f0, 0x1596d bytes
    // win32kfull.sys .text:0xa8ad0, 0x1659e bytes
    // win32kfull.sys .text:0xa5e60, 0x1596d bytes
    //
    _g44(sdk::unknown_ptr) user_set_window_long_ptr;
    
    // [NtUserSetWindowPlacement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10b620, 0x13864 bytes
    // win32kfull.sys .text:0xc7f90, 0x1596d bytes
    // win32kfull.sys .text:0x1005d0, 0x1659e bytes
    // win32kfull.sys .text:0xc8c50, 0x1596d bytes
    //
    _g45(sdk::unknown_ptr) user_set_window_placement;
    
    // [NtUserSetWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x96620, 0x13864 bytes
    // win32kfull.sys .text:0xa27a0, 0x1596d bytes
    // win32kfull.sys .text:0xaf4d0, 0x1659e bytes
    // win32kfull.sys .text:0xa3310, 0x1596d bytes
    //
    _g46(sdk::unknown_ptr) user_set_window_pos;
    
    // [NtUserSetWindowRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5a450, 0x13864 bytes
    // win32kfull.sys .text:0x101f30, 0x1596d bytes
    // win32kfull.sys .text:0xae870, 0x1659e bytes
    // win32kfull.sys .text:0x102e60, 0x1596d bytes
    //
    _g47(sdk::unknown_ptr) user_set_window_rgn;
    
    // [NtUserSetWindowRgnEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21cd10, 0x13864 bytes
    // win32kfull.sys .text:0x203c70, 0x1596d bytes
    // win32kfull.sys .text:0x201070, 0x1659e bytes
    // win32kfull.sys .text:0x203ae0, 0x1596d bytes
    //
    _g48(sdk::unknown_ptr) user_set_window_rgn_ex;
    
    // [NtUserSetWindowShowState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21cea0, 0x13864 bytes
    // win32kfull.sys .text:0x203e50, 0x1596d bytes
    // win32kfull.sys .text:0x201250, 0x1659e bytes
    // win32kfull.sys .text:0x203cc0, 0x1596d bytes
    //
    _g49(sdk::unknown_ptr) user_set_window_show_state;
    
    // [NtUserSetWindowStationUser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11ff40, 0x13864 bytes
    // win32kfull.sys .text:0x120290, 0x1596d bytes
    // win32kfull.sys .text:0x10fd50, 0x1659e bytes
    // win32kfull.sys .text:0x1211d0, 0x1596d bytes
    //
    _g50(sdk::unknown_ptr) user_set_window_station_user;
    
    // [NtUserSetWindowWord]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21d1a0, 0x13864 bytes
    // win32kfull.sys .text:0x14a6a0, 0x1596d bytes
    // win32kfull.sys .text:0x13f3c0, 0x1659e bytes
    // win32kfull.sys .text:0x14b5e0, 0x1596d bytes
    //
    _g51(sdk::unknown_ptr) user_set_window_word;
    
    // [NtUserSetWindowsHookAW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21d200, 0x13864 bytes
    // win32kfull.sys .text:0x2041c0, 0x1596d bytes
    // win32kfull.sys .text:0x201560, 0x1659e bytes
    // win32kfull.sys .text:0x204030, 0x1596d bytes
    //
    _g52(sdk::unknown_ptr) user_set_windows_hook_aw;
    
    // [NtUserSetWindowsHookEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d800, 0x13864 bytes
    // win32kfull.sys .text:0x1a580, 0x1596d bytes
    // win32kfull.sys .text:0x43ae0, 0x1659e bytes
    // win32kfull.sys .text:0x1a930, 0x1596d bytes
    //
    _g53(sdk::unknown_ptr) user_set_windows_hook_ex;
    
    // [NtUserShowCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3b020, 0x13864 bytes
    // win32kfull.sys .text:0x77020, 0x1596d bytes
    // win32kfull.sys .text:0x47b00, 0x1659e bytes
    // win32kfull.sys .text:0x77b90, 0x1596d bytes
    //
    _g54(sdk::unknown_ptr) user_show_caret;
    
    // [NtUserShowScrollBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x104980, 0x13864 bytes
    // win32kfull.sys .text:0x107bf0, 0x1596d bytes
    // win32kfull.sys .text:0x135a90, 0x1659e bytes
    // win32kfull.sys .text:0x108b20, 0x1596d bytes
    //
    _g55(sdk::unknown_ptr) user_show_scroll_bar;
    
    // [NtUserShowSystemCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21d2a0, 0x13864 bytes
    // win32kfull.sys .text:0x204270, 0x1596d bytes
    // win32kfull.sys .text:0x2024f0, 0x1659e bytes
    // win32kfull.sys .text:0x2040e0, 0x1596d bytes
    //
    _g56(sdk::unknown_ptr) user_show_system_cursor;
    
    // [NtUserShowWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4dee0, 0x13864 bytes
    // win32kfull.sys .text:0xae5d0, 0x1596d bytes
    // win32kfull.sys .text:0xabfc0, 0x1659e bytes
    // win32kfull.sys .text:0xaf140, 0x1596d bytes
    //
    _g57(sdk::unknown_ptr) user_show_window;
    
    // [NtUserShowWindowAsync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xaa50, 0x13864 bytes
    // win32kfull.sys .text:0x121ac0, 0x1596d bytes
    // win32kfull.sys .text:0x1109a0, 0x1659e bytes
    // win32kfull.sys .text:0x122a00, 0x1596d bytes
    //
    _g58(sdk::unknown_ptr) user_show_window_async;
    
    // [NtUserShutdownBlockReasonCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1191a0, 0x13864 bytes
    // win32kfull.sys .text:0x116cf0, 0x1596d bytes
    // win32kfull.sys .text:0x82f20, 0x1659e bytes
    // win32kfull.sys .text:0x117c20, 0x1596d bytes
    //
    _g59(sdk::unknown_ptr) user_shutdown_block_reason_create;
    
    // [NtUserShutdownBlockReasonQuery]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x115f20, 0x13864 bytes
    // win32kfull.sys .text:0x120ea0, 0x1596d bytes
    // win32kfull.sys .text:0x1108f0, 0x1659e bytes
    // win32kfull.sys .text:0x121de0, 0x1596d bytes
    //
    _g60(sdk::unknown_ptr) user_shutdown_block_reason_query;
    
    // [NtUserShutdownReasonDestroy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124980, 0x13864 bytes
    // win32kfull.sys .text:0x124dc0, 0x1596d bytes
    // win32kfull.sys .text:0x115610, 0x1659e bytes
    // win32kfull.sys .text:0x125d00, 0x1596d bytes
    //
    _g61(sdk::unknown_ptr) user_shutdown_reason_destroy;
    
    // [NtUserSignalRedirectionStartComplete]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1261c0, 0x13864 bytes
    // win32kfull.sys .text:0x127890, 0x1596d bytes
    // win32kfull.sys .text:0x117170, 0x1659e bytes
    // win32kfull.sys .text:0x1287d0, 0x1596d bytes
    //
    _g62(sdk::unknown_ptr) user_signal_redirection_start_complete;
    
    // [NtUserSlicerControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21d310, 0x13864 bytes
    // win32kfull.sys .text:0x2042e0, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x204150, 0x1596d bytes
    //
    _g63(sdk::unknown_ptr) user_slicer_control;
    
    // [NtUserSoundSentry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc280, 0x13864 bytes
    // win32kfull.sys .text:0x2047b0, 0x1596d bytes
    // win32kfull.sys .text:0x111870, 0x1659e bytes
    // win32kfull.sys .text:0x204620, 0x1596d bytes
    //
    _g64(sdk::unknown_ptr) user_sound_sentry;
    
    // [NtUserSwitchDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf9730, 0x13864 bytes
    // win32kfull.sys .text:0x2c370, 0x1596d bytes
    // win32kfull.sys .text:0x10b930, 0x1659e bytes
    // win32kfull.sys .text:0x2c780, 0x1596d bytes
    //
    _g65(sdk::unknown_ptr) user_switch_desktop;
    
    // [NtUserSystemParametersInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149210, 0x13864 bytes
    // win32kbase.sys .text:0x147790, 0x243e0 bytes
    // win32kbase.sys .text:0x1a810, 0x27ef0 bytes
    // win32kbase.sys .text:0x144db0, 0x243e0 bytes
    //
    _g66(sdk::unknown_ptr) user_system_parameters_info;
    
    // [NtUserSystemParametersInfoForDpi]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21d7d0, 0x13864 bytes
    // win32kfull.sys .text:0x1032c0, 0x1596d bytes
    // win32kfull.sys .text:0xf6820, 0x1659e bytes
    // win32kfull.sys .text:0x1041f0, 0x1596d bytes
    //
    _g67(sdk::unknown_ptr) user_system_parameters_info_for_dpi;
    
    // [NtUserTestForInteractiveUser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21d980, 0x13864 bytes
    // win32kfull.sys .text:0x2047f0, 0x1596d bytes
    // win32kfull.sys .text:0x202590, 0x1659e bytes
    // win32kfull.sys .text:0x204660, 0x1596d bytes
    //
    _g68(sdk::unknown_ptr) user_test_for_interactive_user;
    
    // [NtUserThunkedMenuInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141510, 0x13864 bytes
    // win32kfull.sys .text:0x1f710, 0x1596d bytes
    // win32kfull.sys .text:0x105fc0, 0x1659e bytes
    // win32kfull.sys .text:0x1fb20, 0x1596d bytes
    //
    _g69(sdk::unknown_ptr) user_thunked_menu_info;
    
    // [NtUserThunkedMenuItemInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4b0f0, 0x13864 bytes
    // win32kfull.sys .text:0x21150, 0x1596d bytes
    // win32kfull.sys .text:0x449d0, 0x1659e bytes
    // win32kfull.sys .text:0x21560, 0x1596d bytes
    //
    _g70(sdk::unknown_ptr) user_thunked_menu_item_info;
    
    // [NtUserToUnicodeEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12f80, 0x13864 bytes
    // win32kbase.sys .text:0x864e0, 0x243e0 bytes
    // win32kbase.sys .text:0xf630, 0x27ef0 bytes
    // win32kbase.sys .text:0x882e0, 0x243e0 bytes
    //
    _g71(sdk::unknown_ptr) user_to_unicode_ex;
    
    // [NtUserTrackMouseEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x385e0, 0x13864 bytes
    // win32kfull.sys .text:0xd8f50, 0x1596d bytes
    // win32kfull.sys .text:0xf6a00, 0x1659e bytes
    // win32kfull.sys .text:0xd9c10, 0x1596d bytes
    //
    _g72(sdk::unknown_ptr) user_track_mouse_event;
    
    // [NtUserTrackPopupMenuEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12c960, 0x13864 bytes
    // win32kfull.sys .text:0x2048a0, 0x1596d bytes
    // win32kfull.sys .text:0x202630, 0x1659e bytes
    // win32kfull.sys .text:0x204710, 0x1596d bytes
    //
    _g73(sdk::unknown_ptr) user_track_popup_menu_ex;
    
    // [NtUserTransformPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1085a0, 0x13864 bytes
    // win32kfull.sys .text:0x104da0, 0x1596d bytes
    // win32kfull.sys .text:0xe4150, 0x1659e bytes
    // win32kfull.sys .text:0x105cd0, 0x1596d bytes
    //
    _g74(sdk::unknown_ptr) user_transform_point;
    
    // [NtUserTransformRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xed7b0, 0x13864 bytes
    // win32kfull.sys .text:0xeb110, 0x1596d bytes
    // win32kfull.sys .text:0xe4290, 0x1659e bytes
    // win32kfull.sys .text:0xebe50, 0x1596d bytes
    //
    _g75(sdk::unknown_ptr) user_transform_rect;
    
    // [NtUserTranslateAccelerator]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x38d50, 0x13864 bytes
    // win32kfull.sys .text:0xfeaf0, 0x1596d bytes
    // win32kfull.sys .text:0xfac20, 0x1659e bytes
    // win32kfull.sys .text:0xffa20, 0x1596d bytes
    //
    _g76(sdk::unknown_ptr) user_translate_accelerator;
    
    // [NtUserTranslateMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13310, 0x13864 bytes
    // win32kfull.sys .text:0x104030, 0x1596d bytes
    // win32kfull.sys .text:0xfde10, 0x1659e bytes
    // win32kfull.sys .text:0x104f60, 0x1596d bytes
    //
    _g77(sdk::unknown_ptr) user_translate_message;
    
    // [NtUserUndelegateInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119e10, 0x13864 bytes
    // win32kfull.sys .text:0x120780, 0x1596d bytes
    // win32kfull.sys .text:0x10e5e0, 0x1659e bytes
    // win32kfull.sys .text:0x1216c0, 0x1596d bytes
    //
    _g78(sdk::unknown_ptr) user_undelegate_input;
    
    // [NtUserUnhookWinEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xec190, 0x13864 bytes
    // win32kfull.sys .text:0x1e1b0, 0x1596d bytes
    // win32kfull.sys .text:0x84f70, 0x1659e bytes
    // win32kfull.sys .text:0x1e5c0, 0x1596d bytes
    //
    _g79(sdk::unknown_ptr) user_unhook_win_event;
    
    // [NtUserUnhookWindowsHookEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d710, 0x13864 bytes
    // win32kfull.sys .text:0x1a480, 0x1596d bytes
    // win32kfull.sys .text:0x42a70, 0x1659e bytes
    // win32kfull.sys .text:0x1a830, 0x1596d bytes
    //
    _g80(sdk::unknown_ptr) user_unhook_windows_hook_ex;
    
    // [NtUserUnloadKeyboardLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21da10, 0x13864 bytes
    // win32kbase.sys .text:0x1489b0, 0x243e0 bytes
    // win32kbase.sys .text:0x17c5b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x145fd0, 0x243e0 bytes
    //
    _g81(sdk::unknown_ptr) user_unload_keyboard_layout;
    
    // [NtUserUnlockWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121380, 0x13864 bytes
    // win32kfull.sys .text:0x1222c0, 0x1596d bytes
    // win32kfull.sys .text:0x1116f0, 0x1659e bytes
    // win32kfull.sys .text:0x123200, 0x1596d bytes
    //
    _g82(sdk::unknown_ptr) user_unlock_window_station;
    
    // [NtUserUnregisterClass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x532f0, 0x13864 bytes
    // win32kfull.sys .text:0x76c20, 0x1596d bytes
    // win32kfull.sys .text:0x46fa0, 0x1659e bytes
    // win32kfull.sys .text:0x77790, 0x1596d bytes
    //
    _g83(sdk::unknown_ptr) user_unregister_class;
    
    // [NtUserUnregisterHotKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x33b20, 0x13864 bytes
    // win32kfull.sys .text:0xd2e30, 0x1596d bytes
    // win32kfull.sys .text:0x95e40, 0x1659e bytes
    // win32kfull.sys .text:0xd3af0, 0x1596d bytes
    //
    _g84(sdk::unknown_ptr) user_unregister_hot_key;
    
    // [NtUserUnregisterSessionPort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149220, 0x13864 bytes
    // win32kbase.sys .text:0x148e60, 0x243e0 bytes
    // win32kbase.sys .text:0x17c960, 0x27ef0 bytes
    // win32kbase.sys .text:0x146480, 0x243e0 bytes
    //
    _g85(sdk::unknown_ptr) user_unregister_session_port;
    
    // [NtUserUnregisterUserApiHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21da70, 0x13864 bytes
    // win32kfull.sys .text:0x204b00, 0x1596d bytes
    // win32kfull.sys .text:0x2028e0, 0x1659e bytes
    // win32kfull.sys .text:0x204970, 0x1596d bytes
    //
    _g86(sdk::unknown_ptr) user_unregister_user_api_hook;
    
    // [NtUserUpdateDefaultDesktopThumbnail]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21dab0, 0x13864 bytes
    // win32kfull.sys .text:0x204b60, 0x1596d bytes
    // win32kfull.sys .text:0x202a10, 0x1659e bytes
    // win32kfull.sys .text:0x2049d0, 0x1596d bytes
    //
    _g87(sdk::unknown_ptr) user_update_default_desktop_thumbnail;
    
    // [NtUserUpdateInputContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10a840, 0x13864 bytes
    // win32kfull.sys .text:0x108750, 0x1596d bytes
    // win32kfull.sys .text:0x101860, 0x1659e bytes
    // win32kfull.sys .text:0x109680, 0x1596d bytes
    //
    _g88(sdk::unknown_ptr) user_update_input_context;
    
    // [NtUserUpdateInstance]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21dc00, 0x13864 bytes
    // win32kfull.sys .text:0x204ce0, 0x1596d bytes
    // win32kfull.sys .text:0x202b80, 0x1659e bytes
    // win32kfull.sys .text:0x204b50, 0x1596d bytes
    //
    _g89(sdk::unknown_ptr) user_update_instance;
    
    // [NtUserUpdateLayeredWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x60be0, 0x13864 bytes
    // win32kfull.sys .text:0xf5390, 0x1596d bytes
    // win32kfull.sys .text:0xb4cf0, 0x1659e bytes
    // win32kfull.sys .text:0xf6220, 0x1596d bytes
    //
    _g90(sdk::unknown_ptr) user_update_layered_window;
    
    // [NtUserUpdatePerUserSystemParameters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x125030, 0x13864 bytes
    // win32kfull.sys .text:0x125fc0, 0x1596d bytes
    // win32kfull.sys .text:0xccd30, 0x1659e bytes
    // win32kfull.sys .text:0x126f00, 0x1596d bytes
    //
    _g91(sdk::unknown_ptr) user_update_per_user_system_parameters;
    
    // [NtUserUpdateWindowInputSinkHints]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7b20, 0x13864 bytes
    // win32kfull.sys .text:0x5790, 0x1596d bytes
    // win32kfull.sys .text:0x108d40, 0x1659e bytes
    // win32kfull.sys .text:0x5b40, 0x1596d bytes
    //
    _g92(sdk::unknown_ptr) user_update_window_input_sink_hints;
    
    // [NtUserUpdateWindowTrackingInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21dcf0, 0x13864 bytes
    // win32kfull.sys .text:0x204df0, 0x1596d bytes
    // win32kfull.sys .text:0x202c90, 0x1659e bytes
    // win32kfull.sys .text:0x204c60, 0x1596d bytes
    //
    _g93(sdk::unknown_ptr) user_update_window_tracking_info;
    
    // [NtUserUserHandleGrantAccess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21dea0, 0x13864 bytes
    // win32kfull.sys .text:0x204fe0, 0x1596d bytes
    // win32kfull.sys .text:0x202f50, 0x1659e bytes
    // win32kfull.sys .text:0x204e50, 0x1596d bytes
    //
    _g94(sdk::unknown_ptr) user_user_handle_grant_access;
    
    // [NtUserValidateRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118760, 0x13864 bytes
    // win32kfull.sys .text:0x115100, 0x1596d bytes
    // win32kfull.sys .text:0x10db80, 0x1659e bytes
    // win32kfull.sys .text:0x116030, 0x1596d bytes
    //
    _g95(sdk::unknown_ptr) user_validate_rect;
    
    // [NtUserValidateTimerCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf35d0, 0x13864 bytes
    // win32kfull.sys .text:0xe13d0, 0x1596d bytes
    // win32kfull.sys .text:0xe84e0, 0x1659e bytes
    // win32kfull.sys .text:0xe2090, 0x1596d bytes
    //
    _g96(sdk::unknown_ptr) user_validate_timer_callback;
    
    // [NtUserVkKeyScanEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13280, 0x13864 bytes
    // win32kbase.sys .text:0x86140, 0x243e0 bytes
    // win32kbase.sys .text:0xf1c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x87f40, 0x243e0 bytes
    //
    _g97(sdk::unknown_ptr) user_vk_key_scan_ex;
    
    // [NtUserWaitAvailableMessageEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e1c0, 0x13864 bytes
    // win32kfull.sys .text:0x205350, 0x1596d bytes
    // win32kfull.sys .text:0x2032d0, 0x1659e bytes
    // win32kfull.sys .text:0x2051c0, 0x1596d bytes
    //
    _g98(sdk::unknown_ptr) user_wait_available_message_ex;
    
    // [NtUserWaitForInputIdle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7770, 0x13864 bytes
    // win32kfull.sys .text:0x11ef80, 0x1596d bytes
    // win32kfull.sys .text:0x107b20, 0x1659e bytes
    // win32kfull.sys .text:0x11fe80, 0x1596d bytes
    //
    _g99(sdk::unknown_ptr) user_wait_for_input_idle;
    
    // [NtUserWaitForMsgAndEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e210, 0x13864 bytes
    // win32kfull.sys .text:0x2053b0, 0x1596d bytes
    // win32kfull.sys .text:0x203330, 0x1659e bytes
    // win32kfull.sys .text:0x205220, 0x1596d bytes
    //
    _h00(sdk::unknown_ptr) user_wait_for_msg_and_event;
    
    // [NtUserWaitForRedirectionStartComplete]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e230, 0x13864 bytes
    // win32kfull.sys .text:0x2053f0, 0x1596d bytes
    // win32kfull.sys .text:0x203360, 0x1659e bytes
    // win32kfull.sys .text:0x205260, 0x1596d bytes
    //
    _h01(sdk::unknown_ptr) user_wait_for_redirection_start_complete;
    
    // [NtUserWaitMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x104f90, 0x13864 bytes
    // win32kfull.sys .text:0xe7e80, 0x1596d bytes
    // win32kfull.sys .text:0x9dd20, 0x1659e bytes
    // win32kfull.sys .text:0xe8bc0, 0x1596d bytes
    //
    _h02(sdk::unknown_ptr) user_wait_message;
    
    // [NtUserWin32kSysCallFilterStub]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149230, 0x13864 bytes
    // win32kbase.sys .text:0x149320, 0x243e0 bytes
    // win32kbase.sys .text:0x17cd20, 0x27ef0 bytes
    // win32kbase.sys .text:0x146940, 0x243e0 bytes
    //
    _h03(sdk::unknown_ptr) user_win32k_sys_call_filter_stub;
    
    // [NtUserWindowFromPhysicalPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x101a90, 0x13864 bytes
    // win32kfull.sys .text:0xaec50, 0x1596d bytes
    // win32kfull.sys .text:0xa83e0, 0x1659e bytes
    // win32kfull.sys .text:0xaf7c0, 0x1596d bytes
    //
    _h04(sdk::unknown_ptr) user_window_from_physical_point;
    
    // [NtUserWindowFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x101a90, 0x13864 bytes
    // win32kfull.sys .text:0xaec50, 0x1596d bytes
    // win32kfull.sys .text:0xa83e0, 0x1659e bytes
    // win32kfull.sys .text:0xaf7c0, 0x1596d bytes
    //
    _h05(sdk::unknown_ptr) user_window_from_point;
    
    // [NtUserYieldTask]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e2e0, 0x13864 bytes
    // win32kfull.sys .text:0x2054b0, 0x1596d bytes
    // win32kfull.sys .text:0x203420, 0x1659e bytes
    // win32kfull.sys .text:0x205320, 0x1596d bytes
    //
    _h06(sdk::unknown_ptr) user_yield_task;
    
    // [NtUserfnCOPYDATA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1109b0, 0x13864 bytes
    // win32kfull.sys .text:0x111f10, 0x1596d bytes
    // win32kfull.sys .text:0x105be0, 0x1659e bytes
    // win32kfull.sys .text:0x112e40, 0x1596d bytes
    //
    _h07(sdk::unknown_ptr) userfn_copydata;
    
    // [NtUserfnCOPYGLOBALDATA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e3d0, 0x13864 bytes
    // win32kfull.sys .text:0x2055c0, 0x1596d bytes
    // win32kfull.sys .text:0x2035c0, 0x1659e bytes
    // win32kfull.sys .text:0x205430, 0x1596d bytes
    //
    _h08(sdk::unknown_ptr) userfn_copyglobaldata;
    
    // [NtUserfnDDEINIT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e450, 0x13864 bytes
    // win32kfull.sys .text:0x205660, 0x1596d bytes
    // win32kfull.sys .text:0x203670, 0x1659e bytes
    // win32kfull.sys .text:0x2054d0, 0x1596d bytes
    //
    _h09(sdk::unknown_ptr) userfn_ddeinit;
    
    // [NtUserfnDWORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa9690, 0x13864 bytes
    // win32kfull.sys .text:0xec590, 0x1596d bytes
    // win32kfull.sys .text:0xe6bb0, 0x1659e bytes
    // win32kfull.sys .text:0xed2d0, 0x1596d bytes
    //
    _h10(sdk::unknown_ptr) userfn_dword;
    
    // [NtUserfnDWORDOPTINLPMSG]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa9540, 0x13864 bytes
    // win32kfull.sys .text:0x13b880, 0x1596d bytes
    // win32kfull.sys .text:0x13fad0, 0x1659e bytes
    // win32kfull.sys .text:0x13c7c0, 0x1596d bytes
    //
    _h11(sdk::unknown_ptr) userfn_dwordoptinlpmsg;
    
    // [NtUserfnEMPTY]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x105840, 0x13864 bytes
    // win32kfull.sys .text:0xec590, 0x1596d bytes
    // win32kfull.sys .text:0x143400, 0x1659e bytes
    // win32kfull.sys .text:0xed2d0, 0x1596d bytes
    //
    _h12(sdk::unknown_ptr) userfn_empty;
    
    // [NtUserfnGESTURE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e630, 0x13864 bytes
    // win32kfull.sys .text:0x205890, 0x1596d bytes
    // win32kfull.sys .text:0x203890, 0x1659e bytes
    // win32kfull.sys .text:0x205700, 0x1596d bytes
    //
    _h13(sdk::unknown_ptr) userfn_gesture;
    
    // [NtUserfnGETDBCSTEXTLENGTHS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x105250, 0x13864 bytes
    // win32kfull.sys .text:0x10e4a0, 0x1596d bytes
    // win32kfull.sys .text:0x1056e0, 0x1659e bytes
    // win32kfull.sys .text:0x10f3d0, 0x1596d bytes
    //
    _h14(sdk::unknown_ptr) userfn_getdbcstextlengths;
    
    // [NtUserfnHkINLPCBTACTIVATESTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212594, 0x13864 bytes
    // win32kfull.sys .text:0x1f6e0c, 0x1596d bytes
    // win32kfull.sys .text:0x1f3490, 0x1659e bytes
    // win32kfull.sys .text:0x1f6c70, 0x1596d bytes
    //
    _h15(sdk::unknown_ptr) userfn_hk_inlpcbtactivatestruct;
    
    // [NtUserfnHkINLPCBTCREATESTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2125d8, 0x13864 bytes
    // win32kfull.sys .text:0x1f6e64, 0x1596d bytes
    // win32kfull.sys .text:0x1f34e8, 0x1659e bytes
    // win32kfull.sys .text:0x1f6cc8, 0x1596d bytes
    //
    _h16(sdk::unknown_ptr) userfn_hk_inlpcbtcreatestruct;
    
    // [NtUserfnHkINLPDEBUGHOOKSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21284c, 0x13864 bytes
    // win32kfull.sys .text:0x1f70fc, 0x1596d bytes
    // win32kfull.sys .text:0x1f3758, 0x1659e bytes
    // win32kfull.sys .text:0x1f6f60, 0x1596d bytes
    //
    _h17(sdk::unknown_ptr) userfn_hk_inlpdebughookstruct;
    
    // [NtUserfnHkINLPKBDLLHOOKSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21291c, 0x13864 bytes
    // win32kfull.sys .text:0x1f71cc, 0x1596d bytes
    // win32kfull.sys .text:0x15bd40, 0x1659e bytes
    // win32kfull.sys .text:0x1f7030, 0x1596d bytes
    //
    _h18(sdk::unknown_ptr) userfn_hk_inlpkbdllhookstruct;
    
    // [NtUserfnHkINLPMOUSEHOOKSTRUCTEX]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212988, 0x13864 bytes
    // win32kfull.sys .text:0x1f7258, 0x1596d bytes
    // win32kfull.sys .text:0x1f3828, 0x1659e bytes
    // win32kfull.sys .text:0x1f70bc, 0x1596d bytes
    //
    _h19(sdk::unknown_ptr) userfn_hk_inlpmousehookstructex;
    
    // [NtUserfnHkINLPMSG]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d050, 0x13864 bytes
    // win32kfull.sys .text:0x14088c, 0x1596d bytes
    // win32kfull.sys .text:0x133f1c, 0x1659e bytes
    // win32kfull.sys .text:0x1417cc, 0x1596d bytes
    //
    _h20(sdk::unknown_ptr) userfn_hk_inlpmsg;
    
    // [NtUserfnHkINLPMSLLHOOKSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2129e4, 0x13864 bytes
    // win32kfull.sys .text:0x1f72bc, 0x1596d bytes
    // win32kfull.sys .text:0x1f38c4, 0x1659e bytes
    // win32kfull.sys .text:0x1f7120, 0x1596d bytes
    //
    _h21(sdk::unknown_ptr) userfn_hk_inlpmsllhookstruct;
    
    // [NtUserfnHkINLPRECT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212a50, 0x13864 bytes
    // win32kfull.sys .text:0x1f7344, 0x1596d bytes
    // win32kfull.sys .text:0x1f394c, 0x1659e bytes
    // win32kfull.sys .text:0x1f71a8, 0x1596d bytes
    //
    _h22(sdk::unknown_ptr) userfn_hk_inlprect;
    
    // [NtUserfnHkOPTINLPEVENTMSG]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212ab0, 0x13864 bytes
    // win32kfull.sys .text:0x1f73bc, 0x1596d bytes
    // win32kfull.sys .text:0x1f39c4, 0x1659e bytes
    // win32kfull.sys .text:0x1f7220, 0x1596d bytes
    //
    _h23(sdk::unknown_ptr) userfn_hk_optinlpeventmsg;
    
    // [NtUserfnIMECONTROL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e6e0, 0x13864 bytes
    // win32kfull.sys .text:0x205950, 0x1596d bytes
    // win32kfull.sys .text:0x203bd0, 0x1659e bytes
    // win32kfull.sys .text:0x2057c0, 0x1596d bytes
    //
    _h24(sdk::unknown_ptr) userfn_imecontrol;
    
    // [NtUserfnINCBOXSTRING]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138100, 0x13864 bytes
    // win32kfull.sys .text:0x14fea0, 0x1596d bytes
    // win32kfull.sys .text:0x203ee0, 0x1659e bytes
    // win32kfull.sys .text:0x150de0, 0x1596d bytes
    //
    _h25(sdk::unknown_ptr) userfn_incboxstring;
    
    // [NtUserfnINCNTOUTSTRING]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e9f0, 0x13864 bytes
    // win32kfull.sys .text:0x205ca0, 0x1596d bytes
    // win32kfull.sys .text:0x203f60, 0x1659e bytes
    // win32kfull.sys .text:0x205b10, 0x1596d bytes
    //
    _h26(sdk::unknown_ptr) userfn_incntoutstring;
    
    // [NtUserfnINCNTOUTSTRINGNULL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21eb60, 0x13864 bytes
    // win32kfull.sys .text:0x205e20, 0x1596d bytes
    // win32kfull.sys .text:0x2040f0, 0x1659e bytes
    // win32kfull.sys .text:0x205c90, 0x1596d bytes
    //
    _h27(sdk::unknown_ptr) userfn_incntoutstringnull;
    
    // [NtUserfnINDEVICECHANGE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1040d0, 0x13864 bytes
    // win32kfull.sys .text:0x1111b0, 0x1596d bytes
    // win32kfull.sys .text:0x103760, 0x1659e bytes
    // win32kfull.sys .text:0x1120e0, 0x1596d bytes
    //
    _h28(sdk::unknown_ptr) userfn_indevicechange;
    
    // [NtUserfnINLBOXSTRING]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138140, 0x13864 bytes
    // win32kfull.sys .text:0x116a80, 0x1596d bytes
    // win32kfull.sys .text:0x204250, 0x1659e bytes
    // win32kfull.sys .text:0x1179b0, 0x1596d bytes
    //
    _h29(sdk::unknown_ptr) userfn_inlboxstring;
    
    // [NtUserfnINLPCOMPAREITEMSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ec90, 0x13864 bytes
    // win32kfull.sys .text:0x205f50, 0x1596d bytes
    // win32kfull.sys .text:0x2042d0, 0x1659e bytes
    // win32kfull.sys .text:0x205dc0, 0x1596d bytes
    //
    _h30(sdk::unknown_ptr) userfn_inlpcompareitemstruct;
    
    // [NtUserfnINLPCREATESTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4a7b0, 0x13864 bytes
    // win32kfull.sys .text:0x4d7a0, 0x1596d bytes
    // win32kfull.sys .text:0xb75e0, 0x1659e bytes
    // win32kfull.sys .text:0x4dbc0, 0x1596d bytes
    //
    _h31(sdk::unknown_ptr) userfn_inlpcreatestruct;
    
    // [NtUserfnINLPDELETEITEMSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ed20, 0x13864 bytes
    // win32kfull.sys .text:0x206010, 0x1596d bytes
    // win32kfull.sys .text:0x2043c0, 0x1659e bytes
    // win32kfull.sys .text:0x205e80, 0x1596d bytes
    //
    _h32(sdk::unknown_ptr) userfn_inlpdeleteitemstruct;
    
    // [NtUserfnINLPDRAWITEMSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13b2d0, 0x13864 bytes
    // win32kfull.sys .text:0x14a180, 0x1596d bytes
    // win32kfull.sys .text:0x1420d0, 0x1659e bytes
    // win32kfull.sys .text:0x14b0c0, 0x1596d bytes
    //
    _h33(sdk::unknown_ptr) userfn_inlpdrawitemstruct;
    
    // [NtUserfnINLPHELPINFOSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21eda0, 0x13864 bytes
    // win32kfull.sys .text:0x2060b0, 0x1596d bytes
    // win32kfull.sys .text:0x204490, 0x1659e bytes
    // win32kfull.sys .text:0x205f20, 0x1596d bytes
    //
    _h34(sdk::unknown_ptr) userfn_inlphelpinfostruct;
    
    // [NtUserfnINLPHLPSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ee60, 0x13864 bytes
    // win32kfull.sys .text:0x206190, 0x1596d bytes
    // win32kfull.sys .text:0x2045a0, 0x1659e bytes
    // win32kfull.sys .text:0x206000, 0x1596d bytes
    //
    _h35(sdk::unknown_ptr) userfn_inlphlpstruct;
    
    // [NtUserfnINLPMDICREATESTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13eea0, 0x13864 bytes
    // win32kfull.sys .text:0x206300, 0x1596d bytes
    // win32kfull.sys .text:0x204720, 0x1659e bytes
    // win32kfull.sys .text:0x206170, 0x1596d bytes
    //
    _h36(sdk::unknown_ptr) userfn_inlpmdicreatestruct;
    
    // [NtUserfnINLPUAHDRAWMENU]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11e350, 0x13864 bytes
    // win32kfull.sys .text:0x2064c0, 0x1596d bytes
    // win32kfull.sys .text:0x2048f0, 0x1659e bytes
    // win32kfull.sys .text:0x206330, 0x1596d bytes
    //
    _h37(sdk::unknown_ptr) userfn_inlpuahdrawmenu;
    
    // [NtUserfnINLPUAHDRAWMENUITEM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11b6c0, 0x13864 bytes
    // win32kfull.sys .text:0x206560, 0x1596d bytes
    // win32kfull.sys .text:0x2049c0, 0x1659e bytes
    // win32kfull.sys .text:0x2063d0, 0x1596d bytes
    //
    _h38(sdk::unknown_ptr) userfn_inlpuahdrawmenuitem;
    
    // [NtUserfnINLPUAHINITMENU]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11e350, 0x13864 bytes
    // win32kfull.sys .text:0x2064c0, 0x1596d bytes
    // win32kfull.sys .text:0x2048f0, 0x1659e bytes
    // win32kfull.sys .text:0x206330, 0x1596d bytes
    //
    _h39(sdk::unknown_ptr) userfn_inlpuahinitmenu;
    
    // [NtUserfnINLPUAHNCPAINTMENUPOPUP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21efe0, 0x13864 bytes
    // win32kfull.sys .text:0x2064c0, 0x1596d bytes
    // win32kfull.sys .text:0x2048f0, 0x1659e bytes
    // win32kfull.sys .text:0x206330, 0x1596d bytes
    //
    _h40(sdk::unknown_ptr) userfn_inlpuahncpaintmenupopup;
    
    // [NtUserfnINLPWINDOWPOS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfc730, 0x13864 bytes
    // win32kfull.sys .text:0x206680, 0x1596d bytes
    // win32kfull.sys .text:0x15c430, 0x1659e bytes
    // win32kfull.sys .text:0x2064f0, 0x1596d bytes
    //
    _h41(sdk::unknown_ptr) userfn_inlpwindowpos;
    
    // [NtUserfnINOUTDRAG]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f060, 0x13864 bytes
    // win32kfull.sys .text:0x206730, 0x1596d bytes
    // win32kfull.sys .text:0x204af0, 0x1659e bytes
    // win32kfull.sys .text:0x2065a0, 0x1596d bytes
    //
    _h42(sdk::unknown_ptr) userfn_inoutdrag;
    
    // [NtUserfnINOUTLPMEASUREITEMSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13be20, 0x13864 bytes
    // win32kfull.sys .text:0x14b460, 0x1596d bytes
    // win32kfull.sys .text:0x204c20, 0x1659e bytes
    // win32kfull.sys .text:0x14c3a0, 0x1596d bytes
    //
    _h43(sdk::unknown_ptr) userfn_inoutlpmeasureitemstruct;
    
    // [NtUserfnINOUTLPPOINT5]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1029c0, 0x13864 bytes
    // win32kfull.sys .text:0x14abf0, 0x1596d bytes
    // win32kfull.sys .text:0x204d40, 0x1659e bytes
    // win32kfull.sys .text:0x14bb30, 0x1596d bytes
    //
    _h44(sdk::unknown_ptr) userfn_inoutlppoint5;
    
    // [NtUserfnINOUTLPRECT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10a990, 0x13864 bytes
    // win32kfull.sys .text:0x14d940, 0x1596d bytes
    // win32kfull.sys .text:0x204e80, 0x1659e bytes
    // win32kfull.sys .text:0x14e880, 0x1596d bytes
    //
    _h45(sdk::unknown_ptr) userfn_inoutlprect;
    
    // [NtUserfnINOUTLPSCROLLINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x111970, 0x13864 bytes
    // win32kfull.sys .text:0x206840, 0x1596d bytes
    // win32kfull.sys .text:0x15c510, 0x1659e bytes
    // win32kfull.sys .text:0x2066b0, 0x1596d bytes
    //
    _h46(sdk::unknown_ptr) userfn_inoutlpscrollinfo;
    
    // [NtUserfnINOUTLPUAHMEASUREMENUITEM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11d640, 0x13864 bytes
    // win32kfull.sys .text:0x206a30, 0x1596d bytes
    // win32kfull.sys .text:0x205090, 0x1659e bytes
    // win32kfull.sys .text:0x2068a0, 0x1596d bytes
    //
    _h47(sdk::unknown_ptr) userfn_inoutlpuahmeasuremenuitem;
    
    // [NtUserfnINOUTLPWINDOWPOS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa7b70, 0x13864 bytes
    // win32kfull.sys .text:0xf78c0, 0x1596d bytes
    // win32kfull.sys .text:0xe7650, 0x1659e bytes
    // win32kfull.sys .text:0xf8750, 0x1596d bytes
    //
    _h48(sdk::unknown_ptr) userfn_inoutlpwindowpos;
    
    // [NtUserfnINOUTMENUGETOBJECT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f150, 0x13864 bytes
    // win32kfull.sys .text:0x206bf0, 0x1596d bytes
    // win32kfull.sys .text:0x205230, 0x1659e bytes
    // win32kfull.sys .text:0x206a60, 0x1596d bytes
    //
    _h49(sdk::unknown_ptr) userfn_inoutmenugetobject;
    
    // [NtUserfnINOUTNCCALCSIZE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf63e0, 0x13864 bytes
    // win32kfull.sys .text:0xedad0, 0x1596d bytes
    // win32kfull.sys .text:0xe6d40, 0x1659e bytes
    // win32kfull.sys .text:0xee8f0, 0x1596d bytes
    //
    _h50(sdk::unknown_ptr) userfn_inoutnccalcsize;
    
    // [NtUserfnINOUTNEXTMENU]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f210, 0x13864 bytes
    // win32kfull.sys .text:0x206cc0, 0x1596d bytes
    // win32kfull.sys .text:0x205330, 0x1659e bytes
    // win32kfull.sys .text:0x206b30, 0x1596d bytes
    //
    _h51(sdk::unknown_ptr) userfn_inoutnextmenu;
    
    // [NtUserfnINOUTSTYLECHANGE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa9610, 0x13864 bytes
    // win32kfull.sys .text:0x206db0, 0x1596d bytes
    // win32kfull.sys .text:0x205450, 0x1659e bytes
    // win32kfull.sys .text:0x206c20, 0x1596d bytes
    //
    _h52(sdk::unknown_ptr) userfn_inoutstylechange;
    
    // [NtUserfnINPAINTCLIPBRD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f2e0, 0x13864 bytes
    // win32kfull.sys .text:0x206e70, 0x1596d bytes
    // win32kfull.sys .text:0x205550, 0x1659e bytes
    // win32kfull.sys .text:0x206ce0, 0x1596d bytes
    //
    _h53(sdk::unknown_ptr) userfn_inpaintclipbrd;
    
    // [NtUserfnINPGESTURENOTIFYSTRUCT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f3b0, 0x13864 bytes
    // win32kfull.sys .text:0x206f70, 0x1596d bytes
    // win32kfull.sys .text:0x205660, 0x1659e bytes
    // win32kfull.sys .text:0x206de0, 0x1596d bytes
    //
    _h54(sdk::unknown_ptr) userfn_inpgesturenotifystruct;
    
    // [NtUserfnINSIZECLIPBRD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f4e0, 0x13864 bytes
    // win32kfull.sys .text:0x2070b0, 0x1596d bytes
    // win32kfull.sys .text:0x2057d0, 0x1659e bytes
    // win32kfull.sys .text:0x206f20, 0x1596d bytes
    //
    _h55(sdk::unknown_ptr) userfn_insizeclipbrd;
    
    // [NtUserfnINSTRING]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138270, 0x13864 bytes
    // win32kfull.sys .text:0x116bc0, 0x1596d bytes
    // win32kfull.sys .text:0x2058a0, 0x1659e bytes
    // win32kfull.sys .text:0x117af0, 0x1596d bytes
    //
    _h56(sdk::unknown_ptr) userfn_instring;
    
    // [NtUserfnINSTRINGNULL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4a6e0, 0x13864 bytes
    // win32kfull.sys .text:0x4d6b0, 0x1596d bytes
    // win32kfull.sys .text:0xb74e0, 0x1659e bytes
    // win32kfull.sys .text:0x4dad0, 0x1596d bytes
    //
    _h57(sdk::unknown_ptr) userfn_instringnull;
    
    // [NtUserfnINWPARAMCHAR]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f570, 0x13864 bytes
    // win32kfull.sys .text:0x207150, 0x1596d bytes
    // win32kfull.sys .text:0x2059e0, 0x1659e bytes
    // win32kfull.sys .text:0x206fc0, 0x1596d bytes
    //
    _h58(sdk::unknown_ptr) userfn_inwparamchar;
    
    // [NtUserfnKERNELONLY]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1279c0, 0x13864 bytes
    // win32kfull.sys .text:0x1292d0, 0x1596d bytes
    // win32kfull.sys .text:0x205ab0, 0x1659e bytes
    // win32kfull.sys .text:0x12a210, 0x1596d bytes
    //
    _h59(sdk::unknown_ptr) userfn_kernelonly;
    
    // [NtUserfnNCDESTROY]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x105840, 0x13864 bytes
    // win32kfull.sys .text:0xec590, 0x1596d bytes
    // win32kfull.sys .text:0x143400, 0x1659e bytes
    // win32kfull.sys .text:0xed2d0, 0x1596d bytes
    //
    _h60(sdk::unknown_ptr) userfn_ncdestroy;
    
    // [NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106ea0, 0x13864 bytes
    // win32kfull.sys .text:0x1479f0, 0x1596d bytes
    // win32kfull.sys .text:0x205ad0, 0x1659e bytes
    // win32kfull.sys .text:0x148930, 0x1596d bytes
    //
    _h61(sdk::unknown_ptr) userfn_optoutlpdwordoptoutlpdword;
    
    // [NtUserfnOUTCBOXSTRING]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13e180, 0x13864 bytes
    // win32kfull.sys .text:0x14e690, 0x1596d bytes
    // win32kfull.sys .text:0x205be0, 0x1659e bytes
    // win32kfull.sys .text:0x14f5d0, 0x1596d bytes
    //
    _h62(sdk::unknown_ptr) userfn_outcboxstring;
    
    // [NtUserfnOUTDWORDINDWORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f630, 0x13864 bytes
    // win32kfull.sys .text:0x207230, 0x1596d bytes
    // win32kfull.sys .text:0x205dc0, 0x1659e bytes
    // win32kfull.sys .text:0x2070a0, 0x1596d bytes
    //
    _h63(sdk::unknown_ptr) userfn_outdwordindword;
    
    // [NtUserfnOUTLBOXSTRING]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13cc40, 0x13864 bytes
    // win32kfull.sys .text:0x14dd30, 0x1596d bytes
    // win32kfull.sys .text:0x205e80, 0x1659e bytes
    // win32kfull.sys .text:0x14ec70, 0x1596d bytes
    //
    _h64(sdk::unknown_ptr) userfn_outlboxstring;
    
    // [NtUserfnOUTLPCOMBOBOXINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf8c30, 0x13864 bytes
    // win32kfull.sys .text:0xfe600, 0x1596d bytes
    // win32kfull.sys .text:0x1040, 0x1659e bytes
    // win32kfull.sys .text:0xff530, 0x1596d bytes
    //
    _h65(sdk::unknown_ptr) userfn_outlpcomboboxinfo;
    
    // [NtUserfnOUTLPRECT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10e160, 0x13864 bytes
    // win32kfull.sys .text:0x1440b0, 0x1596d bytes
    // win32kfull.sys .text:0x1425b0, 0x1659e bytes
    // win32kfull.sys .text:0x144ff0, 0x1596d bytes
    //
    _h66(sdk::unknown_ptr) userfn_outlprect;
    
    // [NtUserfnOUTLPSCROLLBARINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f6b0, 0x13864 bytes
    // win32kfull.sys .text:0x2072b0, 0x1596d bytes
    // win32kfull.sys .text:0x206060, 0x1659e bytes
    // win32kfull.sys .text:0x207120, 0x1596d bytes
    //
    _h67(sdk::unknown_ptr) userfn_outlpscrollbarinfo;
    
    // [NtUserfnOUTLPTITLEBARINFOEX]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1131a0, 0x13864 bytes
    // win32kfull.sys .text:0x10f980, 0x1596d bytes
    // win32kfull.sys .text:0x104960, 0x1659e bytes
    // win32kfull.sys .text:0x1108b0, 0x1596d bytes
    //
    _h68(sdk::unknown_ptr) userfn_outlptitlebarinfoex;
    
    // [NtUserfnOUTSTRING]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf1e80, 0x13864 bytes
    // win32kfull.sys .text:0xe8400, 0x1596d bytes
    // win32kfull.sys .text:0xfd3f0, 0x1659e bytes
    // win32kfull.sys .text:0xe9140, 0x1596d bytes
    //
    _h69(sdk::unknown_ptr) userfn_outstring;
    
    // [NtUserfnPARENTNOTIFY]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4fb20, 0x13864 bytes
    // win32kfull.sys .text:0x1235b0, 0x1596d bytes
    // win32kfull.sys .text:0x2061e0, 0x1659e bytes
    // win32kfull.sys .text:0x1244f0, 0x1596d bytes
    //
    _h70(sdk::unknown_ptr) userfn_parentnotify;
    
    // [NtUserfnPOINTERINPUT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f820, 0x13864 bytes
    // win32kfull.sys .text:0x207420, 0x1596d bytes
    // win32kfull.sys .text:0x2062a0, 0x1659e bytes
    // win32kfull.sys .text:0x207290, 0x1596d bytes
    //
    _h71(sdk::unknown_ptr) userfn_pointerinput;
    
    // [NtUserfnPOPTINLPUINT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f920, 0x13864 bytes
    // win32kfull.sys .text:0x207530, 0x1596d bytes
    // win32kfull.sys .text:0x2063d0, 0x1659e bytes
    // win32kfull.sys .text:0x2073a0, 0x1596d bytes
    //
    _h72(sdk::unknown_ptr) userfn_poptinlpuint;
    
    // [NtUserfnPOUTLPINT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f9c0, 0x13864 bytes
    // win32kfull.sys .text:0x207600, 0x1596d bytes
    // win32kfull.sys .text:0x2064b0, 0x1659e bytes
    // win32kfull.sys .text:0x207470, 0x1596d bytes
    //
    _h73(sdk::unknown_ptr) userfn_poutlpint;
    
    // [NtUserfnPOWERBROADCAST]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10ab00, 0x13864 bytes
    // win32kfull.sys .text:0x10d370, 0x1596d bytes
    // win32kfull.sys .text:0x1047c0, 0x1659e bytes
    // win32kfull.sys .text:0x10e2a0, 0x1596d bytes
    //
    _h74(sdk::unknown_ptr) userfn_powerbroadcast;
    
    // [NtUserfnSENTDDEMSG]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21fa70, 0x13864 bytes
    // win32kfull.sys .text:0x2076c0, 0x1596d bytes
    // win32kfull.sys .text:0x206580, 0x1659e bytes
    // win32kfull.sys .text:0x207530, 0x1596d bytes
    //
    _h75(sdk::unknown_ptr) userfn_sentddemsg;
    
    // [NtUserfnSHELLWINDOWMANAGEMENTCALLOUT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11db20, 0x13864 bytes
    // win32kfull.sys .text:0x207210, 0x1596d bytes
    // win32kfull.sys .text:0x206600, 0x1659e bytes
    // win32kfull.sys .text:0x207080, 0x1596d bytes
    //
    _h76(sdk::unknown_ptr) userfn_shellwindowmanagementcallout;
    
    // [NtUserfnSHELLWINDOWMANAGEMENTNOTIFY]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11db20, 0x13864 bytes
    // win32kfull.sys .text:0x207210, 0x1596d bytes
    // win32kfull.sys .text:0x206600, 0x1659e bytes
    // win32kfull.sys .text:0x207080, 0x1596d bytes
    //
    _h77(sdk::unknown_ptr) userfn_shellwindowmanagementnotify;
    
    // [NtUserfnTOUCH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21fab0, 0x13864 bytes
    // win32kfull.sys .text:0x207700, 0x1596d bytes
    // win32kfull.sys .text:0x206630, 0x1659e bytes
    // win32kfull.sys .text:0x207570, 0x1596d bytes
    //
    _h78(sdk::unknown_ptr) userfn_touch;
    
    // [NtUserfnTOUCHHITTESTING]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21fb80, 0x13864 bytes
    // win32kfull.sys .text:0x2077e0, 0x1596d bytes
    // win32kfull.sys .text:0x206750, 0x1659e bytes
    // win32kfull.sys .text:0x207650, 0x1596d bytes
    //
    _h79(sdk::unknown_ptr) userfn_touchhittesting;
    
    // [NtValidateCompositionSurfaceHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x78d50, 0x1eb80 bytes
    // win32k.sys .text:0x10fb0, 0x388c7 bytes
    // win32k.sys .text:0x12364, 0x3e907 bytes
    // win32k.sys .text:0x10fb0, 0x388c7 bytes
    //
    _h80(sdk::unknown_ptr) validate_composition_surface_handle;
    
    // [NtVisualCaptureBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7b20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dc490, 0x243e0 bytes
    // win32kbase.sys .text:0x22a700, 0x27ef0 bytes
    // win32kbase.sys .text:0x1da250, 0x243e0 bytes
    //
    _h81(sdk::unknown_ptr) visual_capture_bits;
    
    // [NTStatusToHResult]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x16030, 0x17e70 bytes
    // dxgi.dll .text:0x16290, 0x17e70 bytes
    // dxgi.dll .text:0x11464, 0x18b10 bytes
    // dxgi.dll .text:0x117a0, 0x17e70 bytes
    //
    _h82(sdk::unknown_ptr) status_to_h_result;
    
    // [NtDllName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1098d0, 0x67960 bytes
    // ntdll.dll .rdata:0x11d3e0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1318d0, 0x74648 bytes
    // ntdll.dll .rdata:0x11d400, 0x6fc38 bytes
    //
    _h83(sdk::unknown_ptr) dll_name;
    
    // [NtDllUserStubs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109950, 0x67960 bytes
    // ntdll.dll .rdata:0x11c8b0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1319e0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c8b0, 0x6fc38 bytes
    //
    _h84(sdk::unknown_ptr) dll_user_stubs;
    
    // [NtUserPfn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164000, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f000, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199000, 0x74648 bytes
    // ntdll.dll .mrdata:0x180000, 0x6fc38 bytes
    //
    _h85(sdk::unknown_ptr) user_pfn;
};
#include "magic/api.end.hpp"
