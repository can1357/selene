#pragma once
#include <sdkgen/support_library.hpp>
#include "csq_t.hpp"
#include "workitem_t.hpp"
#include "../nt/irp_t.hpp"
#include "../nt/mdl_t.hpp"
#include "../nt/vpb_t.hpp"
#include "../nt/guid_t.hpp"
#include "remove_lock_t.hpp"
#include "../nt/kevent_t.hpp"
#include "status_block_t.hpp"
#include "priority_hint_t.hpp"
#include "../dma/adapter_t.hpp"
#include "../nt/eprocess_t.hpp"
#include "csq_irp_context_t.hpp"
#include "paging_priority_t.hpp"
#include "../nt/devpropkey_t.hpp"
#include "../nt/create_disk_t.hpp"
#include "../nt/file_object_t.hpp"
#include "../nt/fsinfoclass_t.hpp"
#include "../nt/object_type_t.hpp"
#include "allocation_action_t.hpp"
#include "../nt/share_access_t.hpp"
#include "../cm/resource_list_t.hpp"
#include "../nt/device_object_t.hpp"
#include "../nt/driver_object_t.hpp"
#include "../nt/disk_signature_t.hpp"
#include "../nt/interface_type_t.hpp"
#include "../nt/generic_mapping_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"
#include "../nt/work_queue_type_t.hpp"
#include "driver_create_context_t.hpp"
#include "../dma/iommu_interface_t.hpp"
#include "../nt/create_file_type_t.hpp"
#include "../nt/controller_object_t.hpp"
#include "../nt/link_share_access_t.hpp"
#include "../nt/object_attributes_t.hpp"
#include "../nt/configuration_type_t.hpp"
#include "../nt/device_description_t.hpp"
#include "../nt/driver_regkey_type_t.hpp"
#include "../nt/reparse_data_buffer_t.hpp"
#include "../nt/bootdisk_information_t.hpp"
#include "../nt/device_relation_type_t.hpp"
#include "create_stream_file_options_t.hpp"
#include "resource_requirements_list_t.hpp"
#include "../nt/device_directory_type_t.hpp"
#include "../nt/driver_directory_type_t.hpp"
#include "mini_completion_packet_user_t.hpp"
#include "notification_event_category_t.hpp"
#include "../nt/file_information_class_t.hpp"
#include "../nt/file_quota_information_t.hpp"
#include "connect_interrupt_parameters_t.hpp"
#include "../nt/object_name_information_t.hpp"
#include "../nt/drive_layout_information_t.hpp"
#include "../nt/file_full_ea_information_t.hpp"
#include "../nt/bootdisk_information_lite_t.hpp"
#include "../nt/configuration_information_t.hpp"
#include "../wdf/device_registry_property_t.hpp"
#include "disconnect_interrupt_parameters_t.hpp"
#include "../nt/key_value_full_information_t.hpp"
#include "../nt/drive_layout_information_ex_t.hpp"
#include "../nt/set_partition_information_ex_t.hpp"
#include "../nt/file_network_open_information_t.hpp"
#include "report_interrupt_active_state_parameters_t.hpp"

namespace nt  { struct group_affinity_t;       }
namespace nt  { struct kinterrupt_t;           }
namespace nt  { struct kprocess_t;             }
namespace nt  { struct kthread_t;              }
namespace pnp { struct dependency_path_type_t; }

#include "magic/api.start.hpp"
namespace io
{
    struct load_crashdump_params_t;
    struct load_crashdump_result_t;
    struct steer_interrupt_target_t;
    struct steer_interrupt_connection_t;
    struct mini_packet_callback_routine_t;

    // [IoAcquireKsrPersistentMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94cd50, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) acquire_ksr_persistent_memory_ex;
    
    // [IoAddBugcheckTriageThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53c2e0, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) add_bugcheck_triage_thread;
    
    // [IoAddProcessThreadsToDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x548f6c, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) add_process_threads_to_dump;
    
    // [IoAddProcessesToDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x549010, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) add_processes_to_dump;
    
    // [IoAddThreadStackToDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5490e0, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) add_thread_stack_to_dump;
    
    // [IoBugCheckDriverDataCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53c300, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) bug_check_driver_data_callback;
    
    // [IoCancelMiniCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5447c0, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) cancel_mini_completion_packet;
    
    // [IoCapturePristineTriageDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53c378, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) capture_pristine_triage_dump;
    
    // [IoCheckFileObjectOpenedAsCopyDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x941c90, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) check_file_object_opened_as_copy_destination;
    
    // [IoCheckFileObjectOpenedAsCopySource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x941cb0, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) check_file_object_opened_as_copy_source;
    
    // [IoCheckRedirectionTrustLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37a2f0, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) check_redirection_trust_level;
    
    // [IoClearDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x62fc40, 0x32828 bytes
    //
    _m11(sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_object_t*)>*) clear_dependency;
    
    // [IoComputeDesiredAccessFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x941d8c, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) compute_desired_access_file_object;
    
    // [IoComputeRedirectionTrustLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3367a0, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) compute_redirection_trust_level;
    
    // [IoCreateSymbolicLink2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7c5300, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) create_symbolic_link2;
    
    // [IoDeleteAllDependencyRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x42d994, 0x32828 bytes
    //
    _m15(sdk::function<int32_t(struct nt::device_object_t*)>*) delete_all_dependency_relations;
    
    // [IoDemoteToTriageDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53c75c, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) demote_to_triage_dump;
    
    // [IoDiscardDeferredLiveDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x946d74, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) discard_deferred_live_dump_data;
    
    // [IoEnumerateKsrPersistentMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54c180, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) enumerate_ksr_persistent_memory_ex;
    
    // [IoFilterMetaProviderContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x81a8, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) filter_meta_provider_context;
    
    // [IoFilterMetaProviderMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x1d370, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) filter_meta_provider_map;
    
    // [IoFreeMapRegistersThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f0b64, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) free_map_registers_thunk;
    
    // [IoGetCopyInformationExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5456b0, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) get_copy_information_extension;
    
    // [IoGetIommuInterfaceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86fb20, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) get_iommu_interface_ex;
    
    // [IoGetShadowFileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5435e0, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) get_shadow_file_information;
    
    // [IoInitializeLiveDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e29c0, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) initialize_live_dump;
    
    // [IoMetaProviderContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x8160, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) meta_provider_context;
    
    // [IoMetaProviderMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x1d230, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) meta_provider_map;
    
    // [IoMgrProvider_Context]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc04590, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) mgr_provider_context;
    
    // [IoPreparedTriageDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd17b68, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) prepared_triage_dump_data;
    
    // [IoProvisionCrashDumpKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53d514, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) provision_crash_dump_key;
    
    // [IoQueryKsrPersistentMemorySizeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94d020, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) query_ksr_persistent_memory_size_ex;
    
    // [IoReserveKsrPersistentMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94d270, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) reserve_ksr_persistent_memory_ex;
    
    // [IoRevertFromDemotedDumpType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53d5c4, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) revert_from_demoted_dump_type;
    
    // [IoRingObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1df50, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) ring_object_type;
    
    // [IoSaveInitialBugCheckProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53d800, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) save_initial_bug_check_progress;
    
    // [IoSetIoCompletionEx3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2f9cc0, 0x1fd000 bytes
    //
    _m36(sdk::function<int32_t(void*, void*, void*, int32_t, uint64_t, uint8_t, struct io::mini_completion_packet_user_t*, uint8_t, char)>*) set_io_completion_ex3;
    
    // [IoSetShadowFileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x202a00, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) set_shadow_file_information;
    
    // [IOSpaceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd17bb8, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) space_enabled;
    
    // [IoSynchronousInvalidateDeviceRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x62f488, 0x32828 bytes
    //
    _m39(sdk::function<int32_t(struct nt::device_object_t*, enum nt::device_relation_type_t)>*) synchronous_invalidate_device_relations;
    
    // [IoTryReleasePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x204070, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) try_release_page;
    
    // [IoWriteCapturedPristineTriageDumpToDedicatedDumpFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53dcf4, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) write_captured_pristine_triage_dump_to_dedicated_dump_file;
    
    // [IoBoostThreadOutstandingIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x504abc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50487c, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) boost_thread_outstanding_io;
    
    // [IoDiagTraceDirectedDripsCandidateDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b19d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b0188, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) diag_trace_directed_drips_candidate_devices;
    
    // [IoSetDumpRangeForPartialKernelDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505510, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) set_dump_range_for_partial_kernel_dump;
    
    // [IoAcquireKsrPersistentMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x899000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94cd20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8977b0, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) acquire_ksr_persistent_memory;
    
    // [IoAddPagesForPartialKernelDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505430, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) add_pages_for_partial_kernel_dump;
    
    // [IoBugCheckTriageDumpDataCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fbac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53c360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fb880, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) bug_check_triage_dump_data_callback;
    
    // [IoCheckLinkShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x696500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x696490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6be940, 0x1fe000 bytes
    //
    _m48(sdk::function<int32_t(uint32_t, uint32_t, struct nt::file_object_t*, struct nt::share_access_t*, struct nt::link_share_access_t*, uint32_t)>*) check_link_share_access;
    
    // [IoClearAdapterCryptoEngineExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5019f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5455f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5017b0, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) clear_adapter_crypto_engine_extension;
    
    // [IoCreateDeviceSecure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x719560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73aec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x721380, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) create_device_secure;
    
    // [IoFreeAdapterChannelV3Internal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c0b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ff11c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0a80, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) free_adapter_channel_v3_internal;
    
    // [IoFreeAdapterChannelV3Passive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c0be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ff170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0ad0, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) free_adapter_channel_v3_passive;
    
    // [IoFreeKsrPersistentMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8991e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94cf50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x897990, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) free_ksr_persistent_memory;
    
    // [IoGetAdapterCryptoEngineExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x501a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501830, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) get_adapter_crypto_engine_extension;
    
    // [IoGetAttachedDeviceReferenceWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21bcb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e979c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0ee0, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) get_attached_device_reference_with_tag;
    
    // [IoGetDeviceAttachmentBaseRefWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2569dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc2dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33dd8c, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) get_device_attachment_base_ref_with_tag;
    
    // [IoGetDeviceDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89bc50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94f8c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89a400, 0x1fe000 bytes
    //
    _m57(sdk::function<int32_t(struct nt::device_object_t*, enum nt::device_directory_type_t, uint32_t, void*, void**)>*) get_device_directory;
    
    // [IoGetDriverDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89c050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94fcb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89a800, 0x1fe000 bytes
    //
    _m58(sdk::function<int32_t(struct nt::driver_object_t*, enum nt::driver_directory_type_t, uint32_t, void**)>*) get_driver_directory;
    
    // [IoGetDumpStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x75aa84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93f00c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7624d4, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) get_dump_stack;
    
    // [IoGetFileMemoryPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30f568, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d5314, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281af8, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) get_file_memory_partition_information;
    
    // [IoGetIommuInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b6470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x950d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be040, 0x1fe000 bytes
    //
    _m61(sdk::function<int32_t(uint32_t, struct dma::iommu_interface_t*)>*) get_iommu_interface;
    
    // [IoGetLowerDeviceObjectWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26bcec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37c63c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31d37c, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) get_lower_device_object_with_tag;
    
    // [IoInitializeBugCheckProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c8c24, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fc4e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fc2a8, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) initialize_bug_check_progress;
    
    // [IoIsKernelPagingRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x259950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x361ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a610, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) is_kernel_paging_read;
    
    // [IoIsPartialDumpRetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fc6a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d3f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc468, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) is_partial_dump_retry;
    
    // [IoLockUnlockPnpDeviceTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89b85c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94f4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89a00c, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) lock_unlock_pnp_device_tree;
    
    // [IoMgrTraceHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321b40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45e48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc45de0, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) mgr_trace_handle;
    
    // [IoOpenDriverRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a6700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x735180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ae820, 0x1fe000 bytes
    //
    _m68(sdk::function<int32_t(struct nt::driver_object_t*, enum nt::driver_regkey_type_t, uint32_t, uint32_t, void**)>*) open_driver_registry_key;
    
    // [IoQueryInformationByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5cd900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7602d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce1a0, 0x1fe000 bytes
    //
    _m69(sdk::function<int32_t(struct nt::object_attributes_t*, struct io::status_block_t*, void*, uint32_t, enum nt::file_information_class_t, uint32_t, struct io::driver_create_context_t*)>*) query_information_by_name;
    
    // [IoQueryKsrPersistentMemorySize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x899270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94cff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x897a20, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) query_ksr_persistent_memory_size;
    
    // [IoRemoveLinkShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8910b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f860, 0x1fe000 bytes
    //
    _m71(sdk::function<void(struct nt::file_object_t*, struct nt::share_access_t*, struct nt::link_share_access_t*)>*) remove_link_share_access;
    
    // [IoRemoveLinkShareAccessEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67fcb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7975e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x652330, 0x1fe000 bytes
    //
    _m72(sdk::function<void(struct nt::file_object_t*, struct nt::share_access_t*, struct nt::link_share_access_t*, uint32_t)>*) remove_link_share_access_ex;
    
    // [IoReserveKsrPersistentMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x899440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94d230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x897bf0, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) reserve_ksr_persistent_memory;
    
    // [IoSaveBugCheckRecoveryStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fc840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d6cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc600, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) save_bug_check_recovery_status;
    
    // [IoSetAdapterCryptoEngineExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x501af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5456f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5018b0, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) set_adapter_crypto_engine_extension;
    
    // [IoSetBugCheckProgressAndFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fc93c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc6fc, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) set_bug_check_progress_and_flag;
    
    // [IoSetBugCheckProgressFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c8e14, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fc988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fc748, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) set_bug_check_progress_flag;
    
    // [IoSetLinkShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67fd40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x797670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6523c0, 0x1fe000 bytes
    //
    _m78(sdk::function<void(uint32_t, uint32_t, struct nt::file_object_t*, struct nt::share_access_t*, struct nt::link_share_access_t*, uint32_t)>*) set_link_share_access;
    
    // [IoUpdateBugCheckProgressEnvVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fcbc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53dc14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc980, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) update_bug_check_progress_env_variable;
    
    // [IoUpdateLinkShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x891340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88faf0, 0x1fe000 bytes
    //
    _m80(sdk::function<void(struct nt::file_object_t*, struct nt::share_access_t*, struct nt::link_share_access_t*)>*) update_link_share_access;
    
    // [IoUpdateLinkShareAccessEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x697320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e49c0, 0x1fe000 bytes
    //
    _m81(sdk::function<void(struct nt::file_object_t*, struct nt::share_access_t*, struct nt::link_share_access_t*, uint32_t)>*) update_link_share_access_ex;
    
    // [IoWorkerQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc16670, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d040, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc166d0, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) worker_queue;
    
    // [IoWriteKsrPersistentMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8998e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94d760, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x898090, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) write_ksr_persistent_memory;
    
    // [IoAcquireCancelSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104960, 0x32828 bytes
    // ntoskrnl.exe .text:0x246c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f03e0, 0x1fe000 bytes
    //
    _m84(sdk::function<void(uint8_t*)>*) acquire_cancel_spin_lock;
    
    // [IoAcquireRemoveLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8f5d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x292d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28b6b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x237750, 0x1fe000 bytes
    //
    _m85(sdk::function<int32_t(struct io::remove_lock_t*, void*, const char*, uint32_t, uint32_t)>*) acquire_remove_lock_ex;
    
    // [IoAcquireVpbSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x206c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ab90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2a50, 0x1fe000 bytes
    //
    _m86(sdk::function<void(uint8_t*)>*) acquire_vpb_spin_lock;
    
    // [IoAdapterObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab808, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc10, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e420, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc10, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) adapter_object_type;
    
    // [IoAddTriageDumpDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149640, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c73d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0c9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c82a8, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) add_triage_dump_data_block;
    
    // [IoAdjustStackSizeForRedirection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb44c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff4b0, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) adjust_stack_size_for_redirection;
    
    // [IoAllocateAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb500, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff7c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff580, 0x1fe000 bytes
    //
    _m90(sdk::function<int32_t(struct dma::adapter_t*, struct nt::device_object_t*, uint32_t, sdk::function<enum io::allocation_action_t(struct nt::device_object_t*, struct nt::irp_t*, void*, void*)>*, void*)>*) allocate_adapter_channel;
    
    // [IoAllocateController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcea30, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff7f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff5b0, 0x1fe000 bytes
    //
    _m91(sdk::function<void(struct nt::controller_object_t*, struct nt::device_object_t*, sdk::function<enum io::allocation_action_t(struct nt::device_object_t*, struct nt::irp_t*, void*, void*)>*, void*)>*) allocate_controller;
    
    // [IoAllocateDriverObjectExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd44b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b4f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c870, 0x1fe000 bytes
    //
    _m92(sdk::function<int32_t(struct nt::driver_object_t*, void*, uint32_t, void**)>*) allocate_driver_object_extension;
    
    // [IoAllocateErrorLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37c0e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37d460, 0x1fe000 bytes
    //
    _m93(sdk::function<void*(void*, uint8_t)>*) allocate_error_log_entry;
    
    // [IoAllocateGenericErrorLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb508, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff868, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5432c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff628, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) allocate_generic_error_log_entry;
    
    // [IoAllocateIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93fbc, 0x32828 bytes
    // ntoskrnl.exe .text:0x21bc80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0eb0, 0x1fe000 bytes
    //
    _m95(sdk::function<struct nt::irp_t*(char, uint8_t)>*) allocate_irp;
    
    // [IoAllocateIrpEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5ab4, 0x32828 bytes
    // ntoskrnl.exe .text:0x204bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x302110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6690, 0x1fe000 bytes
    //
    _m96(sdk::function<struct nt::irp_t*(struct nt::device_object_t*, char, uint8_t)>*) allocate_irp_ex;
    
    // [IoAllocateMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf61b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a95f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x319b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2be6d0, 0x1fe000 bytes
    //
    _m97(sdk::function<struct nt::mdl_t*(void*, uint32_t, uint8_t, uint8_t, struct nt::irp_t*)>*) allocate_mdl;
    
    // [IoAllocateMiniCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4104c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eeb00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71faa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x643b40, 0x1fe000 bytes
    //
    _m98(sdk::function<struct io::mini_completion_packet_user_t*(struct io::mini_packet_callback_routine_t*, void*)>*) allocate_mini_completion_packet;
    
    // [IoAllocateSfioStreamIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb514, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5432f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff650, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) allocate_sfio_stream_identifier;
    
    // [IoAllocateWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0b7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2547e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa4f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304530, 0x1fe000 bytes
    //
    _n00(sdk::function<struct io::workitem_t*(struct nt::device_object_t*)>*) allocate_work_item;
    
    // [IoAllowExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108900, 0x32828 bytes
    // ntoskrnl.exe .text:0x256a3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc33c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ddec, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) allow_execution;
    
    // [IoApplyPriorityInfoThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77b98, 0x32828 bytes
    // ntoskrnl.exe .text:0x351b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x216740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x234cf0, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) apply_priority_info_thread;
    
    // [IoArcBootDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae00, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd539a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc30, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) arc_boot_device_name;
    
    // [IoArcHalDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b490, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53cd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf00, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) arc_hal_device_name;
    
    // [IoArcTableListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad58, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c858, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c858, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) arc_table_list_head;
    
    // [IoAssignResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62ee6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89a460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94e430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x898c10, 0x1fe000 bytes
    //
    _n06(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, struct nt::driver_object_t*, struct nt::device_object_t*, struct io::resource_requirements_list_t*, struct cm::resource_list_t**)>*) assign_resources;
    
    // [IoAsynchronousPageWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4850, 0x32828 bytes
    // ntoskrnl.exe .text:0x23f5a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ecb38, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) asynchronous_page_write;
    
    // [IoAsynchronousPageWriteIrpAllocationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321ccc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5db18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ed0, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) asynchronous_page_write_irp_allocation_failure;
    
    // [IoAsynchronousPageWriteNonPagefileIrpAllocationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cd0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f34, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5db1c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ed4, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) asynchronous_page_write_non_pagefile_irp_allocation_failure;
    
    // [IoAttachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62853c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8909a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9419f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f150, 0x1fe000 bytes
    //
    _n10(sdk::function<int32_t(struct nt::device_object_t*, nt::unicode_view*, struct nt::device_object_t**)>*) attach_device;
    
    // [IoAttachDeviceByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb550, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff8e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff6a0, 0x1fe000 bytes
    //
    _n11(sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_object_t*)>*) attach_device_by_pointer;
    
    // [IoAttachDeviceToDeviceStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f760, 0x32828 bytes
    // ntoskrnl.exe .text:0x37cdc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e140, 0x1fe000 bytes
    //
    _n12(sdk::function<struct nt::device_object_t*(struct nt::device_object_t*, struct nt::device_object_t*)>*) attach_device_to_device_stack;
    
    // [IoAttachDeviceToDeviceStackSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4b84, 0x32828 bytes
    // ntoskrnl.exe .text:0x2567a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33db50, 0x1fe000 bytes
    //
    _n13(sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_object_t*, struct nt::device_object_t**)>*) attach_device_to_device_stack_safe;
    
    // [IoBlanketBoostCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321528, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45820, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d460, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457c0, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) blanket_boost_count;
    
    // [IoBoostThreadIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110fb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff6d0, 0x1fe000 bytes
    //
    _n15(sdk::function<int32_t(struct nt::kthread_t*, enum io::priority_hint_t, uint8_t, uint32_t)>*) boost_thread_io;
    
    // [IoBoostThreadIoPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c18, 0x32828 bytes
    // ntoskrnl.exe .text:0x354210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f505c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e33dc, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) boost_thread_io_priority;
    
    // [IoBoostedPagingIrpCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321520, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45824, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d464, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457c4, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) boosted_paging_irp_count;
    
    // [IoBoostedThreadedIrpCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321524, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45828, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d468, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457c8, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) boosted_threaded_irp_count;
    
    // [IoBuildAsynchronousFsdRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc6ce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x259a30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3400e0, 0x1fe000 bytes
    //
    _n19(sdk::function<struct nt::irp_t*(uint32_t, struct nt::device_object_t*, void*, uint32_t, int64_t*, struct io::status_block_t*)>*) build_asynchronous_fsd_request;
    
    // [IoBuildDeviceIoControlRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfde68, 0x32828 bytes
    // ntoskrnl.exe .text:0x30e280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2adc20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2042e0, 0x1fe000 bytes
    //
    _n20(sdk::function<struct nt::irp_t*(uint32_t, struct nt::device_object_t*, void*, uint32_t, void*, uint32_t, uint8_t, struct nt::kevent_t*, struct io::status_block_t*)>*) build_device_io_control_request;
    
    // [IoBuildPartialMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb29b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eb4c0, 0x1fe000 bytes
    //
    _n21(sdk::function<void(struct nt::mdl_t*, struct nt::mdl_t*, void*, uint32_t)>*) build_partial_mdl;
    
    // [IoBuildPoDeviceNotifyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cf48c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x993910, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa89da8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x992920, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) build_po_device_notify_list;
    
    // [IoBuildSynchronousFsdRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x487ad0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e30d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703f90, 0x1fe000 bytes
    //
    _n23(sdk::function<struct nt::irp_t*(uint32_t, struct nt::device_object_t*, void*, uint32_t, int64_t*, struct nt::kevent_t*, struct io::status_block_t*)>*) build_synchronous_fsd_request;
    
    // [IoCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e9bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x396270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3972d0, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) call_driver;
    
    // [IoCallDriverWithTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3d9e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d34f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ae580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x254510, 0x1fe000 bytes
    //
    _n25(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*) call_driver_with_tracing;
    
    // [IoCancelFileOpen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628620, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x941af0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f250, 0x1fe000 bytes
    //
    _n26(sdk::function<void(struct nt::device_object_t*, struct nt::file_object_t*)>*) cancel_file_open;
    
    // [IoCancelIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc30d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x25a230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x374760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30aca0, 0x1fe000 bytes
    //
    _n27(sdk::function<uint8_t(struct nt::irp_t*)>*) cancel_irp;
    
    // [IoCancelThreadIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4823ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69e13c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68ad28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x706a10, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) cancel_thread_io;
    
    // [IoCaptureLiveDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62b098, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x893558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x946508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x891d08, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) capture_live_dump;
    
    // [IoChangeFileObjectFilterContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1013d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ffdfc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2819bc, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) change_file_object_filter_context;
    
    // [IoCheckDesiredAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62873c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x941c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f3a0, 0x1fe000 bytes
    //
    _n31(sdk::function<int32_t(uint32_t*, uint32_t)>*) check_desired_access;
    
    // [IoCheckEaBufferValidity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f340c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61e530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66def0, 0x1fe000 bytes
    //
    _n32(sdk::function<int32_t(struct nt::file_full_ea_information_t*, uint32_t, uint32_t*)>*) check_ea_buffer_validity;
    
    // [IoCheckFunctionAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b3f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x743440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80c4b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74b080, 0x1fe000 bytes
    //
    _n33(sdk::function<int32_t(uint32_t, uint8_t, uint8_t, uint32_t, void*, void*)>*) check_function_access;
    
    // [IoCheckQuerySetFileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7502e0, 0x1fe000 bytes
    //
    _n34(sdk::function<int32_t(enum nt::file_information_class_t, uint32_t, uint8_t)>*) check_query_set_file_information;
    
    // [IoCheckQuerySetVolumeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b580, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765ec0, 0x1fe000 bytes
    //
    _n35(sdk::function<int32_t(enum nt::fsinfoclass_t, uint32_t, uint8_t)>*) check_query_set_volume_information;
    
    // [IoCheckQuotaBufferValidity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628774, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x941cd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f3e0, 0x1fe000 bytes
    //
    _n36(sdk::function<int32_t(struct nt::file_quota_information_t*, uint32_t, uint32_t*)>*) check_quota_buffer_validity;
    
    // [IoCheckShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e56d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6771f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da4b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6be910, 0x1fe000 bytes
    //
    _n37(sdk::function<int32_t(uint32_t, uint32_t, struct nt::file_object_t*, struct nt::share_access_t*, uint8_t)>*) check_share_access;
    
    // [IoCheckShareAccessEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e56f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7609d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768420, 0x1fe000 bytes
    //
    _n38(sdk::function<int32_t(uint32_t, uint32_t, struct nt::file_object_t*, struct nt::share_access_t*, uint8_t, uint8_t*)>*) check_share_access_ex;
    
    // [IoCleanupIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb570, 0x32828 bytes
    // ntoskrnl.exe .text:0x38dcc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399e90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ed50, 0x1fe000 bytes
    //
    _n39(sdk::function<void(struct nt::irp_t*)>*) cleanup_irp;
    
    // [IoClearActivityIdThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a3fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x201b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5400, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) clear_activity_id_thread;
    
    // [IoClearFsTrackOffsetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cccfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x501a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501800, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) clear_fs_track_offset_state;
    
    // [IoClearIrpExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb5b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff730, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) clear_irp_extra_create_parameter;
    
    // [IoCompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x486b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff750, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) complete_request;
    
    // [IoCompletionObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab358, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5d0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbf8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5d0, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) completion_object_type;
    
    // [IoConfigureCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13ff74, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bb300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53c574, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bbcb0, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) configure_crash_dump;
    
    // [IoConnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ab7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ad7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x864150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b53f0, 0x1fe000 bytes
    //
    _n46(sdk::function<int32_t(struct nt::kinterrupt_t**, sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*, void*, uint64_t*, uint32_t, uint8_t, uint8_t, enum nt::kinterrupt_mode_t, uint8_t, uint64_t, uint8_t)>*) connect_interrupt;
    
    // [IoConnectInterruptEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x529df4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7edfd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749b30, 0x1fe000 bytes
    //
    _n47(sdk::function<int32_t(struct io::connect_interrupt_parameters_t*)>*) connect_interrupt_ex;
    
    // [IoControlPnpDeviceActionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f594, 0x32828 bytes
    // ntoskrnl.exe .text:0x213b44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bdbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361fbc, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) control_pnp_device_action_queue;
    
    // [IoControllerObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6c8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbad8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1d0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbad8, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) controller_object_type;
    
    // [IoConvertFileHandleToKernelHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628828, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716120, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) convert_file_handle_to_kernel_handle;
    
    // [IoCopyDeviceObjectHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628978, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x941df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f4a0, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) copy_device_object_hint;
    
    // [IoCreateArcName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x544a94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x763800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8139f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76aaa0, 0x1fe000 bytes
    //
    _n52(sdk::function<int32_t(struct nt::device_object_t*)>*) create_arc_name;
    
    // [IoCreateController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56faf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x941e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f530, 0x1fe000 bytes
    //
    _n53(sdk::function<struct nt::controller_object_t*(uint32_t)>*) create_controller;
    
    // [IoCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e6ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f9620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f74e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x702440, 0x1fe000 bytes
    //
    _n54(sdk::function<int32_t(struct nt::driver_object_t*, uint32_t, nt::unicode_view*, uint32_t, uint32_t, uint8_t, struct nt::device_object_t**)>*) create_device;
    
    // [IoCreateDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88aee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93bc10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889690, 0x1fe000 bytes
    //
    _n55(sdk::function<int32_t(struct nt::device_object_t*, struct nt::create_disk_t*)>*) create_disk;
    
    // [IoCreateDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546818, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x781d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x837450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78bb20, 0x1fe000 bytes
    //
    _n56(sdk::function<int32_t(nt::unicode_view*, sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*)>*) create_driver;
    
    // [IoCreateFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e11c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61d090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb460, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ca50, 0x1fe000 bytes
    //
    _n57(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, int64_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*, uint32_t, enum nt::create_file_type_t, void*, uint32_t)>*) create_file;
    
    // [IoCreateFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f2604, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61d130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7634d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66caf0, 0x1fe000 bytes
    //
    _n58(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, int64_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*, uint32_t, enum nt::create_file_type_t, void*, uint32_t, struct io::driver_create_context_t*)>*) create_file_ex;
    
    // [IoCreateFileSpecifyDeviceObjectHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496f40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6729c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dfd50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6090, 0x1fe000 bytes
    //
    _n59(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, struct io::status_block_t*, int64_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*, uint32_t, enum nt::create_file_type_t, void*, uint32_t, void*)>*) create_file_specify_device_object_hint;
    
    // [IoCreateNotificationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ee04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x770ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778550, 0x1fe000 bytes
    //
    _n60(sdk::function<struct nt::kevent_t*(nt::unicode_view*, void**)>*) create_notification_event;
    
    // [IoCreateObjectTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78332c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa39704, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2877c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa39bb4, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) create_object_types;
    
    // [IoCreateStreamFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6289fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75f1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x814e50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x766bf0, 0x1fe000 bytes
    //
    _n62(sdk::function<struct nt::file_object_t*(struct nt::file_object_t*, struct nt::device_object_t*)>*) create_stream_file_object;
    
    // [IoCreateStreamFileObjectEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ef20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75df80, 0x1fe000 bytes
    //
    _n63(sdk::function<struct nt::file_object_t*(struct nt::file_object_t*, struct nt::device_object_t*, void**)>*) create_stream_file_object_ex;
    
    // [IoCreateStreamFileObjectEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e4308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f9030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x797c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x701e50, 0x1fe000 bytes
    //
    _n64(sdk::function<int32_t(struct io::create_stream_file_options_t*, struct nt::file_object_t*, struct nt::device_object_t*, struct nt::file_object_t**, void**)>*) create_stream_file_object_ex2;
    
    // [IoCreateStreamFileObjectLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e42c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f8fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x797bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x701e00, 0x1fe000 bytes
    //
    _n65(sdk::function<struct nt::file_object_t*(struct nt::file_object_t*, struct nt::device_object_t*)>*) create_stream_file_object_lite;
    
    // [IoCreateSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1828, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c52c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758bc0, 0x1fe000 bytes
    //
    _n66(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*)>*) create_symbolic_link;
    
    // [IoCreateSynchronizationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628a3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ee40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f640, 0x1fe000 bytes
    //
    _n67(sdk::function<struct nt::kevent_t*(nt::unicode_view*, void**)>*) create_synchronization_event;
    
    // [IoCreateSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d740, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8137f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758db0, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) create_system_thread;
    
    // [IoCreateUnprotectedSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628ad8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x941f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f6f0, 0x1fe000 bytes
    //
    _n69(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*)>*) create_unprotected_symbolic_link;
    
    // [IoCsqInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca724, 0x32828 bytes
    // ntoskrnl.exe .text:0x269050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37bd60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a070, 0x1fe000 bytes
    //
    _n70(sdk::function<int32_t(struct io::csq_t*, sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*, sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*, sdk::function<struct nt::irp_t*(struct io::csq_t*, struct nt::irp_t*, void*)>*, sdk::function<void(struct io::csq_t*, uint8_t*)>*, sdk::function<void(struct io::csq_t*, uint8_t)>*, sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*)>*) csq_initialize;
    
    // [IoCsqInitializeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd447c, 0x32828 bytes
    // ntoskrnl.exe .text:0x270a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x383430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3221d0, 0x1fe000 bytes
    //
    _n71(sdk::function<int32_t(struct io::csq_t*, sdk::function<int32_t(struct io::csq_t*, struct nt::irp_t*, void*)>*, sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*, sdk::function<struct nt::irp_t*(struct io::csq_t*, struct nt::irp_t*, void*)>*, sdk::function<void(struct io::csq_t*, uint8_t*)>*, sdk::function<void(struct io::csq_t*, uint8_t)>*, sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*)>*) csq_initialize_ex;
    
    // [IoCsqInsertIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe65c, 0x32828 bytes
    // ntoskrnl.exe .text:0x24db50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f77a0, 0x1fe000 bytes
    //
    _n72(sdk::function<void(struct io::csq_t*, struct nt::irp_t*, struct io::csq_irp_context_t*)>*) csq_insert_irp;
    
    // [IoCsqInsertIrpEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe664, 0x32828 bytes
    // ntoskrnl.exe .text:0x24db70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353d10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f77c0, 0x1fe000 bytes
    //
    _n73(sdk::function<int32_t(struct io::csq_t*, struct nt::irp_t*, struct io::csq_irp_context_t*, void*)>*) csq_insert_irp_ex;
    
    // [IoCsqRemoveIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1310b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x395740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3967a0, 0x1fe000 bytes
    //
    _n74(sdk::function<struct nt::irp_t*(struct io::csq_t*, struct io::csq_irp_context_t*)>*) csq_remove_irp;
    
    // [IoCsqRemoveNextIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbf780, 0x32828 bytes
    // ntoskrnl.exe .text:0x24de00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb6d0, 0x1fe000 bytes
    //
    _n75(sdk::function<struct nt::irp_t*(struct io::csq_t*, void*)>*) csq_remove_next_irp;
    
    // [IoDecrementKeepAliveCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc370, 0x32828 bytes
    // ntoskrnl.exe .text:0x500e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5449b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500c50, 0x1fe000 bytes
    //
    _n76(sdk::function<int32_t(struct nt::file_object_t*, struct nt::kprocess_t*)>*) decrement_keep_alive_count;
    
    // [IoDeleteController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4959b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66caa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c2050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dfd10, 0x1fe000 bytes
    //
    _n77(sdk::function<void(struct nt::controller_object_t*)>*) delete_controller;
    
    // [IoDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x211af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2edb40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f800, 0x1fe000 bytes
    //
    _n78(sdk::function<void(struct nt::device_object_t*)>*) delete_device;
    
    // [IoDeleteDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4959b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f760, 0x1fe000 bytes
    //
    _n79(sdk::function<void(struct nt::driver_object_t*)>*) delete_driver;
    
    // [IoDeleteSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7554d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75cf20, 0x1fe000 bytes
    //
    _n80(sdk::function<int32_t(nt::unicode_view*)>*) delete_symbolic_link;
    
    // [IoDetachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2234, 0x32828 bytes
    // ntoskrnl.exe .text:0x211a60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37daf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f770, 0x1fe000 bytes
    //
    _n81(sdk::function<void(struct nt::device_object_t*)>*) detach_device;
    
    // [IoDeviceHandlerObjectSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ada78, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc4c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e334, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc4c, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) device_handler_object_size;
    
    // [IoDeviceHandlerObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aed88, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfcc70, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd23f98, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfcc70, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) device_handler_object_type;
    
    // [IoDeviceObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab558, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb800, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dde0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb800, 0x1fe000 bytes
    //
    _n84(struct nt::object_type_t***) device_object_type;
    
    // [IoDisconnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522284, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749970, 0x1fe000 bytes
    //
    _n85(sdk::function<void(struct nt::kinterrupt_t*)>*) disconnect_interrupt;
    
    // [IoDisconnectInterruptEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52220c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7498d0, 0x1fe000 bytes
    //
    _n86(sdk::function<void(struct io::disconnect_interrupt_parameters_t*)>*) disconnect_interrupt_ex;
    
    // [IoDiskIoAttributionAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41f68c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x636ef4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675a4c, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) disk_io_attribution_allocate;
    
    // [IoDiskIoAttributionDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79134, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a2f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3350f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db1b4, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) disk_io_attribution_dereference;
    
    // [IoDiskIoAttributionQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x794a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x239e7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3349a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dad3c, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) disk_io_attribution_query;
    
    // [IoDiskIoAttributionReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb5c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff9a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5433a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff768, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) disk_io_attribution_reference;
    
    // [IoDriverObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab330, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5a0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbb0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5a0, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) driver_object_type;
    
    // [IoDumpStackResumeCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1110c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x389538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53c7a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a058, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) dump_stack_resume_capable;
    
    // [IoDuplicateDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62fcf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89aab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ea20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899260, 0x1fe000 bytes
    //
    _n93(sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_object_t*)>*) duplicate_dependency;
    
    // [IoEnableIrpCredits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625ff8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e188, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93f57c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88c938, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) enable_irp_credits;
    
    // [IoEnqueueIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628b2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f790, 0x1fe000 bytes
    //
    _n95(sdk::function<void(struct nt::irp_t*)>*) enqueue_irp;
    
    // [IoEnumerateDeviceObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146394, 0x32828 bytes
    // ntoskrnl.exe .text:0x396580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3975a0, 0x1fe000 bytes
    //
    _n96(sdk::function<int32_t(struct nt::driver_object_t*, struct nt::device_object_t**, uint32_t, uint32_t*)>*) enumerate_device_object_list;
    
    // [IoEnumerateEnvironmentVariablesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d224, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x896bac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84c770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89535c, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) enumerate_environment_variables_ex;
    
    // [IoEnumerateRegisteredFiltersList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74fe50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x757a90, 0x1fe000 bytes
    //
    _n98(sdk::function<int32_t(struct nt::driver_object_t**, uint32_t, uint32_t*)>*) enumerate_registered_filters_list;
    
    // [IoFastQueryNetworkAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628b34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f7b0, 0x1fe000 bytes
    //
    _n99(sdk::function<uint8_t(struct nt::object_attributes_t*, uint32_t, uint32_t, struct io::status_block_t*, struct nt::file_network_open_information_t*)>*) fast_query_network_attributes;
    
    // [IoFileObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab240, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb448, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da50, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb448, 0x1fe000 bytes
    //
    _o00(struct nt::object_type_t***) file_object_type;
    
    // [IoFillDumpHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c80e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fbad8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53c7d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fb898, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) fill_dump_header;
    
    // [IoFillTriageDumpBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c83a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fbda0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53cae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fbb60, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) fill_triage_dump_buffer;
    
    // [IoFindDeviceThatFailedIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8df14, 0x32828 bytes
    // ntoskrnl.exe .text:0x376c14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f64c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x377f94, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) find_device_that_failed_irp;
    
    // [IoFlushAdapterBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6740, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3856c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x386480, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) flush_adapter_buffers;
    
    // [IoFlushAdapterBuffersV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6768, 0x11e8 bytes
    // ntoskrnl.exe .text:0x385700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45b980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3864c0, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) flush_adapter_buffers_v2;
    
    // [IoFlushAdapterBuffersV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22ed0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c4ee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4dd0, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) flush_adapter_buffers_v3;
    
    // [IoForwardIrpSynchronously]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490728, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65ff70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb4b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3900, 0x1fe000 bytes
    //
    _o07(sdk::function<uint8_t(struct nt::device_object_t*, struct nt::irp_t*)>*) forward_irp_synchronously;
    
    // [IoFreeAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4a30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b33e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4598a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b32b0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) free_adapter_channel;
    
    // [IoFreeAdapterChannelV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4b50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c739c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45bcf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c728c, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) free_adapter_channel_v2;
    
    // [IoFreeAdapterChannelV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4a50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c09ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fef70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c08dc, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) free_adapter_channel_v3;
    
    // [IoFreeController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcea98, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5433d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff790, 0x1fe000 bytes
    //
    _o11(sdk::function<void(struct nt::controller_object_t*)>*) free_controller;
    
    // [IoFreeDumpRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c8a84, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fc340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc100, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) free_dump_range;
    
    // [IoFreeErrorLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb5dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ffa20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff7e0, 0x1fe000 bytes
    //
    _o13(sdk::function<void(void*)>*) free_error_log_entry;
    
    // [IoFreeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4a830, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d3190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d3b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2541b0, 0x1fe000 bytes
    //
    _o14(sdk::function<void(struct nt::irp_t*)>*) free_irp;
    
    // [IoFreeMapRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa490, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39e1a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4598c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f660, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) free_map_registers;
    
    // [IoFreeMapRegistersV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x440c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c7570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45bee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7460, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) free_map_registers_v2;
    
    // [IoFreeMapRegistersV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa4bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39e1d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ff190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f694, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) free_map_registers_v3;
    
    // [IoFreeMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x959c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x209320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d17a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0a80, 0x1fe000 bytes
    //
    _o18(sdk::function<void(struct nt::mdl_t*)>*) free_mdl;
    
    // [IoFreeMiniCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46bc6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f74a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675a30, 0x1fe000 bytes
    //
    _o19(sdk::function<void(struct io::mini_completion_packet_user_t*)>*) free_mini_completion_packet;
    
    // [IoFreePoDeviceNotifyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ce548, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99405c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8a404, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99306c, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) free_po_device_notify_list;
    
    // [IoFreeSfioStreamIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb62c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ffa80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff840, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) free_sfio_stream_identifier;
    
    // [IoFreeWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc75c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x25ec90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f280, 0x1fe000 bytes
    //
    _o22(sdk::function<void(struct io::workitem_t*)>*) free_work_item;
    
    // [IoGetActivityIdIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1140, 0x32828 bytes
    // ntoskrnl.exe .text:0x23c9a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3496c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e91a0, 0x1fe000 bytes
    //
    _o23(sdk::function<int32_t(struct nt::irp_t*, struct nt::guid_t*)>*) get_activity_id_irp;
    
    // [IoGetActivityIdThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1a30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2109f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f88c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b300, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) get_activity_id_thread;
    
    // [IoGetAffinityInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a8ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x37db00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ee80, 0x1fe000 bytes
    //
    _o25(sdk::function<int32_t(struct nt::kinterrupt_t*, struct nt::group_affinity_t*)>*) get_affinity_interrupt;
    
    // [IoGetAttachedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf58a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d3390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d3d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2543b0, 0x1fe000 bytes
    //
    _o26(sdk::function<struct nt::device_object_t*(struct nt::device_object_t*)>*) get_attached_device;
    
    // [IoGetAttachedDeviceReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92790, 0x32828 bytes
    // ntoskrnl.exe .text:0x3362c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2974d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27d520, 0x1fe000 bytes
    //
    _o27(sdk::function<struct nt::device_object_t*(struct nt::device_object_t*)>*) get_attached_device_reference;
    
    // [IoGetBaseFileSystemDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf80dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x30fd50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x282410, 0x1fe000 bytes
    //
    _o28(sdk::function<struct nt::device_object_t*(struct nt::file_object_t*)>*) get_base_file_system_device_object;
    
    // [IoGetBootDiskInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628b6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9420a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f7f0, 0x1fe000 bytes
    //
    _o29(sdk::function<int32_t(struct nt::bootdisk_information_t*, uint32_t)>*) get_boot_disk_information;
    
    // [IoGetBootDiskInformationLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55003c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82e370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788360, 0x1fe000 bytes
    //
    _o30(sdk::function<int32_t(struct nt::bootdisk_information_lite_t**)>*) get_boot_disk_information_lite;
    
    // [IoGetConfigurationInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x544a8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x765010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x817310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c6e0, 0x1fe000 bytes
    //
    _o31(sdk::function<struct nt::configuration_information_t*()>*) get_configuration_information;
    
    // [IoGetContainerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x629680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890460, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) get_container_information;
    
    // [IoGetDeviceAttachmentBaseRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1088b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2569c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc2c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33dd70, 0x1fe000 bytes
    //
    _o33(sdk::function<struct nt::device_object_t*(struct nt::device_object_t*)>*) get_device_attachment_base_ref;
    
    // [IoGetDeviceInstanceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12a97c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37fc70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b780, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) get_device_instance_name;
    
    // [IoGetDeviceInterfaceAlias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519a6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70f4c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716e50, 0x1fe000 bytes
    //
    _o35(sdk::function<int32_t(nt::unicode_view*, const struct nt::guid_t*, nt::unicode_view*)>*) get_device_interface_alias;
    
    // [IoGetDeviceInterfacePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62f060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7de1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899fa0, 0x1fe000 bytes
    //
    _o36(sdk::function<int32_t(nt::unicode_view*, const struct nt::devpropkey_t*, uint32_t, uint32_t, uint32_t, void*, uint32_t*, uint32_t*)>*) get_device_interface_property_data;
    
    // [IoGetDeviceInterfaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x437910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e61f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b34d0, 0x1fe000 bytes
    //
    _o37(sdk::function<int32_t(const struct nt::guid_t*, struct nt::device_object_t*, uint32_t, wchar_t**)>*) get_device_interfaces;
    
    // [IoGetDeviceNumaNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537e7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e550, 0x1fe000 bytes
    //
    _o38(sdk::function<int32_t(struct nt::device_object_t*, wchar_t*)>*) get_device_numa_node;
    
    // [IoGetDeviceObjectPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4315f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60f9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70f000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5db530, 0x1fe000 bytes
    //
    _o39(sdk::function<int32_t(nt::unicode_view*, uint32_t, struct nt::file_object_t**, struct nt::device_object_t**)>*) get_device_object_pointer;
    
    // [IoGetDeviceProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43b048, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e10b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aeec0, 0x1fe000 bytes
    //
    _o40(sdk::function<int32_t(struct nt::device_object_t*, enum wdf::device_registry_property_t, uint32_t, void*, uint32_t*)>*) get_device_property;
    
    // [IoGetDevicePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43925c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed890, 0x1fe000 bytes
    //
    _o41(sdk::function<int32_t(struct nt::device_object_t*, const struct nt::devpropkey_t*, uint32_t, uint32_t, uint32_t, void*, uint32_t*, uint32_t*)>*) get_device_property_data;
    
    // [IoGetDeviceToVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111038, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ffba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff960, 0x1fe000 bytes
    //
    _o42(sdk::function<struct nt::device_object_t*(struct nt::kthread_t*)>*) get_device_to_verify;
    
    // [IoGetDiskDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb6e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x390520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391570, 0x1fe000 bytes
    //
    _o43(sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_object_t**)>*) get_disk_device_object;
    
    // [IoGetDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5685fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x746370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74dfb0, 0x1fe000 bytes
    //
    _o44(sdk::function<struct dma::adapter_t*(struct nt::device_object_t*, struct nt::device_description_t*, uint32_t*)>*) get_dma_adapter;
    
    // [IoGetDriverObjectExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3618, 0x32828 bytes
    // ntoskrnl.exe .text:0x26d2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37cc70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31ec30, 0x1fe000 bytes
    //
    _o45(sdk::function<void*(struct nt::driver_object_t*, void*)>*) get_driver_object_extension;
    
    // [IoGetDumpHiberRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124c7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38381c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d18c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3845dc, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) get_dump_hiber_ranges;
    
    // [IoGetDumpStackTransferSizes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124840, 0x32828 bytes
    // ntoskrnl.exe .text:0x383bb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d2d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x384974, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) get_dump_stack_transfer_sizes;
    
    // [IoGetEnvironmentVariableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d2a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x896d0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8954bc, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) get_environment_variable_ex;
    
    // [IoGetFileObjectFilterContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10146c, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c7ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ffd90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f63ac, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) get_file_object_filter_context;
    
    // [IoGetFileObjectGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c980, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2cd0, 0x1fe000 bytes
    //
    _o50(sdk::function<struct nt::generic_mapping_t*()>*) get_file_object_generic_mapping;
    
    // [IoGetFsTrackOffsetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee50c, 0x32828 bytes
    // ntoskrnl.exe .text:0x23fb30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2092b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed0c0, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) get_fs_track_offset_state;
    
    // [IoGetFsZeroingOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ccd2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x501ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e01c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501870, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) get_fs_zeroing_offset;
    
    // [IoGetGenericIrpExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ee18, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ec00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36dba0, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) get_generic_irp_extension;
    
    // [IoGetInitialStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628b80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9420d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f820, 0x1fe000 bytes
    //
    _o54(sdk::function<void*()>*) get_initial_stack;
    
    // [IoGetInitiatorProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3c38, 0x32828 bytes
    // ntoskrnl.exe .text:0x270fe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3227a0, 0x1fe000 bytes
    //
    _o55(sdk::function<struct nt::kprocess_t*(struct nt::file_object_t*)>*) get_initiator_process;
    
    // [IoGetIoAttributionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9390, 0x32828 bytes
    // ntoskrnl.exe .text:0x2448f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef790, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) get_io_attribution_handle;
    
    // [IoGetIoPriorityHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3daa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2407b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ae540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee010, 0x1fe000 bytes
    //
    _o57(sdk::function<enum io::priority_hint_t(struct nt::irp_t*)>*) get_io_priority_hint;
    
    // [IoGetIoRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78e54, 0x32828 bytes
    // ntoskrnl.exe .text:0x239f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334b90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dae20, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) get_io_rate_control;
    
    // [IoGetIrpExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x471d30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x641290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ff9e0, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) get_irp_extra_create_parameter;
    
    // [IoGetLegacyVetoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f50c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f4c38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70f8f0, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) get_legacy_veto_list;
    
    // [IoGetLoadedDriverInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c8b80, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fc43c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d314, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc1fc, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) get_loaded_driver_info;
    
    // [IoGetLowerDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd39f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26bcd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37c620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31d360, 0x1fe000 bytes
    //
    _o62(sdk::function<struct nt::device_object_t*(struct nt::device_object_t*)>*) get_lower_device_object;
    
    // [IoGetOplockFullFoExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x100ec0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c21c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d55ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5ccc, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) get_oplock_full_fo_ext;
    
    // [IoGetOplockKeyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb768, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ffbb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5435a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff970, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) get_oplock_key_context;
    
    // [IoGetOplockKeyContextEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1013ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x251fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e4bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fff80, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) get_oplock_key_context_ex;
    
    // [IoGetPagingIoPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbdc8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x24f510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fcca0, 0x1fe000 bytes
    //
    _o66(sdk::function<enum io::paging_priority_t(struct nt::irp_t*)>*) get_paging_io_priority;
    
    // [IoGetRelatedDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d1e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cb370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x252e60, 0x1fe000 bytes
    //
    _o67(sdk::function<struct nt::device_object_t*(struct nt::file_object_t*)>*) get_related_device_object;
    
    // [IoGetRelatedTargetDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e4294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f87ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x723930, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684fa0, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) get_related_target_device;
    
    // [IoGetRequestorProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91710, 0x32828 bytes
    // ntoskrnl.exe .text:0x2448a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c1f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4950, 0x1fe000 bytes
    //
    _o69(sdk::function<struct nt::kprocess_t*(struct nt::irp_t*)>*) get_requestor_process;
    
    // [IoGetRequestorProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd55a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca3c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb4c0, 0x1fe000 bytes
    //
    _o70(sdk::function<uint32_t(struct nt::irp_t*)>*) get_requestor_process_id;
    
    // [IoGetRequestorSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e4e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x270b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0f70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322330, 0x1fe000 bytes
    //
    _o71(sdk::function<int32_t(struct nt::irp_t*, uint32_t*)>*) get_requestor_session_id;
    
    // [IoGetSfioStreamIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb794, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ffbf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45dbb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff9b0, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) get_sfio_stream_identifier;
    
    // [IoGetSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1014f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c3c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d9620, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) get_silo;
    
    // [IoGetSiloParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe4b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ec30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc3c0, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) get_silo_parameters;
    
    // [IoGetStackLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x41d10, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ea500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cc9b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2082e0, 0x1fe000 bytes
    //
    _o75(sdk::function<void(uint64_t*, uint64_t*)>*) get_stack_limits;
    
    // [IoGetSymlinkSupportInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x629818, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x943220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890840, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) get_symlink_support_information;
    
    // [IoGetTopLevelIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb13a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d64a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281f90, 0x1fe000 bytes
    //
    _o77(sdk::function<struct nt::irp_t*()>*) get_top_level_irp;
    
    // [IoGetTransactionParameterBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaae50, 0x32828 bytes
    // ntoskrnl.exe .text:0x23bfc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34af50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e90e0, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) get_transaction_parameter_block;
    
    // [IoIncrementKeepAliveCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc45c, 0x32828 bytes
    // ntoskrnl.exe .text:0x500ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x544b10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500db0, 0x1fe000 bytes
    //
    _o79(sdk::function<int32_t(struct nt::file_object_t*, struct nt::kprocess_t*)>*) increment_keep_alive_count;
    
    // [IoInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x792edc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4291c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4c9f4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5f3cc, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) init_system;
    
    // [IoInitSystem_deviceNameBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce9f0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd55260, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7ffe0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd55260, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) init_system_device_name_buffer;
    
    // [IoInitSystemPreDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7838d4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3ab8c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb29d94, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3b03c, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) init_system_pre_drivers;
    
    // [IoInitSystem_valueBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce638, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54940, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f8b8, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54940, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) init_system_value_buffer;
    
    // [IoInitializeCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55d28c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x799064, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84686c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79ebb4, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) initialize_crash_dump;
    
    // [IoInitializeDumpStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1110e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x389568, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d3ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a088, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) initialize_dump_stack;
    
    // [IoInitializeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe8c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24d410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6ee0, 0x1fe000 bytes
    //
    _o86(sdk::function<void(struct nt::irp_t*, uint16_t, char)>*) initialize_irp;
    
    // [IoInitializeIrpEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb7c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x38dc70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ed00, 0x1fe000 bytes
    //
    _o87(sdk::function<void(struct nt::irp_t*, struct nt::device_object_t*, uint16_t, char)>*) initialize_irp_ex;
    
    // [IoInitializeMiniCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3168, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8918c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890070, 0x1fe000 bytes
    //
    _o88(sdk::function<void(struct io::mini_completion_packet_user_t*, struct io::mini_packet_callback_routine_t*, void*)>*) initialize_mini_completion_packet;
    
    // [IoInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x547ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773098, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82cadc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77e798, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) initialize_processor;
    
    // [IoInitializeRemoveLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3bc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37ad20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38ad30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c0a0, 0x1fe000 bytes
    //
    _o90(sdk::function<void(struct io::remove_lock_t*, uint32_t, uint32_t, uint32_t, uint32_t)>*) initialize_remove_lock_ex;
    
    // [IoInitializeTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56fbec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b5800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79e9b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd3c0, 0x1fe000 bytes
    //
    _o91(sdk::function<int32_t(struct nt::device_object_t*, sdk::function<void(struct nt::device_object_t*, void*)>*, void*)>*) initialize_timer;
    
    // [IoInitializeWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7d8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x374e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3761a0, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) initialize_work_item;
    
    // [IoInvalidateDeviceRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8db10, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38d4f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b900, 0x1fe000 bytes
    //
    _o93(sdk::function<void(struct nt::device_object_t*, enum nt::device_relation_type_t)>*) invalidate_device_relations;
    
    // [IoInvalidateDeviceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12ec68, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a0640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dc190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a1b00, 0x1fe000 bytes
    //
    _o94(sdk::function<void(struct nt::device_object_t*)>*) invalidate_device_state;
    
    // [IoIrpHasFsTrackOffsetExtensionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ccd60, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6000, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) irp_has_fs_track_offset_extension_type;
    
    // [IoIs32bitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x916a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x202210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5ae0, 0x1fe000 bytes
    //
    _o96(sdk::function<uint8_t(struct nt::irp_t*)>*) is32bit_process;
    
    // [IoIsActivityTracingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee4f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24cf20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6c40, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) is_activity_tracing_enabled;
    
    // [IoIsDeviceEjectable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcda40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2095b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x338a34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a310, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) is_device_ejectable;
    
    // [IoIsFileObjectIgnoringSharing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e56b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebf10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed190, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) is_file_object_ignoring_sharing;
    
    // [IoIsFileOriginRemote]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1090, 0x32828 bytes
    // ntoskrnl.exe .text:0x26b7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39be80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31ce00, 0x1fe000 bytes
    //
    _p00(sdk::function<uint8_t(struct nt::file_object_t*)>*) is_file_origin_remote;
    
    // [IoIsInitiator32bitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3c08, 0x32828 bytes
    // ntoskrnl.exe .text:0x368930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369ce0, 0x1fe000 bytes
    //
    _p01(sdk::function<uint8_t(struct nt::irp_t*)>*) is_initiator32bit_process;
    
    // [IoIsIoPriorityBoostActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3e28, 0x32828 bytes
    // ntoskrnl.exe .text:0x2541b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36aae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303f00, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) is_io_priority_boost_active;
    
    // [IoIsOperationSynchronous]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x103dd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x245c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2efb10, 0x1fe000 bytes
    //
    _p03(sdk::function<uint8_t(struct nt::irp_t*)>*) is_operation_synchronous;
    
    // [IoIsProcessAntiMalware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xced90, 0x32828 bytes
    // ntoskrnl.exe .text:0x26a480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f2d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31bb10, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) is_process_anti_malware;
    
    // [IoIsSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x253920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3683c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303760, 0x1fe000 bytes
    //
    _p05(sdk::function<uint8_t(struct nt::kthread_t*)>*) is_system_thread;
    
    // [IoIsValidIrpStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706860, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c53d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaef50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c43d0, 0x1fe000 bytes
    //
    _p06(sdk::function<uint32_t(int32_t)>*) is_valid_irp_status;
    
    // [IoIsValidNameGraftingBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62985c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8920e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x943270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890890, 0x1fe000 bytes
    //
    _p07(sdk::function<uint8_t(struct nt::irp_t*, struct nt::reparse_data_buffer_t*)>*) is_valid_name_grafting_buffer;
    
    // [IoIsWdmVersionAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d7d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8912f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899ff0, 0x1fe000 bytes
    //
    _p08(sdk::function<uint8_t(uint8_t, uint8_t)>*) is_wdm_version_available;
    
    // [IoKernelIssuedIoBoostedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321554, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4584c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d48c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457ec, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) kernel_issued_io_boosted_count;
    
    // [IoLoadCrashDumpDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c8d18, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fc6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc490, 0x1fe000 bytes
    //
    _p10(sdk::function<int32_t(nt::unicode_view*, struct io::load_crashdump_params_t*, struct io::load_crashdump_result_t*)>*) load_crash_dump_driver;
    
    // [IoLoaderArcBootDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b040, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd538a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb30, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) loader_arc_boot_device_name;
    
    // [IoLowPriorityReadOperationCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321550, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45848, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d494, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457e4, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) low_priority_read_operation_count;
    
    // [IoLowPriorityWriteOperationCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32154c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45844, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d490, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457e8, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) low_priority_write_operation_count;
    
    // [IoMakeAssociatedIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133cb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ffc30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e02e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff9f0, 0x1fe000 bytes
    //
    _p14(sdk::function<struct nt::irp_t*(struct nt::irp_t*, char)>*) make_associated_irp;
    
    // [IoMakeAssociatedIrpEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4a1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x23f7e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208f50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ecd70, 0x1fe000 bytes
    //
    _p15(sdk::function<struct nt::irp_t*(struct nt::irp_t*, struct nt::device_object_t*, char)>*) make_associated_irp_ex;
    
    // [IoMakeAssociatedIrpPriv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4a24, 0x32828 bytes
    // ntoskrnl.exe .text:0x23f7f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208f68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ecd88, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) make_associated_irp_priv;
    
    // [IoMapTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6640, 0x11e8 bytes
    // ntoskrnl.exe .text:0x384520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3852e0, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) map_transfer;
    
    // [IoMapTransferInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x666c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x38459c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4598de, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38535c, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) map_transfer_internal;
    
    // [IoMgr_DumpEncryptionFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261850, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e258, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c3b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e598, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) mgr_dump_encryption_failure;
    
    // [IoMgr_LegacyFsFilterBlockedByPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fa58, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ec88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cf98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2efc8, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) mgr_legacy_fs_filter_blocked_by_policy;
    
    // [IoMgr_LegacyFsFilterBlockedOnScm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fa48, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e238, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c398, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e578, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) mgr_legacy_fs_filter_blocked_on_scm;
    
    // [IoMgr_MountBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f398, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd168, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xef98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc8f8, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) mgr_mount_begin;
    
    // [IoMgr_MountFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fa68, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd188, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10158, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc918, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) mgr_mount_failed;
    
    // [IoMgr_MountSucceeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f388, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd178, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xef70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc908, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) mgr_mount_succeeded;
    
    // [IoMgrProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261860, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbb30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeec8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa530, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) mgr_provider;
    
    // [IoNotifyDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111160, 0x32828 bytes
    // ntoskrnl.exe .text:0x3804c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x381284, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) notify_dump;
    
    // [IoNotifyPowerOperationVetoed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630c84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89cea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x950d54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89b650, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) notify_power_operation_vetoed;
    
    // [IoNotifyQuotaState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ce928, 0x32828 bytes
    // ntoskrnl.exe .text:0x201200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x336600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201200, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) notify_quota_state;
    
    // [IoOpenDeviceInterfaceRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56704c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6530, 0x1fe000 bytes
    //
    _p29(sdk::function<int32_t(nt::unicode_view*, uint32_t, void**)>*) open_device_interface_registry_key;
    
    // [IoOpenDeviceRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4893c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e0bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x716ae0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1e40, 0x1fe000 bytes
    //
    _p30(sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint32_t, void**)>*) open_device_registry_key;
    
    // [IoOtherOperationCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321c20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45730, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d344, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456d0, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) other_operation_count;
    
    // [IoOtherTransferCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321c38, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45728, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d350, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456c8, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) other_transfer_count;
    
    // [IoPageRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10dcb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39bef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c7a0, 0x1fe000 bytes
    //
    _p33(sdk::function<int32_t(struct nt::file_object_t*, struct nt::mdl_t*, int64_t*, struct nt::kevent_t*, struct io::status_block_t*)>*) page_read;
    
    // [IoPageReadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8760, 0x32828 bytes
    // ntoskrnl.exe .text:0x339980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ae840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x280ba0, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) page_read_ex;
    
    // [IoPageReadIrpAllocationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cc4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5db20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ec0, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) page_read_irp_allocation_failure;
    
    // [IoPageReadNonPagefileIrpAllocationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cc8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5db24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ec4, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) page_read_non_pagefile_irp_allocation_failure;
    
    // [IoPagingReadLowPriorityBumpedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cb4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d40c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45764, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) paging_read_low_priority_bumped_count;
    
    // [IoPagingReadLowPriorityCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cb8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d410, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45768, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) paging_read_low_priority_count;
    
    // [IoPagingWriteLowPriorityBumpedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cbc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457cc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d414, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4576c, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) paging_write_low_priority_bumped_count;
    
    // [IoPagingWriteLowPriorityCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d418, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45770, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) paging_write_low_priority_count;
    
    // [IoPerfInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cceb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x501cc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54589c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501a88, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) perf_init;
    
    // [IoPerfReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ccf30, 0x32828 bytes
    // ntoskrnl.exe .text:0x501dc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545998, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501b84, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) perf_reset;
    
    // [IoProcessPassiveInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d024c, 0x32828 bytes
    // ntoskrnl.exe .text:0x507024, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d81ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506de4, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) process_passive_interrupts;
    
    // [IoPropagateActivityIdToThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeeb70, 0x32828 bytes
    // ntoskrnl.exe .text:0x23faf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed080, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) propagate_activity_id_to_thread;
    
    // [IoPropagateIrpExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4e9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x23fc60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed1f0, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) propagate_irp_extension;
    
    // [IoPropagateIrpExtensionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4eb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23fc80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed210, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) propagate_irp_extension_ex;
    
    // [IoQueryDeviceDescription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52f3c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76e4e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x854300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x775f50, 0x1fe000 bytes
    //
    _p47(sdk::function<int32_t(enum nt::interface_type_t*, uint32_t*, enum nt::configuration_type_t*, uint32_t*, enum nt::configuration_type_t*, uint32_t*, sdk::function<int32_t(void*, nt::unicode_view*, enum nt::interface_type_t, uint32_t, struct nt::key_value_full_information_t**, enum nt::configuration_type_t, uint32_t, struct nt::key_value_full_information_t**, enum nt::configuration_type_t, uint32_t, struct nt::key_value_full_information_t**)>*, void*)>*) query_device_description;
    
    // [IoQueryEnvironmentVariableInfoEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d33c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x896e94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94abdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x895644, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) query_environment_variable_info_ex;
    
    // [IoQueryFileDosDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f09c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60f030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70e660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5da9d0, 0x1fe000 bytes
    //
    _p49(sdk::function<int32_t(struct nt::file_object_t*, struct nt::object_name_information_t**)>*) query_file_dos_device_name;
    
    // [IoQueryFileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e9678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678fc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec3c0, 0x1fe000 bytes
    //
    _p50(sdk::function<int32_t(struct nt::file_object_t*, enum nt::file_information_class_t, uint32_t, void*, uint32_t*)>*) query_file_information;
    
    // [IoQueryFullDriverPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc560, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x381dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3880, 0x1fe000 bytes
    //
    _p51(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*) query_full_driver_path;
    
    // [IoQueryInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566bd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x746b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e7a0, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) query_interface;
    
    // [IoQueryLowPriorityIoInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628b90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674a48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6c54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7dd8, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) query_low_priority_io_information;
    
    // [IoQuerySystemDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5321ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c4bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c850c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dee7c, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) query_system_device_name;
    
    // [IoQueryVhdBootInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5708d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4e74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86dd3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bcab4, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) query_vhd_boot_information;
    
    // [IoQueryVolumeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51bdc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb4c0, 0x1fe000 bytes
    //
    _p56(sdk::function<int32_t(struct nt::file_object_t*, enum nt::fsinfoclass_t, uint32_t, void*, uint32_t*)>*) query_volume_information;
    
    // [IoQueueThreadIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1314c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e9d0, 0x1fe000 bytes
    //
    _p57(sdk::function<void(struct nt::irp_t*)>*) queue_thread_irp;
    
    // [IoQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xced24, 0x32828 bytes
    // ntoskrnl.exe .text:0x255ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304f40, 0x1fe000 bytes
    //
    _p58(sdk::function<void(struct io::workitem_t*, sdk::function<void(struct nt::device_object_t*, void*)>*, enum nt::work_queue_type_t, void*)>*) queue_work_item;
    
    // [IoQueueWorkItemEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee568, 0x32828 bytes
    // ntoskrnl.exe .text:0x255bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304f70, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) queue_work_item_ex;
    
    // [IoQueueWorkItemToNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc5a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x501160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x544c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500f20, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) queue_work_item_to_node;
    
    // [IoRaiseHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb810, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ffc50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ffa10, 0x1fe000 bytes
    //
    _p61(sdk::function<void(struct nt::irp_t*, struct nt::vpb_t*, struct nt::device_object_t*)>*) raise_hard_error;
    
    // [IoRaiseInformationalHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cba78, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fff10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5438e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ffcd0, 0x1fe000 bytes
    //
    _p62(sdk::function<uint8_t(int32_t, nt::unicode_view*, struct nt::kthread_t*)>*) raise_informational_hard_error;
    
    // [IoReadDiskSignature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5656b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88af90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93bcc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889740, 0x1fe000 bytes
    //
    _p63(sdk::function<int32_t(struct nt::device_object_t*, uint32_t, struct nt::disk_signature_t*)>*) read_disk_signature;
    
    // [IoReadOperationCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321c18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45718, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d348, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456b8, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) read_operation_count;
    
    // [IoReadPartitionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625238, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93bdc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889840, 0x1fe000 bytes
    //
    _p65(sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint8_t, struct nt::drive_layout_information_t**)>*) read_partition_table;
    
    // [IoReadPartitionTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625378, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93bf90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889a10, 0x1fe000 bytes
    //
    _p66(sdk::function<int32_t(struct nt::device_object_t*, struct nt::drive_layout_information_ex_t**)>*) read_partition_table_ex;
    
    // [IoReadTransferCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321c28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45738, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d358, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456d8, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) read_transfer_count;
    
    // [IoRecordIoAttribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78ff4, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db040, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) record_io_attribution;
    
    // [IoReferenceIoAttributionFromThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6c7e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3533d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x285114, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2355a8, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) reference_io_attribution_from_thread;
    
    // [IoRegisterBootDriverCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5711b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b52c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bce80, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) register_boot_driver_callback;
    
    // [IoRegisterBootDriverReinitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x567188, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a8a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85b850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b03c0, 0x1fe000 bytes
    //
    _p71(sdk::function<void(struct nt::driver_object_t*, sdk::function<void(struct nt::driver_object_t*, void*, uint32_t)>*, void*)>*) register_boot_driver_reinitialization;
    
    // [IoRegisterContainerNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56c848, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8904e0, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) register_container_notification;
    
    // [IoRegisterDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530104, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7261f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72e010, 0x1fe000 bytes
    //
    _p73(sdk::function<int32_t(struct nt::device_object_t*, const struct nt::guid_t*, nt::unicode_view*, nt::unicode_view*)>*) register_device_interface;
    
    // [IoRegisterDriverReinitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5671fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a8ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85b8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0440, 0x1fe000 bytes
    //
    _p74(sdk::function<void(struct nt::driver_object_t*, sdk::function<void(struct nt::driver_object_t*, void*, uint32_t)>*, void*)>*) register_driver_reinitialization;
    
    // [IoRegisterFileSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545d58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x763dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76b060, 0x1fe000 bytes
    //
    _p75(sdk::function<void(struct nt::device_object_t*)>*) register_file_system;
    
    // [IoRegisterFsRegistrationChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628c08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9420f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f840, 0x1fe000 bytes
    //
    _p76(sdk::function<int32_t(struct nt::driver_object_t*, sdk::function<void(struct nt::device_object_t*, uint8_t)>*)>*) register_fs_registration_change;
    
    // [IoRegisterFsRegistrationChangeMountAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545b64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aba40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8621a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b33c0, 0x1fe000 bytes
    //
    _p77(sdk::function<int32_t(struct nt::driver_object_t*, sdk::function<void(struct nt::device_object_t*, uint8_t)>*, uint8_t)>*) register_fs_registration_change_mount_aware;
    
    // [IoRegisterIoTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62a098, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x943b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8910f0, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) register_io_tracking;
    
    // [IoRegisterLastChanceShutdownNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5463c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a00f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8310, 0x1fe000 bytes
    //
    _p79(sdk::function<int32_t(struct nt::device_object_t*)>*) register_last_chance_shutdown_notification;
    
    // [IoRegisterPlugPlayNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ca04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e5190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8123c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2e50, 0x1fe000 bytes
    //
    _p80(sdk::function<int32_t(enum io::notification_event_category_t, uint32_t, void*, struct nt::driver_object_t*, sdk::function<int32_t(void*, void*)>*, void*, void**)>*) register_plug_play_notification;
    
    // [IoRegisterPriorityCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a360, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a5b20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3abb10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af430, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) register_priority_callback;
    
    // [IoRegisterShutdownNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8390, 0x1fe000 bytes
    //
    _p82(sdk::function<int32_t(struct nt::device_object_t*)>*) register_shutdown_notification;
    
    // [IoReleaseCancelSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbdcb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x358660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32e6d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dabb0, 0x1fe000 bytes
    //
    _p83(sdk::function<void(uint8_t)>*) release_cancel_spin_lock;
    
    // [IoReleaseIoRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4360, 0x32828 bytes
    // ntoskrnl.exe .text:0x200c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37a2b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200c40, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) release_io_rate_control;
    
    // [IoReleaseRemoveLockAndWaitEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf6e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3967a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3977c0, 0x1fe000 bytes
    //
    _p85(sdk::function<void(struct io::remove_lock_t*, void*, uint32_t)>*) release_remove_lock_and_wait_ex;
    
    // [IoReleaseRemoveLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfad4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24f930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fd100, 0x1fe000 bytes
    //
    _p86(sdk::function<void(struct io::remove_lock_t*, void*, uint32_t)>*) release_remove_lock_ex;
    
    // [IoReleaseVpbSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2a40, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2a30, 0x1fe000 bytes
    //
    _p87(sdk::function<void(uint8_t)>*) release_vpb_spin_lock;
    
    // [IoRemoveIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe9b50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e6d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29c790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x268050, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) remove_io_completion;
    
    // [IoRemoveShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e5590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67f670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7975c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x652650, 0x1fe000 bytes
    //
    _p89(sdk::function<void(struct nt::file_object_t*, struct nt::share_access_t*)>*) remove_share_access;
    
    // [IoReplaceFileObjectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628c10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86dec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720360, 0x1fe000 bytes
    //
    _p90(sdk::function<int32_t(struct nt::file_object_t*, wchar_t*, uint16_t)>*) replace_file_object_name;
    
    // [IoReplacePartitionUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62f068, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94f4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89a030, 0x1fe000 bytes
    //
    _p91(sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_object_t*, uint32_t)>*) replace_partition_unit;
    
    // [IoReportDetectedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x549bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78c430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8336e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7961d0, 0x1fe000 bytes
    //
    _p92(sdk::function<int32_t(struct nt::driver_object_t*, enum nt::interface_type_t, uint32_t, uint32_t, struct cm::resource_list_t*, struct io::resource_requirements_list_t*, uint8_t, struct nt::device_object_t**)>*) report_detected_device;
    
    // [IoReportHalResourceUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78e874, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa37240, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb370c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa376f0, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) report_hal_resource_usage;
    
    // [IoReportInterruptActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1230e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3881f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x388aa0, 0x1fe000 bytes
    //
    _p94(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*) report_interrupt_active;
    
    // [IoReportInterruptInactive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121944, 0x32828 bytes
    // ntoskrnl.exe .text:0x3888d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dbed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389340, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) report_interrupt_inactive;
    
    // [IoReportResourceForDetection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6310b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89d320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89bad0, 0x1fe000 bytes
    //
    _p96(sdk::function<int32_t(struct nt::driver_object_t*, struct cm::resource_list_t*, uint32_t, struct nt::device_object_t*, struct cm::resource_list_t*, uint32_t, uint8_t*)>*) report_resource_for_detection;
    
    // [IoReportResourceUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89d510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89bcc0, 0x1fe000 bytes
    //
    _p97(sdk::function<int32_t(nt::unicode_view*, struct nt::driver_object_t*, struct cm::resource_list_t*, uint32_t, struct nt::device_object_t*, struct cm::resource_list_t*, uint32_t, uint8_t, uint8_t*)>*) report_resource_usage;
    
    // [IoReportResourceUsageInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631474, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89d6f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951658, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89bea8, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) report_resource_usage_internal;
    
    // [IoReportRootDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5687e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x833b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b15e0, 0x1fe000 bytes
    //
    _p99(sdk::function<int32_t(struct nt::driver_object_t*)>*) report_root_device;
    
    // [IoReportTargetDeviceChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51a834, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80de40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758790, 0x1fe000 bytes
    //
    _q00(sdk::function<int32_t(struct nt::device_object_t*, void*)>*) report_target_device_change;
    
    // [IoReportTargetDeviceChangeAsynchronous]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1090bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x210e60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb2d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df540, 0x1fe000 bytes
    //
    _q01(sdk::function<int32_t(struct nt::device_object_t*, void*, sdk::function<void(void*)>*, void*)>*) report_target_device_change_asynchronous;
    
    // [IoRequestDeviceEject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf78c, 0x32828 bytes
    // ntoskrnl.exe .text:0x506960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54c5f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506720, 0x1fe000 bytes
    //
    _q02(sdk::function<void(struct nt::device_object_t*)>*) request_device_eject;
    
    // [IoRequestDeviceEjectEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf79c, 0x32828 bytes
    // ntoskrnl.exe .text:0x506980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54c610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506740, 0x1fe000 bytes
    //
    _q03(sdk::function<int32_t(struct nt::device_object_t*, sdk::function<void(int32_t, void*)>*, void*, struct nt::driver_object_t*)>*) request_device_eject_ex;
    
    // [IoRequestDeviceRemovalForReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6316bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89d9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89c1a0, 0x1fe000 bytes
    //
    _q04(sdk::function<int32_t(struct nt::device_object_t*, uint32_t)>*) request_device_removal_for_reset;
    
    // [IoReserveDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62fdfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89abe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x847050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899390, 0x1fe000 bytes
    //
    _q05(sdk::function<int32_t(struct nt::device_object_t*, const nt::unicode_view*, uint32_t)>*) reserve_dependency;
    
    // [IoResolveDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13f858, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ba9a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bb350, 0x1fe000 bytes
    //
    _q06(sdk::function<int32_t(const nt::unicode_view*, struct nt::device_object_t*)>*) resolve_dependency;
    
    // [IoRetrievePriorityInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a480, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c5a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x229c00, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) retrieve_priority_info;
    
    // [IoReuseIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee340, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3499f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eb1a0, 0x1fe000 bytes
    //
    _q08(sdk::function<void(struct nt::irp_t*, int32_t)>*) reuse_irp;
    
    // [IoRevokeHandlesForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc5ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5011b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x544cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500f70, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) revoke_handles_for_process;
    
    // [IoSaveBugCheckProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c8d94, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fc760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d5f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc520, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) save_bug_check_progress;
    
    // [IoSetActivityIdIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110e74, 0x32828 bytes
    // ntoskrnl.exe .text:0x374dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a30c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376140, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) set_activity_id_irp;
    
    // [IoSetActivityIdThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a410, 0x32828 bytes
    // ntoskrnl.exe .text:0x201b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e53e0, 0x1fe000 bytes
    //
    _q12(sdk::function<const struct nt::guid_t*(const struct nt::guid_t*)>*) set_activity_id_thread;
    
    // [IoSetCompletionRoutineEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcda58, 0x32828 bytes
    // ntoskrnl.exe .text:0x264c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x373370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x315070, 0x1fe000 bytes
    //
    _q13(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, void*)>*, void*, uint8_t, uint8_t, uint8_t)>*) set_completion_routine_ex;
    
    // [IoSetDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62fe74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ac80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94eb50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899430, 0x1fe000 bytes
    //
    _q14(sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_object_t*, uint32_t)>*) set_dependency;
    
    // [IoSetDeviceInterfacePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560ce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x761390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768630, 0x1fe000 bytes
    //
    _q15(sdk::function<int32_t(nt::unicode_view*, const struct nt::devpropkey_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*)>*) set_device_interface_property_data;
    
    // [IoSetDeviceInterfaceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fda84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7274b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72f2d0, 0x1fe000 bytes
    //
    _q16(sdk::function<int32_t(nt::unicode_view*, uint8_t)>*) set_device_interface_state;
    
    // [IoSetDevicePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53dd14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72bc60, 0x1fe000 bytes
    //
    _q17(sdk::function<int32_t(struct nt::device_object_t*, const struct nt::devpropkey_t*, uint32_t, uint32_t, uint32_t, uint32_t, void*)>*) set_device_property_data;
    
    // [IoSetDeviceToVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbd54, 0x32828 bytes
    // ntoskrnl.exe .text:0x201800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201800, 0x1fe000 bytes
    //
    _q18(sdk::function<void(struct nt::kthread_t*, struct nt::device_object_t*)>*) set_device_to_verify;
    
    // [IoSetDiskIoAttributionFromThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8110, 0x32828 bytes
    // ntoskrnl.exe .text:0x339dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b0240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x280ff0, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) set_disk_io_attribution_from_thread;
    
    // [IoSetDiskIoAttributionOnProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x82fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b82c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x335290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4688, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) set_disk_io_attribution_on_process;
    
    // [IoSetDumpRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c8e88, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fc9b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53d9f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc770, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) set_dump_range;
    
    // [IoSetEnvironmentVariableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d3cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89701c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ad64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8957cc, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) set_environment_variable_ex;
    
    // [IoSetFileObjectIgnoreSharing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628cdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8910d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8911e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f880, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) set_file_object_ignore_sharing;
    
    // [IoSetFileOrigin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x132374, 0x32828 bytes
    // ntoskrnl.exe .text:0x3751b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3980c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376530, 0x1fe000 bytes
    //
    _q24(sdk::function<int32_t(struct nt::file_object_t*, uint8_t)>*) set_file_origin;
    
    // [IoSetFsTrackOffsetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ccd6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x501b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501910, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) set_fs_track_offset_state;
    
    // [IoSetFsZeroingOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ccdc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x501bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5457b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501970, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) set_fs_zeroing_offset;
    
    // [IoSetFsZeroingOffsetRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ccdfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x501bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5457f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5019b0, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) set_fs_zeroing_offset_required;
    
    // [IoSetGenericIrpExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f13c, 0x32828 bytes
    // ntoskrnl.exe .text:0x375dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca9f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x377150, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) set_generic_irp_extension;
    
    // [IoSetHardErrorOrVerifyDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbd5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5002a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45dbf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500060, 0x1fe000 bytes
    //
    _q29(sdk::function<void(struct nt::irp_t*, struct nt::device_object_t*)>*) set_hard_error_or_verify_device;
    
    // [IoSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49b7e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75f430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80ea00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x766e80, 0x1fe000 bytes
    //
    _q30(sdk::function<int32_t(struct nt::file_object_t*, enum nt::file_information_class_t, uint32_t, void*)>*) set_information;
    
    // [IoSetIoAttributionIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbd70, 0x32828 bytes
    // ntoskrnl.exe .text:0x5002c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500080, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) set_io_attribution_irp;
    
    // [IoSetIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ed918, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6697a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dca20, 0x1fe000 bytes
    //
    _q32(sdk::function<int32_t(void*, void*, void*, int32_t, uint64_t, uint8_t)>*) set_io_completion;
    
    // [IoSetIoCompletionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa95a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c5fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x246fd0, 0x1fe000 bytes
    //
    _q33(sdk::function<int32_t(void*, void*, void*, int32_t, uint64_t, uint8_t, struct io::mini_completion_packet_user_t*)>*) set_io_completion_ex;
    
    // [IoSetIoCompletionEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e160, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c5430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x246460, 0x1fe000 bytes
    //
    _q34(sdk::function<int32_t(void*, void*, void*, int32_t, uint64_t, uint8_t, struct io::mini_completion_packet_user_t*, uint8_t)>*) set_io_completion_ex2;
    
    // [IoSetIoPriorityHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xba770, 0x32828 bytes
    // ntoskrnl.exe .text:0x24b6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f52f0, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) set_io_priority_hint;
    
    // [IoSetIoPriorityHintIntoFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbd9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x500300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5000c0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) set_io_priority_hint_into_file_object;
    
    // [IoSetIoPriorityHintIntoThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77b7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x352800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2350d0, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) set_io_priority_hint_into_thread;
    
    // [IoSetIrpExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478b80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x646c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8138e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb070, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) set_irp_extra_create_parameter;
    
    // [IoSetMasterIrpStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbaf1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x247de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ef50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3070, 0x1fe000 bytes
    //
    _q39(sdk::function<void(struct nt::irp_t*, int32_t)>*) set_master_irp_status;
    
    // [IoSetOplockKeyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131820, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c764, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397d44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d7f4, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) set_oplock_key_context;
    
    // [IoSetOplockPrivateFoExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1048a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d9f28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0af8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25afa8, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) set_oplock_private_fo_ext;
    
    // [IoSetPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625380, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889ac0, 0x1fe000 bytes
    //
    _q42(sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint32_t, uint32_t)>*) set_partition_information;
    
    // [IoSetPartitionInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6253d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889ba0, 0x1fe000 bytes
    //
    _q43(sdk::function<int32_t(struct nt::device_object_t*, uint32_t, struct nt::set_partition_information_ex_t*)>*) set_partition_information_ex;
    
    // [IoSetShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e5870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67dfc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x652980, 0x1fe000 bytes
    //
    _q44(sdk::function<void(uint32_t, uint32_t, struct nt::file_object_t*, struct nt::share_access_t*)>*) set_share_access;
    
    // [IoSetShareAccessEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2090, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75f650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7670a0, 0x1fe000 bytes
    //
    _q45(sdk::function<void(uint32_t, uint32_t, struct nt::file_object_t*, struct nt::share_access_t*, uint8_t*)>*) set_share_access_ex;
    
    // [IoSetStartIoAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a8d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbaa0, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) set_start_io_attributes;
    
    // [IoSetSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8910f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88f8a0, 0x1fe000 bytes
    //
    _q47(sdk::function<int32_t(nt::unicode_view*)>*) set_system_partition;
    
    // [IoSetThreadHardErrorMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7978, 0x32828 bytes
    // ntoskrnl.exe .text:0x2170f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x301ef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203230, 0x1fe000 bytes
    //
    _q48(sdk::function<uint8_t(uint8_t)>*) set_thread_hard_error_mode;
    
    // [IoSetTopLevelIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x169f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f8b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d64c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281f70, 0x1fe000 bytes
    //
    _q49(sdk::function<void(struct nt::irp_t*)>*) set_top_level_irp;
    
    // [IoShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d9ee8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a8198, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa85994, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a7108, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) shutdown_system;
    
    // [IoSizeOfIrpEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbdd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x500340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500100, 0x1fe000 bytes
    //
    _q51(sdk::function<uint16_t(struct nt::device_object_t*, char)>*) size_of_irp_ex;
    
    // [IoSizeofGenericIrpExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cce54, 0x32828 bytes
    // ntoskrnl.exe .text:0x501c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501a10, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) sizeof_generic_irp_extension;
    
    // [IoSizeofWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca248, 0x32828 bytes
    // ntoskrnl.exe .text:0x2620c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312840, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) sizeof_work_item;
    
    // [IoStartDiskIoAttributionForContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x793b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x239d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x335338, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dac50, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) start_disk_io_attribution_for_context;
    
    // [IoStartIoRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79610, 0x32828 bytes
    // ntoskrnl.exe .text:0x2006a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33687c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2006a0, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) start_io_rate_control;
    
    // [IoStartNextPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce958, 0x32828 bytes
    // ntoskrnl.exe .text:0x500380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500140, 0x1fe000 bytes
    //
    _q56(sdk::function<void(struct nt::device_object_t*, uint8_t)>*) start_next_packet;
    
    // [IoStartNextPacketByKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbdf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5003d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500190, 0x1fe000 bytes
    //
    _q57(sdk::function<void(struct nt::device_object_t*, uint8_t, uint32_t)>*) start_next_packet_by_key;
    
    // [IoStartPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xceb4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x500420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5001e0, 0x1fe000 bytes
    //
    _q58(sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, uint32_t*, sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*)>*) start_packet;
    
    // [IoStartTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbe2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5005c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543f70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500380, 0x1fe000 bytes
    //
    _q59(sdk::function<void(struct nt::device_object_t*)>*) start_timer;
    
    // [IoStatisticsLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be9c0, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22980, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd488c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22980, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) statistics_lock;
    
    // [IoStatusBlockRangeTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321b60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45e60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5da60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45e00, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) status_block_range_table;
    
    // [IoStatusBlockRangeTableLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321be0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45ee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5dae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45e80, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) status_block_range_table_lock;
    
    // [IoSteerInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62f138, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89a750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94e720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x898f00, 0x1fe000 bytes
    //
    _q63(sdk::function<int32_t(struct io::steer_interrupt_connection_t*, struct io::steer_interrupt_target_t*)>*) steer_interrupt;
    
    // [IoStopDiskIoAttributionForContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79364, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a6d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x335214, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db598, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) stop_disk_io_attribution_for_context;
    
    // [IoStopIoRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7985c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2008f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x336ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2008f4, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) stop_io_rate_control;
    
    // [IoStopTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbe50, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204c50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca550, 0x1fe000 bytes
    //
    _q66(sdk::function<void(struct nt::device_object_t*)>*) stop_timer;
    
    // [IoSynchronousCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc864, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ee20, 0x1fe000 bytes
    //
    _q67(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*) synchronous_call_driver;
    
    // [IoSynchronousPageWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4cf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x262090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x371000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312810, 0x1fe000 bytes
    //
    _q68(sdk::function<int32_t(struct nt::file_object_t*, struct nt::mdl_t*, int64_t*, struct nt::kevent_t*, struct io::status_block_t*)>*) synchronous_page_write;
    
    // [IoSynchronousPageWriteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4d14, 0x32828 bytes
    // ntoskrnl.exe .text:0x339bf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x280e18, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) synchronous_page_write_ex;
    
    // [IoSynchronousPageWriteIrpAllocationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cd4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5db28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ec8, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) synchronous_page_write_irp_allocation_failure;
    
    // [IoSynchronousPageWriteNonPagefileIrpAllocationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cd8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5db2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ecc, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) synchronous_page_write_non_pagefile_irp_allocation_failure;
    
    // [IoTestDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12238c, 0x32828 bytes
    // ntoskrnl.exe .text:0x386740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x387500, 0x1fe000 bytes
    //
    _q72(sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_object_t*, struct pnp::dependency_path_type_t*, uint32_t*)>*) test_dependency;
    
    // [IoThreadToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc53f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24cbd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29abf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a330, 0x1fe000 bytes
    //
    _q73(sdk::function<struct nt::kprocess_t*(struct nt::kthread_t*)>*) thread_to_process;
    
    // [IoTrace_ActivityIdTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ec90, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd420, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10148, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcb90, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) trace_activity_id_transfer;
    
    // [IoTraceHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321b38, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45e40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5da58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45dd8, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) trace_handle;
    
    // [IoTrace_KernelIo_AllocateIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fa98, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e358, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c540, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e698, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) trace_kernel_io_allocate_irp;
    
    // [IoTrace_KernelIo_ReuseIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fa88, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f170, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d638, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f4b0, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) trace_kernel_io_reuse_irp;
    
    // [IoTraceProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261870, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbb20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xeeb8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa520, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) trace_provider;
    
    // [IoTrace_UserInitiatedIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27faa8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e488, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c698, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e7c8, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) trace_user_initiated_io;
    
    // [IoTransferActivityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110c74, 0x32828 bytes
    // ntoskrnl.exe .text:0x394ce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395d40, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) transfer_activity_id;
    
    // [IoTranslateBusAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cff6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x506d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54cba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506ad0, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) translate_bus_address;
    
    // [IoTryQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c594, 0x32828 bytes
    // ntoskrnl.exe .text:0x3787d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379b50, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) try_queue_work_item;
    
    // [IoUninitializeWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcda2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x266ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x317f20, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) uninitialize_work_item;
    
    // [IoUnregisterBootDriverCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9c34, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa71100, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb61060, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa70340, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) unregister_boot_driver_callback;
    
    // [IoUnregisterContainerNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6296f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x943100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890720, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) unregister_container_notification;
    
    // [IoUnregisterFileSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628e74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x760640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768090, 0x1fe000 bytes
    //
    _q86(sdk::function<void(struct nt::device_object_t*)>*) unregister_file_system;
    
    // [IoUnregisterFsRegistrationChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628f2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9422d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88fa40, 0x1fe000 bytes
    //
    _q87(sdk::function<void(struct nt::driver_object_t*, sdk::function<void(struct nt::device_object_t*, uint8_t)>*)>*) unregister_fs_registration_change;
    
    // [IoUnregisterIoTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62a1d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x943c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x891200, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) unregister_io_tracking;
    
    // [IoUnregisterPlugPlayNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51e6d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c510, 0x1fe000 bytes
    //
    _q89(sdk::function<int32_t(void*)>*) unregister_plug_play_notification;
    
    // [IoUnregisterPlugPlayNotificationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51e6cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779a90, 0x1fe000 bytes
    //
    _q90(sdk::function<int32_t(void*)>*) unregister_plug_play_notification_ex;
    
    // [IoUnregisterPriorityCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbe5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5005f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x543fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5003b0, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) unregister_priority_callback;
    
    // [IoUnregisterShutdownNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3da0e0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a83d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa85c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a7340, 0x1fe000 bytes
    //
    _q92(sdk::function<void(struct nt::device_object_t*)>*) unregister_shutdown_notification;
    
    // [IoUpdateDumpPhysicalRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c907c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fcc2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53dc70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fc9ec, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) update_dump_physical_ranges;
    
    // [IoUpdateIrpIoAttributionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4a14, 0x32828 bytes
    // ntoskrnl.exe .text:0x2010b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2010b0, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) update_irp_io_attribution_handle;
    
    // [IoUpdateShareAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c134, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e530, 0x1fe000 bytes
    //
    _q95(sdk::function<void(struct nt::file_object_t*, struct nt::share_access_t*)>*) update_share_access;
    
    // [IoUpdateThreadIoRateThrottle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ce9d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x504b00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f3e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5048c0, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) update_thread_io_rate_throttle;
    
    // [IoValidateDeviceIoControlAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f940, 0x32828 bytes
    // ntoskrnl.exe .text:0x378f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3823d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a300, 0x1fe000 bytes
    //
    _q97(sdk::function<int32_t(struct nt::irp_t*, uint32_t)>*) validate_device_io_control_access;
    
    // [IoVerifierCheckForSettingsChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7035b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c26e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaacbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c16e4, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) verifier_check_for_settings_change;
    
    // [IoVerifierInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x703648, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c277c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaccac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c177c, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) verifier_init;
    
    // [IoVerifyPartitionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6253e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c1e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889c60, 0x1fe000 bytes
    //
    _r00(sdk::function<int32_t(struct nt::device_object_t*, uint8_t)>*) verify_partition_table;
    
    // [IoVerifyVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628fd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x891360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9423a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88fb10, 0x1fe000 bytes
    //
    _r01(sdk::function<int32_t(struct nt::device_object_t*, uint8_t)>*) verify_volume;
    
    // [IoVolumeDeviceNameToGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62a2c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x945650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8912c0, 0x1fe000 bytes
    //
    _r02(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*)>*) volume_device_name_to_guid;
    
    // [IoVolumeDeviceNameToGuidPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51e084, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x631f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x680070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687b20, 0x1fe000 bytes
    //
    _r03(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*)>*) volume_device_name_to_guid_path;
    
    // [IoVolumeDeviceToDosName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60f720, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70ed30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5db260, 0x1fe000 bytes
    //
    _r04(sdk::function<int32_t(void*, nt::unicode_view*)>*) volume_device_to_dos_name;
    
    // [IoVolumeDeviceToGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51debc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x631d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67fe70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687920, 0x1fe000 bytes
    //
    _r05(sdk::function<int32_t(void*, struct nt::guid_t*)>*) volume_device_to_guid;
    
    // [IoVolumeDeviceToGuidPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51df3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x631d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67ff00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6879b0, 0x1fe000 bytes
    //
    _r06(sdk::function<int32_t(void*, nt::unicode_view*)>*) volume_device_to_guid_path;
    
    // [IoWithinStackLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xabaa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23b200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e8ed0, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) within_stack_limits;
    
    // [IoWMIAllocateInstanceIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a1088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92dba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c470, 0x1fe000 bytes
    //
    _r08(sdk::function<int32_t(const struct nt::guid_t*, uint32_t, uint32_t*)>*) wmi_allocate_instance_ids;
    
    // [IoWMICompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x493368, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7097c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7720e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bc6a4, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) wmi_complete_request;
    
    // [IoWMIDeviceObjectToInstanceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7706a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8648e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778110, 0x1fe000 bytes
    //
    _r10(sdk::function<int32_t(void*, struct nt::device_object_t*, nt::unicode_view*)>*) wmi_device_object_to_instance_name;
    
    // [IoWMIDeviceObjectToProviderId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c1c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36dcd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36dbf0, 0x1fe000 bytes
    //
    _r11(sdk::function<uint32_t(struct nt::device_object_t*)>*) wmi_device_object_to_provider_id;
    
    // [IoWMIExecuteMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a11cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92dcf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c5c0, 0x1fe000 bytes
    //
    _r12(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t, uint32_t*, uint8_t*)>*) wmi_execute_method;
    
    // [IoWMIHandleToInstanceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53671c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x770620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x864770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778090, 0x1fe000 bytes
    //
    _r13(sdk::function<int32_t(void*, void*, nt::unicode_view*)>*) wmi_handle_to_instance_name;
    
    // [IoWMIOpenBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53598c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742e50, 0x1fe000 bytes
    //
    _r14(sdk::function<int32_t(const struct nt::guid_t*, uint32_t, void**)>*) wmi_open_block;
    
    // [IoWMIQueryAllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d6fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8679c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b7fe0, 0x1fe000 bytes
    //
    _r15(sdk::function<int32_t(void*, uint32_t*, void*)>*) wmi_query_all_data;
    
    // [IoWMIQueryAllDataMultiple]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a1340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92de70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c740, 0x1fe000 bytes
    //
    _r16(sdk::function<int32_t(void**, uint32_t, uint32_t*, void*)>*) wmi_query_all_data_multiple;
    
    // [IoWMIQuerySingleInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5373f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x737720, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8116e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73f360, 0x1fe000 bytes
    //
    _r17(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t*, void*)>*) wmi_query_single_instance;
    
    // [IoWMIQuerySingleInstanceMultiple]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a1404, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92df60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c830, 0x1fe000 bytes
    //
    _r18(sdk::function<int32_t(void**, nt::unicode_view*, uint32_t, uint32_t*, void*)>*) wmi_query_single_instance_multiple;
    
    // [IoWMIRegistrationControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52acf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x735480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d0c0, 0x1fe000 bytes
    //
    _r19(sdk::function<int32_t(struct nt::device_object_t*, uint32_t)>*) wmi_registration_control;
    
    // [IoWMISetNotificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d5c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b5600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd1c0, 0x1fe000 bytes
    //
    _r20(sdk::function<int32_t(void*, sdk::function<void(void*, void*)>*, void*)>*) wmi_set_notification_callback;
    
    // [IoWMISetSingleInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a14d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92e060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2e30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c930, 0x1fe000 bytes
    //
    _r21(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t, void*)>*) wmi_set_single_instance;
    
    // [IoWMISetSingleItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a15d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92e190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2f60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92ca60, 0x1fe000 bytes
    //
    _r22(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t, uint32_t, void*)>*) wmi_set_single_item;
    
    // [IoWMISuggestInstanceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a16f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92e2c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d3090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92cb90, 0x1fe000 bytes
    //
    _r23(sdk::function<int32_t(struct nt::device_object_t*, nt::unicode_view*, uint8_t, nt::unicode_view*)>*) wmi_suggest_instance_name;
    
    // [IoWMISystemControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492f1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675ed4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1524, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9114, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) wmi_system_control;
    
    // [IoWMIWriteEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12dcb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dc330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b7d0, 0x1fe000 bytes
    //
    _r25(sdk::function<int32_t(void*)>*) wmi_write_event;
    
    // [IoWriteCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c90f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fccb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53df10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fca70, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) write_crash_dump;
    
    // [IoWriteDeferredLiveDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62b684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x893ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x946dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x892490, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) write_deferred_live_dump_data;
    
    // [IoWriteErrorLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f524, 0x32828 bytes
    // ntoskrnl.exe .text:0x37c5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37d930, 0x1fe000 bytes
    //
    _r28(sdk::function<void(void*)>*) write_error_log_entry;
    
    // [IoWriteOperationCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321c1c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4571c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456bc, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) write_operation_count;
    
    // [IoWritePartitionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6253e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889d10, 0x1fe000 bytes
    //
    _r30(sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint32_t, uint32_t, struct nt::drive_layout_information_t*)>*) write_partition_table;
    
    // [IoWritePartitionTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6254cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b6d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889e80, 0x1fe000 bytes
    //
    _r31(sdk::function<int32_t(struct nt::device_object_t*, struct nt::drive_layout_information_ex_t*)>*) write_partition_table_ex;
    
    // [IoWriteTransferCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321c30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45720, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d360, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456c0, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) write_transfer_count;
    
    // [IoDevObjCreateDeviceSecure]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a8d0, 0x1d08 bytes
    // pci.sys PAGE:0x6bf60, 0x1cf0 bytes
    // pci.sys PAGE:0x75230, 0x1cf0 bytes
    // pci.sys PAGE:0x69ec0, 0x1cf0 bytes
    //
    _r33(sdk::function<int32_t(struct nt::driver_object_t*, uint32_t, nt::unicode_view*, uint32_t, uint32_t, uint8_t, const nt::unicode_view*, const struct nt::guid_t*, struct nt::device_object_t**)>*) dev_obj_create_device_secure;
    
    // [IoWMIWriteEventFailed]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a048, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcfef0, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7118, 0x1e858 bytes
    // ndis.sys .rdata:0xcb840, 0x1d2c0 bytes
    //
    _r34(sdk::unknown_ptr) wmi_write_event_failed;
    
    // [IoQueuesCreationAsyncTimeout]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .rdata:0x251c0, 0x12e9 bytes
    //
    _r35(sdk::unknown_ptr) queues_creation_async_timeout;
    
    // [IoQueuesCreation]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xaa18, 0x1011 bytes
    // stornvme.sys .text:0x16090, 0x12e9 bytes
    //
    _r36(sdk::unknown_ptr) queues_creation;
    
    // [IoQueuesCreationAsync]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xab9c, 0x1011 bytes
    // stornvme.sys .text:0x6340, 0x12e9 bytes
    //
    _r37(sdk::unknown_ptr) queues_creation_async;
    
    // [IoQueuesDeletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xadd0, 0x1011 bytes
    // stornvme.sys .text:0x16220, 0x12e9 bytes
    //
    _r38(sdk::unknown_ptr) queues_deletion;
    
    // [IoQueuesFreeResources]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xb074, 0x1011 bytes
    // stornvme.sys .text:0x164c4, 0x12e9 bytes
    //
    _r39(sdk::unknown_ptr) queues_free_resources;
    
    // [IoQueuesInitialize]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xb2e4, 0x1011 bytes
    // stornvme.sys .text:0x7a14, 0x12e9 bytes
    //
    _r40(sdk::unknown_ptr) queues_initialize;
    
    // [IoReservedQueuesInitialize]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xb828, 0x1011 bytes
    // stornvme.sys .text:0x16734, 0x12e9 bytes
    //
    _r41(sdk::unknown_ptr) reserved_queues_initialize;
    
    // [IoSqToIoCqMapping]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xb934, 0x1011 bytes
    // stornvme.sys .text:0x61b8, 0x12e9 bytes
    //
    _r42(sdk::unknown_ptr) sq_to_io_cq_mapping;
    
    // [IoSizeDistribution]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f100, 0x440c8 bytes
    //
    _r43(sdk::unknown_ptr) size_distribution;
};
#include "magic/api.end.hpp"
