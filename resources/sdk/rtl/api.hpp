#pragma once
#include <sdkgen/support_library.hpp>
#include "bitmap_t.hpp"
#include "barrier_t.hpp"
#include "rb_tree_t.hpp"
#include "srwlock_t.hpp"
#include "avl_tree_t.hpp"
#include "resource_t.hpp"
#include "run_once_t.hpp"
#include "../nt/acl_t.hpp"
#include "../nt/peb_t.hpp"
#include "avl_table_t.hpp"
#include "bitmap_ex_t.hpp"
#include "path_type_t.hpp"
#include "../nt/guid_t.hpp"
#include "../nt/luid_t.hpp"
#include "bitmap_run_t.hpp"
#include "splay_links_t.hpp"
#include "handle_table_t.hpp"
#include "sparse_array_t.hpp"
#include "../nt/in_addr_t.hpp"
#include "balanced_node_t.hpp"
#include "bsd_item_type_t.hpp"
#include "generic_table_t.hpp"
#include "heap_tag_info_t.hpp"
#include "../nt/in6_addr_t.hpp"
#include "csparse_bitmap_t.hpp"
#include "../nt/client_id_t.hpp"
#include "../ps/pkg_claim_t.hpp"
#include "elevation_flags_t.hpp"
#include "heap_parameters_t.hpp"
#include "heap_walk_entry_t.hpp"
#include "relative_name_u_t.hpp"
#include "../ndis/dl_eui48_t.hpp"
#include "../ps/protection_t.hpp"
#include "critical_section_t.hpp"
#include "../nt/cptableinfo_t.hpp"
#include "../nt/time_fields_t.hpp"
#include "../win/context_ex_t.hpp"
#include "debug_information_t.hpp"
#include "sparse_bitmap_ctx_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "../os/product_type_t.hpp"
#include "../win/initial_teb_t.hpp"
#include "condition_variable_t.hpp"
#include "dynamic_hash_table_t.hpp"
#include "handle_table_entry_t.hpp"
#include "unload_event_trace_t.hpp"
#include "../win/wow64_context_t.hpp"
#include "feature_usage_report_t.hpp"
#include "query_registry_table_t.hpp"
#include "../image/nt_headers64_t.hpp"
#include "../nt/generic_mapping_t.hpp"
#include "../nt/nv_memory_range_t.hpp"
#include "feature_configuration_t.hpp"
#include "time_zone_information_t.hpp"
#include "../nt/exception_record_t.hpp"
#include "../nt/osversioninfoexw_t.hpp"
#include "../nt/processor_number_t.hpp"
#include "../nt/teb_active_frame_t.hpp"
#include "../sec/subject_context_t.hpp"
#include "../image/section_header_t.hpp"
#include "../nt/xsave_area_header_t.hpp"
#include "../win/performance_data_t.hpp"
#include "generic_compare_results_t.hpp"
#include "user_process_parameters_t.hpp"
#include "../nt/correlation_vector_t.hpp"
#include "../nt/exception_pointers_t.hpp"
#include "../nt/sid_and_attributes_t.hpp"
#include "dynamic_hash_table_entry_t.hpp"
#include "user_process_information_t.hpp"
#include "../heap/information_class_t.hpp"
#include "../io/resource_descriptor_t.hpp"
#include "../nt/luid_and_attributes_t.hpp"
#include "../nt/state_location_type_t.hpp"
#include "../nt/table_search_result_t.hpp"
#include "../image/mitigation_policy_t.hpp"
#include "../nt/compressed_data_info_t.hpp"
#include "../nt/unicode_prefix_table_t.hpp"
#include "../sec/impersonation_level_t.hpp"
#include "dynamic_hash_table_context_t.hpp"
#include "feature_configuration_type_t.hpp"
#include "../nt/generate_name_context_t.hpp"
#include "../nt/file_information_class_t.hpp"
#include "../win/acl_information_class_t.hpp"
#include "../win/appcontainer_sid_type_t.hpp"
#include "../win/parse_message_context_t.hpp"
#include "../nt/sid_and_attributes_hash_t.hpp"
#include "../win/message_resource_entry_t.hpp"
#include "dynamic_hash_table_enumerator_t.hpp"
#include "../nt/sid_identifier_authority_t.hpp"
#include "../nt/unicode_prefix_table_entry_t.hpp"
#include "../cm/partial_resource_descriptor_t.hpp"
#include "../nt/os_deployement_state_values_t.hpp"
#include "../rtlp/process_reflection_reflection_information_t.hpp"

#include "magic/api.start.hpp"
namespace rtl
{
    // [RtlApplyFunctionOverrideFixups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x20b31c, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) apply_function_override_fixups;
    
    // [RtlApplyFunctionOverrideFixupsToImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b6a48, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) apply_function_override_fixups_to_image;
    
    // [RtlCheckXfgFailureInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x59ced0, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) check_xfg_failure_information;
    
    // [RtlCompareExchangePointerMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5956c0, 0x1fd000 bytes
    //
    _m03(sdk::function<int32_t(void*, void*, void const**, void**)>*) compare_exchange_pointer_mapping;
    
    // [RtlCompareExchangePropertyStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x595880, 0x1fd000 bytes
    //
    _m04(sdk::function<int32_t(const struct nt::guid_t*, uint64_t, const uint64_t*, uint64_t*)>*) compare_exchange_property_store;
    
    // [RtlCompressBufferXp10]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9b6a20, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) compress_buffer_xp10;
    
    // [RtlCompressWorkSpaceSizeXp10]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9b6a90, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) compress_work_space_size_xp10;
    
    // [RtlConvertHostPerfCounterToPerfCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x592580, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) convert_host_perf_counter_to_perf_counter;
    
    // [RtlCreateFunctionOverrideFixupInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x20531c, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) create_function_override_fixup_info;
    
    // [RtlDecompressBuffer2Xp10]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9b6ac0, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) decompress_buffer2_xp10;
    
    // [RtlDecompressBufferXp10]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9b6cf0, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) decompress_buffer_xp10;
    
    // [RtlDisableXfgOnTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x59d1b8, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) disable_xfg_on_target;
    
    // [RtlDoesRequireFunctionOverrideFixups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x20b490, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) does_require_function_override_fixups;
    
    // [RtlFailFast3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x431a00, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) fail_fast3;
    
    // [RtlFindLowerBoundInSortedArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6cf910, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) find_lower_bound_in_sorted_array;
    
    // [RtlFindMessageInTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xa89d0, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) find_message_in_table;
    
    // [RtlFindNextClearBitBackwardsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3dc4d0, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) find_next_clear_bit_backwards_ex;
    
    // [RtlFindNextForwardRunClearCappedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x5ff40, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) find_next_forward_run_clear_capped_ex;
    
    // [RtlFindNextForwardRunSetEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x593754, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) find_next_forward_run_set_ex;
    
    // [RtlFreeFunctionOverrideInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5a2d44, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) free_function_override_info;
    
    // [RtlGetCpuVendor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d56fc, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) get_cpu_vendor;
    
    // [RtlGetFunctionEndAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34f180, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) get_function_end_address;
    
    // [RtlGetFunctionOverrideRelocationMaxVpn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x384dac, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) get_function_override_relocation_max_vpn;
    
    // [RtlGetHpatEntryAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x664acc, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) get_hpat_entry_address;
    
    // [RtlGetProcessorSignature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d5660, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) get_processor_signature;
    
    // [RtlGetSystemGlobalData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x35b130, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) get_system_global_data;
    
    // [RtlHeapZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3eb1e0, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) heap_zero;
    
    // [RtlInitFunctionOverrideCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d53f0, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) init_function_override_capabilities;
    
    // [RtlInitKernelModeSpecialMachineFrameEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb82908, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) init_kernel_mode_special_machine_frame_entries;
    
    // [RtlIsApiSetImplemented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x85d460, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) is_api_set_implemented;
    
    // [RtlIsEnclaveFeaturePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9b2bb8, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) is_enclave_feature_present;
    
    // [RtlIsSpecialUnwind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x59cdac, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) is_special_unwind;
    
    // [RtlLengthSecurityDescriptorStrict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x423424, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) length_security_descriptor_strict;
    
    // [RtlLookupPrimaryFunctionEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x59ce04, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) lookup_primary_function_entry;
    
    // [RtlNlsDeleteState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9ad278, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) nls_delete_state;
    
    // [RtlNlsInitState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86e19c, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) nls_init_state;
    
    // [RtlPatchContainsCallTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa62b24, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) patch_contains_call_target;
    
    // [RtlPopulateHpatEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x664c70, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) populate_hpat_entry;
    
    // [RtlQueryImageXfgFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x592174, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) query_image_xfg_filter;
    
    // [RtlQueryPointerMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x595bc0, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) query_pointer_mapping;
    
    // [RtlQueryPropertyStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x595d00, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) query_property_store;
    
    // [RtlRemovePointerMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x595df0, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) remove_pointer_mapping;
    
    // [RtlRemovePropertyStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x595f50, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) remove_property_store;
    
    // [RtlRevertFunctionPatchFromUndoEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x664cd4, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) revert_function_patch_from_undo_entry;
    
    // [RtlSetSystemGlobalData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x372720, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) set_system_global_data;
    
    // [RtlSizeTAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x8c5a0, 0x32828 bytes
    //
    _m45(sdk::function<int32_t(uint64_t, uint64_t, uint64_t*)>*) size_t_add;
    
    // [RtlUnicodeStringCopyStringEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x137b3c, 0x32828 bytes
    //
    _m46(sdk::unknown_ptr) unicode_string_copy_string_ex;
    
    // [RtlVirtualUnwind2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x20ea60, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) virtual_unwind2;
    
    // [RtlAddDynamicEnforcedAddressRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9b6028, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7614, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) add_dynamic_enforced_address_range;
    
    // [RtlCSparseBitmapCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3886e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x389150, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) c_sparse_bitmap_cleanup;
    
    // [RtlDeleteDynamicEnforcedAddressRangeTreeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) delete_dynamic_enforced_address_range_tree_node;
    
    // [RtlEnlargedUnsignedDivide]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x111138, 0x32828 bytes
    // ntoskrnl.exe .text:0x559094, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) enlarged_unsigned_divide;
    
    // [RtlFcpCompareFeatureToFeature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a0dec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f0e18, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) fcp_compare_feature_to_feature;
    
    // [RtlFindDynamicEnforcedAddressInRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9b60f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c76dc, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) find_dynamic_enforced_address_in_ranges;
    
    // [RtlGetImageBaseAndLoadConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59d260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f0f08, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) get_image_base_and_load_config;
    
    // [RtlHpKInitializeHeapManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bf0e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bfef8, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) hp_k_initialize_heap_manager;
    
    // [RtlIsSandboxedTokenHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270e60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x322620, 0x1fe000 bytes
    //
    _m56(sdk::function<uint8_t(void*, char)>*) is_sandboxed_token_handle;
    
    // [RtlRemoveDynamicEnforcedAddressRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9b61a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7788, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) remove_dynamic_enforced_address_range;
    
    // [RtlStringCbCopyNA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aeff4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2294, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) string_cb_copy_na;
    
    // [RtlAcquireSwapReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a1f98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac264, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a34a8, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) acquire_swap_reference;
    
    // [RtlAddAccessFilterAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90f3d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90daf0, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) add_access_filter_ace;
    
    // [RtlAddDynamicEHContinuationTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917974, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5f7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916198, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) add_dynamic_eh_continuation_target;
    
    // [RtlApplyHotPatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9afb04, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99340, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aea74, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) apply_hot_patch;
    
    // [RtlApplyImportRelocationToImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b16dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b68e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ad15c, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) apply_import_relocation_to_image;
    
    // [RtlApplyImportRelocationToPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x245d8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x337f7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2efc5c, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) apply_import_relocation_to_page;
    
    // [RtlApplyIndirectRelocationToPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589c64, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) apply_indirect_relocation_to_page;
    
    // [RtlApplySwitchJumpRelocationToPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589e8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x66433c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589d10, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) apply_switch_jump_relocation_to_page;
    
    // [RtlBootStatusDisableFlushing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a2f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385ce4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a44a0, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) boot_status_disable_flushing;
    
    // [RtlBootStatusItemInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76da0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d53c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77547c, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) boot_status_item_info;
    
    // [RtlCSparseBitmapBitmaskRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24b700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x321c5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5320, 0x1fe000 bytes
    //
    _m69(sdk::function<uint64_t(struct rtl::csparse_bitmap_t*, uint64_t, uint64_t)>*) c_sparse_bitmap_bitmask_read;
    
    // [RtlCSparseBitmapBitmaskWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21d898, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320ed4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x360b44, 0x1fe000 bytes
    //
    _m70(sdk::function<int32_t(struct rtl::csparse_bitmap_t*, uint64_t, uint64_t, uint64_t)>*) c_sparse_bitmap_bitmask_write;
    
    // [RtlCSparseBitmapBitsClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21d164, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x360410, 0x1fe000 bytes
    //
    _m71(sdk::function<void(struct rtl::csparse_bitmap_t*, uint64_t, uint64_t)>*) c_sparse_bitmap_bits_clear;
    
    // [RtlCSparseBitmapEnterLockingRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e69c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3210ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361948, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) c_sparse_bitmap_enter_locking_region;
    
    // [RtlCSparseBitmapFindBitSetCapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33cf6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x270ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b358c, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) c_sparse_bitmap_find_bit_set_capped;
    
    // [RtlCSparseBitmapLeaveLockingRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e23c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x321184, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3614e8, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) c_sparse_bitmap_leave_locking_region;
    
    // [RtlCSparseBitmapStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x398e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b55f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39a310, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) c_sparse_bitmap_start;
    
    // [RtlCalculateUnwindInfoSizeForRetpoline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589a14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59d414, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589898, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) calculate_unwind_info_size_for_retpoline;
    
    // [RtlCalculateUserShadowStackSizes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90d0c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892504, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b7e4, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) calculate_user_shadow_stack_sizes;
    
    // [RtlCapabilityCheckForSingleSessionSku]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9108b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90efd0, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) capability_check_for_single_session_sku;
    
    // [RtlCaptureContext2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3fc040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd920, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) capture_context2;
    
    // [RtlCaptureRetpolineImportRvas]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x393568, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x338928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3945c8, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) capture_retpoline_import_rvas;
    
    // [RtlCheckCurrentPatchesApplied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917ce8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa62638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9164f0, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) check_current_patches_applied;
    
    // [RtlCheckSystemBootStatusIntegrity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9126e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x818d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x910e00, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) check_system_boot_status_integrity;
    
    // [RtlConstructCrossVmEventPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x912910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b15d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911070, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) construct_cross_vm_event_path;
    
    // [RtlConstructCrossVmMutexPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x912910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b15d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911070, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) construct_cross_vm_mutex_path;
    
    // [RtlContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589a54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59d458, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5898d8, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) continue_;
    
    // [RtlContinueLongJump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589a6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59d470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5898f0, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) continue_long_jump;
    
    // [RtlCopyRetpolineStubsUnwindInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589abc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59d4c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589940, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) copy_retpoline_stubs_unwind_info;
    
    // [RtlCountRequiredHotPatchAddressTableEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa62698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916558, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) count_required_hot_patch_address_table_entries;
    
    // [RtlCreateEnclaveReturnFrame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58d2e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462b0a, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58d160, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) create_enclave_return_frame;
    
    // [RtlCreateInvertedFunctionTableCacheEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x799ef4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4eaa0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa4e924, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) create_inverted_function_table_cache_entry;
    
    // [RtlCreateRetpolineRelocationInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2441b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x205430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32440c, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) create_retpoline_relocation_information;
    
    // [RtlCreateRetpolineStubsFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589ba4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59d5a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589a28, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) create_retpoline_stubs_function_table;
    
    // [RtlCreateRvaList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x641fd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7759ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ee81c, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) create_rva_list;
    
    // [RtlCreateUserProcessEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4470c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb555c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3eaf4, 0x1fe000 bytes
    //
    _m94(sdk::function<int32_t(nt::unicode_view*, struct rtl::user_process_parameters_t*, uint8_t, uint32_t, struct rtl::user_process_information_t*)>*) create_user_process_ex;
    
    // [RtlDeleteDynamicEHContinuationTargetTreeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) delete_dynamic_eh_continuation_target_tree_node;
    
    // [RtlDetermineHotPatchExtent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917e94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa627d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91669c, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) determine_hot_patch_extent;
    
    // [RtlDetermineHotPatchUndoExtent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917ef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6284c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916700, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) determine_hot_patch_undo_extent;
    
    // [RtlDrainNonVolatileFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57fd60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592f70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57fb90, 0x1fe000 bytes
    //
    _m98(sdk::function<int32_t(void*)>*) drain_non_volatile_flush;
    
    // [RtlEnumRvaListFirst]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b224, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7782c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ce9b4, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) enum_rva_list_first;
    
    // [RtlEnumerateHotPatchPatches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa62894, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916748, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) enumerate_hot_patch_patches;
    
    // [RtlExtendCorrelationVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x913210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911970, 0x1fe000 bytes
    //
    _n01(sdk::function<int32_t(struct nt::correlation_vector_t*)>*) extend_correlation_vector;
    
    // [RtlExtractBitMapEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5810f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5931d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580f20, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) extract_bit_map_ex;
    
    // [RtlFcpCompareFeatureIdToFeature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915460, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) fcp_compare_feature_id_to_feature;
    
    // [RtlFcpCompareFeatureIdToFeatureUsageSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915460, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) fcp_compare_feature_id_to_feature_usage_subscription;
    
    // [RtlFillMemoryNonTemporal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3fc830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fe110, 0x1fe000 bytes
    //
    _n05(sdk::function<void(__unaligned void*, uint64_t, const uint8_t)>*) fill_memory_non_temporal;
    
    // [RtlFillNonVolatileMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x586e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59abb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586ca0, 0x1fe000 bytes
    //
    _n06(sdk::function<int32_t(void*, __unaligned void*, uint64_t, const uint8_t, uint32_t)>*) fill_non_volatile_memory;
    
    // [RtlFindHotPatchBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917fc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6292c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9167d0, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) find_hot_patch_base;
    
    // [RtlFindHotPatchInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917ff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6295c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916800, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) find_hot_patch_information;
    
    // [RtlFindLongestRunClearEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212980, 0x32828 bytes
    // ntoskrnl.exe .text:0x396b64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x398020, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) find_longest_run_clear_ex;
    
    // [RtlFindNextForwardRunSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21fa88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a374, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34d7c0, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) find_next_forward_run_set;
    
    // [RtlFlushNonVolatileMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57fd90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57fbc0, 0x1fe000 bytes
    //
    _n11(sdk::function<int32_t(void*, void*, uint64_t, uint32_t)>*) flush_non_volatile_memory;
    
    // [RtlFlushNonVolatileMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x586f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ac60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586d50, 0x1fe000 bytes
    //
    _n12(sdk::function<int32_t(void*, struct nt::nv_memory_range_t*, uint64_t, uint32_t)>*) flush_non_volatile_memory_ranges;
    
    // [RtlFreeNonVolatileToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x586fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59acf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586de0, 0x1fe000 bytes
    //
    _n13(sdk::function<int32_t(void*)>*) free_non_volatile_token;
    
    // [RtlFreeUTF8String]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90ccc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b3e0, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) free_utf8_string;
    
    // [RtlGetEnabledExtendedAndSupervisorFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x587130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59adf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586f60, 0x1fe000 bytes
    //
    _n15(sdk::function<uint64_t(uint64_t)>*) get_enabled_extended_and_supervisor_features;
    
    // [RtlGetExtendedContextLength2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x287ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20ef20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32ee40, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) get_extended_context_length2;
    
    // [RtlGetHostNtSystemRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebc70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed720, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) get_host_nt_system_root;
    
    // [RtlGetHotPatchSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589dc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664ab4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589c4c, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) get_hot_patch_size;
    
    // [RtlGetMultiTimePrecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26e3b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b0e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2de9b0, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) get_multi_time_precise;
    
    // [RtlGetNonVolatileToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x586fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ad10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586e00, 0x1fe000 bytes
    //
    _n20(sdk::function<int32_t(void*, uint64_t, void**)>*) get_non_volatile_token;
    
    // [RtlGetNtSystemRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x672580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x788500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5cc0, 0x1fe000 bytes
    //
    _n21(sdk::function<const wchar_t*()>*) get_nt_system_root;
    
    // [RtlGetPersistedStateLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5dd7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e67a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682550, 0x1fe000 bytes
    //
    _n22(sdk::function<int32_t(const wchar_t*, const wchar_t*, const wchar_t*, enum nt::state_location_type_t, wchar_t*, uint32_t, uint32_t*)>*) get_persisted_state_location;
    
    // [RtlGetRvaListIteratorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b26c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77830c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ce9fc, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) get_rva_list_iterator_state;
    
    // [RtlGetSessionProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x910a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9afb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f130, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) get_session_properties;
    
    // [RtlGetSwapReferenceIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7779c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8273b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be3b4, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) get_swap_reference_index;
    
    // [RtlGetSystemBootStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77a170, 0x1fe000 bytes
    //
    _n26(sdk::function<int32_t(enum rtl::bsd_item_type_t, void*, uint32_t, uint32_t*)>*) get_system_boot_status;
    
    // [RtlGetSystemBootStatusEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777f10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x818ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77a1b0, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) get_system_boot_status_ex;
    
    // [RtlGetTokenNamedObjectPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x910a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9afc50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f190, 0x1fe000 bytes
    //
    _n28(sdk::function<int32_t(void*, void*, nt::unicode_view*)>*) get_token_named_object_path;
    
    // [RtlGetUmsContextExtendedSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2183a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x58d2bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58d13c, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) get_ums_context_extended_size;
    
    // [RtlHashBytes2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ef878, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1084, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) hash_bytes2;
    
    // [RtlHotPatchSynchronizationRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91812c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664af0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916934, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) hot_patch_synchronization_required;
    
    // [RtlHpGlobalsInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bf170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b4ecc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bff80, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) hp_globals_initialize;
    
    // [RtlHpHeapManagerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39923c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b45bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39a6fc, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) hp_heap_manager_initialize;
    
    // [RtlHpHeapManagerStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x398c88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b4fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39a148, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) hp_heap_manager_start;
    
    // [RtlIncrementCorrelationVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x913260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b26c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9119c0, 0x1fe000 bytes
    //
    _n35(sdk::function<int32_t(struct nt::correlation_vector_t*)>*) increment_correlation_vector;
    
    // [RtlInitMinimalBarrier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0f52c, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff91c, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e550, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) init_minimal_barrier;
    
    // [RtlInitUTF8String]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57f610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5926c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f440, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) init_utf8_string;
    
    // [RtlInitUTF8StringEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57f5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5926a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f420, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) init_utf8_string_ex;
    
    // [RtlInitializeBootStatDataCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c2d64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dd46c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3b74, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) initialize_boot_stat_data_cache;
    
    // [RtlInitializeBootStatusDataBlackBox]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x778068, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x818f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77a308, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) initialize_boot_status_data_black_box;
    
    // [RtlInitializeCorrelationVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x913340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b27a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911aa0, 0x1fe000 bytes
    //
    _n41(sdk::function<int32_t(struct nt::correlation_vector_t*, int32_t, const struct nt::guid_t*)>*) initialize_correlation_vector;
    
    // [RtlInitializeExtendedContext2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2888d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20ecb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32f840, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) initialize_extended_context2;
    
    // [RtlInitializeSwapReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7af68c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827078, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd9d8, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) initialize_swap_reference;
    
    // [RtlInsertHeadCircularList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26b2f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36382c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c944, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) insert_head_circular_list;
    
    // [RtlInternEntryDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x693fc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75f664, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2020, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) intern_entry_dereference;
    
    // [RtlInternTableInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7ad424, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x861c14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b5044, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) intern_table_initialize;
    
    // [RtlInternTableIntern]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x652578, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75c874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c6720, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) intern_table_intern;
    
    // [RtlIntersectBitMaps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x581e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581c30, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) intersect_bit_maps;
    
    // [RtlIntersectBitMapsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x250510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fe750, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) intersect_bit_maps_ex;
    
    // [RtlIsCloudFilesPlaceholder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x587a60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x587890, 0x1fe000 bytes
    //
    _n50(sdk::function<uint8_t(uint32_t, uint32_t)>*) is_cloud_files_placeholder;
    
    // [RtlIsElevatedRid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ec540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d740, 0x1fe000 bytes
    //
    _n51(sdk::function<uint8_t(struct nt::sid_and_attributes_t*)>*) is_elevated_rid;
    
    // [RtlIsImageFullyRetpolined]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x36d390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339008, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e710, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) is_image_fully_retpolined;
    
    // [RtlIsNameInUnUpcasedExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21a460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eb0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357e90, 0x1fe000 bytes
    //
    _n53(sdk::function<uint8_t(nt::unicode_view*, nt::unicode_view*, uint8_t, wchar_t*)>*) is_name_in_un_upcased_expression;
    
    // [RtlIsNonEmptyDirectoryReparsePointAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2688c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319760, 0x1fe000 bytes
    //
    _n54(sdk::function<uint8_t(uint32_t)>*) is_non_empty_directory_reparse_point_allowed;
    
    // [RtlIsPartialPlaceholder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9145e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8925d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x912d40, 0x1fe000 bytes
    //
    _n55(sdk::function<uint8_t(uint32_t, uint32_t)>*) is_partial_placeholder;
    
    // [RtlIsPartialPlaceholderFileHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x914600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b3b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x912d60, 0x1fe000 bytes
    //
    _n56(sdk::function<int32_t(void*, uint8_t*)>*) is_partial_placeholder_file_handle;
    
    // [RtlIsPartialPlaceholderFileInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x914660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b3ba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x912dc0, 0x1fe000 bytes
    //
    _n57(sdk::function<int32_t(const void*, enum nt::file_information_class_t, uint8_t*)>*) is_partial_placeholder_file_info;
    
    // [RtlIsStateSeparationEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6609b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2900, 0x1fe000 bytes
    //
    _n58(sdk::function<uint8_t()>*) is_state_separation_enabled;
    
    // [RtlIsZeroMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x587a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59b6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5878c0, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) is_zero_memory;
    
    // [RtlLengthCurrentClearRunBackward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2532a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34e874, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) length_current_clear_run_backward;
    
    // [RtlLengthCurrentClearRunBackwardEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x581e74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593d4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581ca4, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) length_current_clear_run_backward_ex;
    
    // [RtlLengthCurrentClearRunForwardEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x581f18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581d48, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) length_current_clear_run_forward_ex;
    
    // [RtlLocateSupervisorFeature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x587160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ae20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586f90, 0x1fe000 bytes
    //
    _n63(sdk::function<void*(struct nt::xsave_area_header_t*, uint32_t, uint32_t*)>*) locate_supervisor_feature;
    
    // [RtlLongLongAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x569758, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57a530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x569548, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) long_long_add;
    
    // [RtlLookupFunctionTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37b4a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c820, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) lookup_function_table_ex;
    
    // [RtlLookupImageSectionByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5870a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x338f84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586ed4, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) lookup_image_section_by_name;
    
    // [RtlMinimalBarrier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0f53c, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff92c, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e560, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) minimal_barrier;
    
    // [RtlNormalizeSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x359eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d91b0, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) normalize_security_descriptor;
    
    // [RtlNotifyFeatureUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5882d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59bf70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588100, 0x1fe000 bytes
    //
    _n69(sdk::function<int32_t(struct rtl::feature_usage_report_t*)>*) notify_feature_usage;
    
    // [RtlNumberOfSetBitsInRangeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x582470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x594340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5822a0, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) number_of_set_bits_in_range_ex;
    
    // [RtlParseLeapSecondData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97d92c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa60604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97c20c, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) parse_leap_second_data;
    
    // [RtlPerformRetpolineRelocationsOnImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589f38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6643e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589dbc, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) perform_retpoline_relocations_on_image;
    
    // [RtlPerformRetpolineRelocationsOnImageEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589f78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664428, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589dfc, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) perform_retpoline_relocations_on_image_ex;
    
    // [RtlPrepareEnclaveCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58d3d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58d254, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) prepare_enclave_call;
    
    // [RtlQueryAllFeatureConfigurations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914860, 0x1fe000 bytes
    //
    _n75(sdk::function<int32_t(enum rtl::feature_configuration_type_t, uint64_t*, struct rtl::feature_configuration_t*, uint32_t*)>*) query_all_feature_configurations;
    
    // [RtlQueryFeatureConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x75bc80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac0b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x763c90, 0x1fe000 bytes
    //
    _n76(sdk::function<int32_t(uint32_t, enum rtl::feature_configuration_type_t, uint64_t*, struct rtl::feature_configuration_t*)>*) query_feature_configuration;
    
    // [RtlQueryFeatureConfigurationChangeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5882f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e01f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588120, 0x1fe000 bytes
    //
    _n77(sdk::function<uint64_t()>*) query_feature_configuration_change_stamp;
    
    // [RtlQueryProcessPlaceholderCompatibilityMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9146c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b3c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x912e20, 0x1fe000 bytes
    //
    _n78(sdk::function<char()>*) query_process_placeholder_compatibility_mode;
    
    // [RtlQueryRegistryValueWithFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5dce10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7067c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f29b0, 0x1fe000 bytes
    //
    _n79(sdk::function<int32_t(void*, void*, nt::unicode_view*, uint32_t, uint32_t*, void*, uint32_t*)>*) query_registry_value_with_fallback;
    
    // [RtlQueryThreadPlaceholderCompatibilityMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9146f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b3c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x912e50, 0x1fe000 bytes
    //
    _n80(sdk::function<char()>*) query_thread_placeholder_compatibility_mode;
    
    // [RtlRaiseCustomSystemEventTrigger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5886f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588520, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) raise_custom_system_event_trigger;
    
    // [RtlRaiseNoncontinuableException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3fc5d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fdeb0, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) raise_noncontinuable_exception;
    
    // [RtlRegisterFeatureConfigurationChangeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9161c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59bf90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914920, 0x1fe000 bytes
    //
    _n83(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint64_t*, void**)>*) register_feature_configuration_change_notification;
    
    // [RtlReleaseSwapReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a22d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac1bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a381c, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) release_swap_reference;
    
    // [RtlRestoreSystemBootStatusDefaults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9128d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b1560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911030, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) restore_system_boot_status_defaults;
    
    // [RtlRetpolineStubsFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CFGRO:0xe01a70, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01ad0, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01a70, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) retpoline_stubs_function_table;
    
    // [RtlRetpolineStubsFunctionTableSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CFGRO:0xe01844, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01848, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01844, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) retpoline_stubs_function_table_size;
    
    // [RtlSetProcessPlaceholderCompatibilityMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x914730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b3c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x912e90, 0x1fe000 bytes
    //
    _n88(sdk::function<char(char)>*) set_process_placeholder_compatibility_mode;
    
    // [RtlSetSystemBootStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x814d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77a280, 0x1fe000 bytes
    //
    _n89(sdk::function<int32_t(enum rtl::bsd_item_type_t, void*, uint32_t, uint32_t*)>*) set_system_boot_status;
    
    // [RtlSetSystemBootStatusEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x679cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b15a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed100, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) set_system_boot_status_ex;
    
    // [RtlSetThreadPlaceholderCompatibilityMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x914770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8925f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x912ed0, 0x1fe000 bytes
    //
    _n91(sdk::function<char(char)>*) set_thread_placeholder_compatibility_mode;
    
    // [RtlShiftLeftBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5826f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5945c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582520, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) shift_left_bit_map;
    
    // [RtlShiftLeftBitMapEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x582760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x594630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582590, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) shift_left_bit_map_ex;
    
    // [RtlSizeOfRetpolineIndirectFixup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58a344, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46dd0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58a1c8, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) size_of_retpoline_indirect_fixup;
    
    // [RtlSizeOfRetpolineRelocationEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2444dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x205778, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x324730, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) size_of_retpoline_relocation_entry;
    
    // [RtlSparseArrayElementAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e198, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320d54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361444, 0x1fe000 bytes
    //
    _n96(sdk::function<void*(struct rtl::sparse_array_t*, uint64_t, void*)>*) sparse_array_element_allocate;
    
    // [RtlSparseArrayElementAllocated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33cf10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x270e74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3530, 0x1fe000 bytes
    //
    _n97(sdk::function<void*(struct rtl::sparse_array_t*, uint64_t)>*) sparse_array_element_allocated;
    
    // [RtlSparseArrayElementFindCapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58f2e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a23b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58f164, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) sparse_array_element_find_capped;
    
    // [RtlStateDurationCapture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35b7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x304fec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d462c, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) state_duration_capture;
    
    // [RtlStateDurationDelta]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29b520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x304fa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23f400, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) state_duration_delta;
    
    // [RtlStateDurationUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x266cdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e368, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d3138, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) state_duration_update;
    
    // [RtlStringCbCatNW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bbc20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658304, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5baa90, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) string_cb_cat_nw;
    
    // [RtlStringCbLengthA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5041ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503fac, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) string_cb_length_a;
    
    // [RtlTimelineBitmapMerge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29bdb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305258, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23fc98, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) timeline_bitmap_merge;
    
    // [RtlTimelineBitmapUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27cf60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x304f54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4170, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) timeline_bitmap_update;
    
    // [RtlTimelineBitmapUpdateRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x250788, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3052a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2d68, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) timeline_bitmap_update_range;
    
    // [RtlULongSub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23bf94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37dedc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e90b0, 0x1fe000 bytes
    //
    _o07(sdk::function<int32_t(uint32_t, uint32_t, uint32_t*)>*) u_long_sub;
    
    // [RtlUdiv128]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a7720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a60e0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) udiv128;
    
    // [RtlUnicodeStringCchCopyStringN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5791b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58cfa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x578fa8, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) unicode_string_cch_copy_string_n;
    
    // [RtlUnicodeStringToUTF8String]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9169f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915150, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) unicode_string_to_utf8_string;
    
    // [RtlUnregisterFeatureConfigurationChangeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9161f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914950, 0x1fe000 bytes
    //
    _o11(sdk::function<int32_t(void*)>*) unregister_feature_configuration_change_notification;
    
    // [RtlUnsignedMultiplyHigh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ef780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f0db0, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) unsigned_multiply_high;
    
    // [RtlUpdateImportRelocationsInImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b1498, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b66a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3acf18, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) update_import_relocations_in_image;
    
    // [RtlUpdateSwapReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b443c, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) update_swap_reference;
    
    // [RtlUTF8StringToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9168f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915050, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) utf8_string_to_unicode_string;
    
    // [RtlValidateCorrelationVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9133c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911b20, 0x1fe000 bytes
    //
    _o16(sdk::function<int32_t(struct nt::correlation_vector_t*)>*) validate_correlation_vector;
    
    // [RtlValidateHotPatchBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91828c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa62b74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916a94, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) validate_hot_patch_base;
    
    // [RtlValidateRetpolineRelocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2440dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x205330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x324330, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) validate_retpoline_relocation;
    
    // [RtlVerifyUserUnwindTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917a3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b6250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916244, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) verify_user_unwind_target;
    
    // [RtlWow64GetEquivalentMachineCHPE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35ab68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360408, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1358, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) wow64_get_equivalent_machine_chpe;
    
    // [RtlWriteNonVolatileMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x586ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ad30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586e20, 0x1fe000 bytes
    //
    _o21(sdk::function<int32_t(void*, __unaligned void*, __unaligned const void*, uint64_t, uint32_t)>*) write_non_volatile_memory;
    
    // [RtlXRestoreS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37da58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3856c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37edd8, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) x_restore_s;
    
    // [RtlXSaveS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2610bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38024c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31131c, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) x_save_s;
    
    // [RtlAbsoluteToSelfRelativeSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b998, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73a5d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7512c0, 0x1fe000 bytes
    //
    _o24(sdk::function<int32_t(void*, void*, uint32_t*)>*) absolute_to_self_relative_sd;
    
    // [RtlAcquirePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f89c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669cec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dcd2c, 0x1fe000 bytes
    //
    _o25(sdk::function<int32_t(uint32_t*, uint32_t, uint32_t, void**)>*) acquire_privilege;
    
    // [RtlAddAccessAllowedAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a80f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fbdf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f9460, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d360, 0x1fe000 bytes
    //
    _o26(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*)>*) add_access_allowed_ace;
    
    // [RtlAddAccessAllowedAceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53da88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816a10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c590, 0x1fe000 bytes
    //
    _o27(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, void*)>*) add_access_allowed_ace_ex;
    
    // [RtlAddAccessAllowedObjectAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x688dbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90f310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90da30, 0x1fe000 bytes
    //
    _o28(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, struct nt::guid_t*, struct nt::guid_t*, void*)>*) add_access_allowed_object_ace;
    
    // [RtlAddAccessDeniedAceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5622fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77ffd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8511d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789d70, 0x1fe000 bytes
    //
    _o29(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, void*)>*) add_access_denied_ace_ex;
    
    // [RtlAddAccessDeniedObjectAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x688e18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90f370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90da90, 0x1fe000 bytes
    //
    _o30(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, struct nt::guid_t*, struct nt::guid_t*, void*)>*) add_access_denied_object_ace;
    
    // [RtlAddAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a7f74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c0340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x698530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6152c0, 0x1fe000 bytes
    //
    _o31(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*, uint32_t)>*) add_ace;
    
    // [RtlAddAtomToAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6751c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eac90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8330, 0x1fe000 bytes
    //
    _o32(sdk::function<int32_t(void*, wchar_t*, wchar_t*)>*) add_atom_to_atom_table;
    
    // [RtlAddAtomToAtomTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c2d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b71a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a8f50, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) add_atom_to_atom_table_ex;
    
    // [RtlAddAuditAccessAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x688e74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90f5d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aead0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90dcf0, 0x1fe000 bytes
    //
    _o34(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*, uint8_t, uint8_t)>*) add_audit_access_ace;
    
    // [RtlAddAuditAccessAceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x688e98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90f610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aeb10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90dd30, 0x1fe000 bytes
    //
    _o35(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, void*, uint8_t, uint8_t)>*) add_audit_access_ace_ex;
    
    // [RtlAddAuditAccessObjectAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x688ebc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90f660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aeb60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90dd80, 0x1fe000 bytes
    //
    _o36(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, uint32_t, struct nt::guid_t*, struct nt::guid_t*, void*, uint8_t, uint8_t)>*) add_audit_access_object_ace;
    
    // [RtlAddMandatoryAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d2230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aed40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x605370, 0x1fe000 bytes
    //
    _o37(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*, uint8_t, uint32_t)>*) add_mandatory_ace;
    
    // [RtlAddProcessTrustLabelAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55fdc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78fbc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6370, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) add_process_trust_label_ace;
    
    // [RtlAddRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ea10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdb20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74c4d0, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) add_range;
    
    // [RtlAddResourceAttributeAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x688f24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90f6f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aebf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90de10, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) add_resource_attribute_ace;
    
    // [RtlAddressInSectionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8bcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x355fb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3618d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b234, 0x1fe000 bytes
    //
    _o41(sdk::function<void*(struct image::nt_headers64_t*, void*, uint32_t)>*) address_in_section_table;
    
    // [RtlAllocateHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb6458, 0x32828 bytes
    // ntoskrnl.exe .text:0x226110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3601f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ee20, 0x1fe000 bytes
    //
    _o42(sdk::function<void*(void*, uint32_t, uint64_t)>*) allocate_heap;
    
    // [RtlAllocateStringRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec030, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ebe0, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) allocate_string_routine;
    
    // [RtlAnsiCharToUnicodeChar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f1cd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c5640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d77b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61ba70, 0x1fe000 bytes
    //
    _o44(sdk::function<wchar_t(uint8_t**)>*) ansi_char_to_unicode_char;
    
    // [RtlAnsiStringToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f1bd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a060, 0x1fe000 bytes
    //
    _o45(sdk::function<int32_t(nt::unicode_view*, nt::ascii_view*, uint8_t)>*) ansi_string_to_unicode_string;
    
    // [RtlAppendAsciizToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9acee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90bfa0, 0x1fe000 bytes
    //
    _o46(sdk::function<int32_t(nt::ascii_view*, const char*)>*) append_asciiz_to_string;
    
    // [RtlAppendStringToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x534ad8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758b60, 0x1fe000 bytes
    //
    _o47(sdk::function<int32_t(nt::ascii_view*, const nt::ascii_view*)>*) append_string_to_string;
    
    // [RtlAppendUnicodeStringToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1082b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1fa0, 0x1fe000 bytes
    //
    _o48(sdk::function<int32_t(nt::unicode_view*, const nt::unicode_view*)>*) append_unicode_string_to_string;
    
    // [RtlAppendUnicodeToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x917c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2025e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ba90, 0x1fe000 bytes
    //
    _o49(sdk::function<int32_t(nt::unicode_view*, const wchar_t*)>*) append_unicode_to_string;
    
    // [RtlAreAllAccessesGranted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c030, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ea90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1cc0, 0x1fe000 bytes
    //
    _o50(sdk::function<uint8_t(uint32_t, uint32_t)>*) are_all_accesses_granted;
    
    // [RtlAreAnyAccessesGranted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a051c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6798f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8568b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ecc00, 0x1fe000 bytes
    //
    _o51(sdk::function<uint8_t(uint32_t, uint32_t)>*) are_any_accesses_granted;
    
    // [RtlAreBitsClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94bb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21bda0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3177e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0bc0, 0x1fe000 bytes
    //
    _o52(sdk::function<uint8_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) are_bits_clear;
    
    // [RtlAreBitsClearEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211e30, 0x32828 bytes
    // ntoskrnl.exe .text:0x24b9f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35fc70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f54a0, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) are_bits_clear_ex;
    
    // [RtlAreBitsSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0c08, 0x32828 bytes
    // ntoskrnl.exe .text:0x2510b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x317710, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ff170, 0x1fe000 bytes
    //
    _o54(sdk::function<uint8_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) are_bits_set;
    
    // [RtlAreBitsSetEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157650, 0x32828 bytes
    // ntoskrnl.exe .text:0x580e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580ca0, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) are_bits_set_ex;
    
    // [RtlAreNamesEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaae70, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a7e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3472a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e7e50, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) are_names_equal;
    
    // [RtlAssert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2132cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5829b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x595490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5827e0, 0x1fe000 bytes
    //
    _o57(sdk::function<void(void*, void*, uint32_t, char*)>*) assert;
    
    // [RtlAvlInsertNodeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x17000, 0x32828 bytes
    // ntoskrnl.exe .text:0x3456e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22d460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a2c20, 0x1fe000 bytes
    //
    _o58(sdk::function<void(struct rtl::avl_tree_t*, struct rtl::balanced_node_t*, uint8_t, struct rtl::balanced_node_t*)>*) avl_insert_node_ex;
    
    // [RtlAvlRemoveNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x18130, 0x32828 bytes
    // ntoskrnl.exe .text:0x324780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2a2720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x296cc0, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) avl_remove_node;
    
    // [RtlBackoff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x88af0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20e5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e64a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a210, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) backoff;
    
    // [RtlBaseAceType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980358, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63e08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec38, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) base_ace_type;
    
    // [RtlBeginReadTickLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x972fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a1030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2204e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3376a4, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) begin_read_tick_lock;
    
    // [RtlCapabilityCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x687f38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9104d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90ebf0, 0x1fe000 bytes
    //
    _o63(sdk::function<int32_t(void*, nt::unicode_view*, uint8_t*)>*) capability_check;
    
    // [RtlCaptureContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163790, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd7c0, 0x1fe000 bytes
    //
    _o64(sdk::function<void(nt::context*)>*) capture_context;
    
    // [RtlCaptureImageExceptionValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7baec, 0x32828 bytes
    // ntoskrnl.exe .text:0x36dd90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x338ad8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f110, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) capture_image_exception_values;
    
    // [RtlCaptureStackBackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94e40, 0x32828 bytes
    // ntoskrnl.exe .text:0x285920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20ce30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32c890, 0x1fe000 bytes
    //
    _o66(sdk::function<uint16_t(uint32_t, uint32_t, void**, uint32_t*)>*) capture_stack_back_trace;
    
    // [RtlCharToInteger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82e660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788660, 0x1fe000 bytes
    //
    _o67(sdk::function<int32_t(const char*, uint32_t, uint32_t*)>*) char_to_integer;
    
    // [RtlCheckPortableOperatingSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3670, 0x32828 bytes
    // ntoskrnl.exe .text:0x26bfe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37fd30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320c20, 0x1fe000 bytes
    //
    _o68(sdk::function<int32_t(uint8_t*)>*) check_portable_operating_system;
    
    // [RtlCheckRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0284, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3760, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8a60, 0x1fe000 bytes
    //
    _o69(sdk::function<int32_t(uint32_t, wchar_t*)>*) check_registry_key;
    
    // [RtlCheckTokenCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2104ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x580880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5806b0, 0x1fe000 bytes
    //
    _o70(sdk::function<int32_t(void*, void*, uint8_t*)>*) check_token_capability;
    
    // [RtlCheckTokenMembership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdeec4, 0x32828 bytes
    // ntoskrnl.exe .text:0x212250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385d90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35c080, 0x1fe000 bytes
    //
    _o71(sdk::function<int32_t(void*, void*, uint8_t*)>*) check_token_membership;
    
    // [RtlCheckTokenMembershipEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdeed0, 0x32828 bytes
    // ntoskrnl.exe .text:0x212270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2edef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35c0a0, 0x1fe000 bytes
    //
    _o72(sdk::function<int32_t(void*, void*, uint32_t, uint8_t*)>*) check_token_membership_ex;
    
    // [RtlClearAllBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94f8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x21cac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20b4e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0fc0, 0x1fe000 bytes
    //
    _o73(sdk::function<void(struct rtl::bitmap_t*)>*) clear_all_bits;
    
    // [RtlClearAllBitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd7444, 0x32828 bytes
    // ntoskrnl.exe .text:0x261660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31cd10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311a60, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) clear_all_bits_ex;
    
    // [RtlClearBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9930, 0x32828 bytes
    // ntoskrnl.exe .text:0x24eaf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc280, 0x1fe000 bytes
    //
    _o75(sdk::function<void(struct rtl::bitmap_t*, uint32_t)>*) clear_bit;
    
    // [RtlClearBitEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211ecc, 0x32828 bytes
    // ntoskrnl.exe .text:0x259990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3693f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a650, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) clear_bit_ex;
    
    // [RtlClearBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf50c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2deb30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x244970, 0x1fe000 bytes
    //
    _o77(sdk::function<void(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) clear_bits;
    
    // [RtlClearBitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x113b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x233e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2a2b50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2aa000, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) clear_bits_ex;
    
    // [RtlCmDecodeMemIoResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd17f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320d30, 0x1fe000 bytes
    //
    _o79(sdk::function<uint64_t(struct cm::partial_resource_descriptor_t*, uint64_t*)>*) cm_decode_mem_io_resource;
    
    // [RtlCmEncodeMemIoResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x138e58, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a37a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b6230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9120, 0x1fe000 bytes
    //
    _o80(sdk::function<int32_t(struct cm::partial_resource_descriptor_t*, uint8_t, uint64_t, uint64_t)>*) cm_encode_mem_io_resource;
    
    // [RtlCompareAltitudes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9d5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x259c80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x367f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a6f0, 0x1fe000 bytes
    //
    _o81(sdk::function<int32_t(const nt::unicode_view*, const nt::unicode_view*)>*) compare_altitudes;
    
    // [RtlCompareMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163cd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fc640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fdf20, 0x1fe000 bytes
    //
    _o82(sdk::function<uint64_t(const void*, const void*, uint64_t)>*) compare_memory;
    
    // [RtlCompareMemoryUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163d50, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fc6c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fdfa0, 0x1fe000 bytes
    //
    _o83(sdk::function<uint64_t(void*, uint64_t, uint32_t)>*) compare_memory_ulong;
    
    // [RtlCompareString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41fc64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c3500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dacc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x619930, 0x1fe000 bytes
    //
    _o84(sdk::function<int32_t(const nt::ascii_view*, const nt::ascii_view*, uint8_t)>*) compare_string;
    
    // [RtlCompareUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4413a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c54b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d7390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b8e0, 0x1fe000 bytes
    //
    _o85(sdk::function<int32_t(const nt::unicode_view*, const nt::unicode_view*, uint8_t)>*) compare_unicode_string;
    
    // [RtlCompareUnicodeStrings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5182c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d75c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b58d0, 0x1fe000 bytes
    //
    _o86(sdk::function<int32_t(const wchar_t*, uint64_t, const wchar_t*, uint64_t, uint8_t)>*) compare_unicode_strings;
    
    // [RtlCompressBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa95d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x293e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3765e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23aa00, 0x1fe000 bytes
    //
    _o87(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, uint32_t*, void*)>*) compress_buffer;
    
    // [RtlCompressBufferLZNT1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c8748, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98c6e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa73cd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98b5f0, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) compress_buffer_lznt1;
    
    // [RtlCompressBufferProcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b428, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x65e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x7208, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x61f0, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) compress_buffer_procs;
    
    // [RtlCompressBufferProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111ecc, 0x32828 bytes
    // ntoskrnl.exe .text:0x37fb90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59da84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x380980, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) compress_buffer_progress;
    
    // [RtlCompressBufferXpressHuff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1350d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x361c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x200010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3630b0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) compress_buffer_xpress_huff;
    
    // [RtlCompressBufferXpressHuffMax]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x217160, 0x32828 bytes
    // ntoskrnl.exe .text:0x58b204, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59dc40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58b084, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) compress_buffer_xpress_huff_max;
    
    // [RtlCompressBufferXpressHuffStandard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x135140, 0x32828 bytes
    // ntoskrnl.exe .text:0x361d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x200080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x363120, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) compress_buffer_xpress_huff_standard;
    
    // [RtlCompressBufferXpressLz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa9610, 0x32828 bytes
    // ntoskrnl.exe .text:0x239500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e75f0, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) compress_buffer_xpress_lz;
    
    // [RtlCompressBufferXpressLzMax]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21780c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58b928, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59e394, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58b7a8, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) compress_buffer_xpress_lz_max;
    
    // [RtlCompressBufferXpressLzStandard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa9680, 0x32828 bytes
    // ntoskrnl.exe .text:0x239570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e7660, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) compress_buffer_xpress_lz_standard;
    
    // [RtlCompressChunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a24c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ac9c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90ba80, 0x1fe000 bytes
    //
    _o97(sdk::function<int32_t(uint8_t*, uint32_t, uint8_t*, uint32_t, struct nt::compressed_data_info_t*, uint32_t, void*)>*) compress_chunks;
    
    // [RtlCompressWorkSpaceSizeLZNT1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c848c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98cc20, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa741a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98b9c0, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) compress_work_space_size_lznt1;
    
    // [RtlCompressWorkSpaceSizeXpressHuff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x73bdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f5e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x381ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320d60, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) compress_work_space_size_xpress_huff;
    
    // [RtlCompressWorkSpaceSizeXpressLz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x73c6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x270e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3851b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3225e0, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) compress_work_space_size_xpress_lz;
    
    // [RtlComputeCrc32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ee58, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5e90, 0x1fe000 bytes
    //
    _p01(sdk::function<uint32_t(uint32_t, void*, uint32_t)>*) compute_crc32;
    
    // [RtlComputeLfnChecksum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ade0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7abd34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bd6c0, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) compute_lfn_checksum;
    
    // [RtlContractHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xba750, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3458a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339ec0, 0x1fe000 bytes
    //
    _p03(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*)>*) contract_hash_table;
    
    // [RtlConvertLuidToUlonglong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f0a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x590690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a326c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x590510, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) convert_luid_to_ulonglong;
    
    // [RtlConvertSidToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f3cf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6224f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690360, 0x1fe000 bytes
    //
    _p05(sdk::function<int32_t(nt::unicode_view*, void*, uint8_t)>*) convert_sid_to_unicode_string;
    
    // [RtlCopyBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95244, 0x32828 bytes
    // ntoskrnl.exe .text:0x21c760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e16a0, 0x1fe000 bytes
    //
    _p06(sdk::function<void(struct rtl::bitmap_t*, struct rtl::bitmap_t*, uint32_t)>*) copy_bit_map;
    
    // [RtlCopyBitMapEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211ed8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24f3c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fcb10, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) copy_bit_map_ex;
    
    // [RtlCopyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x690978, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68e1dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6865a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f20ac, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) copy_context;
    
    // [RtlCopyLuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74e750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x756390, 0x1fe000 bytes
    //
    _p09(sdk::function<void(struct nt::luid_t*, struct nt::luid_t*)>*) copy_luid;
    
    // [RtlCopyLuidAndAttributesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6881d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65b050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66bc60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bbbd0, 0x1fe000 bytes
    //
    _p10(sdk::function<void(uint32_t, struct nt::luid_and_attributes_t*, struct nt::luid_and_attributes_t*)>*) copy_luid_and_attributes_array;
    
    // [RtlCopyMemoryNonTemporal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fc6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fdfd0, 0x1fe000 bytes
    //
    _p11(sdk::function<void(__unaligned void*, __unaligned const void*, uint64_t)>*) copy_memory_non_temporal;
    
    // [RtlCopyRangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f3ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c25a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7492c0, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) copy_range_list;
    
    // [RtlCopySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af758, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a1f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cbd50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66acd0, 0x1fe000 bytes
    //
    _p13(sdk::function<int32_t(uint32_t, void*, void*)>*) copy_sid;
    
    // [RtlCopySidAndAttributesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af030, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b24a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cbbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x608ad0, 0x1fe000 bytes
    //
    _p14(sdk::function<int32_t(uint32_t, struct nt::sid_and_attributes_t*, uint32_t, struct nt::sid_and_attributes_t*, void*, void**, uint32_t*)>*) copy_sid_and_attributes_array;
    
    // [RtlCopyString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2111f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f3e0, 0x1fe000 bytes
    //
    _p15(sdk::function<void(nt::ascii_view*, const nt::ascii_view*)>*) copy_string;
    
    // [RtlCopyUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5740, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d3110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d38c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x254130, 0x1fe000 bytes
    //
    _p16(sdk::function<void(nt::unicode_view*, const nt::unicode_view*)>*) copy_unicode_string;
    
    // [RtlCrc32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2135dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x582cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582ae0, 0x1fe000 bytes
    //
    _p17(sdk::function<uint32_t(const void*, uint64_t, uint32_t)>*) crc32;
    
    // [RtlCrc32Table]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x272610, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x11430, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x16fa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x11580, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) crc32_table;
    
    // [RtlCrc64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e9ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x250b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fec10, 0x1fe000 bytes
    //
    _p19(sdk::function<uint64_t(const void*, uint64_t, uint64_t)>*) crc64;
    
    // [RtlCreateAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d21d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c0470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x698750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6153f0, 0x1fe000 bytes
    //
    _p20(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t)>*) create_acl;
    
    // [RtlCreateAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4747f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cec30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0ea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69f170, 0x1fe000 bytes
    //
    _p21(sdk::function<int32_t(uint32_t, void**)>*) create_atom_table;
    
    // [RtlCreateAtomTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb929c, 0x32828 bytes
    // ntoskrnl.exe .text:0x201810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f1c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e50e0, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) create_atom_table_ex;
    
    // [RtlCreateHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc85a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x371c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x372fc0, 0x1fe000 bytes
    //
    _p23(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t**, uint32_t, uint32_t)>*) create_hash_table;
    
    // [RtlCreateHashTableEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a9e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x396970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a91f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397990, 0x1fe000 bytes
    //
    _p24(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t**, uint32_t, uint32_t, uint32_t)>*) create_hash_table_ex;
    
    // [RtlCreateHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52fac4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752540, 0x1fe000 bytes
    //
    _p25(sdk::function<void*(uint32_t, void*, uint64_t, uint64_t, void*, struct rtl::heap_parameters_t*)>*) create_heap;
    
    // [RtlCreateRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5717c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b28a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebc30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba430, 0x1fe000 bytes
    //
    _p26(sdk::function<int32_t(uint32_t, wchar_t*)>*) create_registry_key;
    
    // [RtlCreateSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a81c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60b670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d81e0, 0x1fe000 bytes
    //
    _p27(sdk::function<int32_t(void*, uint32_t)>*) create_security_descriptor;
    
    // [RtlCreateSystemVolumeInformationFolder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51abd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x715a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b1ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71d440, 0x1fe000 bytes
    //
    _p28(sdk::function<int32_t(const nt::unicode_view*)>*) create_system_volume_information_folder;
    
    // [RtlCreateUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f2bc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x622810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690680, 0x1fe000 bytes
    //
    _p29(sdk::function<uint8_t(nt::unicode_view*, const wchar_t*)>*) create_unicode_string;
    
    // [RtlCreateUnicodeStringFromAsciiz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x541e8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7840b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78de50, 0x1fe000 bytes
    //
    _p30(sdk::function<uint8_t(nt::unicode_view*, const char*)>*) create_unicode_string_from_asciiz;
    
    // [RtlCreateUserStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x458b6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698eac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6886b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x638b1c, 0x1fe000 bytes
    //
    _p31(sdk::function<int32_t(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, struct win::initial_teb_t*)>*) create_user_stack;
    
    // [RtlCreateUserThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c2d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ac790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b8a0, 0x1fe000 bytes
    //
    _p32(sdk::function<int32_t(void*, void*, uint8_t, uint32_t, uint64_t, uint64_t, sdk::function<int32_t(void*)>*, void*, void**, struct nt::client_id_t*)>*) create_user_thread;
    
    // [RtlCultureNameToLCID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55447c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78aa50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x823170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7947f0, 0x1fe000 bytes
    //
    _p33(sdk::function<uint8_t(nt::unicode_view*, uint32_t*)>*) culture_name_to_lcid;
    
    // [RtlCustomCPToUnicodeN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68aa70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90dbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90c300, 0x1fe000 bytes
    //
    _p34(sdk::function<int32_t(struct nt::cptableinfo_t*, wchar_t*, uint32_t, uint32_t*, char*, uint32_t)>*) custom_cp_to_unicode_n;
    
    // [RtlCutoverTimeToSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5429e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x786460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84cdb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790200, 0x1fe000 bytes
    //
    _p35(sdk::function<uint8_t(struct nt::time_fields_t*, int64_t*, int64_t*, uint8_t)>*) cutover_time_to_system_time;
    
    // [RtlDecompressBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211174, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f360, 0x1fe000 bytes
    //
    _p36(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t*)>*) decompress_buffer;
    
    // [RtlDecompressBufferEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x731dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x27bcd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x328430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c4270, 0x1fe000 bytes
    //
    _p37(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t*, void*)>*) decompress_buffer_ex;
    
    // [RtlDecompressBufferEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd41f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x270390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3281e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321bb0, 0x1fe000 bytes
    //
    _p38(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, uint32_t*, void*)>*) decompress_buffer_ex2;
    
    // [RtlDecompressBufferLZNT1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x423260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66cfe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6f30, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) decompress_buffer_lznt1;
    
    // [RtlDecompressBufferProcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b330, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x6590, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6fa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6298, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) decompress_buffer_procs;
    
    // [RtlDecompressBufferProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111498, 0x32828 bytes
    // ntoskrnl.exe .text:0x58bf70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59e9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58bdf0, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) decompress_buffer_progress;
    
    // [RtlDecompressBufferXpressHuff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x73260, 0x32828 bytes
    // ntoskrnl.exe .text:0x226610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34a060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2320, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) decompress_buffer_xpress_huff;
    
    // [RtlDecompressBufferXpressHuffProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x217dd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x58c040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59eaa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58bec0, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) decompress_buffer_xpress_huff_progress;
    
    // [RtlDecompressBufferXpressLz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x128350, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59f0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4990, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) decompress_buffer_xpress_lz;
    
    // [RtlDecompressBufferXpressLzProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111500, 0x32828 bytes
    // ntoskrnl.exe .text:0x58c668, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59f468, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58c4e8, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) decompress_buffer_xpress_lz_progress;
    
    // [RtlDecompressChunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a3a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9acb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90bbf0, 0x1fe000 bytes
    //
    _p46(sdk::function<int32_t(uint8_t*, uint32_t, uint8_t*, uint32_t, uint8_t*, uint32_t, struct nt::compressed_data_info_t*)>*) decompress_chunks;
    
    // [RtlDecompressFragment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a5f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9acd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90be50, 0x1fe000 bytes
    //
    _p47(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, uint32_t*, void*)>*) decompress_fragment;
    
    // [RtlDecompressFragmentEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce1cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x26e8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x381e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31ff90, 0x1fe000 bytes
    //
    _p48(sdk::function<int32_t(uint16_t, uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t, uint32_t, uint32_t*, void*)>*) decompress_fragment_ex;
    
    // [RtlDecompressFragmentLZNT1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66a210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b70a0, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) decompress_fragment_lznt1;
    
    // [RtlDecompressFragmentNS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571f08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8097f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711bf0, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) decompress_fragment_ns;
    
    // [RtlDecompressFragmentProcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecdd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981398, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fc78, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) decompress_fragment_procs;
    
    // [RtlDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93774, 0x32828 bytes
    // ntoskrnl.exe .text:0x242110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28e150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4d80, 0x1fe000 bytes
    //
    _p52(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*) delete_;
    
    // [RtlDeleteAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ed584, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dcb90, 0x1fe000 bytes
    //
    _p53(sdk::function<int32_t(struct nt::acl_t*, uint32_t)>*) delete_ace;
    
    // [RtlDeleteAtomFromAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425eb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x609130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eb780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d5b00, 0x1fe000 bytes
    //
    _p54(sdk::function<int32_t(void*, uint16_t)>*) delete_atom_from_atom_table;
    
    // [RtlDeleteElementGenericTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x935a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x241100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28df50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306b00, 0x1fe000 bytes
    //
    _p55(sdk::function<uint8_t(struct rtl::generic_table_t*, void*)>*) delete_element_generic_table;
    
    // [RtlDeleteElementGenericTableAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91e74, 0x32828 bytes
    // ntoskrnl.exe .text:0x201b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5430, 0x1fe000 bytes
    //
    _p56(sdk::function<uint8_t(struct rtl::avl_table_t*, void*)>*) delete_element_generic_table_avl;
    
    // [RtlDeleteElementGenericTableAvlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110cd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37cfb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e330, 0x1fe000 bytes
    //
    _p57(sdk::function<void(struct rtl::avl_table_t*, void*)>*) delete_element_generic_table_avl_ex;
    
    // [RtlDeleteHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4c8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x374f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ca50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3762f0, 0x1fe000 bytes
    //
    _p58(sdk::function<void(struct rtl::dynamic_hash_table_t*)>*) delete_hash_table;
    
    // [RtlDeleteNoSplay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92930, 0x32828 bytes
    // ntoskrnl.exe .text:0x241020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3a80, 0x1fe000 bytes
    //
    _p59(sdk::function<void(struct rtl::splay_links_t*, struct rtl::splay_links_t**)>*) delete_no_splay;
    
    // [RtlDeleteOwnersRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f6d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749570, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) delete_owners_ranges;
    
    // [RtlDeleteRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f61c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8567e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7494c0, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) delete_range;
    
    // [RtlDeleteRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d478, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8164b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c440, 0x1fe000 bytes
    //
    _p62(sdk::function<int32_t(uint32_t, const wchar_t*, const wchar_t*)>*) delete_registry_value;
    
    // [RtlDereferenceAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aec, 0x32828 bytes
    // ntoskrnl.exe .text:0x216eb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34555c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203000, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) dereference_atom_table;
    
    // [RtlDeriveCapabilitySidsFromName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x141dd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x212100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x304c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2defd0, 0x1fe000 bytes
    //
    _p64(sdk::function<int32_t(nt::unicode_view*, void*, void*)>*) derive_capability_sids_from_name;
    
    // [RtlDescribeChunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d7c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ace20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90bee0, 0x1fe000 bytes
    //
    _p65(sdk::function<int32_t(uint16_t, uint8_t**, uint8_t*, uint8_t**, uint32_t*)>*) describe_chunk;
    
    // [RtlDescribeChunkLZNT1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x690b9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9184b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b67e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916cc0, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) describe_chunk_lznt1;
    
    // [RtlDescribeChunkNS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571f08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8097f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711bf0, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) describe_chunk_ns;
    
    // [RtlDescribeChunkProcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed6f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9817a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9800f8, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) describe_chunk_procs;
    
    // [RtlDestroyAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ed4a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x608ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7969e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d59c0, 0x1fe000 bytes
    //
    _p69(sdk::function<int32_t(void*)>*) destroy_atom_table;
    
    // [RtlDestroyHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523688, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d780, 0x1fe000 bytes
    //
    _p70(sdk::function<void*(void*)>*) destroy_heap;
    
    // [RtlDestroyLowBoxAtoms]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3afc, 0x32828 bytes
    // ntoskrnl.exe .text:0x216ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345574, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203018, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) destroy_low_box_atoms;
    
    // [RtlDispatchException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa3bf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x284d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20bec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32bd00, 0x1fe000 bytes
    //
    _p72(sdk::function<uint8_t(struct nt::exception_record_t*, nt::context*)>*) dispatch_exception;
    
    // [RtlDissectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1090, 0x32828 bytes
    // ntoskrnl.exe .text:0x23d050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ac20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e9640, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) dissect_name;
    
    // [RtlDoesNameContainWildCards]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa290, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a9b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3583e0, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) does_name_contain_wild_cards;
    
    // [RtlDowncaseUnicodeChar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689c4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90cca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8924e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b3c0, 0x1fe000 bytes
    //
    _p75(sdk::function<wchar_t(wchar_t)>*) downcase_unicode_char;
    
    // [RtlDowncaseUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47b9ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c5540, 0x1fe000 bytes
    //
    _p76(sdk::function<int32_t(nt::unicode_view*, const nt::unicode_view*, uint8_t)>*) downcase_unicode_string;
    
    // [RtlDuplicateUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f3560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64a480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6afe00, 0x1fe000 bytes
    //
    _p77(sdk::function<int32_t(uint32_t, const nt::unicode_view*, nt::unicode_view*)>*) duplicate_unicode_string;
    
    // [RtlEmptyAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c9d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90e950, 0x1fe000 bytes
    //
    _p78(sdk::function<int32_t(void*, uint8_t)>*) empty_atom_table;
    
    // [RtlEndEnumerationHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcadf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2664d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x316c60, 0x1fe000 bytes
    //
    _p79(sdk::function<void(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) end_enumeration_hash_table;
    
    // [RtlEndStrongEnumerationHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _p80(sdk::function<void(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) end_strong_enumeration_hash_table;
    
    // [RtlEndWeakEnumerationHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21352c, 0x32828 bytes
    // ntoskrnl.exe .text:0x582c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582a80, 0x1fe000 bytes
    //
    _p81(sdk::function<void(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) end_weak_enumeration_hash_table;
    
    // [RtlEnoughStackSpaceForStackCapture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211590, 0x32828 bytes
    // ntoskrnl.exe .text:0x57fe14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x594874, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57fc44, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) enough_stack_space_for_stack_capture;
    
    // [RtlEnumerateBoundaryDescriptorEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b438, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62157c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eab24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d540, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) enumerate_boundary_descriptor_entries;
    
    // [RtlEnumerateEntryHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x20b850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3453d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339d40, 0x1fe000 bytes
    //
    _p84(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) enumerate_entry_hash_table;
    
    // [RtlEnumerateGenericTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124434, 0x32828 bytes
    // ntoskrnl.exe .text:0x37ded0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f250, 0x1fe000 bytes
    //
    _p85(sdk::function<void*(struct rtl::generic_table_t*, uint8_t)>*) enumerate_generic_table;
    
    // [RtlEnumerateGenericTableAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92520, 0x32828 bytes
    // ntoskrnl.exe .text:0x269540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a550, 0x1fe000 bytes
    //
    _p86(sdk::function<void*(struct rtl::avl_table_t*, uint8_t)>*) enumerate_generic_table_avl;
    
    // [RtlEnumerateGenericTableLikeADirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91bec, 0x32828 bytes
    // ntoskrnl.exe .text:0x2022c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3595c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5b90, 0x1fe000 bytes
    //
    _p87(sdk::function<void*(struct rtl::avl_table_t*, sdk::function<int32_t(struct rtl::avl_table_t*, void*, void*)>*, void*, uint32_t, void**, uint32_t*, void*)>*) enumerate_generic_table_like_a_directory;
    
    // [RtlEnumerateGenericTableWithoutSplaying]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x929fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2697e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a7f0, 0x1fe000 bytes
    //
    _p88(sdk::function<void*(struct rtl::generic_table_t*, void**)>*) enumerate_generic_table_without_splaying;
    
    // [RtlEnumerateGenericTableWithoutSplayingAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92390, 0x32828 bytes
    // ntoskrnl.exe .text:0x2021b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5a80, 0x1fe000 bytes
    //
    _p89(sdk::function<void*(struct rtl::avl_table_t*, void**)>*) enumerate_generic_table_without_splaying_avl;
    
    // [RtlEqualLuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x688204, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9afa50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f040, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) equal_luid;
    
    // [RtlEqualPrefixSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c5e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64a33c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e11a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bc104, 0x1fe000 bytes
    //
    _p91(sdk::function<uint8_t(void*, void*)>*) equal_prefix_sid;
    
    // [RtlEqualSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeef20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x290960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206340, 0x1fe000 bytes
    //
    _p92(sdk::function<uint8_t(void*, void*)>*) equal_sid;
    
    // [RtlEqualString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79c50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da9a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfd70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25bbe0, 0x1fe000 bytes
    //
    _p93(sdk::function<uint8_t(const nt::ascii_view*, const nt::ascii_view*, uint8_t)>*) equal_string;
    
    // [RtlEqualUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4afe40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b32f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d76a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x609920, 0x1fe000 bytes
    //
    _p94(sdk::function<uint8_t(const nt::unicode_view*, const nt::unicode_view*, uint8_t)>*) equal_unicode_string;
    
    // [RtlEqualWnfChangeStamps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68d77c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x913200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911960, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) equal_wnf_change_stamps;
    
    // [RtlEthernetAddressToStringA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213d0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x585fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585de0, 0x1fe000 bytes
    //
    _p96(sdk::function<char*(const union ndis::dl_eui48_t*, char*)>*) ethernet_address_to_string_a;
    
    // [RtlEthernetAddressToStringW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2141b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x586200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586030, 0x1fe000 bytes
    //
    _p97(sdk::function<wchar_t*(const union ndis::dl_eui48_t*, wchar_t*)>*) ethernet_address_to_string_w;
    
    // [RtlEthernetStringToAddressA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21441c, 0x32828 bytes
    // ntoskrnl.exe .text:0x586270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5860a0, 0x1fe000 bytes
    //
    _p98(sdk::function<int32_t(const char*, const char**, union ndis::dl_eui48_t*)>*) ethernet_string_to_address_a;
    
    // [RtlEthernetStringToAddressW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x214c28, 0x32828 bytes
    // ntoskrnl.exe .text:0x586c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59a9b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586aa0, 0x1fe000 bytes
    //
    _p99(sdk::function<int32_t(const wchar_t*, const wchar_t**, union ndis::dl_eui48_t*)>*) ethernet_string_to_address_w;
    
    // [RtlExpandHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10da58, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3459f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33a000, 0x1fe000 bytes
    //
    _q00(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*)>*) expand_hash_table;
    
    // [RtlExtendedMagicDivide]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcac84, 0x32828 bytes
    // ntoskrnl.exe .text:0x254f84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38efc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201f64, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) extended_magic_divide;
    
    // [RtlExtractBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211f8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x580f40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580d70, 0x1fe000 bytes
    //
    _q02(sdk::function<void(struct rtl::bitmap_t*, struct rtl::bitmap_t*, uint32_t, uint32_t)>*) extract_bit_map;
    
    // [RtlFatIllegalTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec718, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa645f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f320, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) fat_illegal_table;
    
    // [RtlFileMapFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109ef0, 0x32828 bytes
    // ntoskrnl.exe .text:0x36cddc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3041dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e15c, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) file_map_free;
    
    // [RtlFileMapInitializeByNtPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109d34, 0x32828 bytes
    // ntoskrnl.exe .text:0x36cebc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30446c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e23c, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) file_map_initialize_by_nt_path;
    
    // [RtlFileMapMapView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x232e9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b8b04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e50c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b9494, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) file_map_map_view;
    
    // [RtlFillMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x214d64, 0x32828 bytes
    // ntoskrnl.exe .text:0x586e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ab90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x586c80, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) fill_memory;
    
    // [RtlFindAceBySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf2a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ea30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b320, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) find_ace_by_sid;
    
    // [RtlFindAceByType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2250, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d6e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d1860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x257f00, 0x1fe000 bytes
    //
    _q09(sdk::function<void*(struct nt::acl_t*, uint8_t, uint32_t*)>*) find_ace_by_type;
    
    // [RtlFindClearBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a640, 0x32828 bytes
    // ntoskrnl.exe .text:0x2baad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2de500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4120, 0x1fe000 bytes
    //
    _q10(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) find_clear_bits;
    
    // [RtlFindClearBitsAndSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e848, 0x32828 bytes
    // ntoskrnl.exe .text:0x20aa20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338f10, 0x1fe000 bytes
    //
    _q11(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) find_clear_bits_and_set;
    
    // [RtlFindClearBitsAndSetEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x979f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b7b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x211840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a92f0, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) find_clear_bits_and_set_ex;
    
    // [RtlFindClearBitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21211c, 0x32828 bytes
    // ntoskrnl.exe .text:0x30aea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22c3b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x276390, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) find_clear_bits_ex;
    
    // [RtlFindClearRuns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaaf00, 0x32828 bytes
    // ntoskrnl.exe .text:0x360840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x386140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323490, 0x1fe000 bytes
    //
    _q14(sdk::function<uint32_t(struct rtl::bitmap_t*, struct rtl::bitmap_run_t*, uint32_t, uint8_t)>*) find_clear_runs;
    
    // [RtlFindClearRunsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212474, 0x32828 bytes
    // ntoskrnl.exe .text:0x396b9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ab88c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398058, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) find_clear_runs_ex;
    
    // [RtlFindClosestEncodableLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213484, 0x32828 bytes
    // ntoskrnl.exe .text:0x582ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x595610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5829d0, 0x1fe000 bytes
    //
    _q16(sdk::function<int32_t(uint64_t, uint64_t*)>*) find_closest_encodable_length;
    
    // [RtlFindExportedRoutineByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4430, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f1340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fa1b0, 0x1fe000 bytes
    //
    _q17(sdk::function<void*(void*, const char*)>*) find_exported_routine_by_name;
    
    // [RtlFindFirstRunClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2126dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2622d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d72e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34d6b0, 0x1fe000 bytes
    //
    _q18(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t*)>*) find_first_run_clear;
    
    // [RtlFindLastBackwardRunClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb53c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25bae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3604d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34d440, 0x1fe000 bytes
    //
    _q19(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t*)>*) find_last_backward_run_clear;
    
    // [RtlFindLeastSignificantBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc10f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x25fc80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3731e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3104c0, 0x1fe000 bytes
    //
    _q20(sdk::function<char(uint64_t)>*) find_least_significant_bit;
    
    // [RtlFindLongestRunClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2126ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5812b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5810e0, 0x1fe000 bytes
    //
    _q21(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t*)>*) find_longest_run_clear;
    
    // [RtlFindLongestRunClearCapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212724, 0x32828 bytes
    // ntoskrnl.exe .text:0x5812f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5933d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581120, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) find_longest_run_clear_capped;
    
    // [RtlFindMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46c6a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f3320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a99c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fc030, 0x1fe000 bytes
    //
    _q23(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, struct win::message_resource_entry_t**)>*) find_message;
    
    // [RtlFindMostSignificantBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfeac, 0x32828 bytes
    // ntoskrnl.exe .text:0x256080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x363fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3055c0, 0x1fe000 bytes
    //
    _q24(sdk::function<char(uint64_t)>*) find_most_significant_bit;
    
    // [RtlFindNextAlignedForwardRunClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ae88, 0x32828 bytes
    // ntoskrnl.exe .text:0x27eee4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3564, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34dad0, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) find_next_aligned_forward_run_clear;
    
    // [RtlFindNextClearRunUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd751c, 0x32828 bytes
    // ntoskrnl.exe .text:0x271c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35f9ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305ff4, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) find_next_clear_run_ulong;
    
    // [RtlFindNextForwardRunClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94cdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2bd050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20b210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34edf0, 0x1fe000 bytes
    //
    _q27(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t*)>*) find_next_forward_run_clear;
    
    // [RtlFindNextForwardRunClearCapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94cf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x581550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581380, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) find_next_forward_run_clear_capped;
    
    // [RtlFindNextForwardRunClearEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1248bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x581690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5814c0, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) find_next_forward_run_clear_ex;
    
    // [RtlFindRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ecc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7407e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748420, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) find_range;
    
    // [RtlFindSetBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x103020, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ba710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2de100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e3d60, 0x1fe000 bytes
    //
    _q31(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) find_set_bits;
    
    // [RtlFindSetBitsAndClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2129b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5817e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581610, 0x1fe000 bytes
    //
    _q32(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) find_set_bits_and_clear;
    
    // [RtlFindSetBitsAndClearEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13cc20, 0x32828 bytes
    // ntoskrnl.exe .text:0x235600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35f420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31d670, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) find_set_bits_and_clear_ex;
    
    // [RtlFindSetBitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1248c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x30b240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22c010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x276700, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) find_set_bits_ex;
    
    // [RtlFindUnicodePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4486c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x640ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7af7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2a40, 0x1fe000 bytes
    //
    _q35(sdk::function<struct nt::unicode_prefix_table_entry_t*(struct nt::unicode_prefix_table_t*, const nt::unicode_view*, uint32_t)>*) find_unicode_prefix;
    
    // [RtlFirstFreeAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d2190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aeea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x698680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6054d0, 0x1fe000 bytes
    //
    _q36(sdk::function<uint8_t(struct nt::acl_t*, void**)>*) first_free_ace;
    
    // [RtlFnToFxFrame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5e90, 0x32828 bytes
    // ntoskrnl.exe .text:0x35656c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36f280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b7ec, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) fn_to_fx_frame;
    
    // [RtlFormatCurrentUserKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f3000, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66a0b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e49d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68ec50, 0x1fe000 bytes
    //
    _q38(sdk::function<int32_t(nt::unicode_view*)>*) format_current_user_key_path;
    
    // [RtlFormatMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68b708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90dfc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ad470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90c6e0, 0x1fe000 bytes
    //
    _q39(sdk::function<int32_t(wchar_t*, uint32_t, uint8_t, uint8_t, uint8_t, char**, wchar_t*, uint32_t, uint32_t*)>*) format_message;
    
    // [RtlFormatMessageEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68b754, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90e018, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ad4c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90c738, 0x1fe000 bytes
    //
    _q40(sdk::function<int32_t(wchar_t*, uint32_t, uint8_t, uint8_t, uint8_t, char**, wchar_t*, uint32_t, uint32_t*, struct win::parse_message_context_t*)>*) format_message_ex;
    
    // [RtlFreeAnsiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4674, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60ba90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d8600, 0x1fe000 bytes
    //
    _q41(sdk::function<void(nt::ascii_view*)>*) free_ansi_string;
    
    // [RtlFreeHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb5974, 0x32828 bytes
    // ntoskrnl.exe .text:0x226020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ed30, 0x1fe000 bytes
    //
    _q42(sdk::function<uint32_t(void*, uint32_t, void*)>*) free_heap;
    
    // [RtlFreeOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53871c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e730, 0x1fe000 bytes
    //
    _q43(sdk::function<void(nt::ascii_view*)>*) free_oem_string;
    
    // [RtlFreeRangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f7a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749650, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) free_range_list;
    
    // [RtlFreeStringRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980308, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63dc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ebe8, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) free_string_routine;
    
    // [RtlFreeUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4674, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60ba90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d8600, 0x1fe000 bytes
    //
    _q46(sdk::function<void(nt::unicode_view*)>*) free_unicode_string;
    
    // [RtlFxToFnFrame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5720, 0x32828 bytes
    // ntoskrnl.exe .text:0x356480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20b514, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b700, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) fx_to_fn_frame;
    
    // [RtlGenerate8dot3Name]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479178, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64a930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ab860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bd210, 0x1fe000 bytes
    //
    _q48(sdk::function<int32_t(const nt::unicode_view*, uint8_t, struct nt::generate_name_context_t*, nt::unicode_view*)>*) generate8dot3_name;
    
    // [RtlGenerateClass5Guid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545640, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7886a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83aeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792440, 0x1fe000 bytes
    //
    _q49(sdk::function<int32_t(const struct nt::guid_t const*, void*, uint32_t, struct nt::guid_t*)>*) generate_class5_guid;
    
    // [RtlGenerateQpcToIncrementConstants]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134a20, 0x32828 bytes
    // ntoskrnl.exe .text:0x39394c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3949ac, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) generate_qpc_to_increment_constants;
    
    // [RtlGetAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdee64, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da8b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28eb20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b420, 0x1fe000 bytes
    //
    _q51(sdk::function<int32_t(struct nt::acl_t*, uint32_t, void**)>*) get_ace;
    
    // [RtlGetActiveConsoleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x107b30, 0x32828 bytes
    // ntoskrnl.exe .text:0x215410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37fff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35db30, 0x1fe000 bytes
    //
    _q52(sdk::function<uint32_t()>*) get_active_console_id;
    
    // [RtlGetAppContainerNamedObjectPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21081c, 0x32828 bytes
    // ntoskrnl.exe .text:0x580c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x595260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580a80, 0x1fe000 bytes
    //
    _q53(sdk::function<int32_t(void*, void*, uint8_t, nt::unicode_view*)>*) get_app_container_named_object_path;
    
    // [RtlGetAppContainerParent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68821c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9afa70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f060, 0x1fe000 bytes
    //
    _q54(sdk::function<int32_t(void*, void**)>*) get_app_container_parent;
    
    // [RtlGetAppContainerSidType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e64e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fb710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x794bb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70cc80, 0x1fe000 bytes
    //
    _q55(sdk::function<int32_t(void*, enum win::appcontainer_sid_type_t*)>*) get_app_container_sid_type;
    
    // [RtlGetCallersAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2133ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x582ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20bc50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582910, 0x1fe000 bytes
    //
    _q56(sdk::function<void(void**, void**)>*) get_callers_address;
    
    // [RtlGetCompressionWorkSpaceSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x73b9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27bde0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3283d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c3020, 0x1fe000 bytes
    //
    _q57(sdk::function<int32_t(uint16_t, uint32_t*, uint32_t*)>*) get_compression_work_space_size;
    
    // [RtlGetConsoleSessionForegroundProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68d8b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d1f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b910, 0x1fe000 bytes
    //
    _q58(sdk::function<uint64_t()>*) get_console_session_foreground_process_id;
    
    // [RtlGetControlSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d864, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62ee50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x738790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e740, 0x1fe000 bytes
    //
    _q59(sdk::function<int32_t(void*, wchar_t*, uint32_t*)>*) get_control_security_descriptor;
    
    // [RtlGetCurrentServiceSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8380, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a1680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e4480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a2b40, 0x1fe000 bytes
    //
    _q60(sdk::function<uint32_t()>*) get_current_service_session_id;
    
    // [RtlGetDaclSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106284, 0x32828 bytes
    // ntoskrnl.exe .text:0x219130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d70e0, 0x1fe000 bytes
    //
    _q61(sdk::function<int32_t(void*, uint8_t*, struct nt::acl_t**, uint8_t*)>*) get_dacl_security_descriptor;
    
    // [RtlGetDefaultCodePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ee88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754ec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c910, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) get_default_code_page;
    
    // [RtlGetElementGenericTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc13d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x25bf20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36aa70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ba70, 0x1fe000 bytes
    //
    _q63(sdk::function<void*(struct rtl::generic_table_t*, uint32_t)>*) get_element_generic_table;
    
    // [RtlGetElementGenericTableAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213bf4, 0x32828 bytes
    // ntoskrnl.exe .text:0x585e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585cc0, 0x1fe000 bytes
    //
    _q64(sdk::function<void*(struct rtl::avl_table_t*, uint32_t)>*) get_element_generic_table_avl;
    
    // [RtlGetEnabledExtendedFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130378, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a29b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3f00, 0x1fe000 bytes
    //
    _q65(sdk::function<uint64_t(uint64_t)>*) get_enabled_extended_features;
    
    // [RtlGetExtendedContextLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa3748, 0x32828 bytes
    // ntoskrnl.exe .text:0x288b20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f2d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32fa90, 0x1fe000 bytes
    //
    _q66(sdk::function<uint32_t(uint32_t, uint32_t*)>*) get_extended_context_length;
    
    // [RtlGetFirstRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f034, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x740b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b76c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7487d0, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) get_first_range;
    
    // [RtlGetGroupSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x719890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7350d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7216b0, 0x1fe000 bytes
    //
    _q68(sdk::function<int32_t(void*, void**, uint8_t*)>*) get_group_security_descriptor;
    
    // [RtlGetIntegerAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3feffc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69cbf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68a9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637bc0, 0x1fe000 bytes
    //
    _q69(sdk::function<uint8_t(wchar_t*, wchar_t*)>*) get_integer_atom;
    
    // [RtlGetInterruptTimePrecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x62670, 0x32828 bytes
    // ntoskrnl.exe .text:0x30cc20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2209e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278330, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) get_interrupt_time_precise;
    
    // [RtlGetLastRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f090, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x740bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b79f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748830, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) get_last_range;
    
    // [RtlGetNextEntryHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xba5c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ba80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ebc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5530, 0x1fe000 bytes
    //
    _q72(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_context_t*)>*) get_next_entry_hash_table;
    
    // [RtlGetNextRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ef80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x740ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748720, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) get_next_range;
    
    // [RtlGetNtGlobalFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cd88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x912220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b1030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x910940, 0x1fe000 bytes
    //
    _q74(sdk::function<uint32_t()>*) get_nt_global_flags;
    
    // [RtlGetNtProductType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcce80, 0x32828 bytes
    // ntoskrnl.exe .text:0x261d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x304540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312320, 0x1fe000 bytes
    //
    _q75(sdk::function<uint8_t(enum os::product_type_t*)>*) get_nt_product_type;
    
    // [RtlGetOwnerSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x413490, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x738990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbc80, 0x1fe000 bytes
    //
    _q76(sdk::function<int32_t(void*, void**, uint8_t*)>*) get_owner_security_descriptor;
    
    // [RtlGetProductInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14621c, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3824e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320630, 0x1fe000 bytes
    //
    _q77(sdk::function<uint8_t(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*)>*) get_product_info;
    
    // [RtlGetSaclSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f25cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61b5a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7515e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66b990, 0x1fe000 bytes
    //
    _q78(sdk::function<int32_t(void*, uint8_t*, struct nt::acl_t**, uint8_t*)>*) get_sacl_security_descriptor;
    
    // [RtlGetSetBootStatusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5336e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76d6c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x775130, 0x1fe000 bytes
    //
    _q79(sdk::function<int32_t(void*, uint8_t, enum rtl::bsd_item_type_t, void*, uint32_t, uint32_t*)>*) get_set_boot_status_data;
    
    // [RtlGetSuiteMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492024, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7c90, 0x1fe000 bytes
    //
    _q80(sdk::function<uint32_t()>*) get_suite_mask;
    
    // [RtlGetSystemTimePrecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x97228, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b82e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3554e0, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) get_system_time_precise;
    
    // [RtlGetThreadLangIdByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd0c0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x215c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a69b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33e530, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) get_thread_lang_id_by_index;
    
    // [RtlGetVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x491f70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664870, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7bd0, 0x1fe000 bytes
    //
    _q83(sdk::function<int32_t(struct nt::osversioninfoexw_t*)>*) get_version;
    
    // [RtlGuardIsValidStackPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x466a34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68e820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x687e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f26f0, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) guard_is_valid_stack_pointer;
    
    // [RtlGuardIsValidWow64StackPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490774, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4ad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fd7e4, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) guard_is_valid_wow64_stack_pointer;
    
    // [RtlGUIDFromString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43d038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dcff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x714e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aa2a0, 0x1fe000 bytes
    //
    _q86(sdk::function<int32_t(const nt::unicode_view*, struct nt::guid_t*)>*) guid_from_string;
    
    // [RtlHashUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440dd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d7ca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a85f0, 0x1fe000 bytes
    //
    _q87(sdk::function<int32_t(const nt::unicode_view*, uint8_t, uint32_t, uint32_t*)>*) hash_unicode_string;
    
    // [RtlIdentifierAuthoritySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea404, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f71f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3cd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x673a74, 0x1fe000 bytes
    //
    _q88(sdk::function<struct nt::sid_identifier_authority_t*(void*)>*) identifier_authority_sid;
    
    // [RtlIdnToAscii]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68dab8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9136f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911e50, 0x1fe000 bytes
    //
    _q89(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, wchar_t*, int32_t*)>*) idn_to_ascii;
    
    // [RtlIdnToNameprepUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68dad8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x913720, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911e80, 0x1fe000 bytes
    //
    _q90(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, wchar_t*, int32_t*)>*) idn_to_nameprep_unicode;
    
    // [RtlIdnToUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68daf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x913750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911eb0, 0x1fe000 bytes
    //
    _q91(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, wchar_t*, int32_t*)>*) idn_to_unicode;
    
    // [RtlImageDirectoryEntryToData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xde814, 0x32828 bytes
    // ntoskrnl.exe .text:0x355780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33aa00, 0x1fe000 bytes
    //
    _q92(sdk::function<void*(void*, uint8_t, uint16_t, uint32_t*)>*) image_directory_entry_to_data;
    
    // [RtlImageNtHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf158, 0x32828 bytes
    // ntoskrnl.exe .text:0x3368c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27dae0, 0x1fe000 bytes
    //
    _q93(sdk::function<struct image::nt_headers64_t*(void*)>*) image_nt_header;
    
    // [RtlImageNtHeaderEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf180, 0x32828 bytes
    // ntoskrnl.exe .text:0x3368f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27db10, 0x1fe000 bytes
    //
    _q94(sdk::function<int32_t(uint32_t, void*, uint64_t, struct image::nt_headers64_t**)>*) image_nt_header_ex;
    
    // [RtlImpersonateSelfEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48fac4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669f28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb86c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dcf68, 0x1fe000 bytes
    //
    _q95(sdk::function<int32_t(enum sec::impersonation_level_t, uint32_t, void**)>*) impersonate_self_ex;
    
    // [RtlInitAnsiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x213660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203280, 0x1fe000 bytes
    //
    _q96(sdk::function<void(nt::ascii_view*, const char*)>*) init_ansi_string;
    
    // [RtlInitAnsiStringEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137610, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2f10, 0x1fe000 bytes
    //
    _q97(sdk::function<int32_t(nt::ascii_view*, const char*)>*) init_ansi_string_ex;
    
    // [RtlInitCodePageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56c00c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82e0b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b5fa0, 0x1fe000 bytes
    //
    _q98(sdk::function<void(wchar_t*, struct nt::cptableinfo_t*)>*) init_code_page_table;
    
    // [RtlInitEnumerationHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x703d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x265ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x316650, 0x1fe000 bytes
    //
    _q99(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) init_enumeration_hash_table;
    
    // [RtlInitString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc880c, 0x32828 bytes
    // ntoskrnl.exe .text:0x213660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203280, 0x1fe000 bytes
    //
    _r00(sdk::function<void(nt::ascii_view*, const char*)>*) init_string;
    
    // [RtlInitStringEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211224, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5926a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f420, 0x1fe000 bytes
    //
    _r01(sdk::function<int32_t(nt::ascii_view*, const char*)>*) init_string_ex;
    
    // [RtlInitStrongEnumerationHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213534, 0x32828 bytes
    // ntoskrnl.exe .text:0x3902d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391320, 0x1fe000 bytes
    //
    _r02(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) init_strong_enumeration_hash_table;
    
    // [RtlInitUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5640, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ce500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206450, 0x1fe000 bytes
    //
    _r03(sdk::function<void(nt::unicode_view*, const wchar_t*)>*) init_unicode_string;
    
    // [RtlInitUnicodeStringEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91860, 0x32828 bytes
    // ntoskrnl.exe .text:0x202690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f73c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25bb40, 0x1fe000 bytes
    //
    _r04(sdk::function<int32_t(nt::unicode_view*, const wchar_t*)>*) init_unicode_string_ex;
    
    // [RtlInitWeakEnumerationHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21356c, 0x32828 bytes
    // ntoskrnl.exe .text:0x582c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582aa0, 0x1fe000 bytes
    //
    _r05(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) init_weak_enumeration_hash_table;
    
    // [RtlInitializeBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc527c, 0x32828 bytes
    // ntoskrnl.exe .text:0x254160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3680d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303eb0, 0x1fe000 bytes
    //
    _r06(sdk::function<void(struct rtl::bitmap_t*, uint32_t*, uint32_t)>*) initialize_bit_map;
    
    // [RtlInitializeBitMapEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212d2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f2d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3209a0, 0x1fe000 bytes
    //
    _r07(sdk::function<void(struct rtl::bitmap_ex_t*, uint64_t*, uint64_t)>*) initialize_bit_map_ex;
    
    // [RtlInitializeExtendedContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa37fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x287e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32ed70, 0x1fe000 bytes
    //
    _r08(sdk::function<uint32_t(nt::context*, uint32_t, struct win::context_ex_t**)>*) initialize_extended_context;
    
    // [RtlInitializeGenericTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xced30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2692f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37cac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a330, 0x1fe000 bytes
    //
    _r09(sdk::function<void(struct rtl::generic_table_t*, sdk::function<enum rtl::generic_compare_results_t(struct rtl::generic_table_t*, void*, void*)>*, sdk::function<void*(struct rtl::generic_table_t*, uint32_t)>*, sdk::function<void(struct rtl::generic_table_t*, void*)>*, void*)>*) initialize_generic_table;
    
    // [RtlInitializeGenericTableAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91e1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x202120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e59f0, 0x1fe000 bytes
    //
    _r10(sdk::function<void(struct rtl::avl_table_t*, sdk::function<enum rtl::generic_compare_results_t(struct rtl::avl_table_t*, void*, void*)>*, sdk::function<void*(struct rtl::avl_table_t*, uint32_t)>*, sdk::function<void(struct rtl::avl_table_t*, void*)>*, void*)>*) initialize_generic_table_avl;
    
    // [RtlInitializeHistoryTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3a7c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4e450, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb57be0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4e2d4, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) initialize_history_table;
    
    // [RtlInitializeRangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54a7f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77f3e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x837e50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789180, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) initialize_range_list;
    
    // [RtlInitializeSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ec308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5faf30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75c210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67da80, 0x1fe000 bytes
    //
    _r13(sdk::function<int32_t(void*, struct nt::sid_identifier_authority_t*, uint8_t)>*) initialize_sid;
    
    // [RtlInitializeSidEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210d30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c4970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ae40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c56e0, 0x1fe000 bytes
    //
    _r14(sdk::function<int32_t(void*, struct nt::sid_identifier_authority_t*, uint8_t, ...)>*) initialize_sid_ex;
    
    // [RtlInitializeUnicodePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5702a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b47b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc3f0, 0x1fe000 bytes
    //
    _r15(sdk::function<void(struct nt::unicode_prefix_table_t*)>*) initialize_unicode_prefix;
    
    // [RtlInsertDynamicFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x76f30, 0x32828 bytes
    // ntoskrnl.exe .text:0x353d24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3074cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6fa4, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) insert_dynamic_function_table;
    
    // [RtlInsertElementGenericTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93620, 0x32828 bytes
    // ntoskrnl.exe .text:0x241190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28dfe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306b90, 0x1fe000 bytes
    //
    _r17(sdk::function<void*(struct rtl::generic_table_t*, void*, uint32_t, uint8_t*)>*) insert_element_generic_table;
    
    // [RtlInsertElementGenericTableAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x923e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x201dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5690, 0x1fe000 bytes
    //
    _r18(sdk::function<void*(struct rtl::avl_table_t*, void*, uint32_t, uint8_t*)>*) insert_element_generic_table_avl;
    
    // [RtlInsertElementGenericTableFull]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93680, 0x32828 bytes
    // ntoskrnl.exe .text:0x241200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28e050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306c00, 0x1fe000 bytes
    //
    _r19(sdk::function<void*(struct rtl::generic_table_t*, void*, uint32_t, uint8_t*, void*, enum nt::table_search_result_t)>*) insert_element_generic_table_full;
    
    // [RtlInsertElementGenericTableFullAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92150, 0x32828 bytes
    // ntoskrnl.exe .text:0x201e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f82c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5700, 0x1fe000 bytes
    //
    _r20(sdk::function<void*(struct rtl::avl_table_t*, void*, uint32_t, uint8_t*, void*, enum nt::table_search_result_t)>*) insert_element_generic_table_full_avl;
    
    // [RtlInsertEntryHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7043c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20aeb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3393a0, 0x1fe000 bytes
    //
    _r21(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_entry_t*, uint64_t, struct rtl::dynamic_hash_table_context_t*)>*) insert_entry_hash_table;
    
    // [RtlInsertInvertedFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7bb10, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d9cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x338a54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ed4c, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) insert_inverted_function_table;
    
    // [RtlInsertUnicodePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448568, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x640760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7af670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c28e0, 0x1fe000 bytes
    //
    _r23(sdk::function<uint8_t(struct nt::unicode_prefix_table_t*, nt::unicode_view*, struct nt::unicode_prefix_table_entry_t*)>*) insert_unicode_prefix;
    
    // [RtlInt64ToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f1b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7570d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x689fb0, 0x1fe000 bytes
    //
    _r24(sdk::function<int32_t(uint64_t, uint32_t, nt::unicode_view*)>*) int64_to_unicode_string;
    
    // [RtlIntegerToChar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4598, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x668e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cd800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dc0c0, 0x1fe000 bytes
    //
    _r25(sdk::function<int32_t(uint32_t, uint32_t, int32_t, char*)>*) integer_to_char;
    
    // [RtlIntegerToUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f3ebc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6226d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690540, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) integer_to_unicode;
    
    // [RtlIntegerToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4518, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x668db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cd770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dc030, 0x1fe000 bytes
    //
    _r27(sdk::function<int32_t(uint32_t, uint32_t, nt::unicode_view*)>*) integer_to_unicode_string;
    
    // [RtlInterlockedClearBitRun]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212d34, 0x32828 bytes
    // ntoskrnl.exe .text:0x3baac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bb470, 0x1fe000 bytes
    //
    _r28(sdk::function<void(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) interlocked_clear_bit_run;
    
    // [RtlInterlockedClearBitRunEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12486c, 0x32828 bytes
    // ntoskrnl.exe .text:0x581bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5819f0, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) interlocked_clear_bit_run_ex;
    
    // [RtlInterlockedPopEntrySList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163670, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbdc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd6a0, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) interlocked_pop_entry_s_list;
    
    // [RtlInterlockedSetBitRun]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212de8, 0x32828 bytes
    // ntoskrnl.exe .text:0x581c80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581ab0, 0x1fe000 bytes
    //
    _r31(sdk::function<void(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) interlocked_set_bit_run;
    
    // [RtlInterlockedSetBitRunEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212e98, 0x32828 bytes
    // ntoskrnl.exe .text:0x581d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581b70, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) interlocked_set_bit_run_ex;
    
    // [RtlInterlockedSetClearBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27ce00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33220c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4018, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) interlocked_set_clear_bits;
    
    // [RtlInterlockedSetClearRun]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10af98, 0x32828 bytes
    // ntoskrnl.exe .text:0x27efe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f4dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34f6e0, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) interlocked_set_clear_run;
    
    // [RtlInterlockedSetClearRunEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b480, 0x32828 bytes
    // ntoskrnl.exe .text:0x230ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22c700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x276a80, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) interlocked_set_clear_run_ex;
    
    // [RtlInvertRangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54d038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x799240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79ed90, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) invert_range_list;
    
    // [RtlInvertRangeListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e16c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x799270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8480a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79edc0, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) invert_range_list_ex;
    
    // [RtlIoDecodeMemIoResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x138ee8, 0x32828 bytes
    // ntoskrnl.exe .text:0x379070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37cd80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a3f0, 0x1fe000 bytes
    //
    _r38(sdk::function<uint64_t(struct io::resource_descriptor_t*, uint64_t*, uint64_t*, uint64_t*)>*) io_decode_mem_io_resource;
    
    // [RtlIoEncodeMemIoResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14542c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c0e60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3da170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1c70, 0x1fe000 bytes
    //
    _r39(sdk::function<int32_t(struct io::resource_descriptor_t*, uint8_t, uint64_t, uint64_t, uint64_t, uint64_t)>*) io_encode_mem_io_resource;
    
    // [RtlIpv4AddressToStringA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1322d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d7a0, 0x1fe000 bytes
    //
    _r40(sdk::function<char*(const struct nt::in_addr_t*, char*)>*) ipv4_address_to_string_a;
    
    // [RtlIpv4AddressToStringExA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213d70, 0x32828 bytes
    // ntoskrnl.exe .text:0x586020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585e50, 0x1fe000 bytes
    //
    _r41(sdk::function<int32_t(const struct nt::in_addr_t*, uint16_t, char*, uint32_t*)>*) ipv4_address_to_string_ex_a;
    
    // [RtlIpv4AddressToStringExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x214220, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a0590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ece0, 0x1fe000 bytes
    //
    _r42(sdk::function<int32_t(const struct nt::in_addr_t*, uint16_t, wchar_t*, uint32_t*)>*) ipv4_address_to_string_ex_w;
    
    // [RtlIpv4AddressToStringW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x123f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x37da00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a0660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ed80, 0x1fe000 bytes
    //
    _r43(sdk::function<wchar_t*(const struct nt::in_addr_t*, wchar_t*)>*) ipv4_address_to_string_w;
    
    // [RtlIpv4StringToAddressA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x214560, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d910, 0x1fe000 bytes
    //
    _r44(sdk::function<int32_t(const char*, uint8_t, const char**, struct nt::in_addr_t*)>*) ipv4_string_to_address_a;
    
    // [RtlIpv4StringToAddressExA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2147c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5863b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59a0d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5861e0, 0x1fe000 bytes
    //
    _r45(sdk::function<int32_t(const char*, uint8_t, struct nt::in_addr_t*, wchar_t*)>*) ipv4_string_to_address_ex_a;
    
    // [RtlIpv4StringToAddressExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc83d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x265600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3734d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3159e0, 0x1fe000 bytes
    //
    _r46(sdk::function<int32_t(const wchar_t*, uint8_t, struct nt::in_addr_t*, wchar_t*)>*) ipv4_string_to_address_ex_w;
    
    // [RtlIpv4StringToAddressW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8438, 0x32828 bytes
    // ntoskrnl.exe .text:0x265680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x373550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x315a60, 0x1fe000 bytes
    //
    _r47(sdk::function<int32_t(const wchar_t*, uint8_t, const wchar_t**, struct nt::in_addr_t*)>*) ipv4_string_to_address_w;
    
    // [RtlIpv6AddressToStringA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213e24, 0x32828 bytes
    // ntoskrnl.exe .text:0x368590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369940, 0x1fe000 bytes
    //
    _r48(sdk::function<char*(const struct nt::in6_addr_t*, char*)>*) ipv6_address_to_string_a;
    
    // [RtlIpv6AddressToStringExA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x214098, 0x32828 bytes
    // ntoskrnl.exe .text:0x5860e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585f10, 0x1fe000 bytes
    //
    _r49(sdk::function<int32_t(const struct nt::in6_addr_t*, uint32_t, uint16_t, char*, uint32_t*)>*) ipv6_address_to_string_ex_a;
    
    // [RtlIpv6AddressToStringExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2142e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b3f0, 0x1fe000 bytes
    //
    _r50(sdk::function<int32_t(const struct nt::in6_addr_t*, uint32_t, uint16_t, wchar_t*, uint32_t*)>*) ipv6_address_to_string_ex_w;
    
    // [RtlIpv6AddressToStringW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e22c, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b4d0, 0x1fe000 bytes
    //
    _r51(sdk::function<wchar_t*(const struct nt::in6_addr_t*, wchar_t*)>*) ipv6_address_to_string_w;
    
    // [RtlIpv6StringToAddressA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1418bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x586590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59a2a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5863c0, 0x1fe000 bytes
    //
    _r52(sdk::function<int32_t(const char*, const char**, struct nt::in6_addr_t*)>*) ipv6_string_to_address_a;
    
    // [RtlIpv6StringToAddressExA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2149a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5869b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59a700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5867e0, 0x1fe000 bytes
    //
    _r53(sdk::function<int32_t(const char*, struct nt::in6_addr_t*, uint32_t*, wchar_t*)>*) ipv6_string_to_address_ex_a;
    
    // [RtlIpv6StringToAddressExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7360, 0x32828 bytes
    // ntoskrnl.exe .text:0x262f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36f020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x313550, 0x1fe000 bytes
    //
    _r54(sdk::function<int32_t(const wchar_t*, struct nt::in6_addr_t*, uint32_t*, wchar_t*)>*) ipv6_string_to_address_ex_w;
    
    // [RtlIpv6StringToAddressW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc73ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x263000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36f0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3135f0, 0x1fe000 bytes
    //
    _r55(sdk::function<int32_t(const wchar_t*, const wchar_t**, struct nt::in6_addr_t*)>*) ipv6_string_to_address_w;
    
    // [RtlIsCapabilitySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e6b60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fbda0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f9938, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d310, 0x1fe000 bytes
    //
    _r56(sdk::function<uint8_t(void*)>*) is_capability_sid;
    
    // [RtlIsGenericTableEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93c88, 0x32828 bytes
    // ntoskrnl.exe .text:0x390870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3918c0, 0x1fe000 bytes
    //
    _r57(sdk::function<uint8_t(struct rtl::generic_table_t*)>*) is_generic_table_empty;
    
    // [RtlIsGenericTableEmptyAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91ce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x201b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5420, 0x1fe000 bytes
    //
    _r58(sdk::function<uint8_t(struct rtl::avl_table_t*)>*) is_generic_table_empty_avl;
    
    // [RtlIsMultiSessionSku]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445214, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec9c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc460, 0x1fe000 bytes
    //
    _r59(sdk::function<uint8_t()>*) is_multi_session_sku;
    
    // [RtlIsMultiUsersInSessionSku]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6882e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9afc80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f1c0, 0x1fe000 bytes
    //
    _r60(sdk::function<uint8_t()>*) is_multi_users_in_session_sku;
    
    // [RtlIsNameInExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa9dd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a3e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eb040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357e10, 0x1fe000 bytes
    //
    _r61(sdk::function<uint8_t(nt::unicode_view*, nt::unicode_view*, uint8_t, wchar_t*)>*) is_name_in_expression;
    
    // [RtlIsNameLegalDOS8Dot3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x477bf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64fe20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4270, 0x1fe000 bytes
    //
    _r62(sdk::function<uint8_t(const nt::unicode_view*, nt::ascii_view*, uint8_t*)>*) is_name_legal_dos8_dot3;
    
    // [RtlIsNormalizedString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6906ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x915f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9146a0, 0x1fe000 bytes
    //
    _r63(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, uint8_t*)>*) is_normalized_string;
    
    // [RtlIsNtDdiVersionAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1494f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c7890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8760, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) is_nt_ddi_version_available;
    
    // [RtlIsPackageSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e7404, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fb5e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7960c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703930, 0x1fe000 bytes
    //
    _r65(sdk::function<uint8_t(void*)>*) is_package_sid;
    
    // [RtlIsParentOfChildAppContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e228c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6214e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9afc98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d4a8, 0x1fe000 bytes
    //
    _r66(sdk::function<uint8_t(void*, void*)>*) is_parent_of_child_app_container;
    
    // [RtlIsRangeAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ee08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x740940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748580, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) is_range_available;
    
    // [RtlIsSandboxedToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fc550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eb520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x649530, 0x1fe000 bytes
    //
    _r68(sdk::function<uint8_t(struct sec::subject_context_t*, char)>*) is_sandboxed_token;
    
    // [RtlIsServicePackVersionInstalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x214d74, 0x32828 bytes
    // ntoskrnl.exe .text:0x587270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59af30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5870a0, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) is_service_pack_version_installed;
    
    // [RtlIsSystemAceType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec300, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980648, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa640d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ef28, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) is_system_ace_type;
    
    // [RtlIsUntrustedObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd6a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x265810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x203030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x315bf0, 0x1fe000 bytes
    //
    _r71(sdk::function<int32_t(void*, void*, uint8_t*)>*) is_untrusted_object;
    
    // [RtlIsValidOemCharacter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68d784, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x913620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911d80, 0x1fe000 bytes
    //
    _r72(sdk::function<uint8_t(wchar_t*)>*) is_valid_oem_character;
    
    // [RtlIsValidProcessTrustLabelSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c3748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b2e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29b4a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x609480, 0x1fe000 bytes
    //
    _r73(sdk::function<uint8_t(void*)>*) is_valid_process_trust_label_sid;
    
    // [RtlLargeIntegerToChar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f2020, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a290, 0x1fe000 bytes
    //
    _r74(sdk::function<int32_t(int64_t*, uint32_t, int32_t, char*)>*) large_integer_to_char;
    
    // [RtlLargeIntegerToUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cb9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91200c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b0e28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91072c, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) large_integer_to_unicode;
    
    // [RtlLCIDToCultureName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68d708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x913180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b25e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9118e0, 0x1fe000 bytes
    //
    _r76(sdk::function<uint8_t(uint32_t, nt::unicode_view*)>*) lcid_to_culture_name;
    
    // [RtlLengthCurrentClearRunForward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5fc50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2bd71c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34f4bc, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) length_current_clear_run_forward;
    
    // [RtlLengthRequiredSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b694, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f7200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a4260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x673a80, 0x1fe000 bytes
    //
    _r78(sdk::function<uint32_t(uint32_t)>*) length_required_sid;
    
    // [RtlLengthSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bf3c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x750020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x614340, 0x1fe000 bytes
    //
    _r79(sdk::function<uint32_t(void*)>*) length_security_descriptor;
    
    // [RtlLengthSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdee58, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28eb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b480, 0x1fe000 bytes
    //
    _r80(sdk::function<uint32_t(void*)>*) length_sid;
    
    // [RtlLengthSidAsUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f3fe8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66a1b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68ebf8, 0x1fe000 bytes
    //
    _r81(sdk::function<int32_t(void*, uint32_t*)>*) length_sid_as_unicode_string;
    
    // [RtlLoadString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68bed0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90e840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9adcf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90cf60, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) load_string;
    
    // [RtlLocalTimeToSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a15c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ac890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b950, 0x1fe000 bytes
    //
    _r83(sdk::function<int32_t(int64_t*, int64_t*)>*) local_time_to_system_time;
    
    // [RtlLockBootStatusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537bb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x762a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x769d10, 0x1fe000 bytes
    //
    _r84(sdk::function<int32_t(void**)>*) lock_boot_status_data;
    
    // [RtlLookupAtomInAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3feeb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69ca90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68a6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637a60, 0x1fe000 bytes
    //
    _r85(sdk::function<int32_t(void*, wchar_t*, wchar_t*)>*) lookup_atom_in_atom_table;
    
    // [RtlLookupElementGenericTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93810, 0x32828 bytes
    // ntoskrnl.exe .text:0x241ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28dec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4b10, 0x1fe000 bytes
    //
    _r86(sdk::function<void*(struct rtl::generic_table_t*, void*)>*) lookup_element_generic_table;
    
    // [RtlLookupElementGenericTableAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x919c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x202530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5e00, 0x1fe000 bytes
    //
    _r87(sdk::function<void*(struct rtl::avl_table_t*, void*)>*) lookup_element_generic_table_avl;
    
    // [RtlLookupElementGenericTableFull]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213ba8, 0x32828 bytes
    // ntoskrnl.exe .text:0x585e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5998c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585c60, 0x1fe000 bytes
    //
    _r88(sdk::function<void*(struct rtl::generic_table_t*, void*, void**, enum nt::table_search_result_t*)>*) lookup_element_generic_table_full;
    
    // [RtlLookupElementGenericTableFullAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91d30, 0x32828 bytes
    // ntoskrnl.exe .text:0x202430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5d00, 0x1fe000 bytes
    //
    _r89(sdk::function<void*(struct rtl::avl_table_t*, void*, void**, enum nt::table_search_result_t*)>*) lookup_element_generic_table_full_avl;
    
    // [RtlLookupEntryHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x203bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2de7e0, 0x1fe000 bytes
    //
    _r90(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, uint64_t, struct rtl::dynamic_hash_table_context_t*)>*) lookup_entry_hash_table;
    
    // [RtlLookupExceptionHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149378, 0x32828 bytes
    // ntoskrnl.exe .text:0x26fffc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a7480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32181c, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) lookup_exception_handler;
    
    // [RtlLookupFirstMatchingElementGenericTableAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133908, 0x32828 bytes
    // ntoskrnl.exe .text:0x390380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b6d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3913d0, 0x1fe000 bytes
    //
    _r92(sdk::function<void*(struct rtl::avl_table_t*, void*, void**)>*) lookup_first_matching_element_generic_table_avl;
    
    // [RtlLookupFunctionEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5110, 0x32828 bytes
    // ntoskrnl.exe .text:0x287690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20caf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32e600, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) lookup_function_entry;
    
    // [RtlLookupFunctionEntryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0x253490, 0x32828 bytes
    // ntoskrnl.exe INITKDBG:0xa0f040, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff4b0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e040, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) lookup_function_entry_ex;
    
    // [RtlLookupFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5494, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c0dcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423488, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1bdc, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) lookup_function_table;
    
    // [RtlLznt1DecompressChunkLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a440, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7900, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb140, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) lznt1_decompress_chunk_lookaside;
    
    // [RtlMakeSelfRelativeSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b9b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749a24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73a5f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7512e4, 0x1fe000 bytes
    //
    _r97(sdk::function<int32_t(void*, void*, uint32_t*)>*) make_self_relative_sd;
    
    // [RtlMapGenericMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a0b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a8d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bd530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ff990, 0x1fe000 bytes
    //
    _r98(sdk::function<void(uint32_t*, struct nt::generic_mapping_t*)>*) map_generic_mask;
    
    // [RtlMapSecurityErrorToNtStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2990, 0x32828 bytes
    // ntoskrnl.exe .text:0x263a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x398ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x314060, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) map_security_error_to_nt_status;
    
    // [RtlMarkExceptionHandlingPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x421340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73ea08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b08d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x746648, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) mark_exception_handling_pages;
    
    // [RtlMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124c30, 0x32828 bytes
    // ntoskrnl.exe .text:0x58cda4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59fbac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58cc24, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) mark_hiber_phase;
    
    // [RtlMergeBitMaps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe4d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x21caf4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1944, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) merge_bit_maps;
    
    // [RtlMergeBitMapsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212f48, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c23f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3204, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) merge_bit_maps_ex;
    
    // [RtlMergeRangeLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a05c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90cfb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ac680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b6d0, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) merge_range_lists;
    
    // [RtlMoveMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22210, 0x11e8 bytes
    // ntoskrnl.exe .text:0x360ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362430, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) move_memory;
    
    // [_RtlMuiRegAddLIPParent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9ef4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa61614, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97d240, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) mui_reg_add_lip_parent;
    
    // [RtlMultiByteToUnicodeN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f1d40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7594d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a150, 0x1fe000 bytes
    //
    _s07(sdk::function<int32_t(wchar_t*, uint32_t, uint32_t*, const char*, uint32_t)>*) multi_byte_to_unicode_n;
    
    // [RtlMultiByteToUnicodeSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d56c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a220, 0x1fe000 bytes
    //
    _s08(sdk::function<int32_t(uint32_t*, const char*, uint32_t)>*) multi_byte_to_unicode_size;
    
    // [RtlNextUnicodePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537f60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e5c0, 0x1fe000 bytes
    //
    _s09(sdk::function<struct nt::unicode_prefix_table_entry_t*(struct nt::unicode_prefix_table_t*, uint8_t)>*) next_unicode_prefix;
    
    // [RtlNormalizeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x690730, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x915fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914730, 0x1fe000 bytes
    //
    _s10(sdk::function<int32_t(uint32_t, const wchar_t*, int32_t, wchar_t*, int32_t*)>*) normalize_string;
    
    // [RtlNtStatusToDosError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x476360, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x645cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79eb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba0a0, 0x1fe000 bytes
    //
    _s11(sdk::function<uint32_t(int32_t)>*) nt_status_to_dos_error;
    
    // [RtlNtStatusToDosErrorNoTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb93c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24b3a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4fc0, 0x1fe000 bytes
    //
    _s12(sdk::function<uint32_t(int32_t)>*) nt_status_to_dos_error_no_teb;
    
    // [RtlNumberGenericTableElements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca704, 0x32828 bytes
    // ntoskrnl.exe .text:0x265160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3765d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3154e0, 0x1fe000 bytes
    //
    _s13(sdk::function<uint32_t(struct rtl::generic_table_t*)>*) number_generic_table_elements;
    
    // [RtlNumberGenericTableElementsAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109d30, 0x32828 bytes
    // ntoskrnl.exe .text:0x250af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x337bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2febb0, 0x1fe000 bytes
    //
    _s14(sdk::function<uint32_t(struct rtl::avl_table_t*)>*) number_generic_table_elements_avl;
    
    // [RtlNumberOfClearBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95448, 0x32828 bytes
    // ntoskrnl.exe .text:0x21c450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20af20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1390, 0x1fe000 bytes
    //
    _s15(sdk::function<uint32_t(struct rtl::bitmap_t*)>*) number_of_clear_bits;
    
    // [RtlNumberOfClearBitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212fa4, 0x32828 bytes
    // ntoskrnl.exe .text:0x581ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581e20, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) number_of_clear_bits_ex;
    
    // [RtlNumberOfClearBitsInRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212fc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x582020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593ef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581e50, 0x1fe000 bytes
    //
    _s17(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) number_of_clear_bits_in_range;
    
    // [RtlNumberOfSetBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95470, 0x32828 bytes
    // ntoskrnl.exe .text:0x21c480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20af50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e13c0, 0x1fe000 bytes
    //
    _s18(sdk::function<uint32_t(struct rtl::bitmap_t*)>*) number_of_set_bits;
    
    // [RtlNumberOfSetBitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137094, 0x32828 bytes
    // ntoskrnl.exe .text:0x582050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x593f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x581e80, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) number_of_set_bits_ex;
    
    // [RtlNumberOfSetBitsInRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x212fe8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5821f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5940c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582020, 0x1fe000 bytes
    //
    _s20(sdk::function<uint32_t(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) number_of_set_bits_in_range;
    
    // [RtlNumberOfSetBitsUlongPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38d70, 0x32828 bytes
    // ntoskrnl.exe .text:0x258be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e33b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3084d0, 0x1fe000 bytes
    //
    _s21(sdk::function<uint32_t(uint64_t)>*) number_of_set_bits_ulong_ptr;
    
    // [RtlOemStringToCountedUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689ca4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90ccf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b2a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b410, 0x1fe000 bytes
    //
    _s22(sdk::function<int32_t(nt::unicode_view*, const nt::ascii_view*, uint8_t)>*) oem_string_to_counted_unicode_string;
    
    // [RtlOemStringToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53a5d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7411d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748e10, 0x1fe000 bytes
    //
    _s23(sdk::function<int32_t(nt::unicode_view*, const nt::ascii_view*, uint8_t)>*) oem_string_to_unicode_string;
    
    // [RtlOemToUnicodeN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53a6b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7412c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7592e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748f00, 0x1fe000 bytes
    //
    _s24(sdk::function<int32_t(wchar_t*, uint32_t, uint32_t*, const char*, uint32_t)>*) oem_to_unicode_n;
    
    // [RtlOpenCurrentUser]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53a1f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76fa70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8146b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7774e0, 0x1fe000 bytes
    //
    _s25(sdk::function<int32_t(uint32_t, void**)>*) open_current_user;
    
    // [RtlOsDeploymentState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x916210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914970, 0x1fe000 bytes
    //
    _s26(sdk::function<enum nt::os_deployement_state_values_t(uint32_t)>*) os_deployment_state;
    
    // [RtlOwnerAcesPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1c9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x245c80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3347d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2efb50, 0x1fe000 bytes
    //
    _s27(sdk::function<uint8_t(struct nt::acl_t*)>*) owner_aces_present;
    
    // [RtlPcToFileHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3a58, 0x32828 bytes
    // ntoskrnl.exe .text:0x260c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a5920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311c10, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) pc_to_file_header;
    
    // [RtlPcToFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146834, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c71e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3de320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c80b0, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) pc_to_file_name;
    
    // [RtlPcToFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69084c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x916370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914ad0, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) pc_to_file_path;
    
    // [RtlPinAtomInAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4958f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eb2d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dc610, 0x1fe000 bytes
    //
    _s31(sdk::function<int32_t(void*, uint16_t)>*) pin_atom_in_atom_table;
    
    // [RtlPrefetchMemoryNonTemporal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163ea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fc810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fe0f0, 0x1fe000 bytes
    //
    _s32(sdk::function<void(void*, uint64_t)>*) prefetch_memory_non_temporal;
    
    // [RtlPrefixString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41fbc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8690, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4d60, 0x1fe000 bytes
    //
    _s33(sdk::function<uint8_t(const nt::ascii_view*, const nt::ascii_view*, uint8_t)>*) prefix_string;
    
    // [RtlPrefixUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43fb80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d66b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b2c0, 0x1fe000 bytes
    //
    _s34(sdk::function<uint8_t(const nt::unicode_view*, const nt::unicode_view*, uint8_t)>*) prefix_unicode_string;
    
    // [RtlProtectedAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecd30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9812e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fbc0, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) protected_access;
    
    // [RtlQueryAtomInAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ff0a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69cca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eb870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637c70, 0x1fe000 bytes
    //
    _s36(sdk::function<int32_t(void*, uint16_t, uint32_t*, uint32_t*, wchar_t*, uint32_t*)>*) query_atom_in_atom_table;
    
    // [RtlQueryAtomsInAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cab4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910338, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af848, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90ea58, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) query_atoms_in_atom_table;
    
    // [RtlQueryDynamicTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cd90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x912230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b1040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x910950, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) query_dynamic_time_zone_information;
    
    // [RtlQueryElevationFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48aaac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ccfc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4390, 0x1fe000 bytes
    //
    _s39(sdk::function<int32_t(union rtl::elevation_flags_t*)>*) query_elevation_flags;
    
    // [RtlQueryImageFileExecutionOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x543ba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7857f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85fd48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78f590, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) query_image_file_execution_options;
    
    // [RtlQueryImageFileKeyOption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e3fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6669c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fb640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d9ee0, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) query_image_file_key_option;
    
    // [RtlQueryInformationAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a987c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bed90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x698480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613d10, 0x1fe000 bytes
    //
    _s42(sdk::function<int32_t(struct nt::acl_t*, void*, uint32_t, enum win::acl_information_class_t)>*) query_information_acl;
    
    // [RtlQueryModuleInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528a40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76b680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7730f0, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) query_module_information;
    
    // [RtlQueryPackageClaims]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71a40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2031d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f12f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e65a0, 0x1fe000 bytes
    //
    _s44(sdk::function<int32_t(void*, wchar_t*, uint64_t*, wchar_t*, uint64_t*, struct nt::guid_t*, struct ps::pkg_claim_t*, uint64_t*)>*) query_package_claims;
    
    // [RtlQueryPackageIdentity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x719ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x203120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f1240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e64f0, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) query_package_identity;
    
    // [RtlQueryRegistryValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439bf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5de0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x681700, 0x1fe000 bytes
    //
    _s46(sdk::function<int32_t(uint32_t, const wchar_t*, struct rtl::query_registry_table_t*, void*, void*)>*) query_registry_values;
    
    // [RtlQueryRegistryValuesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438b5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6721f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6814d0, 0x1fe000 bytes
    //
    _s47(sdk::function<int32_t(uint32_t, const wchar_t*, struct rtl::query_registry_table_t*, void*, void*)>*) query_registry_values_ex;
    
    // [RtlQueryTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cd9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x912250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b1060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x910970, 0x1fe000 bytes
    //
    _s48(sdk::function<int32_t(struct rtl::time_zone_information_t*)>*) query_time_zone_information;
    
    // [RtlQueryValidationRunlevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2158a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x588610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588440, 0x1fe000 bytes
    //
    _s49(sdk::function<uint32_t(const nt::unicode_view*)>*) query_validation_runlevel;
    
    // [RtlRaiseException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211c78, 0x32828 bytes
    // ntoskrnl.exe .text:0x284a60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20bd10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32b900, 0x1fe000 bytes
    //
    _s50(sdk::function<void(struct nt::exception_record_t*)>*) raise_exception;
    
    // [RtlRaiseStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5628, 0x32828 bytes
    // ntoskrnl.exe .text:0x242ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee870, 0x1fe000 bytes
    //
    _s51(sdk::function<void(int32_t)>*) raise_status;
    
    // [RtlRandom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46e0b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6733d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6e70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6aa0, 0x1fe000 bytes
    //
    _s52(sdk::function<uint32_t(uint32_t*)>*) random;
    
    // [RtlRandomEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46e0b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x281920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ff490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x328450, 0x1fe000 bytes
    //
    _s53(sdk::function<uint32_t(uint32_t*)>*) random_ex;
    
    // [RtlRbInsertNodeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfc900, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ce7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x277bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24f7f0, 0x1fe000 bytes
    //
    _s54(sdk::function<void(struct rtl::rb_tree_t*, struct rtl::balanced_node_t*, uint8_t, struct rtl::balanced_node_t*)>*) rb_insert_node_ex;
    
    // [RtlRbRemoveNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39130, 0x32828 bytes
    // ntoskrnl.exe .text:0x2cdab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x276820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24ead0, 0x1fe000 bytes
    //
    _s55(sdk::function<void(struct rtl::rb_tree_t*, struct rtl::balanced_node_t*)>*) rb_remove_node;
    
    // [RtlRbReplaceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc60f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2286c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x341470, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) rb_replace_node;
    
    // [RtlRealPredecessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213b44, 0x32828 bytes
    // ntoskrnl.exe .text:0x201770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201770, 0x1fe000 bytes
    //
    _s57(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*) real_predecessor;
    
    // [RtlRealSuccessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x942cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x240e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3830, 0x1fe000 bytes
    //
    _s58(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*) real_successor;
    
    // [RtlReleasePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67113c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e49a0, 0x1fe000 bytes
    //
    _s59(sdk::function<void(void*)>*) release_privilege;
    
    // [RtlRemoveDynamicFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77230, 0x32828 bytes
    // ntoskrnl.exe .text:0x25004c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30733c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fda6c, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) remove_dynamic_function_table;
    
    // [RtlRemoveEntryHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71e7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20b970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3454f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339e60, 0x1fe000 bytes
    //
    _s61(sdk::function<uint8_t(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_entry_t*, struct rtl::dynamic_hash_table_context_t*)>*) remove_entry_hash_table;
    
    // [RtlRemoveInvertedFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c914, 0x32828 bytes
    // ntoskrnl.exe .text:0x36e4d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x337ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f858, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) remove_inverted_function_table;
    
    // [RtlRemoveUnicodePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x640680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e46b0, 0x1fe000 bytes
    //
    _s63(sdk::function<void(struct nt::unicode_prefix_table_t*, struct nt::unicode_prefix_table_entry_t*)>*) remove_unicode_prefix;
    
    // [RtlReplaceSidInSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6882fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9afd30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f1e0, 0x1fe000 bytes
    //
    _s64(sdk::function<int32_t(void*, void*, void*, uint32_t*)>*) replace_sid_in_sd;
    
    // [RtlReserveChunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a6dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ace80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90bf40, 0x1fe000 bytes
    //
    _s65(sdk::function<int32_t(uint16_t, uint8_t**, uint8_t*, uint8_t**, uint32_t)>*) reserve_chunk;
    
    // [RtlReserveChunkLZNT1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x690c5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x918580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b68c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916d90, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) reserve_chunk_lznt1;
    
    // [RtlReserveChunkNS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571f08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8097f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711bf0, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) reserve_chunk_ns;
    
    // [RtlReserveChunkProcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed720, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980088, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) reserve_chunk_procs;
    
    // [RtlRestoreContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1638d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fc190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fda70, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) restore_context;
    
    // [RtlRunOnceBeginInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f3d84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6566d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7589b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711240, 0x1fe000 bytes
    //
    _s70(sdk::function<int32_t(union rtl::run_once_t*, uint32_t, void**)>*) run_once_begin_initialize;
    
    // [RtlRunOnceComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d9b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x656780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7112f0, 0x1fe000 bytes
    //
    _s71(sdk::function<int32_t(union rtl::run_once_t*, uint32_t, void*)>*) run_once_complete;
    
    // [RtlRunOnceExecuteOnce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f3cb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6565f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7588d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711160, 0x1fe000 bytes
    //
    _s72(sdk::function<int32_t(union rtl::run_once_t*, sdk::function<uint32_t(union rtl::run_once_t*, void*, void**)>*, void*, void**)>*) run_once_execute_once;
    
    // [RtlRunOnceInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7724b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dbb0, 0x1fe000 bytes
    //
    _s73(sdk::function<void(union rtl::run_once_t*)>*) run_once_initialize;
    
    // [RtlScrubMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2165dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x58a624, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664d94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58a4a8, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) scrub_memory;
    
    // [RtlSecondsSince1970ToTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149aec, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c8190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e4840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9060, 0x1fe000 bytes
    //
    _s75(sdk::function<void(uint32_t, int64_t*)>*) seconds_since1970_to_time;
    
    // [RtlSecondsSince1980ToTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2110dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f4c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f2f0, 0x1fe000 bytes
    //
    _s76(sdk::function<void(uint32_t, int64_t*)>*) seconds_since1980_to_time;
    
    // [RtlSectionTableFromVirtualAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8c1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x356010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x361930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b290, 0x1fe000 bytes
    //
    _s77(sdk::function<struct image::section_header_t*(struct image::nt_headers64_t*, void*, uint32_t)>*) section_table_from_virtual_address;
    
    // [RtlSelfRelativeToAbsoluteSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51e7ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750f00, 0x1fe000 bytes
    //
    _s78(sdk::function<int32_t(void*, void*, uint32_t*, struct nt::acl_t*, uint32_t*, struct nt::acl_t*, uint32_t*, void*, uint32_t*, void*, uint32_t*)>*) self_relative_to_absolute_sd;
    
    // [RtlSelfRelativeToAbsoluteSD2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c84c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90f150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90d870, 0x1fe000 bytes
    //
    _s79(sdk::function<int32_t(void*, uint32_t*)>*) self_relative_to_absolute_sd2;
    
    // [RtlSetActiveConsoleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538a30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x771fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ea50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7799d0, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) set_active_console_id;
    
    // [RtlSetActiveTimeBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542d60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7869ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84cf34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79078c, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) set_active_time_bias;
    
    // [RtlSetAllBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x746d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2bc9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ad5c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cad50, 0x1fe000 bytes
    //
    _s82(sdk::function<void(struct rtl::bitmap_t*)>*) set_all_bits;
    
    // [RtlSetAllBitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1375b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c61a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7070, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) set_all_bits_ex;
    
    // [RtlSetBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8804, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ff30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35cd90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fd950, 0x1fe000 bytes
    //
    _s84(sdk::function<void(struct rtl::bitmap_t*, uint32_t)>*) set_bit;
    
    // [RtlSetBitEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21325c, 0x32828 bytes
    // ntoskrnl.exe .text:0x256410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x361cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305950, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) set_bit_ex;
    
    // [RtlSetBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x18050, 0x32828 bytes
    // ntoskrnl.exe .text:0x2bca30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2acd90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e30c0, 0x1fe000 bytes
    //
    _s86(sdk::function<void(struct rtl::bitmap_t*, uint32_t, uint32_t)>*) set_bits;
    
    // [RtlSetBitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x97d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x345b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22ccb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a30d0, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) set_bits_ex;
    
    // [RtlSetConsoleSessionForegroundProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66bbb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de680, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) set_console_session_foreground_process_id;
    
    // [RtlSetControlSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ef88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e6e0, 0x1fe000 bytes
    //
    _s89(sdk::function<int32_t(void*, uint16_t, uint16_t)>*) set_control_security_descriptor;
    
    // [RtlSetDaclSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c02d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6986e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615250, 0x1fe000 bytes
    //
    _s90(sdk::function<int32_t(void*, uint8_t, struct nt::acl_t*, uint8_t)>*) set_dacl_security_descriptor;
    
    // [RtlSetDynamicTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cda8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x912270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b1080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x910990, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) set_dynamic_time_zone_information;
    
    // [RtlSetGroupSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fbe20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f94f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d390, 0x1fe000 bytes
    //
    _s92(sdk::function<int32_t(void*, void*, uint8_t)>*) set_group_security_descriptor;
    
    // [RtlSetOwnerSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a816c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fbe80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f9490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d3f0, 0x1fe000 bytes
    //
    _s93(sdk::function<int32_t(void*, void*, uint8_t)>*) set_owner_security_descriptor;
    
    // [RtlSetPortableOperatingSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213448, 0x32828 bytes
    // ntoskrnl.exe .text:0x582b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5955c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582980, 0x1fe000 bytes
    //
    _s94(sdk::function<int32_t(uint8_t)>*) set_portable_operating_system;
    
    // [RtlSetSaclSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e739c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fb630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703980, 0x1fe000 bytes
    //
    _s95(sdk::function<int32_t(void*, uint8_t, struct nt::acl_t*, uint8_t)>*) set_sacl_security_descriptor;
    
    // [RtlSetTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cdb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x912290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b10a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9109b0, 0x1fe000 bytes
    //
    _s96(sdk::function<int32_t(struct rtl::time_zone_information_t*)>*) set_time_zone_information;
    
    // [RtlSidDominates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d7120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x258190, 0x1fe000 bytes
    //
    _s97(sdk::function<int32_t(void*, void*, uint8_t*)>*) sid_dominates;
    
    // [RtlSidDominatesForTrust]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeb9a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29ad40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2597c0, 0x1fe000 bytes
    //
    _s98(sdk::function<int32_t(void*, void*, uint8_t*)>*) sid_dominates_for_trust;
    
    // [RtlSidHashInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b6c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d5ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2d90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x256b40, 0x1fe000 bytes
    //
    _s99(sdk::function<int32_t(struct nt::sid_and_attributes_t*, uint32_t, struct nt::sid_and_attributes_hash_t*)>*) sid_hash_initialize;
    
    // [RtlSidHashLookup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0ff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x217980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204e00, 0x1fe000 bytes
    //
    _t00(sdk::function<struct nt::sid_and_attributes_t*(struct nt::sid_and_attributes_hash_t*, void*)>*) sid_hash_lookup;
    
    // [RtlSizeHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x580750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x595130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580580, 0x1fe000 bytes
    //
    _t01(sdk::function<uint64_t(void*, uint32_t, void*)>*) size_heap;
    
    // [RtlSplay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93880, 0x32828 bytes
    // ntoskrnl.exe .text:0x241f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28e1f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4b90, 0x1fe000 bytes
    //
    _t02(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*) splay;
    
    // [RtlStackTraceHashFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215960, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ef7a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f0dd0, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) stack_trace_hash_function;
    
    // [RtlStdInitializeStackDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c128, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90ea9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9adf4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90d1bc, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) std_initialize_stack_database;
    
    // [RtlStdLogStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2115cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x57fe60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5948c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57fc90, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) std_log_stack_trace;
    
    // [RtlStdReleaseStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211620, 0x32828 bytes
    // ntoskrnl.exe .text:0x57feec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59494c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57fd1c, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) std_release_stack_trace;
    
    // [RtlStringCbCatExA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b4fa4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4b07b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ed898, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0688, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) string_cb_cat_ex_a;
    
    // [RtlStringCbCatW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92858, 0x32828 bytes
    // ntoskrnl.exe .text:0x2114c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9698, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df358, 0x1fe000 bytes
    //
    _t08(sdk::function<int32_t(wchar_t*, uint64_t, const wchar_t*)>*) string_cb_cat_w;
    
    // [RtlStringCbCopyA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b0e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x292e74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x239bd8, 0x1fe000 bytes
    //
    _t09(sdk::function<int32_t(char*, uint64_t, const char*)>*) string_cb_copy_a;
    
    // [RtlStringCbCopyExA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149a28, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c831c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1dbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c91ec, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) string_cb_copy_ex_a;
    
    // [RtlStringCbCopyExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8eb9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x262520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb77c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312b10, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) string_cb_copy_ex_w;
    
    // [RtlStringCbCopyNW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x120c30, 0x32828 bytes
    // ntoskrnl.exe .text:0x21af88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc898, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e20a8, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) string_cb_copy_nw;
    
    // [RtlStringCbCopyUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22008c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59776c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b621c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5975ec, 0x1fe000 bytes
    //
    _t13(sdk::function<int32_t(wchar_t*, uint64_t, const nt::unicode_view*)>*) string_cb_copy_unicode_string;
    
    // [RtlStringCbCopyW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9265c, 0x32828 bytes
    // ntoskrnl.exe .text:0x211280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7ddc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df118, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) string_cb_copy_w;
    
    // [RtlStringCbLengthW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8d724, 0x32828 bytes
    // ntoskrnl.exe .text:0x201a8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7bc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e535c, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) string_cb_length_w;
    
    // [RtlStringCbPrintfA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a390, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a3884, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3adf08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9204, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) string_cb_printf_a;
    
    // [RtlStringCbPrintfExA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5054, 0x32828 bytes
    // ntoskrnl.exe .text:0x4b0874, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ed94c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0744, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) string_cb_printf_ex_a;
    
    // [RtlStringCbPrintfExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72350, 0x32828 bytes
    // ntoskrnl.exe .text:0x202ffc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f1f6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e63cc, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) string_cb_printf_ex_w;
    
    // [RtlStringCbPrintfW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf224, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da924, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28e9c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b494, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) string_cb_printf_w;
    
    // [RtlStringCbVPrintfA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a0bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d1bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x337cc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e53c, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) string_cb_v_printf_a;
    
    // [RtlStringCchCatExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137848, 0x32828 bytes
    // ntoskrnl.exe .text:0x3be72c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x368928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf46c, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) string_cch_cat_ex_w;
    
    // [RtlStringCchCatNW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e284, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c2e74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db568, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3c84, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) string_cch_cat_nw;
    
    // [RtlStringCchCatW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109e28, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7d0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e5d0, 0x1fe000 bytes
    //
    _t23(sdk::function<int32_t(wchar_t*, uint64_t, const wchar_t*)>*) string_cch_cat_w;
    
    // [RtlStringCchCopyA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1397f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x268004, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375514, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318f14, 0x1fe000 bytes
    //
    _t24(sdk::function<int32_t(char*, uint64_t, const char*)>*) string_cch_copy_a;
    
    // [RtlStringCchCopyExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91348, 0x32828 bytes
    // ntoskrnl.exe .text:0x202e44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7734, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e6214, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) string_cch_copy_ex_w;
    
    // [RtlStringCchCopyNExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x914f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x202c68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e6040, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) string_cch_copy_n_ex_w;
    
    // [RtlStringCchCopyNW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a1a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x36ce60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7e44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e1e0, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) string_cch_copy_nw;
    
    // [RtlStringCchCopyW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a12c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36cf90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7c3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e310, 0x1fe000 bytes
    //
    _t28(sdk::function<int32_t(wchar_t*, uint64_t, const wchar_t*)>*) string_cch_copy_w;
    
    // [RtlStringCchLengthW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92600, 0x32828 bytes
    // ntoskrnl.exe .text:0x2115a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df438, 0x1fe000 bytes
    //
    _t29(sdk::function<int32_t(const wchar_t*, uint64_t, uint64_t*)>*) string_cch_length_w;
    
    // [RtlStringCchPrintfA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137958, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2a04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c53ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b32b4, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) string_cch_printf_a;
    
    // [RtlStringCchPrintfExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x918a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x202ad4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5eac, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) string_cch_printf_ex_w;
    
    // [RtlStringCchPrintfW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x264c, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b074, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2030, 0x1fe000 bytes
    //
    _t32(sdk::function<int32_t(wchar_t*, uint64_t, const wchar_t*, ...)>*) string_cch_printf_w;
    
    // [RtlStringFromGUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a09c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6209e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ff700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70ea00, 0x1fe000 bytes
    //
    _t33(sdk::function<int32_t(const struct nt::guid_t const*, nt::unicode_view*)>*) string_from_guid;
    
    // [RtlStringFromGUIDEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f346c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6209f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ff720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70ea18, 0x1fe000 bytes
    //
    _t34(sdk::function<int32_t(struct nt::guid_t*, nt::unicode_view*, uint8_t)>*) string_from_guid_ex;
    
    // [RtlStronglyEnumerateEntryHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213574, 0x32828 bytes
    // ntoskrnl.exe .text:0x38b7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c850, 0x1fe000 bytes
    //
    _t35(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) strongly_enumerate_entry_hash_table;
    
    // [RtlSubAuthorityCountSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4bd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35c3e0, 0x1fe000 bytes
    //
    _t36(sdk::function<uint8_t*(void*)>*) sub_authority_count_sid;
    
    // [RtlSubAuthoritySid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3720, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35c3f0, 0x1fe000 bytes
    //
    _t37(sdk::function<uint32_t*(void*, uint32_t)>*) sub_authority_sid;
    
    // [RtlSubtreePredecessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93bdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2425e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28e4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3cc0, 0x1fe000 bytes
    //
    _t38(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*) subtree_predecessor;
    
    // [RtlSubtreeSuccessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213b88, 0x32828 bytes
    // ntoskrnl.exe .text:0x585e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585c30, 0x1fe000 bytes
    //
    _t39(sdk::function<struct rtl::splay_links_t*(struct rtl::splay_links_t*)>*) subtree_successor;
    
    // [RtlSuffixUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689dc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90ce00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ac4a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b520, 0x1fe000 bytes
    //
    _t40(sdk::function<uint8_t(const nt::unicode_view*, const nt::unicode_view*, uint8_t)>*) suffix_unicode_string;
    
    // [RtlSystemTimeToLocalTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56dc98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8645f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b7240, 0x1fe000 bytes
    //
    _t41(sdk::function<int32_t(int64_t*, int64_t*)>*) system_time_to_local_time;
    
    // [RtlTestBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbdc80, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ca90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x358e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f66c0, 0x1fe000 bytes
    //
    _t42(sdk::function<uint8_t(struct rtl::bitmap_t*, uint32_t)>*) test_bit;
    
    // [RtlTestBitEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213268, 0x32828 bytes
    // ntoskrnl.exe .text:0x369300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a6b0, 0x1fe000 bytes
    //
    _t43(sdk::function<uint8_t(struct rtl::bitmap_ex_t*, uint64_t)>*) test_bit_ex;
    
    // [RtlTestProtectedAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f1430, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765d5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64ca5c, 0x1fe000 bytes
    //
    _t44(sdk::function<uint8_t(struct ps::protection_t, struct ps::protection_t)>*) test_protected_access;
    
    // [RtlTimeFieldsToTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc4674, 0x32828 bytes
    // ntoskrnl.exe .text:0x2549d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2019b0, 0x1fe000 bytes
    //
    _t45(sdk::function<uint8_t(struct nt::time_fields_t*, int64_t*)>*) time_fields_to_time;
    
    // [RtlTimeToElapsedTimeFields]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a1bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d2b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ac910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b9d0, 0x1fe000 bytes
    //
    _t46(sdk::function<void(int64_t*, struct nt::time_fields_t*)>*) time_to_elapsed_time_fields;
    
    // [RtlTimeToSecondsSince1970]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2110fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f4f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f320, 0x1fe000 bytes
    //
    _t47(sdk::function<uint8_t(int64_t*, uint32_t*)>*) time_to_seconds_since1970;
    
    // [RtlTimeToSecondsSince1980]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211138, 0x32828 bytes
    // ntoskrnl.exe .text:0x390e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391e60, 0x1fe000 bytes
    //
    _t48(sdk::function<uint8_t(int64_t*, uint32_t*)>*) time_to_seconds_since1980;
    
    // [RtlTimeToTimeFields]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcaa58, 0x32828 bytes
    // ntoskrnl.exe .text:0x36ba60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38ec90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ccd0, 0x1fe000 bytes
    //
    _t49(sdk::function<void(int64_t*, struct nt::time_fields_t*)>*) time_to_time_fields;
    
    // [RtlTraceDatabaseAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2159a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x588970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5887a0, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) trace_database_add;
    
    // [RtlTraceDatabaseCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2159f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5889d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c6e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588800, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) trace_database_create;
    
    // [RtlTraceDatabaseDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215b5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x588b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588970, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) trace_database_destroy;
    
    // [RtlTraceDatabaseEnumerate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215ba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x588b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5889c0, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) trace_database_enumerate;
    
    // [RtlTraceDatabaseFind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215c5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x588c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588a90, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) trace_database_find;
    
    // [RtlTraceDatabaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215cbc, 0x32828 bytes
    // ntoskrnl.exe .text:0x588cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588b00, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) trace_database_lock;
    
    // [RtlTraceDatabaseUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215cc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x588cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c9f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588b20, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) trace_database_unlock;
    
    // [RtlTraceDatabaseValidate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215ccc, 0x32828 bytes
    // ntoskrnl.exe .text:0x588d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ca10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588b40, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) trace_database_validate;
    
    // [RtlTryEndReadTickLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x972f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a101c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220514, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337690, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) try_end_read_tick_lock;
    
    // [RtlUIntAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c798, 0x32828 bytes
    // ntoskrnl.exe .text:0x30ee70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b198c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242a20, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) u_int_add;
    
    // [RtlULongLongAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c5a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30ee50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242a00, 0x1fe000 bytes
    //
    _t60(sdk::function<int32_t(uint64_t, uint64_t, uint64_t*)>*) u_long_long_add;
    
    // [RtlULongLongMult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeeaf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x353cfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1ccc, 0x1fe000 bytes
    //
    _t61(sdk::function<int32_t(uint64_t, uint64_t, uint64_t*)>*) u_long_long_mult;
    
    // [RtlULongLongSub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x90d74, 0x32828 bytes
    // ntoskrnl.exe .text:0x291f34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36db50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2367d4, 0x1fe000 bytes
    //
    _t62(sdk::function<int32_t(uint64_t, uint64_t, uint64_t*)>*) u_long_long_sub;
    
    // [RtlUShortAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109be4, 0x32828 bytes
    // ntoskrnl.exe .text:0x254094, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb704, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303cd4, 0x1fe000 bytes
    //
    _t63(sdk::function<int32_t(uint16_t, uint16_t, uint16_t*)>*) u_short_add;
    
    // [RtlUnalignedStringCbLengthW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a304, 0x32828 bytes
    // ntoskrnl.exe .text:0x201a8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7bc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e535c, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) unaligned_string_cb_length_w;
    
    // [RtlUnalignedStringCchLengthW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91770, 0x32828 bytes
    // ntoskrnl.exe .text:0x202a7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f70ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25bb84, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) unaligned_string_cch_length_w;
    
    // [RtlUnicodeStringCat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc6efc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2db0e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38dc34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c320, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) unicode_string_cat;
    
    // [RtlUnicodeStringCatString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b920c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bf40c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38d754, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c021c, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) unicode_string_cat_string;
    
    // [RtlUnicodeStringCopy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0020, 0x32828 bytes
    // ntoskrnl.exe .text:0x2db250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x302d14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c490, 0x1fe000 bytes
    //
    _t68(sdk::function<int32_t(nt::unicode_view*, const nt::unicode_view*)>*) unicode_string_copy;
    
    // [RtlUnicodeStringPrintf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137ac8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36948c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e634, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a83c, 0x1fe000 bytes
    //
    _t69(sdk::function<int32_t(nt::unicode_view*, const wchar_t*, ...)>*) unicode_string_printf;
    
    // [RtlUnicodeStringPrintfEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1fec, 0x32828 bytes
    // ntoskrnl.exe .text:0x369550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e6cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a900, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) unicode_string_printf_ex;
    
    // [RtlUnicodeStringToAnsiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f2950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b1e0, 0x1fe000 bytes
    //
    _t71(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*) unicode_string_to_ansi_string;
    
    // [RtlUnicodeStringToCountedOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x477b24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64fd60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c41b0, 0x1fe000 bytes
    //
    _t72(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*) unicode_string_to_counted_oem_string;
    
    // [RtlUnicodeStringToInt64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cc80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x912100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b0f10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x910820, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) unicode_string_to_int64;
    
    // [RtlUnicodeStringToInteger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x471b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x642520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x804430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b7540, 0x1fe000 bytes
    //
    _t74(sdk::function<int32_t(const nt::unicode_view*, uint32_t, uint32_t*)>*) unicode_string_to_integer;
    
    // [RtlUnicodeStringToOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x477980, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64fbb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4000, 0x1fe000 bytes
    //
    _t75(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*) unicode_string_to_oem_string;
    
    // [RtlUnicodeStringValidateEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10663c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f468, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592128, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f298, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) unicode_string_validate_ex;
    
    // [RtlUnicodeToCustomCPN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68acd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90dd40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90c460, 0x1fe000 bytes
    //
    _t77(sdk::function<int32_t(struct nt::cptableinfo_t*, char*, uint32_t, uint32_t*, wchar_t*, uint32_t)>*) unicode_to_custom_cpn;
    
    // [RtlUnicodeToMultiByteN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f2a30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c50f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d6770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b520, 0x1fe000 bytes
    //
    _t78(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*) unicode_to_multi_byte_n;
    
    // [RtlUnicodeToMultiByteSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495b24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758ef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b360, 0x1fe000 bytes
    //
    _t79(sdk::function<int32_t(uint32_t*, const wchar_t*, uint32_t)>*) unicode_to_multi_byte_size;
    
    // [RtlUnicodeToOemN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4783a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6501f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7569f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4640, 0x1fe000 bytes
    //
    _t80(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*) unicode_to_oem_n;
    
    // [RtlUnicodeToUTF8N]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5643dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6702a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3a90, 0x1fe000 bytes
    //
    _t81(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*) unicode_to_utf8n;
    
    // [RtlUnlockBootStatusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538064, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76fba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x777610, 0x1fe000 bytes
    //
    _t82(sdk::function<int32_t(void*)>*) unlock_boot_status_data;
    
    // [RtlUnwind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211bb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x26efd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3204d0, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) unwind;
    
    // [RtlUnwindEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa4550, 0x32828 bytes
    // ntoskrnl.exe .text:0x285250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20c3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32c1c0, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) unwind_ex;
    
    // [RtlUpcaseUnicodeChar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c57b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61eae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d7550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63dd90, 0x1fe000 bytes
    //
    _t85(sdk::function<wchar_t(wchar_t)>*) upcase_unicode_char;
    
    // [RtlUpcaseUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4124f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64f970, 0x1fe000 bytes
    //
    _t86(sdk::function<int32_t(nt::unicode_view*, const nt::unicode_view*, uint8_t)>*) upcase_unicode_string;
    
    // [RtlUpcaseUnicodeStringToAnsiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689f04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90cea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ac560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90b5c0, 0x1fe000 bytes
    //
    _t87(sdk::function<int32_t(nt::ascii_view*, nt::unicode_view*, uint8_t)>*) upcase_unicode_string_to_ansi_string;
    
    // [RtlUpcaseUnicodeStringToCountedOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x477d78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ffd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4420, 0x1fe000 bytes
    //
    _t88(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*) upcase_unicode_string_to_counted_oem_string;
    
    // [RtlUpcaseUnicodeStringToOemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x477a3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64fc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c40c0, 0x1fe000 bytes
    //
    _t89(sdk::function<int32_t(nt::ascii_view*, const nt::unicode_view*, uint8_t)>*) upcase_unicode_string_to_oem_string;
    
    // [RtlUpcaseUnicodeToCustomCPN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68aefc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90de70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ad300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90c590, 0x1fe000 bytes
    //
    _t90(sdk::function<int32_t(struct nt::cptableinfo_t*, char*, uint32_t, uint32_t*, wchar_t*, uint32_t)>*) upcase_unicode_to_custom_cpn;
    
    // [RtlUpcaseUnicodeToMultiByteN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4723e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c5190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d7980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b5c0, 0x1fe000 bytes
    //
    _t91(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*) upcase_unicode_to_multi_byte_n;
    
    // [RtlUpcaseUnicodeToOemN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x477ed4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4570, 0x1fe000 bytes
    //
    _t92(sdk::function<int32_t(char*, uint32_t, uint32_t*, const wchar_t*, uint32_t)>*) upcase_unicode_to_oem_n;
    
    // [RtlUpperChar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41fd60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c48c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6da5e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61acf0, 0x1fe000 bytes
    //
    _t93(sdk::function<char(char)>*) upper_char;
    
    // [RtlUpperString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41fd0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c55c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d74d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b9f0, 0x1fe000 bytes
    //
    _t94(sdk::function<void(nt::ascii_view*, const nt::ascii_view*)>*) upper_string;
    
    // [RtlUTF8ToUnicodeN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6da140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e12f0, 0x1fe000 bytes
    //
    _t95(sdk::function<int32_t(wchar_t*, uint32_t, uint32_t*, const char*, uint32_t)>*) utf8_to_unicode_n;
    
    // [RtlValidAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d3060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6afbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a09f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x606210, 0x1fe000 bytes
    //
    _t96(sdk::function<uint8_t(struct nt::acl_t*)>*) valid_acl;
    
    // [RtlValidProcessProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3b98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ecf00, 0x1fe000 bytes
    //
    _t97(sdk::function<uint8_t(struct ps::protection_t)>*) valid_process_protection;
    
    // [RtlValidRelativeSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f2624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62b6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68b840, 0x1fe000 bytes
    //
    _t98(sdk::function<uint8_t(void*, uint32_t, uint32_t)>*) valid_relative_security_descriptor;
    
    // [RtlValidSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x646c70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cb0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb0a0, 0x1fe000 bytes
    //
    _t99(sdk::function<uint8_t(void*)>*) valid_security_descriptor;
    
    // [RtlValidSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d2ef0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6afd40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a05e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x606370, 0x1fe000 bytes
    //
    _u00(sdk::function<uint8_t(void*)>*) valid_sid;
    
    // [RtlValidateUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106628, 0x32828 bytes
    // ntoskrnl.exe .text:0x24d4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x358e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e6b10, 0x1fe000 bytes
    //
    _u01(sdk::function<int32_t(uint32_t, const nt::unicode_view*)>*) validate_unicode_string;
    
    // [RtlVerifyVersionInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12cdcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3795e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3adb90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a960, 0x1fe000 bytes
    //
    _u02(sdk::function<int32_t(struct nt::osversioninfoexw_t*, uint32_t, uint64_t)>*) verify_version_info;
    
    // [RtlVirtualUnwind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2bec, 0x32828 bytes
    // ntoskrnl.exe .text:0x2851e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20be40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32c150, 0x1fe000 bytes
    //
    _u03(sdk::unknown_ptr) virtual_unwind;
    
    // [RtlWalkFrameChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x41c50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2859b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20cec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32c920, 0x1fe000 bytes
    //
    _u04(sdk::function<uint32_t(void**, uint32_t, uint32_t)>*) walk_frame_chain;
    
    // [RtlWeaklyEnumerateEntryHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2135d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x582c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3452a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582ac0, 0x1fe000 bytes
    //
    _u05(sdk::function<struct rtl::dynamic_hash_table_entry_t*(struct rtl::dynamic_hash_table_t*, struct rtl::dynamic_hash_table_enumerator_t*)>*) weakly_enumerate_entry_hash_table;
    
    // [RtlWorkSpaceProcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b358, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x65b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6f70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6270, 0x1fe000 bytes
    //
    _u06(sdk::unknown_ptr) work_space_procs;
    
    // [RtlWow64GetCpuAreaInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x467aa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x686138, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fd330, 0x1fe000 bytes
    //
    _u07(sdk::unknown_ptr) wow64_get_cpu_area_info;
    
    // [RtlWriteAcquireTickLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b088, 0x32828 bytes
    // ntoskrnl.exe .text:0x245860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x240c34, 0x1fe000 bytes
    //
    _u08(sdk::unknown_ptr) write_acquire_tick_lock;
    
    // [RtlWriteRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5105dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0530, 0x1fe000 bytes
    //
    _u09(sdk::function<int32_t(uint32_t, const wchar_t*, const wchar_t*, uint32_t, void*, uint32_t)>*) write_registry_value;
    
    // [RtlWriteReleaseTickLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b07c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2944, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aceac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3e94, 0x1fe000 bytes
    //
    _u10(sdk::unknown_ptr) write_release_tick_lock;
    
    // [RtlWriteTryAcquireTickLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ae44, 0x32828 bytes
    // ntoskrnl.exe .text:0x5894c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2081d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589348, 0x1fe000 bytes
    //
    _u11(sdk::unknown_ptr) write_try_acquire_tick_lock;
    
    // [RtlXRestore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a90c, 0x32828 bytes
    // ntoskrnl.exe .text:0x26286c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312e5c, 0x1fe000 bytes
    //
    _u12(sdk::unknown_ptr) x_restore;
    
    // [RtlXSave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7abec, 0x32828 bytes
    // ntoskrnl.exe .text:0x2610f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311350, 0x1fe000 bytes
    //
    _u13(sdk::unknown_ptr) x_save;
    
    // [RtlZeroHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68d0a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x912a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b1750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9111f0, 0x1fe000 bytes
    //
    _u14(sdk::function<int32_t(void*, uint32_t)>*) zero_heap;
    
    // [RtlZeroMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10dfdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3692e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x552960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a690, 0x1fe000 bytes
    //
    _u15(sdk::unknown_ptr) zero_memory;
    
    // [RtlStringCchCatA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5614, 0x243e0 bytes
    // win32kbase.sys .text:0xf6df8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3ccc, 0x243e0 bytes
    //
    _u16(sdk::unknown_ptr) string_cch_cat_a;
    
    // [RtlGetExpWinVer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x391d4, 0x1eb80 bytes
    // win32kbase.sys .text:0x698f4, 0x243e0 bytes
    // win32kbase.sys .text:0xb6200, 0x27ef0 bytes
    // win32kbase.sys .text:0x63450, 0x243e0 bytes
    //
    _u17(sdk::unknown_ptr) get_exp_win_ver;
    
    // [RtlInitLargeAnsiString]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x116328, 0x13864 bytes
    // win32kfull.sys .text:0x4d9d8, 0x1596d bytes
    // win32kfull.sys .text:0xb781c, 0x1659e bytes
    // win32kfull.sys .text:0x4ddf8, 0x1596d bytes
    //
    _u18(sdk::unknown_ptr) init_large_ansi_string;
    
    // [RtlInitLargeUnicodeString]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4a978, 0x13864 bytes
    // win32kfull.sys .text:0x4d98c, 0x1596d bytes
    // win32kfull.sys .text:0xb77dc, 0x1659e bytes
    // win32kfull.sys .text:0x4ddac, 0x1596d bytes
    //
    _u19(sdk::unknown_ptr) init_large_unicode_string;
    
    // [RtlInitUnicodeStringOrId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2e1f8, 0x13864 bytes
    // win32kfull.sys .text:0x21eb8, 0x1596d bytes
    // win32kfull.sys .text:0x97b9c, 0x1659e bytes
    // win32kfull.sys .text:0x222c8, 0x1596d bytes
    //
    _u20(sdk::unknown_ptr) init_unicode_string_or_id;
    
    // [RtlLoadStringOrError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x231f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x23300, 0x243e0 bytes
    // win32kbase.sys .text:0x81620, 0x27ef0 bytes
    // win32kbase.sys .text:0x67a40, 0x243e0 bytes
    //
    _u21(sdk::unknown_ptr) load_string_or_error;
    
    // [RtlMBMessageWParamCharToWCS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2481e0, 0x13864 bytes
    // win32kfull.sys .text:0x25e590, 0x1596d bytes
    // win32kfull.sys .text:0x25d61c, 0x1659e bytes
    // win32kfull.sys .text:0x25e4a0, 0x1596d bytes
    //
    _u22(sdk::unknown_ptr) mb_message_w_param_char_to_wcs;
    
    // [RtlStringCchLengthA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe5e40, 0x1eb80 bytes
    // win32kbase.sys .text:0x18d870, 0x243e0 bytes
    // win32kbase.sys .text:0x1cdfb8, 0x27ef0 bytes
    // win32kbase.sys .text:0x18bc60, 0x243e0 bytes
    //
    _u23(sdk::unknown_ptr) string_cch_length_a;
    
    // [RtlWCSMessageWParamCharToMB]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x248348, 0x13864 bytes
    // win32kfull.sys .text:0x11f9a0, 0x1596d bytes
    // win32kfull.sys .text:0x141cc8, 0x1659e bytes
    // win32kfull.sys .text:0x1208a0, 0x1596d bytes
    //
    _u24(sdk::unknown_ptr) wcs_message_w_param_char_to_mb;
    
    // [RtlCopyBufferToMdl]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x4b008, 0x1c8a8 bytes
    // ndis.sys .text:0xad49c, 0x1d2c0 bytes
    // ndis.sys .text:0xae208, 0x1e858 bytes
    // ndis.sys .text:0xadfcc, 0x1d2c0 bytes
    //
    _u25(sdk::unknown_ptr) copy_buffer_to_mdl;
    
    // [RtlCopyMdlToBuffer]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x235a0, 0x1c8a8 bytes
    // ndis.sys .text:0xad594, 0x1d2c0 bytes
    // ndis.sys .text:0xae300, 0x1e858 bytes
    // ndis.sys .text:0xae0c4, 0x1d2c0 bytes
    //
    _u26(sdk::unknown_ptr) copy_mdl_to_buffer;
    
    // [RtlCopyMdlToMdl]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x106f8, 0x1c8a8 bytes
    // ndis.sys .text:0xad68c, 0x1d2c0 bytes
    // ndis.sys .text:0xae3f8, 0x1e858 bytes
    // ndis.sys .text:0xae1bc, 0x1d2c0 bytes
    //
    _u27(sdk::unknown_ptr) copy_mdl_to_mdl;
    
    // [RtlStringCchCopyNA]
    // Ldr = [ataport.sys]
    // => Windows 11, Windows 10 v20H2
    // ataport.sys .text:0x1747c, 0x5f38 bytes
    // ataport.sys .text:0x16dcc, 0x5f38 bytes
    //
    _u28(sdk::unknown_ptr) string_cch_copy_na;
    
    // [RtlUnicodeStringCatStringEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x171a0, 0x2520 bytes
    // fltMgr.sys .text:0x1a404, 0x2428 bytes
    // fltMgr.sys .text:0x1aecc, 0x2428 bytes
    // fltMgr.sys .text:0x1a404, 0x2428 bytes
    //
    _u29(sdk::unknown_ptr) unicode_string_cat_string_ex;
    
    // [RtlUnicodeStringInit]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x280c, 0x13a78 bytes
    // ci.dll .text:0x1a54, 0x13a78 bytes
    // ci.dll .text:0x278c, 0x13a78 bytes
    //
    _u30(sdk::unknown_ptr) unicode_string_init;
    
    // [RtlAcquireWriteLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x1903c, 0x4652 bytes
    //
    _u31(sdk::unknown_ptr) acquire_write_lock;
    
    // [RtlReinitializeToeplitzHash]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x243b0, 0x4dd3 bytes
    // netio.sys .text:0x273a0, 0x4e8c bytes
    // netio.sys .text:0x24440, 0x4dd3 bytes
    //
    _u32(sdk::unknown_ptr) reinitialize_toeplitz_hash;
    
    // [RtlAcquireReadLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x165a4, 0x4652 bytes
    // netio.sys .text:0x168f8, 0x4dd3 bytes
    // netio.sys .text:0x16e70, 0x4e8c bytes
    // netio.sys .text:0x169a8, 0x4dd3 bytes
    //
    _u33(sdk::unknown_ptr) acquire_read_lock;
    
    // [RtlAcquireScalableWriteLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51f50, 0x4652 bytes
    // netio.sys .text:0x62b70, 0x4dd3 bytes
    // netio.sys .text:0x62d60, 0x4e8c bytes
    // netio.sys .text:0x62b30, 0x4dd3 bytes
    //
    _u34(sdk::unknown_ptr) acquire_scalable_write_lock;
    
    // [RtlAllocateDummyMdlChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38300, 0x4652 bytes
    // netio.sys .text:0x3e7e0, 0x4dd3 bytes
    // netio.sys .text:0x3fc70, 0x4e8c bytes
    // netio.sys .text:0x3e7a0, 0x4dd3 bytes
    //
    _u35(sdk::unknown_ptr) allocate_dummy_mdl_chain;
    
    // [RtlCleanupTimerWheel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19c00, 0x4652 bytes
    // netio.sys .text:0x1c520, 0x4dd3 bytes
    // netio.sys .text:0x16ee0, 0x4e8c bytes
    // netio.sys .text:0x1c5b0, 0x4dd3 bytes
    //
    _u36(sdk::unknown_ptr) cleanup_timer_wheel;
    
    // [RtlCleanupTimerWheelEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12af0, 0x4652 bytes
    // netio.sys .text:0x18530, 0x4dd3 bytes
    // netio.sys .text:0x10980, 0x4e8c bytes
    // netio.sys .text:0x185e0, 0x4dd3 bytes
    //
    _u37(sdk::unknown_ptr) cleanup_timer_wheel_entry;
    
    // [RtlCleanupToeplitzHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38880, 0x4652 bytes
    // netio.sys .text:0x3ee30, 0x4dd3 bytes
    // netio.sys .text:0x402c0, 0x4e8c bytes
    // netio.sys .text:0x3edf0, 0x4dd3 bytes
    //
    _u38(sdk::unknown_ptr) cleanup_toeplitz_hash;
    
    // [RtlCompute37Hash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16210, 0x4652 bytes
    // netio.sys .text:0x18a80, 0x4dd3 bytes
    // netio.sys .text:0x11330, 0x4e8c bytes
    // netio.sys .text:0x18b10, 0x4dd3 bytes
    //
    _u39(sdk::unknown_ptr) compute37_hash;
    
    // [RtlComputeToeplitzHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x11620, 0x4652 bytes
    // netio.sys .text:0x135c0, 0x4dd3 bytes
    // netio.sys .text:0xf900, 0x4e8c bytes
    // netio.sys .text:0x13670, 0x4dd3 bytes
    //
    _u40(sdk::unknown_ptr) compute_toeplitz_hash;
    
    // [RtlCopyBufferToMdlWithReservedMappingAtDpcLevel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38378, 0x4652 bytes
    // netio.sys .text:0x3e864, 0x4dd3 bytes
    // netio.sys .text:0x3fcf4, 0x4e8c bytes
    // netio.sys .text:0x3e824, 0x4dd3 bytes
    //
    _u41(sdk::unknown_ptr) copy_buffer_to_mdl_with_reserved_mapping_at_dpc_level;
    
    // [RtlCopyMdlToBufferWithReservedMappingAtDpcLevel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x384a4, 0x4652 bytes
    // netio.sys .text:0x3e9bc, 0x4dd3 bytes
    // netio.sys .text:0x3fe4c, 0x4e8c bytes
    // netio.sys .text:0x3e97c, 0x4dd3 bytes
    //
    _u42(sdk::unknown_ptr) copy_mdl_to_buffer_with_reserved_mapping_at_dpc_level;
    
    // [RtlCopyMdlToMdlIndirect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12410, 0x4652 bytes
    // netio.sys .text:0x179f0, 0x4dd3 bytes
    // netio.sys .text:0xf9b0, 0x4e8c bytes
    // netio.sys .text:0x17aa0, 0x4dd3 bytes
    //
    _u43(sdk::unknown_ptr) copy_mdl_to_mdl_indirect;
    
    // [RtlCopyMdlToMdlWithReservedMappingAtDpcLevel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x385d0, 0x4652 bytes
    // netio.sys .text:0x3eb14, 0x4dd3 bytes
    // netio.sys .text:0x3ffa4, 0x4e8c bytes
    // netio.sys .text:0x3ead4, 0x4dd3 bytes
    //
    _u44(sdk::unknown_ptr) copy_mdl_to_mdl_with_reserved_mapping_at_dpc_level;
    
    // [RtlDeleteElementGenericTableBasicAvl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15840, 0x4652 bytes
    // netio.sys .text:0x1c030, 0x4dd3 bytes
    // netio.sys .text:0x13940, 0x4e8c bytes
    // netio.sys .text:0x1c0c0, 0x4dd3 bytes
    //
    _u45(sdk::unknown_ptr) delete_element_generic_table_basic_avl;
    
    // [RtlDummyPage]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a30, 0x4652 bytes
    // netio.sys .data:0x7aa40, 0x4dd3 bytes
    // netio.sys .data:0x7bad8, 0x4e8c bytes
    // netio.sys .data:0x7aa40, 0x4dd3 bytes
    //
    _u46(sdk::unknown_ptr) dummy_page;
    
    // [RtlDummyPageMdl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a50, 0x4652 bytes
    // netio.sys .data:0x7aa60, 0x4dd3 bytes
    // netio.sys .data:0x7baf8, 0x4e8c bytes
    // netio.sys .data:0x7aa60, 0x4dd3 bytes
    //
    _u47(sdk::unknown_ptr) dummy_page_mdl;
    
    // [RtlEndTimerWheelEnumeration]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3ea80, 0x4652 bytes
    // netio.sys .text:0x47d00, 0x4dd3 bytes
    // netio.sys .text:0x49260, 0x4e8c bytes
    // netio.sys .text:0x47cc0, 0x4dd3 bytes
    //
    _u48(sdk::unknown_ptr) end_timer_wheel_enumeration;
    
    // [RtlEnumerateNextTimerWheelEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3eab0, 0x4652 bytes
    // netio.sys .text:0x47d40, 0x4dd3 bytes
    // netio.sys .text:0x492a0, 0x4e8c bytes
    // netio.sys .text:0x47d00, 0x4dd3 bytes
    //
    _u49(sdk::unknown_ptr) enumerate_next_timer_wheel_entry;
    
    // [RtlFreeDummyMdlChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38840, 0x4652 bytes
    // netio.sys .text:0x3edd0, 0x4dd3 bytes
    // netio.sys .text:0x40260, 0x4e8c bytes
    // netio.sys .text:0x3ed90, 0x4dd3 bytes
    //
    _u50(sdk::unknown_ptr) free_dummy_mdl_chain;
    
    // [RtlGetNextExpirationTimerWheelTick]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x11880, 0x4652 bytes
    // netio.sys .text:0x13540, 0x4dd3 bytes
    // netio.sys .text:0xee90, 0x4e8c bytes
    // netio.sys .text:0x135f0, 0x4dd3 bytes
    //
    _u51(sdk::unknown_ptr) get_next_expiration_timer_wheel_tick;
    
    // [RtlGetNextExpiredTimerWheelEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x114a0, 0x4652 bytes
    // netio.sys .text:0x133b0, 0x4dd3 bytes
    // netio.sys .text:0xed00, 0x4e8c bytes
    // netio.sys .text:0x13460, 0x4dd3 bytes
    //
    _u52(sdk::unknown_ptr) get_next_expired_timer_wheel_entry;
    
    // [RtlIndicateTimerWheelEntryTimerStart]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12070, 0x4652 bytes
    // netio.sys .text:0x16ae0, 0x4dd3 bytes
    // netio.sys .text:0xf410, 0x4e8c bytes
    // netio.sys .text:0x16b90, 0x4dd3 bytes
    //
    _u53(sdk::unknown_ptr) indicate_timer_wheel_entry_timer_start;
    
    // [RtlInitializeTimerWheel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21d20, 0x4652 bytes
    // netio.sys .text:0x240a0, 0x4dd3 bytes
    // netio.sys .text:0x18e00, 0x4e8c bytes
    // netio.sys .text:0x24130, 0x4dd3 bytes
    //
    _u54(sdk::unknown_ptr) initialize_timer_wheel;
    
    // [RtlInitializeTimerWheelEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13520, 0x4652 bytes
    // netio.sys .text:0x18dc0, 0x4dd3 bytes
    // netio.sys .text:0x11640, 0x4e8c bytes
    // netio.sys .text:0x18e50, 0x4dd3 bytes
    //
    _u55(sdk::unknown_ptr) initialize_timer_wheel_entry;
    
    // [RtlInitializeTimerWheelEnumeration]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3eb60, 0x4652 bytes
    // netio.sys .text:0x47df0, 0x4dd3 bytes
    // netio.sys .text:0x49350, 0x4e8c bytes
    // netio.sys .text:0x47db0, 0x4dd3 bytes
    //
    _u56(sdk::unknown_ptr) initialize_timer_wheel_enumeration;
    
    // [RtlInitializeToeplitzHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21f50, 0x4652 bytes
    // netio.sys .text:0x242e0, 0x4dd3 bytes
    // netio.sys .text:0x272d0, 0x4e8c bytes
    // netio.sys .text:0x24370, 0x4dd3 bytes
    //
    _u57(sdk::unknown_ptr) initialize_toeplitz_hash;
    
    // [RtlInsertElementGenericTableBasicAvl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x159e0, 0x4652 bytes
    // netio.sys .text:0x1c2e0, 0x4dd3 bytes
    // netio.sys .text:0x13cb0, 0x4e8c bytes
    // netio.sys .text:0x1c370, 0x4dd3 bytes
    //
    _u58(sdk::unknown_ptr) insert_element_generic_table_basic_avl;
    
    // [RtlInvokeStartRoutines]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a380, 0x4652 bytes
    // netio.sys PAGE:0x85b30, 0x4dd3 bytes
    // netio.sys PAGE:0x87e70, 0x4e8c bytes
    // netio.sys PAGE:0x85b30, 0x4dd3 bytes
    //
    _u59(sdk::unknown_ptr) invoke_start_routines;
    
    // [RtlInvokeStopRoutines]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c2e0, 0x4652 bytes
    // netio.sys PAGE:0x87190, 0x4dd3 bytes
    // netio.sys PAGE:0x893f0, 0x4e8c bytes
    // netio.sys PAGE:0x87190, 0x4dd3 bytes
    //
    _u60(sdk::unknown_ptr) invoke_stop_routines;
    
    // [RtlIsTimerWheelSuspended]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13510, 0x4652 bytes
    // netio.sys .text:0x18a50, 0x4dd3 bytes
    // netio.sys .text:0x10b60, 0x4e8c bytes
    // netio.sys .text:0x18ae0, 0x4dd3 bytes
    //
    _u61(sdk::unknown_ptr) is_timer_wheel_suspended;
    
    // [RtlMappingAddressLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a40, 0x4652 bytes
    // netio.sys .data:0x7aa50, 0x4dd3 bytes
    // netio.sys .data:0x7bae8, 0x4e8c bytes
    // netio.sys .data:0x7aa50, 0x4dd3 bytes
    //
    _u62(sdk::unknown_ptr) mapping_address_lock;
    
    // [RtlMappingSourceAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a48, 0x4652 bytes
    // netio.sys .data:0x7aa58, 0x4dd3 bytes
    // netio.sys .data:0x7baf0, 0x4e8c bytes
    // netio.sys .data:0x7aa58, 0x4dd3 bytes
    //
    _u63(sdk::unknown_ptr) mapping_source_address;
    
    // [RtlMappingTargetAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a38, 0x4652 bytes
    // netio.sys .data:0x7aa48, 0x4dd3 bytes
    // netio.sys .data:0x7bae0, 0x4e8c bytes
    // netio.sys .data:0x7aa48, 0x4dd3 bytes
    //
    _u64(sdk::unknown_ptr) mapping_target_address;
    
    // [RtlResumeTimerWheel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15330, 0x4652 bytes
    // netio.sys .text:0x19e00, 0x4dd3 bytes
    // netio.sys .text:0x125e0, 0x4e8c bytes
    // netio.sys .text:0x19e90, 0x4dd3 bytes
    //
    _u65(sdk::unknown_ptr) resume_timer_wheel;
    
    // [RtlReturnTimerWheelEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x126b0, 0x4652 bytes
    // netio.sys .text:0x17710, 0x4dd3 bytes
    // netio.sys .text:0xf730, 0x4e8c bytes
    // netio.sys .text:0x177c0, 0x4dd3 bytes
    //
    _u66(sdk::unknown_ptr) return_timer_wheel_entry;
    
    // [RtlSuspendTimerWheel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12ce0, 0x4652 bytes
    // netio.sys .text:0x16aa0, 0x4dd3 bytes
    // netio.sys .text:0xf6f0, 0x4e8c bytes
    // netio.sys .text:0x16b50, 0x4dd3 bytes
    //
    _u67(sdk::unknown_ptr) suspend_timer_wheel;
    
    // [RtlUpdateCurrentTimerWheelTick]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x144b0, 0x4652 bytes
    // netio.sys .text:0x18d70, 0x4dd3 bytes
    // netio.sys .text:0x115e0, 0x4e8c bytes
    // netio.sys .text:0x18e00, 0x4dd3 bytes
    //
    _u68(sdk::unknown_ptr) update_current_timer_wheel_tick;
    
    // [RtlAcquireWriteLockAtDpcLevel]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607
    // tcpip.sys .text:0x2debc, 0x528a0 bytes
    //
    _u69(sdk::unknown_ptr) acquire_write_lock_at_dpc_level;
    
    // [RtlReleaseReadLock]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607
    // tcpip.sys .text:0x11a940, 0x528a0 bytes
    //
    _u70(sdk::unknown_ptr) release_read_lock;
    
    // [RtlReleaseWriteLock]
    // Ldr = [tcpip.sys]
    // => Windows 10 v20H2
    // tcpip.sys .text:0xef764, 0x7a860 bytes
    //
    _u71(sdk::unknown_ptr) release_write_lock;
    
    // [RtlRestructureHashTable]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607
    // tcpip.sys .text:0x1504d4, 0x528a0 bytes
    //
    _u72(sdk::unknown_ptr) restructure_hash_table;
    
    // [RtlAcquireReadLockAtDpcLevel]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x3d96c, 0x528a0 bytes
    // tcpip.sys .text:0x1de08, 0x7a898 bytes
    // tcpip.sys .text:0x73a90, 0x91370 bytes
    // tcpip.sys .text:0x29f48, 0x7a860 bytes
    //
    _u73(sdk::unknown_ptr) acquire_read_lock_at_dpc_level;
    
    // [RtlAcquireScalableReadLockAtDpcLevel]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x3d9e4, 0x528a0 bytes
    // tcpip.sys .text:0x15d68, 0x7a898 bytes
    // tcpip.sys .text:0x73af8, 0x91370 bytes
    // tcpip.sys .text:0x6b740, 0x7a860 bytes
    //
    _u74(sdk::unknown_ptr) acquire_scalable_read_lock_at_dpc_level;
    
    // [RtlAcquireScalableWriteLockAtDpcLevel]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x3d9ac, 0x528a0 bytes
    // tcpip.sys .text:0x15cd28, 0x7a898 bytes
    // tcpip.sys .text:0x8db3c, 0x91370 bytes
    // tcpip.sys .text:0x15c3a8, 0x7a860 bytes
    //
    _u75(sdk::unknown_ptr) acquire_scalable_write_lock_at_dpc_level;
    
    // [RtlCanonicalizeUrl]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys PAGE:0x1f82c0, 0x528a0 bytes
    // tcpip.sys PAGE:0x2318e8, 0x7a898 bytes
    // tcpip.sys PAGE:0x243ef4, 0x91370 bytes
    // tcpip.sys PAGE:0x230de8, 0x7a860 bytes
    //
    _u76(sdk::unknown_ptr) canonicalize_url;
    
    // [RtlCookUrl]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys PAGE:0x1f838c, 0x528a0 bytes
    // tcpip.sys PAGE:0x2319d8, 0x7a898 bytes
    // tcpip.sys PAGE:0x243fe8, 0x91370 bytes
    // tcpip.sys PAGE:0x230ed8, 0x7a860 bytes
    //
    _u77(sdk::unknown_ptr) cook_url;
    
    // [RtlFreeCookedUrlComponents]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x158c54, 0x528a0 bytes
    // tcpip.sys .text:0x14cdc0, 0x7a898 bytes
    // tcpip.sys .text:0x16ee9c, 0x91370 bytes
    // tcpip.sys .text:0x14c440, 0x7a860 bytes
    //
    _u78(sdk::unknown_ptr) free_cooked_url_components;
    
    // [RtlFreeUrlString]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x158cc8, 0x528a0 bytes
    // tcpip.sys .text:0x14ce3c, 0x7a898 bytes
    // tcpip.sys .text:0x16ef18, 0x91370 bytes
    // tcpip.sys .text:0x14c4bc, 0x7a860 bytes
    //
    _u79(sdk::unknown_ptr) free_url_string;
    
    // [RtlInitializeScalableMrswLock]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0xa049c, 0x528a0 bytes
    // tcpip.sys .text:0x102884, 0x7a898 bytes
    // tcpip.sys .text:0xadc68, 0x91370 bytes
    // tcpip.sys .text:0x101f44, 0x7a860 bytes
    //
    _u80(sdk::unknown_ptr) initialize_scalable_mrsw_lock;
    
    // [RtlStartTimerWheelEntryTimer]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x37f34, 0x528a0 bytes
    // tcpip.sys .text:0xff698, 0x7a898 bytes
    // tcpip.sys .text:0x79580, 0x91370 bytes
    // tcpip.sys .text:0xfed58, 0x7a860 bytes
    //
    _u81(sdk::unknown_ptr) start_timer_wheel_entry_timer;
    
    // [RtlStringCbVPrintfExW]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6620c, 0x84380 bytes
    //
    _u82(sdk::unknown_ptr) string_cb_v_printf_ex_w;
    
    // [RtlStringCbCatA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4bc94, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4f75c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4bee4, 0x762b0 bytes
    //
    _u83(sdk::unknown_ptr) string_cb_cat_a;
    
    // [RtlUnicodeStringCchCatStringN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3e3a4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5cfe8, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e594, 0x762b0 bytes
    //
    _u84(sdk::unknown_ptr) unicode_string_cch_cat_string_n;
    
    // [RtlDownlevelGetNtSystemRoot]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x89fe0, 0x17e70 bytes
    // dxgi.dll .text:0x8a160, 0x17e70 bytes
    // dxgi.dll .text:0x1430, 0x18b10 bytes
    // dxgi.dll .text:0x8ab00, 0x17e70 bytes
    //
    _u85(sdk::unknown_ptr) downlevel_get_nt_system_root;
    
    // [RtlDelayExecution]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x557f0, 0x74648 bytes
    //
    _u86(sdk::unknown_ptr) delay_execution;
    
    // [RtlGetImageFileMachines]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x82fc0, 0x74648 bytes
    //
    _u87(sdk::unknown_ptr) get_image_file_machines;
    
    // [RtlGetSystemTimeAndBias]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x7d160, 0x74648 bytes
    //
    _u88(sdk::unknown_ptr) get_system_time_and_bias;
    
    // [RtlIsEcCode]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xd6550, 0x74648 bytes
    //
    _u89(sdk::unknown_ptr) is_ec_code;
    
    // [RtlIsLongPathAwareProcessByManifest]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd10a0, 0x67960 bytes
    //
    _u90(sdk::unknown_ptr) is_long_path_aware_process_by_manifest;
    
    // [RtlOpenCrossProcessEmulatorWorkConnection]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x6c1a0, 0x74648 bytes
    //
    _u91(sdk::unknown_ptr) open_cross_process_emulator_work_connection;
    
    // [RtlOverwriteFeatureConfigurationBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x10e800, 0x74648 bytes
    //
    _u92(sdk::unknown_ptr) overwrite_feature_configuration_buffer;
    
    // [RtlSparseBitmapCtxAllocateArray]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x7a348, 0x67960 bytes
    //
    _u93(sdk::unknown_ptr) sparse_bitmap_ctx_allocate_array;
    
    // [RtlSparseBitmapCtxAllocateRange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x7a424, 0x67960 bytes
    //
    _u94(sdk::unknown_ptr) sparse_bitmap_ctx_allocate_range;
    
    // [RtlSparseBitmapCtxAreAllClear]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101160, 0x67960 bytes
    //
    _u95(sdk::unknown_ptr) sparse_bitmap_ctx_are_all_clear;
    
    // [RtlSparseBitmapCtxAreAllSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101170, 0x67960 bytes
    //
    _u96(sdk::unknown_ptr) sparse_bitmap_ctx_are_all_set;
    
    // [RtlSparseBitmapCtxCheckBit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101190, 0x67960 bytes
    //
    _u97(sdk::function<uint32_t(struct rtl::sparse_bitmap_ctx_t*, uint64_t)>*) sparse_bitmap_ctx_check_bit;
    
    // [RtlSparseBitmapCtxCheckBitsInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1b084, 0x67960 bytes
    //
    _u98(sdk::unknown_ptr) sparse_bitmap_ctx_check_bits_internal;
    
    // [RtlSparseBitmapCtxCleanup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1011b0, 0x67960 bytes
    //
    _u99(sdk::unknown_ptr) sparse_bitmap_ctx_cleanup;
    
    // [RtlSparseBitmapCtxClearBits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1ab20, 0x67960 bytes
    //
    _v00(sdk::unknown_ptr) sparse_bitmap_ctx_clear_bits;
    
    // [RtlSparseBitmapCtxClearBitsEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101220, 0x67960 bytes
    //
    _v01(sdk::unknown_ptr) sparse_bitmap_ctx_clear_bits_ex;
    
    // [RtlSparseBitmapCtxCountBitsSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101250, 0x67960 bytes
    //
    _v02(sdk::unknown_ptr) sparse_bitmap_ctx_count_bits_set;
    
    // [RtlSparseBitmapCtxFindNextBitSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101310, 0x67960 bytes
    //
    _v03(sdk::unknown_ptr) sparse_bitmap_ctx_find_next_bit_set;
    
    // [RtlSparseBitmapCtxFindSetRuns]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101320, 0x67960 bytes
    //
    _v04(sdk::unknown_ptr) sparse_bitmap_ctx_find_set_runs;
    
    // [RtlSparseBitmapCtxInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1013c0, 0x67960 bytes
    //
    _v05(sdk::unknown_ptr) sparse_bitmap_ctx_initialize;
    
    // [RtlSparseBitmapCtxInitializeRange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x7a540, 0x67960 bytes
    //
    _v06(sdk::unknown_ptr) sparse_bitmap_ctx_initialize_range;
    
    // [RtlSparseBitmapCtxMetadataForBit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1013f0, 0x67960 bytes
    //
    _v07(sdk::unknown_ptr) sparse_bitmap_ctx_metadata_for_bit;
    
    // [RtlSparseBitmapCtxOrBitmap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1014d0, 0x67960 bytes
    //
    _v08(sdk::unknown_ptr) sparse_bitmap_ctx_or_bitmap;
    
    // [RtlSparseBitmapCtxPrepareBits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101620, 0x67960 bytes
    //
    _v09(sdk::unknown_ptr) sparse_bitmap_ctx_prepare_bits;
    
    // [RtlSparseBitmapCtxSetBits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1adb0, 0x67960 bytes
    //
    _v10(sdk::unknown_ptr) sparse_bitmap_ctx_set_bits;
    
    // [RtlSparseBitmapCtxSetBitsEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1016a0, 0x67960 bytes
    //
    _v11(sdk::unknown_ptr) sparse_bitmap_ctx_set_bits_ex;
    
    // [RtlSparseBitmapCtxStart]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x74180, 0x67960 bytes
    //
    _v12(sdk::unknown_ptr) sparse_bitmap_ctx_start;
    
    // [RtlSparseBitmapCtxSubtractBitmap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1016d0, 0x67960 bytes
    //
    _v13(sdk::unknown_ptr) sparse_bitmap_ctx_subtract_bitmap;
    
    // [RtlSparseBitmapEnumerateBitmap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101800, 0x67960 bytes
    //
    _v14(sdk::unknown_ptr) sparse_bitmap_enumerate_bitmap;
    
    // [RtlSubscribeWnfStateChangeNotificationInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x143a0, 0x67960 bytes
    //
    _v15(sdk::unknown_ptr) subscribe_wnf_state_change_notification_internal;
    
    // [RtlValidateProcessHeapsCallback]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xfe510, 0x74648 bytes
    //
    _v16(sdk::unknown_ptr) validate_process_heaps_callback;
    
    // [RtlWow64ChangeProcessState]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe65d0, 0x74648 bytes
    //
    _v17(sdk::unknown_ptr) wow64_change_process_state;
    
    // [RtlWow64ChangeThreadState]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe65f0, 0x74648 bytes
    //
    _v18(sdk::unknown_ptr) wow64_change_thread_state;
    
    // [RtlWow64SuspendThreadEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd96e0, 0x67960 bytes
    //
    _v19(sdk::unknown_ptr) wow64_suspend_thread_ex;
    
    // [RtlCallEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9fd60, 0x6fc38 bytes
    // ntdll.dll .text:0xa2f20, 0x74648 bytes
    // ntdll.dll .text:0x9fd40, 0x6fc38 bytes
    //
    _v20(sdk::unknown_ptr) call_enclave;
    
    // [RtlCallEnclaveReturn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9fdcb, 0x6fc38 bytes
    // ntdll.dll .text:0xa2f8b, 0x74648 bytes
    // ntdll.dll .text:0x9fdab, 0x6fc38 bytes
    //
    _v21(sdk::unknown_ptr) call_enclave_return;
    
    // [RtlCreateProcessParametersInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x477a0, 0x6fc38 bytes
    // ntdll.dll .text:0x57f30, 0x74648 bytes
    // ntdll.dll .text:0x477a0, 0x6fc38 bytes
    //
    _v22(sdk::unknown_ptr) create_process_parameters_internal;
    
    // [RtlCreateProcessParametersWithTemplate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x47670, 0x6fc38 bytes
    // ntdll.dll .text:0x57e00, 0x74648 bytes
    // ntdll.dll .text:0x47670, 0x6fc38 bytes
    //
    _v23(sdk::unknown_ptr) create_process_parameters_with_template;
    
    // [RtlCreateUserFiberShadowStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe1660, 0x6fc38 bytes
    // ntdll.dll .text:0xec200, 0x74648 bytes
    // ntdll.dll .text:0xe15d0, 0x6fc38 bytes
    //
    _v24(sdk::unknown_ptr) create_user_fiber_shadow_stack;
    
    // [RtlDisownModuleHeapAllocation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7e620, 0x6fc38 bytes
    // ntdll.dll .text:0x81200, 0x74648 bytes
    // ntdll.dll .text:0x7e7c0, 0x6fc38 bytes
    //
    _v25(sdk::function<int32_t(void*, void*)>*) disown_module_heap_allocation;
    
    // [RtlDosLongPathNameToNtPathName_U_WithStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcc180, 0x6fc38 bytes
    // ntdll.dll .text:0xad150, 0x74648 bytes
    // ntdll.dll .text:0xcc100, 0x6fc38 bytes
    //
    _v26(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*) dos_long_path_name_to_nt_path_name_u_with_status;
    
    // [RtlDosLongPathNameToRelativeNtPathName_U_WithStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcc1b0, 0x6fc38 bytes
    // ntdll.dll .text:0xd73b0, 0x74648 bytes
    // ntdll.dll .text:0xcc130, 0x6fc38 bytes
    //
    _v27(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*) dos_long_path_name_to_relative_nt_path_name_u_with_status;
    
    // [RtlEnclaveCallDispatch]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9fcf0, 0x6fc38 bytes
    // ntdll.dll .text:0xa2eb0, 0x74648 bytes
    // ntdll.dll .text:0x9fcd0, 0x6fc38 bytes
    //
    _v28(sdk::unknown_ptr) enclave_call_dispatch;
    
    // [RtlEnclaveCallDispatchReturn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9fd21, 0x6fc38 bytes
    // ntdll.dll .text:0xa2ee1, 0x74648 bytes
    // ntdll.dll .text:0x9fd01, 0x6fc38 bytes
    //
    _v29(sdk::unknown_ptr) enclave_call_dispatch_return;
    
    // [RtlEnclaveCallDispatcher]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9fcf0, 0x6fc38 bytes
    // ntdll.dll .text:0xa2eb0, 0x74648 bytes
    // ntdll.dll .text:0x9fcd0, 0x6fc38 bytes
    //
    _v30(sdk::unknown_ptr) enclave_call_dispatcher;
    
    // [RtlFlsGetValue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4c480, 0x6fc38 bytes
    // ntdll.dll .text:0x57860, 0x74648 bytes
    // ntdll.dll .text:0x4c480, 0x6fc38 bytes
    //
    _v31(sdk::unknown_ptr) fls_get_value;
    
    // [RtlFlsSetValue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x470a0, 0x6fc38 bytes
    // ntdll.dll .text:0x529c0, 0x74648 bytes
    // ntdll.dll .text:0x470a0, 0x6fc38 bytes
    //
    _v32(sdk::unknown_ptr) fls_set_value;
    
    // [RtlFreeUserFiberShadowStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe1770, 0x6fc38 bytes
    // ntdll.dll .text:0xec310, 0x74648 bytes
    // ntdll.dll .text:0xe16e0, 0x6fc38 bytes
    //
    _v33(sdk::unknown_ptr) free_user_fiber_shadow_stack;
    
    // [RtlGetReturnAddressHijackTarget]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfd140, 0x6fc38 bytes
    // ntdll.dll .text:0x10a2f0, 0x74648 bytes
    // ntdll.dll .text:0xfd0f0, 0x6fc38 bytes
    //
    _v34(sdk::unknown_ptr) get_return_address_hijack_target;
    
    // [RtlGuardIsExportSuppressedAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x531cc, 0x6fc38 bytes
    // ntdll.dll .text:0x10a374, 0x74648 bytes
    // ntdll.dll .text:0x531cc, 0x6fc38 bytes
    //
    _v35(sdk::unknown_ptr) guard_is_export_suppressed_address;
    
    // [RtlHpInitializeHeapManager]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10ac88, 0x6fc38 bytes
    // ntdll.dll .text:0xaeef0, 0x74648 bytes
    // ntdll.dll .text:0x10ac18, 0x6fc38 bytes
    //
    _v36(sdk::unknown_ptr) hp_initialize_heap_manager;
    
    // [RtlInitializeHeapGC]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7dc48, 0x6fc38 bytes
    // ntdll.dll .text:0x81170, 0x74648 bytes
    // ntdll.dll .text:0x7dde8, 0x6fc38 bytes
    //
    _v37(sdk::unknown_ptr) initialize_heap_gc;
    
    // [RtlIsCurrentProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x74590, 0x6fc38 bytes
    // ntdll.dll .text:0x6c210, 0x74648 bytes
    // ntdll.dll .text:0x74730, 0x6fc38 bytes
    //
    _v38(sdk::function<uint8_t(void*)>*) is_current_process;
    
    // [RtlIsCurrentThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfec10, 0x6fc38 bytes
    // ntdll.dll .text:0x1fd0, 0x74648 bytes
    // ntdll.dll .text:0xfebc0, 0x6fc38 bytes
    //
    _v39(sdk::function<uint8_t(void*)>*) is_current_thread;
    
    // [RtlQueryFeatureUsageNotificationSubscriptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1014c0, 0x6fc38 bytes
    // ntdll.dll .text:0x70ce0, 0x74648 bytes
    // ntdll.dll .text:0x101470, 0x6fc38 bytes
    //
    _v40(sdk::function<int32_t(struct rtl::feature_configuration_t*, uint32_t*)>*) query_feature_usage_notification_subscriptions;
    
    // [RtlQueryImageMitigationPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe1870, 0x6fc38 bytes
    // ntdll.dll .text:0xec3f0, 0x74648 bytes
    // ntdll.dll .text:0xe17e0, 0x6fc38 bytes
    //
    _v41(sdk::function<int32_t(wchar_t*, enum image::mitigation_policy_t, uint32_t, void*, uint32_t)>*) query_image_mitigation_policy;
    
    // [RtlQueryTokenHostIdAsUlong64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x826b0, 0x6fc38 bytes
    // ntdll.dll .text:0x86710, 0x74648 bytes
    // ntdll.dll .text:0x82850, 0x6fc38 bytes
    //
    _v42(sdk::function<int32_t(void*, uint64_t*)>*) query_token_host_id_as_ulong64;
    
    // [RtlRaiseExceptionForReturnAddressHijack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa0ab0, 0x6fc38 bytes
    // ntdll.dll .text:0xa3c90, 0x74648 bytes
    // ntdll.dll .text:0xa0a90, 0x6fc38 bytes
    //
    _v43(sdk::unknown_ptr) raise_exception_for_return_address_hijack;
    
    // [RtlReportFatalFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfed70, 0x6fc38 bytes
    // ntdll.dll .text:0x10c1c0, 0x74648 bytes
    // ntdll.dll .text:0xfed20, 0x6fc38 bytes
    //
    _v44(sdk::unknown_ptr) report_fatal_failure;
    
    // [RtlRestoreThreadPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeed90, 0x6fc38 bytes
    // ntdll.dll .text:0x8a130, 0x74648 bytes
    // ntdll.dll .text:0xeed40, 0x6fc38 bytes
    //
    _v45(sdk::unknown_ptr) restore_thread_preferred_ui_languages;
    
    // [RtlSetFeatureConfigurations]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x101540, 0x6fc38 bytes
    // ntdll.dll .text:0x10e8a0, 0x74648 bytes
    // ntdll.dll .text:0x1014f0, 0x6fc38 bytes
    //
    _v46(sdk::function<int32_t(uint64_t*, enum rtl::feature_configuration_type_t, struct rtl::feature_configuration_t*, uint32_t)>*) set_feature_configurations;
    
    // [RtlSetImageMitigationPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe2180, 0x6fc38 bytes
    // ntdll.dll .text:0xecea0, 0x74648 bytes
    // ntdll.dll .text:0xe20f0, 0x6fc38 bytes
    //
    _v47(sdk::function<int32_t(wchar_t*, enum image::mitigation_policy_t, uint32_t, void*, uint32_t)>*) set_image_mitigation_policy;
    
    // [RtlSetProxiedProcessId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84a60, 0x6fc38 bytes
    // ntdll.dll .text:0x888c0, 0x74648 bytes
    // ntdll.dll .text:0x84c00, 0x6fc38 bytes
    //
    _v48(sdk::unknown_ptr) set_proxied_process_id;
    
    // [RtlSetThreadPreferredUILanguages2]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6a210, 0x6fc38 bytes
    // ntdll.dll .text:0x6fd40, 0x74648 bytes
    // ntdll.dll .text:0x6a330, 0x6fc38 bytes
    //
    _v49(sdk::unknown_ptr) set_thread_preferred_ui_languages2;
    
    // [RtlStackDbContextCleanup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x117aec, 0x6fc38 bytes
    // ntdll.dll .text:0x12bc54, 0x74648 bytes
    // ntdll.dll .text:0x117c8c, 0x6fc38 bytes
    //
    _v50(sdk::unknown_ptr) stack_db_context_cleanup;
    
    // [RtlSubscribeForFeatureUsageNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x101640, 0x6fc38 bytes
    // ntdll.dll .text:0x10e9b0, 0x74648 bytes
    // ntdll.dll .text:0x1015f0, 0x6fc38 bytes
    //
    _v51(sdk::function<int32_t(struct rtl::feature_configuration_t*, uint32_t)>*) subscribe_for_feature_usage_notification;
    
    // [RtlULongToUShort]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61044, 0x6fc38 bytes
    // ntdll.dll .text:0x7b84c, 0x74648 bytes
    // ntdll.dll .text:0x61164, 0x6fc38 bytes
    //
    _v52(sdk::function<int32_t(uint32_t, uint16_t*)>*) u_long_to_u_short;
    
    // [RtlUnsubscribeFromFeatureUsageNotifications]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x101650, 0x6fc38 bytes
    // ntdll.dll .text:0x10e9c0, 0x74648 bytes
    // ntdll.dll .text:0x101600, 0x6fc38 bytes
    //
    _v53(sdk::function<int32_t(struct rtl::feature_configuration_t*, uint32_t)>*) unsubscribe_from_feature_usage_notifications;
    
    // [RtlUserFiberStart]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ec70, 0x6fc38 bytes
    // ntdll.dll .text:0x87ae0, 0x74648 bytes
    // ntdll.dll .text:0x7ee10, 0x6fc38 bytes
    //
    _v54(sdk::unknown_ptr) user_fiber_start;
    
    // [RtlValidateUserCallTarget]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53608, 0x6fc38 bytes
    // ntdll.dll .text:0x10a3a4, 0x74648 bytes
    // ntdll.dll .text:0x53608, 0x6fc38 bytes
    //
    _v55(sdk::unknown_ptr) validate_user_call_target;
    
    // [RtlWow64GetSharedInfoProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x79090, 0x6fc38 bytes
    // ntdll.dll .text:0x1da0, 0x74648 bytes
    // ntdll.dll .text:0x79230, 0x6fc38 bytes
    //
    _v56(sdk::unknown_ptr) wow64_get_shared_info_process;
    
    // [RtlWow64PopAllCrossProcessWorkFromWorkList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102b50, 0x6fc38 bytes
    // ntdll.dll .text:0x10ffb0, 0x74648 bytes
    // ntdll.dll .text:0x102ae0, 0x6fc38 bytes
    //
    _v57(sdk::unknown_ptr) wow64_pop_all_cross_process_work_from_work_list;
    
    // [RtlWow64PopCrossProcessWorkFromFreeList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102c60, 0x6fc38 bytes
    // ntdll.dll .text:0x110090, 0x74648 bytes
    // ntdll.dll .text:0x102bf0, 0x6fc38 bytes
    //
    _v58(sdk::unknown_ptr) wow64_pop_cross_process_work_from_free_list;
    
    // [RtlWow64PushCrossProcessWorkOntoFreeList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102cf0, 0x6fc38 bytes
    // ntdll.dll .text:0x110150, 0x74648 bytes
    // ntdll.dll .text:0x102c80, 0x6fc38 bytes
    //
    _v59(sdk::unknown_ptr) wow64_push_cross_process_work_onto_free_list;
    
    // [RtlWow64PushCrossProcessWorkOntoWorkList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102d90, 0x6fc38 bytes
    // ntdll.dll .text:0x110220, 0x74648 bytes
    // ntdll.dll .text:0x102d20, 0x6fc38 bytes
    //
    _v60(sdk::unknown_ptr) wow64_push_cross_process_work_onto_work_list;
    
    // [RtlWow64RequestCrossProcessHeavyFlush]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102fa0, 0x6fc38 bytes
    // ntdll.dll .text:0x1104b0, 0x74648 bytes
    // ntdll.dll .text:0x102f30, 0x6fc38 bytes
    //
    _v61(sdk::unknown_ptr) wow64_request_cross_process_heavy_flush;
    
    // [RtlWow64SuspendProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdc0f0, 0x6fc38 bytes
    // ntdll.dll .text:0xe6820, 0x74648 bytes
    // ntdll.dll .text:0xdc060, 0x6fc38 bytes
    //
    _v62(sdk::unknown_ptr) wow64_suspend_process;
    
    // [RtlAbortRXact]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82e20, 0x67960 bytes
    // ntdll.dll .text:0x7ecd0, 0x6fc38 bytes
    // ntdll.dll .text:0x7fb30, 0x74648 bytes
    // ntdll.dll .text:0x7ee70, 0x6fc38 bytes
    //
    _v63(sdk::unknown_ptr) abort_r_xact;
    
    // [RtlAcquirePebLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80390, 0x67960 bytes
    // ntdll.dll .text:0x78fe0, 0x6fc38 bytes
    // ntdll.dll .text:0x7fae0, 0x74648 bytes
    // ntdll.dll .text:0x79180, 0x6fc38 bytes
    //
    _v64(sdk::function<void()>*) acquire_peb_lock;
    
    // [RtlAcquireReleaseSRWLockExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6e8b0, 0x67960 bytes
    // ntdll.dll .text:0x7d450, 0x6fc38 bytes
    // ntdll.dll .text:0x80cc0, 0x74648 bytes
    // ntdll.dll .text:0x7d5f0, 0x6fc38 bytes
    //
    _v65(sdk::function<void(struct rtl::srwlock_t*)>*) acquire_release_srw_lock_exclusive;
    
    // [RtlAcquireResourceExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6fce0, 0x67960 bytes
    // ntdll.dll .text:0x65a00, 0x6fc38 bytes
    // ntdll.dll .text:0x5aab0, 0x74648 bytes
    // ntdll.dll .text:0x65b20, 0x6fc38 bytes
    //
    _v66(sdk::function<uint8_t(struct rtl::resource_t*, uint8_t)>*) acquire_resource_exclusive;
    
    // [RtlAcquireResourceShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6fbf0, 0x67960 bytes
    // ntdll.dll .text:0x658e0, 0x6fc38 bytes
    // ntdll.dll .text:0x5a990, 0x74648 bytes
    // ntdll.dll .text:0x65a00, 0x6fc38 bytes
    //
    _v67(sdk::function<uint8_t(struct rtl::resource_t*, uint8_t)>*) acquire_resource_shared;
    
    // [RtlAcquireSRWLockExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x357a0, 0x67960 bytes
    // ntdll.dll .text:0x1dc30, 0x6fc38 bytes
    // ntdll.dll .text:0x37ea0, 0x74648 bytes
    // ntdll.dll .text:0x1dc30, 0x6fc38 bytes
    //
    _v68(sdk::function<void(struct rtl::srwlock_t*)>*) acquire_srw_lock_exclusive;
    
    // [RtlAcquireSRWLockShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x45fb0, 0x67960 bytes
    // ntdll.dll .text:0x206c0, 0x6fc38 bytes
    // ntdll.dll .text:0x26ec0, 0x74648 bytes
    // ntdll.dll .text:0x206c0, 0x6fc38 bytes
    //
    _v69(sdk::function<void(struct rtl::srwlock_t*)>*) acquire_srw_lock_shared;
    
    // [RtlActivateActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1cc90, 0x67960 bytes
    // ntdll.dll .text:0x71ce0, 0x6fc38 bytes
    // ntdll.dll .text:0x74eb0, 0x74648 bytes
    // ntdll.dll .text:0x71e80, 0x6fc38 bytes
    //
    _v70(sdk::unknown_ptr) activate_activation_context;
    
    // [RtlActivateActivationContextEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1cce0, 0x67960 bytes
    // ntdll.dll .text:0x71d30, 0x6fc38 bytes
    // ntdll.dll .text:0x74f00, 0x74648 bytes
    // ntdll.dll .text:0x71ed0, 0x6fc38 bytes
    //
    _v71(sdk::unknown_ptr) activate_activation_context_ex;
    
    // [RtlActivateActivationContextUnsafeFast]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x27de0, 0x67960 bytes
    // ntdll.dll .text:0x37a20, 0x6fc38 bytes
    // ntdll.dll .text:0x28c70, 0x74648 bytes
    // ntdll.dll .text:0x37a20, 0x6fc38 bytes
    //
    _v72(sdk::unknown_ptr) activate_activation_context_unsafe_fast;
    
    // [RtlAddAccessDeniedAce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89320, 0x67960 bytes
    // ntdll.dll .text:0x8ab90, 0x6fc38 bytes
    // ntdll.dll .text:0x8cfc0, 0x74648 bytes
    // ntdll.dll .text:0x8ad30, 0x6fc38 bytes
    //
    _v73(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint32_t, void*)>*) add_access_denied_ace;
    
    // [RtlAddActionToRXact]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85c90, 0x67960 bytes
    // ntdll.dll .text:0x89760, 0x6fc38 bytes
    // ntdll.dll .text:0x8bcd0, 0x74648 bytes
    // ntdll.dll .text:0x89900, 0x6fc38 bytes
    //
    _v74(sdk::unknown_ptr) add_action_to_r_xact;
    
    // [RtlAddAttributeActionToRXact]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85d10, 0x67960 bytes
    // ntdll.dll .text:0x80670, 0x6fc38 bytes
    // ntdll.dll .text:0x806c0, 0x74648 bytes
    // ntdll.dll .text:0x80810, 0x6fc38 bytes
    //
    _v75(sdk::unknown_ptr) add_attribute_action_to_r_xact;
    
    // [RtlAddCompoundAce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe2680, 0x67960 bytes
    // ntdll.dll .text:0xe9060, 0x6fc38 bytes
    // ntdll.dll .text:0xf3ff0, 0x74648 bytes
    // ntdll.dll .text:0xe8fd0, 0x6fc38 bytes
    //
    _v76(sdk::function<int32_t(struct nt::acl_t*, uint32_t, uint8_t, uint32_t, void*, void*)>*) add_compound_ace;
    
    // [RtlAddFunctionTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71d60, 0x67960 bytes
    // ntdll.dll .text:0x68be0, 0x6fc38 bytes
    // ntdll.dll .text:0xeb160, 0x74648 bytes
    // ntdll.dll .text:0x68d00, 0x6fc38 bytes
    //
    _v77(sdk::unknown_ptr) add_function_table;
    
    // [RtlAddGrowableFunctionTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71f70, 0x67960 bytes
    // ntdll.dll .text:0x69580, 0x6fc38 bytes
    // ntdll.dll .text:0x721d0, 0x74648 bytes
    // ntdll.dll .text:0x696a0, 0x6fc38 bytes
    //
    _v78(sdk::unknown_ptr) add_growable_function_table;
    
    // [RtlAddIntegrityLabelToBoundaryDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe3fd0, 0x67960 bytes
    // ntdll.dll .text:0xeaab0, 0x6fc38 bytes
    // ntdll.dll .text:0xf5a40, 0x74648 bytes
    // ntdll.dll .text:0xeaa20, 0x6fc38 bytes
    //
    _v79(sdk::function<int32_t(void**, void*)>*) add_integrity_label_to_boundary_descriptor;
    
    // [RtlAddRefActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e3b0, 0x67960 bytes
    // ntdll.dll .text:0x3e3a0, 0x6fc38 bytes
    // ntdll.dll .text:0x33d20, 0x74648 bytes
    // ntdll.dll .text:0x3e3a0, 0x6fc38 bytes
    //
    _v80(sdk::unknown_ptr) add_ref_activation_context;
    
    // [RtlAddRefMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xe0ae0, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _v81(sdk::unknown_ptr) add_ref_memory_stream;
    
    // [RtlAddScopedPolicyIDAce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe2b40, 0x67960 bytes
    // ntdll.dll .text:0xe9510, 0x6fc38 bytes
    // ntdll.dll .text:0xf44b0, 0x74648 bytes
    // ntdll.dll .text:0xe9480, 0x6fc38 bytes
    //
    _v82(sdk::unknown_ptr) add_scoped_policy_id_ace;
    
    // [RtlAddSIDToBoundaryDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5d7b0, 0x67960 bytes
    // ntdll.dll .text:0x7e2f0, 0x6fc38 bytes
    // ntdll.dll .text:0x83910, 0x74648 bytes
    // ntdll.dll .text:0x7e490, 0x6fc38 bytes
    //
    _v83(sdk::function<int32_t(void**, void*)>*) add_sid_to_boundary_descriptor;
    
    // [RtlAddSIDToBoundaryDescriptorEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5acc0, 0x67960 bytes
    // ntdll.dll .text:0x7e300, 0x6fc38 bytes
    // ntdll.dll .text:0x83920, 0x74648 bytes
    // ntdll.dll .text:0x7e4a0, 0x6fc38 bytes
    //
    _v84(sdk::unknown_ptr) add_sid_to_boundary_descriptor_ex;
    
    // [RtlAddVectoredContinueHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90790, 0x67960 bytes
    // ntdll.dll .text:0xd94f0, 0x6fc38 bytes
    // ntdll.dll .text:0xadc80, 0x74648 bytes
    // ntdll.dll .text:0xd9460, 0x6fc38 bytes
    //
    _v85(sdk::function<void*(uint32_t, sdk::function<int32_t(struct nt::exception_pointers_t*)>*)>*) add_vectored_continue_handler;
    
    // [RtlAddVectoredExceptionHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x762c0, 0x67960 bytes
    // ntdll.dll .text:0x80f50, 0x6fc38 bytes
    // ntdll.dll .text:0x843c0, 0x74648 bytes
    // ntdll.dll .text:0x810f0, 0x6fc38 bytes
    //
    _v86(sdk::function<void*(uint32_t, sdk::function<int32_t(struct nt::exception_pointers_t*)>*)>*) add_vectored_exception_handler;
    
    // [RtlAdjustPrivilege]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c530, 0x67960 bytes
    // ntdll.dll .text:0x78780, 0x6fc38 bytes
    // ntdll.dll .text:0x7db50, 0x74648 bytes
    // ntdll.dll .text:0x78920, 0x6fc38 bytes
    //
    _v87(sdk::function<int32_t(uint32_t, uint8_t, uint8_t, uint8_t*)>*) adjust_privilege;
    
    // [RtlAllocateActivationContextStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b8c0, 0x67960 bytes
    // ntdll.dll .text:0x6f6c0, 0x6fc38 bytes
    // ntdll.dll .text:0x737b0, 0x74648 bytes
    // ntdll.dll .text:0x6f860, 0x6fc38 bytes
    //
    _v88(sdk::unknown_ptr) allocate_activation_context_stack;
    
    // [RtlAllocateAndInitializeSid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5af40, 0x67960 bytes
    // ntdll.dll .text:0x6e480, 0x6fc38 bytes
    // ntdll.dll .text:0x6dee0, 0x74648 bytes
    // ntdll.dll .text:0x6e5a0, 0x6fc38 bytes
    //
    _v89(sdk::function<int32_t(struct nt::sid_identifier_authority_t*, uint8_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void**)>*) allocate_and_initialize_sid;
    
    // [RtlAllocateHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6f800, 0x67960 bytes
    // ntdll.dll .text:0x58a70, 0x6fc38 bytes
    // ntdll.dll .text:0x3ca0, 0x74648 bytes
    // ntdll.dll .text:0x58a70, 0x6fc38 bytes
    //
    _v90(sdk::function<struct rtl::handle_table_entry_t*(struct rtl::handle_table_t*, uint32_t*)>*) allocate_handle;
    
    // [RtlAllocateMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll RT:0x108010, 0x67960 bytes
    // ntdll.dll RT:0x11a010, 0x6fc38 bytes
    // ntdll.dll RT:0x12f010, 0x74648 bytes
    // ntdll.dll RT:0x11b010, 0x6fc38 bytes
    //
    _v91(sdk::function<int32_t(void*, uint32_t, void**)>*) allocate_memory_block_lookaside;
    
    // [RtlAllocateMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll RT:0x108120, 0x67960 bytes
    // ntdll.dll RT:0x11a130, 0x6fc38 bytes
    // ntdll.dll RT:0x12f0f0, 0x74648 bytes
    // ntdll.dll RT:0x11b130, 0x6fc38 bytes
    //
    _v92(sdk::function<int32_t(void*, uint64_t, void**)>*) allocate_memory_zone;
    
    // [RtlAllocateWnfSerializationGroup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x864e0, 0x67960 bytes
    // ntdll.dll .text:0x83620, 0x6fc38 bytes
    // ntdll.dll .text:0x86300, 0x74648 bytes
    // ntdll.dll .text:0x837c0, 0x6fc38 bytes
    //
    _v93(sdk::unknown_ptr) allocate_wnf_serialization_group;
    
    // [RtlAppendPathElement]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0e40, 0x67960 bytes
    // ntdll.dll .text:0xcbf30, 0x6fc38 bytes
    // ntdll.dll .text:0xd7150, 0x74648 bytes
    // ntdll.dll .text:0xcbeb0, 0x6fc38 bytes
    //
    _v94(sdk::unknown_ptr) append_path_element;
    
    // [RtlApplicationVerifierStop]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd9330, 0x67960 bytes
    // ntdll.dll .text:0xdbd50, 0x6fc38 bytes
    // ntdll.dll .text:0xe63c0, 0x74648 bytes
    // ntdll.dll .text:0xdbcc0, 0x6fc38 bytes
    //
    _v95(sdk::unknown_ptr) application_verifier_stop;
    
    // [RtlApplyRXact]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ddd0, 0x67960 bytes
    // ntdll.dll .text:0xe5d10, 0x6fc38 bytes
    // ntdll.dll .text:0xf0cf0, 0x74648 bytes
    // ntdll.dll .text:0xe5c80, 0x6fc38 bytes
    //
    _v96(sdk::unknown_ptr) apply_r_xact;
    
    // [RtlApplyRXactNoFlush]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82df0, 0x67960 bytes
    // ntdll.dll .text:0x7eca0, 0x6fc38 bytes
    // ntdll.dll .text:0x7fb00, 0x74648 bytes
    // ntdll.dll .text:0x7ee40, 0x6fc38 bytes
    //
    _v97(sdk::unknown_ptr) apply_r_xact_no_flush;
    
    // [RtlAppxIsFileOwnedByTrustedInstaller]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0950, 0x67960 bytes
    // ntdll.dll .text:0xcbac0, 0x6fc38 bytes
    // ntdll.dll .text:0xd6cd0, 0x74648 bytes
    // ntdll.dll .text:0xcba40, 0x6fc38 bytes
    //
    _v98(sdk::function<int32_t(void*, uint8_t*)>*) appx_is_file_owned_by_trusted_installer;
    
    // [RtlAreLongPathsEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x826f0, 0x67960 bytes
    // ntdll.dll .text:0x74860, 0x6fc38 bytes
    // ntdll.dll .text:0x7b0a0, 0x74648 bytes
    // ntdll.dll .text:0x74a00, 0x6fc38 bytes
    //
    _v99(sdk::function<uint8_t()>*) are_long_paths_enabled;
    
    // [RtlBarrier]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe5e30, 0x67960 bytes
    // ntdll.dll .text:0xed1d0, 0x6fc38 bytes
    // ntdll.dll .text:0xf8c80, 0x74648 bytes
    // ntdll.dll .text:0xed140, 0x6fc38 bytes
    //
    _w00(sdk::function<uint8_t(struct rtl::barrier_t*, uint32_t)>*) barrier;
    
    // [RtlBarrierForDelete]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe5e40, 0x67960 bytes
    // ntdll.dll .text:0xed1e0, 0x6fc38 bytes
    // ntdll.dll .text:0xf8c90, 0x74648 bytes
    // ntdll.dll .text:0xed150, 0x6fc38 bytes
    //
    _w01(sdk::function<uint8_t(struct rtl::barrier_t*, uint32_t)>*) barrier_for_delete;
    
    // [RtlCancelTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff760, 0x67960 bytes
    // ntdll.dll .text:0x112580, 0x6fc38 bytes
    // ntdll.dll .text:0x126870, 0x74648 bytes
    // ntdll.dll .text:0x112720, 0x6fc38 bytes
    //
    _w02(sdk::unknown_ptr) cancel_timer;
    
    // [RtlCanonicalizeDomainName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa920, 0x67960 bytes
    // ntdll.dll .text:0x30a10, 0x6fc38 bytes
    // ntdll.dll .text:0xd5a0, 0x74648 bytes
    // ntdll.dll .text:0x30a10, 0x6fc38 bytes
    //
    _w03(sdk::unknown_ptr) canonicalize_domain_name;
    
    // [RtlCheckForOrphanedCriticalSections]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81ff0, 0x67960 bytes
    // ntdll.dll .text:0x7c340, 0x6fc38 bytes
    // ntdll.dll .text:0x810d0, 0x74648 bytes
    // ntdll.dll .text:0x7c4e0, 0x6fc38 bytes
    //
    _w04(sdk::function<void(void*)>*) check_for_orphaned_critical_sections;
    
    // [RtlCheckHeldCriticalSections]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82010, 0x67960 bytes
    // ntdll.dll .text:0x7c370, 0x6fc38 bytes
    // ntdll.dll .text:0x81100, 0x74648 bytes
    // ntdll.dll .text:0x7c510, 0x6fc38 bytes
    //
    _w05(sdk::unknown_ptr) check_held_critical_sections;
    
    // [RtlCheckSandboxedToken]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5a60, 0x67960 bytes
    // ntdll.dll .text:0x84810, 0x6fc38 bytes
    // ntdll.dll .text:0x88c20, 0x74648 bytes
    // ntdll.dll .text:0x849b0, 0x6fc38 bytes
    //
    _w06(sdk::function<int32_t(void*, uint8_t*)>*) check_sandboxed_token;
    
    // [RtlCleanUpTEBLangLists]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5c20, 0x67960 bytes
    // ntdll.dll .text:0x6a030, 0x6fc38 bytes
    // ntdll.dll .text:0x118a0, 0x74648 bytes
    // ntdll.dll .text:0x6a150, 0x6fc38 bytes
    //
    _w07(sdk::function<void()>*) clean_up_teb_lang_lists;
    
    // [RtlClearThreadWorkOnBehalfTicket]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x79620, 0x67960 bytes
    // ntdll.dll .text:0x685f0, 0x6fc38 bytes
    // ntdll.dll .text:0x356b0, 0x74648 bytes
    // ntdll.dll .text:0x68710, 0x6fc38 bytes
    //
    _w08(sdk::unknown_ptr) clear_thread_work_on_behalf_ticket;
    
    // [RtlCloneMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0af0, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _w09(sdk::unknown_ptr) clone_memory_stream;
    
    // [RtlCloneUserProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd51e0, 0x67960 bytes
    // ntdll.dll .text:0xd6230, 0x6fc38 bytes
    // ntdll.dll .text:0xe1580, 0x74648 bytes
    // ntdll.dll .text:0xd61a0, 0x6fc38 bytes
    //
    _w10(sdk::function<int32_t(uint32_t, void*, void*, void*, struct rtl::user_process_information_t*)>*) clone_user_process;
    
    // [RtlCommitDebugInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6370, 0x67960 bytes
    // ntdll.dll .text:0xd71a0, 0x6fc38 bytes
    // ntdll.dll .text:0xe2140, 0x74648 bytes
    // ntdll.dll .text:0xd7110, 0x6fc38 bytes
    //
    _w11(sdk::function<void*(struct rtl::debug_information_t*, uint64_t)>*) commit_debug_info;
    
    // [RtlCommitMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b00, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _w12(sdk::unknown_ptr) commit_memory_stream;
    
    // [RtlCompactHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90540, 0x67960 bytes
    // ntdll.dll .text:0xf1c20, 0x6fc38 bytes
    // ntdll.dll .text:0xfd290, 0x74648 bytes
    // ntdll.dll .text:0xf1bd0, 0x6fc38 bytes
    //
    _w13(sdk::function<uint64_t(void*, uint32_t)>*) compact_heap;
    
    // [RtlCompleteProcessCloning]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd54b0, 0x67960 bytes
    // ntdll.dll .text:0x9a360, 0x6fc38 bytes
    // ntdll.dll .text:0x9dfa0, 0x74648 bytes
    // ntdll.dll .text:0x9a500, 0x6fc38 bytes
    //
    _w14(sdk::unknown_ptr) complete_process_cloning;
    
    // [RtlComputeImportTableHash]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdcb30, 0x67960 bytes
    // ntdll.dll .text:0xe0470, 0x6fc38 bytes
    // ntdll.dll .text:0xead50, 0x74648 bytes
    // ntdll.dll .text:0xe03e0, 0x6fc38 bytes
    //
    _w15(sdk::function<int32_t(void*, char*, uint32_t)>*) compute_import_table_hash;
    
    // [RtlComputePrivatizedDllName_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3460, 0x67960 bytes
    // ntdll.dll .text:0xd5480, 0x6fc38 bytes
    // ntdll.dll .text:0xe0760, 0x74648 bytes
    // ntdll.dll .text:0xd53f0, 0x6fc38 bytes
    //
    _w16(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, nt::unicode_view*)>*) compute_privatized_dll_name_u;
    
    // [RtlConnectToSm]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8d030, 0x67960 bytes
    // ntdll.dll .text:0x884d0, 0x6fc38 bytes
    // ntdll.dll .text:0x88720, 0x74648 bytes
    // ntdll.dll .text:0x88670, 0x6fc38 bytes
    //
    _w17(sdk::unknown_ptr) connect_to_sm;
    
    // [RtlConsoleMultiByteToUnicodeN]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdf060, 0x67960 bytes
    // ntdll.dll .text:0xe4a40, 0x6fc38 bytes
    // ntdll.dll .text:0xefe50, 0x74648 bytes
    // ntdll.dll .text:0xe49b0, 0x6fc38 bytes
    //
    _w18(sdk::function<int32_t(wchar_t*, uint32_t, uint32_t*, const char*, uint32_t, uint32_t*)>*) console_multi_byte_to_unicode_n;
    
    // [RtlControlStackTraceDataBase]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf348c, 0x67960 bytes
    // ntdll.dll .text:0x1008f8, 0x6fc38 bytes
    // ntdll.dll .text:0x10dd78, 0x74648 bytes
    // ntdll.dll .text:0x1008a8, 0x6fc38 bytes
    //
    _w19(sdk::unknown_ptr) control_stack_trace_data_base;
    
    // [RtlConvertDeviceFamilyInfoToString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7bc50, 0x67960 bytes
    // ntdll.dll .text:0x6b9e0, 0x6fc38 bytes
    // ntdll.dll .text:0x77f60, 0x74648 bytes
    // ntdll.dll .text:0x6bb00, 0x6fc38 bytes
    //
    _w20(sdk::unknown_ptr) convert_device_family_info_to_string;
    
    // [RtlConvertExclusiveToShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x866f0, 0x67960 bytes
    // ntdll.dll .text:0x88f00, 0x6fc38 bytes
    // ntdll.dll .text:0x87c80, 0x74648 bytes
    // ntdll.dll .text:0x890a0, 0x6fc38 bytes
    //
    _w21(sdk::function<void(struct rtl::resource_t*)>*) convert_exclusive_to_shared;
    
    // [RtlConvertLCIDToString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe6820, 0x67960 bytes
    // ntdll.dll .text:0xee740, 0x6fc38 bytes
    // ntdll.dll .text:0xfa080, 0x74648 bytes
    // ntdll.dll .text:0xee6f0, 0x6fc38 bytes
    //
    _w22(sdk::function<int32_t(uint32_t, uint32_t, uint32_t, wchar_t*, uint32_t)>*) convert_lcid_to_string;
    
    // [RtlConvertSharedToExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6fb90, 0x67960 bytes
    // ntdll.dll .text:0x7d050, 0x6fc38 bytes
    // ntdll.dll .text:0x7f580, 0x74648 bytes
    // ntdll.dll .text:0x7d1f0, 0x6fc38 bytes
    //
    _w23(sdk::function<void(struct rtl::resource_t*)>*) convert_shared_to_exclusive;
    
    // [RtlConvertSRWLockExclusiveToShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe25b0, 0x67960 bytes
    // ntdll.dll .text:0x84250, 0x6fc38 bytes
    // ntdll.dll .text:0x88160, 0x74648 bytes
    // ntdll.dll .text:0x843f0, 0x6fc38 bytes
    //
    _w24(sdk::unknown_ptr) convert_srw_lock_exclusive_to_shared;
    
    // [RtlConvertToAutoInheritSecurityObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5dc0, 0x67960 bytes
    // ntdll.dll .text:0xd6770, 0x6fc38 bytes
    // ntdll.dll .text:0xe1ae0, 0x74648 bytes
    // ntdll.dll .text:0xd66e0, 0x6fc38 bytes
    //
    _w25(sdk::function<int32_t(void*, void*, void**, struct nt::guid_t*, uint8_t, struct nt::generic_mapping_t*)>*) convert_to_auto_inherit_security_object;
    
    // [RtlCopyMappedMemory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86c70, 0x67960 bytes
    // ntdll.dll .text:0x842b0, 0x6fc38 bytes
    // ntdll.dll .text:0x860f0, 0x74648 bytes
    // ntdll.dll .text:0x84450, 0x6fc38 bytes
    //
    _w26(sdk::unknown_ptr) copy_mapped_memory;
    
    // [RtlCopyMemoryStreamTo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b10, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _w27(sdk::unknown_ptr) copy_memory_stream_to;
    
    // [RtlCopyOutOfProcessMemoryStreamTo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b10, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _w28(sdk::unknown_ptr) copy_out_of_process_memory_stream_to;
    
    // [RtlCopySecurityDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x72ab0, 0x67960 bytes
    // ntdll.dll .text:0x6db50, 0x6fc38 bytes
    // ntdll.dll .text:0x6cb60, 0x74648 bytes
    // ntdll.dll .text:0x6dc70, 0x6fc38 bytes
    //
    _w29(sdk::function<int32_t(void*, void**)>*) copy_security_descriptor;
    
    // [RtlCreateActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x192e0, 0x67960 bytes
    // ntdll.dll .text:0x727e0, 0x6fc38 bytes
    // ntdll.dll .text:0x759d0, 0x74648 bytes
    // ntdll.dll .text:0x72980, 0x6fc38 bytes
    //
    _w30(sdk::unknown_ptr) create_activation_context;
    
    // [RtlCreateAndSetSD]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8c340, 0x67960 bytes
    // ntdll.dll .text:0x67ac0, 0x6fc38 bytes
    // ntdll.dll .text:0x68750, 0x74648 bytes
    // ntdll.dll .text:0x67be0, 0x6fc38 bytes
    //
    _w31(sdk::unknown_ptr) create_and_set_sd;
    
    // [RtlCreateBootStatusDataFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe6180, 0x67960 bytes
    // ntdll.dll .text:0xed720, 0x6fc38 bytes
    // ntdll.dll .text:0xf9380, 0x74648 bytes
    // ntdll.dll .text:0xed690, 0x6fc38 bytes
    //
    _w32(sdk::function<int32_t()>*) create_boot_status_data_file;
    
    // [RtlCreateBoundaryDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82090, 0x67960 bytes
    // ntdll.dll .text:0x81420, 0x6fc38 bytes
    // ntdll.dll .text:0x85630, 0x74648 bytes
    // ntdll.dll .text:0x815c0, 0x6fc38 bytes
    //
    _w33(sdk::function<void*(nt::unicode_view*, uint32_t)>*) create_boundary_descriptor;
    
    // [RtlCreateEnvironment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67180, 0x67960 bytes
    // ntdll.dll .text:0x47f60, 0x6fc38 bytes
    // ntdll.dll .text:0x58520, 0x74648 bytes
    // ntdll.dll .text:0x47f60, 0x6fc38 bytes
    //
    _w34(sdk::function<int32_t(uint8_t, void**)>*) create_environment;
    
    // [RtlCreateEnvironmentEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x677c0, 0x67960 bytes
    // ntdll.dll .text:0x47fd0, 0x6fc38 bytes
    // ntdll.dll .text:0x58540, 0x74648 bytes
    // ntdll.dll .text:0x47fd0, 0x6fc38 bytes
    //
    _w35(sdk::function<int32_t(void*, void**, uint32_t)>*) create_environment_ex;
    
    // [RtlCreateMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82ae0, 0x67960 bytes
    // ntdll.dll .text:0x79df0, 0x6fc38 bytes
    // ntdll.dll .text:0x801e0, 0x74648 bytes
    // ntdll.dll .text:0x79f90, 0x6fc38 bytes
    //
    _w36(sdk::function<int32_t(void**, uint32_t, uint32_t, uint32_t, uint32_t)>*) create_memory_block_lookaside;
    
    // [RtlCreateMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82cb0, 0x67960 bytes
    // ntdll.dll .text:0x79fc0, 0x6fc38 bytes
    // ntdll.dll .text:0x803b0, 0x74648 bytes
    // ntdll.dll .text:0x7a160, 0x6fc38 bytes
    //
    _w37(sdk::function<int32_t(void**, uint64_t, uint32_t)>*) create_memory_zone;
    
    // [RtlCreateProcessParameters]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd55c0, 0x67960 bytes
    // ntdll.dll .text:0xd64c0, 0x6fc38 bytes
    // ntdll.dll .text:0xe1810, 0x74648 bytes
    // ntdll.dll .text:0xd6430, 0x6fc38 bytes
    //
    _w38(sdk::function<int32_t(struct rtl::user_process_parameters_t**, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*)>*) create_process_parameters;
    
    // [RtlCreateProcessParametersEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x671a0, 0x67960 bytes
    // ntdll.dll .text:0x47600, 0x6fc38 bytes
    // ntdll.dll .text:0x57d80, 0x74648 bytes
    // ntdll.dll .text:0x47600, 0x6fc38 bytes
    //
    _w39(sdk::function<int32_t(struct rtl::user_process_parameters_t**, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, void*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, uint32_t)>*) create_process_parameters_ex;
    
    // [RtlCreateProcessReflection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4440, 0x67960 bytes
    // ntdll.dll .text:0xd5930, 0x6fc38 bytes
    // ntdll.dll .text:0xe0c60, 0x74648 bytes
    // ntdll.dll .text:0xd58a0, 0x6fc38 bytes
    //
    _w40(sdk::function<int32_t(void*, uint32_t, void*, void*, void*, struct rtlp::process_reflection_reflection_information_t*)>*) create_process_reflection;
    
    // [RtlCreateQueryDebugBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x195a0, 0x67960 bytes
    // ntdll.dll .text:0xd71b0, 0x6fc38 bytes
    // ntdll.dll .text:0x2480, 0x74648 bytes
    // ntdll.dll .text:0xd7120, 0x6fc38 bytes
    //
    _w41(sdk::function<struct rtl::debug_information_t*(uint32_t, uint8_t)>*) create_query_debug_buffer;
    
    // [RtlCreateServiceSid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5ae20, 0x67960 bytes
    // ntdll.dll .text:0x5bdf0, 0x6fc38 bytes
    // ntdll.dll .text:0x102d0, 0x74648 bytes
    // ntdll.dll .text:0x5bdf0, 0x6fc38 bytes
    //
    _w42(sdk::function<int32_t(nt::unicode_view*, void*, uint32_t*)>*) create_service_sid;
    
    // [RtlCreateTagHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4790, 0x67960 bytes
    // ntdll.dll .text:0x71000, 0x6fc38 bytes
    // ntdll.dll .text:0x7f9b0, 0x74648 bytes
    // ntdll.dll .text:0x711a0, 0x6fc38 bytes
    //
    _w43(sdk::function<uint32_t(void*, uint32_t, wchar_t*, wchar_t*)>*) create_tag_heap;
    
    // [RtlCreateTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51c00, 0x67960 bytes
    // ntdll.dll .text:0x43b10, 0x6fc38 bytes
    // ntdll.dll .text:0x4d4d0, 0x74648 bytes
    // ntdll.dll .text:0x43b10, 0x6fc38 bytes
    //
    _w44(sdk::function<int32_t(void*, void**, sdk::function<void(void*, uint8_t)>*, void*, uint32_t, uint32_t, uint32_t)>*) create_timer;
    
    // [RtlCreateTimerQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54470, 0x67960 bytes
    // ntdll.dll .text:0x46a20, 0x6fc38 bytes
    // ntdll.dll .text:0x50770, 0x74648 bytes
    // ntdll.dll .text:0x46a20, 0x6fc38 bytes
    //
    _w45(sdk::function<int32_t(void**)>*) create_timer_queue;
    
    // [RtlCreateUmsCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed420, 0x67960 bytes
    // ntdll.dll .text:0xf6740, 0x6fc38 bytes
    // ntdll.dll .text:0x102bc0, 0x74648 bytes
    // ntdll.dll .text:0xf66f0, 0x6fc38 bytes
    //
    _w46(sdk::unknown_ptr) create_ums_completion_list;
    
    // [RtlCreateUmsThreadContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed540, 0x67960 bytes
    // ntdll.dll .text:0xf6860, 0x6fc38 bytes
    // ntdll.dll .text:0x102bd0, 0x74648 bytes
    // ntdll.dll .text:0xf6810, 0x6fc38 bytes
    //
    _w47(sdk::unknown_ptr) create_ums_thread_context;
    
    // [RtlCreateUserSecurityObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5dd0, 0x67960 bytes
    // ntdll.dll .text:0xd6780, 0x6fc38 bytes
    // ntdll.dll .text:0xe1af0, 0x74648 bytes
    // ntdll.dll .text:0xd66f0, 0x6fc38 bytes
    //
    _w48(sdk::unknown_ptr) create_user_security_object;
    
    // [RtlCreateVirtualAccountSid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5df50, 0x67960 bytes
    // ntdll.dll .text:0x5bcd0, 0x6fc38 bytes
    // ntdll.dll .text:0x85b30, 0x74648 bytes
    // ntdll.dll .text:0x5bcd0, 0x6fc38 bytes
    //
    _w49(sdk::function<int32_t(const nt::unicode_view*, uint32_t, void*, uint32_t*)>*) create_virtual_account_sid;
    
    // [RtlCriticalSectionDebugSList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154190, 0x67960 bytes
    // ntdll.dll .data:0x16b300, 0x6fc38 bytes
    // ntdll.dll .data:0x184e30, 0x74648 bytes
    // ntdll.dll .data:0x16c300, 0x6fc38 bytes
    //
    _w50(sdk::unknown_ptr) critical_section_debug_s_list;
    
    // [RtlCriticalSectionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d610, 0x67960 bytes
    // ntdll.dll .data:0x164570, 0x6fc38 bytes
    // ntdll.dll .data:0x17e300, 0x74648 bytes
    // ntdll.dll .data:0x165570, 0x6fc38 bytes
    //
    _w51(sdk::unknown_ptr) critical_section_list;
    
    // [RtlCriticalSectionLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1542f8, 0x67960 bytes
    // ntdll.dll .data:0x16b488, 0x6fc38 bytes
    // ntdll.dll .data:0x185038, 0x74648 bytes
    // ntdll.dll .data:0x16c488, 0x6fc38 bytes
    //
    _w52(sdk::unknown_ptr) critical_section_lock;
    
    // [RtlDeCommitDebugInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6380, 0x67960 bytes
    // ntdll.dll .text:0xd7450, 0x6fc38 bytes
    // ntdll.dll .text:0xe2150, 0x74648 bytes
    // ntdll.dll .text:0xd73c0, 0x6fc38 bytes
    //
    _w53(sdk::function<void(struct rtl::debug_information_t*, void*, uint64_t)>*) de_commit_debug_info;
    
    // [RtlDeNormalizeProcessParams]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5630, 0x67960 bytes
    // ntdll.dll .text:0xd6530, 0x6fc38 bytes
    // ntdll.dll .text:0xe1880, 0x74648 bytes
    // ntdll.dll .text:0xd64a0, 0x6fc38 bytes
    //
    _w54(sdk::function<struct rtl::user_process_parameters_t*(struct rtl::user_process_parameters_t*)>*) de_normalize_process_params;
    
    // [RtlDeactivateActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78860, 0x67960 bytes
    // ntdll.dll .text:0x6f8c0, 0x6fc38 bytes
    // ntdll.dll .text:0x739b0, 0x74648 bytes
    // ntdll.dll .text:0x6fa60, 0x6fc38 bytes
    //
    _w55(sdk::unknown_ptr) deactivate_activation_context;
    
    // [RtlDeactivateActivationContextUnsafeFast]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2a1c0, 0x67960 bytes
    // ntdll.dll .text:0x378d0, 0x6fc38 bytes
    // ntdll.dll .text:0x26bf0, 0x74648 bytes
    // ntdll.dll .text:0x378d0, 0x6fc38 bytes
    //
    _w56(sdk::unknown_ptr) deactivate_activation_context_unsafe_fast;
    
    // [RtlDebugAllocateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x93df4, 0x67960 bytes
    // ntdll.dll .text:0xf8220, 0x6fc38 bytes
    // ntdll.dll .text:0x103de0, 0x74648 bytes
    // ntdll.dll .text:0xf81d0, 0x6fc38 bytes
    //
    _w57(sdk::unknown_ptr) debug_allocate_heap;
    
    // [RtlDebugCompactHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfb06c, 0x67960 bytes
    // ntdll.dll .text:0xf85dc, 0x6fc38 bytes
    // ntdll.dll .text:0x1042e4, 0x74648 bytes
    // ntdll.dll .text:0xf858c, 0x6fc38 bytes
    //
    _w58(sdk::unknown_ptr) debug_compact_heap;
    
    // [RtlDebugCreateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfb1c0, 0x67960 bytes
    // ntdll.dll .text:0xf8730, 0x6fc38 bytes
    // ntdll.dll .text:0x1045b8, 0x74648 bytes
    // ntdll.dll .text:0xf86e0, 0x6fc38 bytes
    //
    _w59(sdk::unknown_ptr) debug_create_heap;
    
    // [RtlDebugCreateTagHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfb4b0, 0x67960 bytes
    // ntdll.dll .text:0xf8a24, 0x6fc38 bytes
    // ntdll.dll .text:0x1048ac, 0x74648 bytes
    // ntdll.dll .text:0xf89d4, 0x6fc38 bytes
    //
    _w60(sdk::unknown_ptr) debug_create_tag_heap;
    
    // [RtlDebugDestroyHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfb5f4, 0x67960 bytes
    // ntdll.dll .text:0xf8b68, 0x6fc38 bytes
    // ntdll.dll .text:0x104b4c, 0x74648 bytes
    // ntdll.dll .text:0xf8b18, 0x6fc38 bytes
    //
    _w61(sdk::unknown_ptr) debug_destroy_heap;
    
    // [RtlDebugFreeHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x93b20, 0x67960 bytes
    // ntdll.dll .text:0xf8c2c, 0x6fc38 bytes
    // ntdll.dll .text:0x104c10, 0x74648 bytes
    // ntdll.dll .text:0xf8bdc, 0x6fc38 bytes
    //
    _w62(sdk::unknown_ptr) debug_free_heap;
    
    // [RtlDebugGetUserInfoHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfb6b4, 0x67960 bytes
    // ntdll.dll .text:0xf8f20, 0x6fc38 bytes
    // ntdll.dll .text:0x1050a4, 0x74648 bytes
    // ntdll.dll .text:0xf8ed0, 0x6fc38 bytes
    //
    _w63(sdk::unknown_ptr) debug_get_user_info_heap;
    
    // [RtlDebugPrintTimes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0x89160, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _w64(sdk::unknown_ptr) debug_print_times;
    
    // [RtlDebugQueryTagHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfb858, 0x67960 bytes
    // ntdll.dll .text:0xf90c4, 0x6fc38 bytes
    // ntdll.dll .text:0x1053c8, 0x74648 bytes
    // ntdll.dll .text:0xf9074, 0x6fc38 bytes
    //
    _w65(sdk::unknown_ptr) debug_query_tag_heap;
    
    // [RtlDebugReAllocateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfb9a4, 0x67960 bytes
    // ntdll.dll .text:0xf9210, 0x6fc38 bytes
    // ntdll.dll .text:0x105684, 0x74648 bytes
    // ntdll.dll .text:0xf91c0, 0x6fc38 bytes
    //
    _w66(sdk::unknown_ptr) debug_re_allocate_heap;
    
    // [RtlDebugSetUserFlagsHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfbf04, 0x67960 bytes
    // ntdll.dll .text:0xf9794, 0x6fc38 bytes
    // ntdll.dll .text:0x105d48, 0x74648 bytes
    // ntdll.dll .text:0xf9744, 0x6fc38 bytes
    //
    _w67(sdk::unknown_ptr) debug_set_user_flags_heap;
    
    // [RtlDebugSetUserValueHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfc0d0, 0x67960 bytes
    // ntdll.dll .text:0xf9960, 0x6fc38 bytes
    // ntdll.dll .text:0x106094, 0x74648 bytes
    // ntdll.dll .text:0xf9910, 0x6fc38 bytes
    //
    _w68(sdk::unknown_ptr) debug_set_user_value_heap;
    
    // [RtlDebugSizeHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfc264, 0x67960 bytes
    // ntdll.dll .text:0xf9af4, 0x6fc38 bytes
    // ntdll.dll .text:0x1063a8, 0x74648 bytes
    // ntdll.dll .text:0xf9aa4, 0x6fc38 bytes
    //
    _w69(sdk::unknown_ptr) debug_size_heap;
    
    // [RtlDebugWalkHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfc3e8, 0x67960 bytes
    // ntdll.dll .text:0xf9c78, 0x6fc38 bytes
    // ntdll.dll .text:0x106658, 0x74648 bytes
    // ntdll.dll .text:0xf9c28, 0x6fc38 bytes
    //
    _w70(sdk::unknown_ptr) debug_walk_heap;
    
    // [RtlDebugZeroHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfc474, 0x67960 bytes
    // ntdll.dll .text:0xf9d08, 0x6fc38 bytes
    // ntdll.dll .text:0x1066e8, 0x74648 bytes
    // ntdll.dll .text:0xf9cb8, 0x6fc38 bytes
    //
    _w71(sdk::unknown_ptr) debug_zero_heap;
    
    // [RtlDecodePointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67120, 0x67960 bytes
    // ntdll.dll .text:0x6c890, 0x6fc38 bytes
    // ntdll.dll .text:0x6dea0, 0x74648 bytes
    // ntdll.dll .text:0x6c9b0, 0x6fc38 bytes
    //
    _w72(sdk::function<void*(void*)>*) decode_pointer;
    
    // [RtlDecodeRemotePointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd9ac0, 0x67960 bytes
    // ntdll.dll .text:0xdc610, 0x6fc38 bytes
    // ntdll.dll .text:0xe6a80, 0x74648 bytes
    // ntdll.dll .text:0xdc580, 0x6fc38 bytes
    //
    _w73(sdk::function<int32_t(void*, void*, void**)>*) decode_remote_pointer;
    
    // [RtlDecodeSystemPointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86d80, 0x67960 bytes
    // ntdll.dll .text:0x829a0, 0x6fc38 bytes
    // ntdll.dll .text:0x86a00, 0x74648 bytes
    // ntdll.dll .text:0x82b40, 0x6fc38 bytes
    //
    _w74(sdk::function<void*(void*)>*) decode_system_pointer;
    
    // [RtlDefaultNpAcl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ad90, 0x67960 bytes
    // ntdll.dll .text:0xd6820, 0x6fc38 bytes
    // ntdll.dll .text:0x19a0, 0x74648 bytes
    // ntdll.dll .text:0xd6790, 0x6fc38 bytes
    //
    _w75(sdk::function<int32_t(struct nt::acl_t**)>*) default_np_acl;
    
    // [RtlDeleteBarrier]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe5e50, 0x67960 bytes
    // ntdll.dll .text:0xed1f0, 0x6fc38 bytes
    // ntdll.dll .text:0xf8cb0, 0x74648 bytes
    // ntdll.dll .text:0xed160, 0x6fc38 bytes
    //
    _w76(sdk::function<int32_t(struct rtl::barrier_t*)>*) delete_barrier;
    
    // [RtlDeleteBoundaryDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd170, 0x67960 bytes
    // ntdll.dll .text:0x13c60, 0x6fc38 bytes
    // ntdll.dll .text:0x39760, 0x74648 bytes
    // ntdll.dll .text:0x13c60, 0x6fc38 bytes
    //
    _w77(sdk::function<void(void*)>*) delete_boundary_descriptor;
    
    // [RtlDeleteCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x16340, 0x67960 bytes
    // ntdll.dll .text:0x4cc00, 0x6fc38 bytes
    // ntdll.dll .text:0x5dc90, 0x74648 bytes
    // ntdll.dll .text:0x4cc00, 0x6fc38 bytes
    //
    _w78(sdk::function<int32_t(struct rtl::critical_section_t*)>*) delete_critical_section;
    
    // [RtlDeleteFunctionTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71410, 0x67960 bytes
    // ntdll.dll .text:0x68a30, 0x6fc38 bytes
    // ntdll.dll .text:0x8c450, 0x74648 bytes
    // ntdll.dll .text:0x68b50, 0x6fc38 bytes
    //
    _w79(sdk::unknown_ptr) delete_function_table;
    
    // [RtlDeleteGrowableFunctionTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x715b0, 0x67960 bytes
    // ntdll.dll .text:0x68df0, 0x6fc38 bytes
    // ntdll.dll .text:0x71c80, 0x74648 bytes
    // ntdll.dll .text:0x68f10, 0x6fc38 bytes
    //
    _w80(sdk::unknown_ptr) delete_growable_function_table;
    
    // [RtlDeleteResource]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x162f0, 0x67960 bytes
    // ntdll.dll .text:0x4cb70, 0x6fc38 bytes
    // ntdll.dll .text:0x5dc00, 0x74648 bytes
    // ntdll.dll .text:0x4cb70, 0x6fc38 bytes
    //
    _w81(sdk::function<void(struct rtl::resource_t*)>*) delete_resource;
    
    // [RtlDeleteSecurityObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80b00, 0x67960 bytes
    // ntdll.dll .text:0x7c430, 0x6fc38 bytes
    // ntdll.dll .text:0x80630, 0x74648 bytes
    // ntdll.dll .text:0x7c5d0, 0x6fc38 bytes
    //
    _w82(sdk::function<int32_t(void**)>*) delete_security_object;
    
    // [RtlDeleteTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51f50, 0x67960 bytes
    // ntdll.dll .text:0x43d90, 0x6fc38 bytes
    // ntdll.dll .text:0x4d330, 0x74648 bytes
    // ntdll.dll .text:0x43d90, 0x6fc38 bytes
    //
    _w83(sdk::function<int32_t(void*, void*, void*)>*) delete_timer;
    
    // [RtlDeleteTimerQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff770, 0x67960 bytes
    // ntdll.dll .text:0x112590, 0x6fc38 bytes
    // ntdll.dll .text:0x126880, 0x74648 bytes
    // ntdll.dll .text:0x112730, 0x6fc38 bytes
    //
    _w84(sdk::function<int32_t(void*)>*) delete_timer_queue;
    
    // [RtlDeleteTimerQueueEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x547a0, 0x67960 bytes
    // ntdll.dll .text:0x46ed0, 0x6fc38 bytes
    // ntdll.dll .text:0x51de0, 0x74648 bytes
    // ntdll.dll .text:0x46ed0, 0x6fc38 bytes
    //
    _w85(sdk::function<int32_t(void*, void*)>*) delete_timer_queue_ex;
    
    // [RtlDeleteUmsCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed650, 0x67960 bytes
    // ntdll.dll .text:0xf6970, 0x6fc38 bytes
    // ntdll.dll .text:0x102be0, 0x74648 bytes
    // ntdll.dll .text:0xf6920, 0x6fc38 bytes
    //
    _w86(sdk::unknown_ptr) delete_ums_completion_list;
    
    // [RtlDeleteUmsThreadContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed6b0, 0x67960 bytes
    // ntdll.dll .text:0xf69d0, 0x6fc38 bytes
    // ntdll.dll .text:0x102bf0, 0x74648 bytes
    // ntdll.dll .text:0xf6980, 0x6fc38 bytes
    //
    _w87(sdk::unknown_ptr) delete_ums_thread_context;
    
    // [RtlDequeueUmsCompletionListItems]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed710, 0x67960 bytes
    // ntdll.dll .text:0xf6a30, 0x6fc38 bytes
    // ntdll.dll .text:0x102c00, 0x74648 bytes
    // ntdll.dll .text:0xf69e0, 0x6fc38 bytes
    //
    _w88(sdk::unknown_ptr) dequeue_ums_completion_list_items;
    
    // [RtlDeregisterSecureMemoryCacheCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee100, 0x67960 bytes
    // ntdll.dll .text:0xf73f0, 0x6fc38 bytes
    // ntdll.dll .text:0x102fc0, 0x74648 bytes
    // ntdll.dll .text:0xf73a0, 0x6fc38 bytes
    //
    _w89(sdk::function<int32_t(sdk::function<int32_t(void*, uint64_t)>*)>*) deregister_secure_memory_cache_callback;
    
    // [RtlDeregisterWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54710, 0x67960 bytes
    // ntdll.dll .text:0x46b50, 0x6fc38 bytes
    // ntdll.dll .text:0x88bb0, 0x74648 bytes
    // ntdll.dll .text:0x46b50, 0x6fc38 bytes
    //
    _w90(sdk::function<int32_t(void*)>*) deregister_wait;
    
    // [RtlDeregisterWaitEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52120, 0x67960 bytes
    // ntdll.dll .text:0x434e0, 0x6fc38 bytes
    // ntdll.dll .text:0x4c990, 0x74648 bytes
    // ntdll.dll .text:0x434e0, 0x6fc38 bytes
    //
    _w91(sdk::function<int32_t(void*, void*)>*) deregister_wait_ex;
    
    // [RtlDestroyEnvironment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x677a0, 0x67960 bytes
    // ntdll.dll .text:0x7c4d0, 0x6fc38 bytes
    // ntdll.dll .text:0x82ab0, 0x74648 bytes
    // ntdll.dll .text:0x7c670, 0x6fc38 bytes
    //
    _w92(sdk::function<int32_t(void*)>*) destroy_environment;
    
    // [RtlDestroyHandleTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89070, 0x67960 bytes
    // ntdll.dll .text:0x84450, 0x6fc38 bytes
    // ntdll.dll .text:0x88b80, 0x74648 bytes
    // ntdll.dll .text:0x845f0, 0x6fc38 bytes
    //
    _w93(sdk::function<int32_t(struct rtl::handle_table_t*)>*) destroy_handle_table;
    
    // [RtlDestroyMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x28c0, 0x67960 bytes
    // ntdll.dll .text:0x83ed0, 0x6fc38 bytes
    // ntdll.dll .text:0x88ab0, 0x74648 bytes
    // ntdll.dll .text:0x84070, 0x6fc38 bytes
    //
    _w94(sdk::function<int32_t(void*)>*) destroy_memory_block_lookaside;
    
    // [RtlDestroyMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2920, 0x67960 bytes
    // ntdll.dll .text:0x83f30, 0x6fc38 bytes
    // ntdll.dll .text:0x88b10, 0x74648 bytes
    // ntdll.dll .text:0x840d0, 0x6fc38 bytes
    //
    _w95(sdk::function<int32_t(void*)>*) destroy_memory_zone;
    
    // [RtlDestroyProcessParameters]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84420, 0x67960 bytes
    // ntdll.dll .text:0x7c4d0, 0x6fc38 bytes
    // ntdll.dll .text:0x85780, 0x74648 bytes
    // ntdll.dll .text:0x7c670, 0x6fc38 bytes
    //
    _w96(sdk::function<int32_t(struct rtl::user_process_parameters_t*)>*) destroy_process_parameters;
    
    // [RtlDestroyQueryDebugBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71060, 0x67960 bytes
    // ntdll.dll .text:0xd7460, 0x6fc38 bytes
    // ntdll.dll .text:0x26d0, 0x74648 bytes
    // ntdll.dll .text:0xd73d0, 0x6fc38 bytes
    //
    _w97(sdk::function<int32_t(struct rtl::debug_information_t*)>*) destroy_query_debug_buffer;
    
    // [RtlDetectHeapLeaks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7a20, 0x67960 bytes
    // ntdll.dll .text:0x64850, 0x6fc38 bytes
    // ntdll.dll .text:0x51a50, 0x74648 bytes
    // ntdll.dll .text:0x64970, 0x6fc38 bytes
    //
    _w98(sdk::function<void()>*) detect_heap_leaks;
    
    // [RtlDetermineDosPathNameType_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x17cf0, 0x67960 bytes
    // ntdll.dll .text:0x62a70, 0x6fc38 bytes
    // ntdll.dll .text:0x78c20, 0x74648 bytes
    // ntdll.dll .text:0x62b90, 0x6fc38 bytes
    //
    _w99(sdk::function<enum rtl::path_type_t(const wchar_t*)>*) determine_dos_path_name_type_u;
    
    // [RtlDetermineDosPathNameType_Ustr]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2c208, 0x67960 bytes
    // ntdll.dll .text:0x3a2cc, 0x6fc38 bytes
    // ntdll.dll .text:0x1d110, 0x74648 bytes
    // ntdll.dll .text:0x3a2cc, 0x6fc38 bytes
    //
    _x00(sdk::function<enum rtl::path_type_t(const nt::unicode_view*)>*) determine_dos_path_name_type_ustr;
    
    // [RtlDisableThreadProfiling]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0b40, 0x67960 bytes
    // ntdll.dll .text:0xcbc30, 0x6fc38 bytes
    // ntdll.dll .text:0xd6e50, 0x74648 bytes
    // ntdll.dll .text:0xcbbb0, 0x6fc38 bytes
    //
    _x01(sdk::function<int32_t(void*)>*) disable_thread_profiling;
    
    // [RtlDispatchAPC]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85240, 0x67960 bytes
    // ntdll.dll .text:0x7dde0, 0x6fc38 bytes
    // ntdll.dll .text:0x7f690, 0x74648 bytes
    // ntdll.dll .text:0x7df80, 0x6fc38 bytes
    //
    _x02(sdk::unknown_ptr) dispatch_apc;
    
    // [RtlDllShutdownInProgress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12ab0, 0x67960 bytes
    // ntdll.dll .text:0x45ce0, 0x6fc38 bytes
    // ntdll.dll .text:0x4fdd0, 0x74648 bytes
    // ntdll.dll .text:0x45ce0, 0x6fc38 bytes
    //
    _x03(sdk::function<uint8_t()>*) dll_shutdown_in_progress;
    
    // [RtlDnsHostNameToComputerName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7cda0, 0x67960 bytes
    // ntdll.dll .text:0x5f670, 0x6fc38 bytes
    // ntdll.dll .text:0x8c100, 0x74648 bytes
    // ntdll.dll .text:0x5f790, 0x6fc38 bytes
    //
    _x04(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, uint8_t)>*) dns_host_name_to_computer_name;
    
    // [RtlDoesFileExists_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89e40, 0x67960 bytes
    // ntdll.dll .text:0x84b10, 0x6fc38 bytes
    // ntdll.dll .text:0x89060, 0x74648 bytes
    // ntdll.dll .text:0x84cb0, 0x6fc38 bytes
    //
    _x05(sdk::function<uint8_t(const wchar_t*)>*) does_file_exists_u;
    
    // [RtlDoesFileExists_UEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1a6e8, 0x67960 bytes
    // ntdll.dll .text:0x52cb8, 0x6fc38 bytes
    // ntdll.dll .text:0x973c, 0x74648 bytes
    // ntdll.dll .text:0x52cb8, 0x6fc38 bytes
    //
    _x06(sdk::unknown_ptr) does_file_exists_u_ex;
    
    // [RtlDoesFileExists_UstrEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2d9a0, 0x67960 bytes
    // ntdll.dll .text:0x38310, 0x6fc38 bytes
    // ntdll.dll .text:0x1e298, 0x74648 bytes
    // ntdll.dll .text:0x38310, 0x6fc38 bytes
    //
    _x07(sdk::unknown_ptr) does_file_exists_ustr_ex;
    
    // [RtlDosApplyFileIsolationRedirection_Ustr]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2ae10, 0x67960 bytes
    // ntdll.dll .text:0x38b00, 0x6fc38 bytes
    // ntdll.dll .text:0x1b790, 0x74648 bytes
    // ntdll.dll .text:0x38b00, 0x6fc38 bytes
    //
    _x08(sdk::unknown_ptr) dos_apply_file_isolation_redirection_ustr;
    
    // [RtlDosPathNameToNtPathName_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ba90, 0x67960 bytes
    // ntdll.dll .text:0x3bc40, 0x6fc38 bytes
    // ntdll.dll .text:0x77d10, 0x74648 bytes
    // ntdll.dll .text:0x3bc40, 0x6fc38 bytes
    //
    _x09(sdk::function<uint8_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*) dos_path_name_to_nt_path_name_u;
    
    // [RtlDosPathNameToNtPathName_U_WithStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e4f0, 0x67960 bytes
    // ntdll.dll .text:0x3c4b0, 0x6fc38 bytes
    // ntdll.dll .text:0x77b60, 0x74648 bytes
    // ntdll.dll .text:0x3c4b0, 0x6fc38 bytes
    //
    _x10(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*) dos_path_name_to_nt_path_name_u_with_status;
    
    // [RtlDosPathNameToRelativeNtPathName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x36e80, 0x67960 bytes
    // ntdll.dll .text:0x61bd4, 0x6fc38 bytes
    // ntdll.dll .text:0x7baa8, 0x74648 bytes
    // ntdll.dll .text:0x61cf4, 0x6fc38 bytes
    //
    _x11(sdk::unknown_ptr) dos_path_name_to_relative_nt_path_name;
    
    // [RtlDosPathNameToRelativeNtPathName_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1d6d0, 0x67960 bytes
    // ntdll.dll .text:0x3c540, 0x6fc38 bytes
    // ntdll.dll .text:0x83b0, 0x74648 bytes
    // ntdll.dll .text:0x3c540, 0x6fc38 bytes
    //
    _x12(sdk::function<uint8_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*) dos_path_name_to_relative_nt_path_name_u;
    
    // [RtlDosPathNameToRelativeNtPathName_U_WithStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e590, 0x67960 bytes
    // ntdll.dll .text:0x39000, 0x6fc38 bytes
    // ntdll.dll .text:0x1bd40, 0x74648 bytes
    // ntdll.dll .text:0x39000, 0x6fc38 bytes
    //
    _x13(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, wchar_t**, struct rtl::relative_name_u_t*)>*) dos_path_name_to_relative_nt_path_name_u_with_status;
    
    // [RtlDosPathSeperatorsString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1090a0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c0a8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1310f0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c0a8, 0x6fc38 bytes
    //
    _x14(nt::unicode_view*) dos_path_seperators_string;
    
    // [RtlDosSearchPath_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x17d70, 0x67960 bytes
    // ntdll.dll .text:0x87d90, 0x6fc38 bytes
    // ntdll.dll .text:0x789f0, 0x74648 bytes
    // ntdll.dll .text:0x87f30, 0x6fc38 bytes
    //
    _x15(sdk::function<uint32_t(const wchar_t*, const wchar_t*, const wchar_t*, uint32_t, wchar_t*, wchar_t**)>*) dos_search_path_u;
    
    // [RtlDosSearchPath_Ustr]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2d420, 0x67960 bytes
    // ntdll.dll .text:0x37d60, 0x6fc38 bytes
    // ntdll.dll .text:0x1a5b0, 0x74648 bytes
    // ntdll.dll .text:0x37d60, 0x6fc38 bytes
    //
    _x16(sdk::function<int32_t(uint32_t, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, const nt::unicode_view**, uint64_t*, uint64_t*)>*) dos_search_path_ustr;
    
    // [RtlDumpResource]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4d70, 0x67960 bytes
    // ntdll.dll .text:0xe86a0, 0x6fc38 bytes
    // ntdll.dll .text:0xf35e0, 0x74648 bytes
    // ntdll.dll .text:0xe8610, 0x6fc38 bytes
    //
    _x17(sdk::unknown_ptr) dump_resource;
    
    // [RtlEnableEarlyCriticalSectionEventCreation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4dc0, 0x67960 bytes
    // ntdll.dll .text:0xe86f0, 0x6fc38 bytes
    // ntdll.dll .text:0xf3640, 0x74648 bytes
    // ntdll.dll .text:0xe8660, 0x6fc38 bytes
    //
    _x18(sdk::unknown_ptr) enable_early_critical_section_event_creation;
    
    // [RtlEnableThreadProfiling]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0bb0, 0x67960 bytes
    // ntdll.dll .text:0xcbca0, 0x6fc38 bytes
    // ntdll.dll .text:0xd6ec0, 0x74648 bytes
    // ntdll.dll .text:0xcbc20, 0x6fc38 bytes
    //
    _x19(sdk::function<int32_t(void*, uint32_t, uint64_t, void**)>*) enable_thread_profiling;
    
    // [RtlEncodePointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x763f0, 0x67960 bytes
    // ntdll.dll .text:0x718c0, 0x6fc38 bytes
    // ntdll.dll .text:0x73770, 0x74648 bytes
    // ntdll.dll .text:0x71a60, 0x6fc38 bytes
    //
    _x20(sdk::function<void*(void*)>*) encode_pointer;
    
    // [RtlEncodeRemotePointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd9b30, 0x67960 bytes
    // ntdll.dll .text:0xdc680, 0x6fc38 bytes
    // ntdll.dll .text:0xe6af0, 0x74648 bytes
    // ntdll.dll .text:0xdc5f0, 0x6fc38 bytes
    //
    _x21(sdk::function<int32_t(void*, void*, void**)>*) encode_remote_pointer;
    
    // [RtlEncodeSystemPointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88030, 0x67960 bytes
    // ntdll.dll .text:0x840c0, 0x6fc38 bytes
    // ntdll.dll .text:0x86a40, 0x74648 bytes
    // ntdll.dll .text:0x84260, 0x6fc38 bytes
    //
    _x22(sdk::function<void*(void*)>*) encode_system_pointer;
    
    // [RtlEnterCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30bf0, 0x67960 bytes
    // ntdll.dll .text:0x213a0, 0x6fc38 bytes
    // ntdll.dll .text:0x21d10, 0x74648 bytes
    // ntdll.dll .text:0x213a0, 0x6fc38 bytes
    //
    _x23(sdk::function<int32_t(struct rtl::critical_section_t*)>*) enter_critical_section;
    
    // [RtlEnterUmsSchedulingMode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed7a0, 0x67960 bytes
    // ntdll.dll .text:0xf6ac0, 0x6fc38 bytes
    // ntdll.dll .text:0x102c10, 0x74648 bytes
    // ntdll.dll .text:0xf6a70, 0x6fc38 bytes
    //
    _x24(sdk::unknown_ptr) enter_ums_scheduling_mode;
    
    // [RtlEnumProcessHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea060, 0x67960 bytes
    // ntdll.dll .text:0xf1db0, 0x6fc38 bytes
    // ntdll.dll .text:0xfd5b0, 0x74648 bytes
    // ntdll.dll .text:0xf1d60, 0x6fc38 bytes
    //
    _x25(sdk::function<int32_t(sdk::function<int32_t(void*, void*)>*, void*)>*) enum_process_heaps;
    
    // [RtlEqualComputerName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90980, 0x67960 bytes
    // ntdll.dll .text:0xeac10, 0x6fc38 bytes
    // ntdll.dll .text:0xf5cc0, 0x74648 bytes
    // ntdll.dll .text:0xeab80, 0x6fc38 bytes
    //
    _x26(sdk::function<uint8_t(nt::unicode_view*, nt::unicode_view*)>*) equal_computer_name;
    
    // [RtlEqualDomainName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa8a0, 0x67960 bytes
    // ntdll.dll .text:0x30990, 0x6fc38 bytes
    // ntdll.dll .text:0xd520, 0x74648 bytes
    // ntdll.dll .text:0x30990, 0x6fc38 bytes
    //
    _x27(sdk::function<uint8_t(nt::unicode_view*, nt::unicode_view*)>*) equal_domain_name;
    
    // [RtlEraseUnicodeString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8f710, 0x67960 bytes
    // ntdll.dll .text:0x84b70, 0x6fc38 bytes
    // ntdll.dll .text:0x890b0, 0x74648 bytes
    // ntdll.dll .text:0x84d10, 0x6fc38 bytes
    //
    _x28(sdk::function<void(nt::unicode_view*)>*) erase_unicode_string;
    
    // [RtlExecuteUmsThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed880, 0x67960 bytes
    // ntdll.dll .text:0xf6ba0, 0x6fc38 bytes
    // ntdll.dll .text:0x102bf0, 0x74648 bytes
    // ntdll.dll .text:0xf6b50, 0x6fc38 bytes
    //
    _x29(sdk::unknown_ptr) execute_ums_thread;
    
    // [RtlExitUserProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ce0, 0x67960 bytes
    // ntdll.dll .text:0x63ab0, 0x6fc38 bytes
    // ntdll.dll .text:0x51280, 0x74648 bytes
    // ntdll.dll .text:0x63bd0, 0x6fc38 bytes
    //
    _x30(sdk::function<void(int32_t)>*) exit_user_process;
    
    // [RtlExitUserThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x66bf0, 0x67960 bytes
    // ntdll.dll .text:0x4cef0, 0x6fc38 bytes
    // ntdll.dll .text:0x5dfb0, 0x74648 bytes
    // ntdll.dll .text:0x4cef0, 0x6fc38 bytes
    //
    _x31(sdk::function<void(int32_t)>*) exit_user_thread;
    
    // [RtlExpandEnvironmentStrings]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60c30, 0x67960 bytes
    // ntdll.dll .text:0x25670, 0x6fc38 bytes
    // ntdll.dll .text:0x59b10, 0x74648 bytes
    // ntdll.dll .text:0x25670, 0x6fc38 bytes
    //
    _x32(sdk::function<int32_t(void*, const wchar_t*, uint64_t, wchar_t*, uint64_t, uint64_t*)>*) expand_environment_strings;
    
    // [RtlExpandEnvironmentStrings_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60bb0, 0x67960 bytes
    // ntdll.dll .text:0x75cd0, 0x6fc38 bytes
    // ntdll.dll .text:0x59a90, 0x74648 bytes
    // ntdll.dll .text:0x75e70, 0x6fc38 bytes
    //
    _x33(sdk::function<int32_t(void*, nt::unicode_view*, nt::unicode_view*, uint32_t*)>*) expand_environment_strings_u;
    
    // [RtlExtendMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe4000, 0x67960 bytes
    // ntdll.dll .text:0x1a60, 0x6fc38 bytes
    // ntdll.dll .text:0xf5ad0, 0x74648 bytes
    // ntdll.dll .text:0x1a60, 0x6fc38 bytes
    //
    _x34(sdk::function<int32_t(void*, uint32_t)>*) extend_memory_block_lookaside;
    
    // [RtlExtendMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe4070, 0x67960 bytes
    // ntdll.dll .text:0x1a70, 0x6fc38 bytes
    // ntdll.dll .text:0xf5b50, 0x74648 bytes
    // ntdll.dll .text:0x1a70, 0x6fc38 bytes
    //
    _x35(sdk::unknown_ptr) extend_memory_zone;
    
    // [RtlFailedCriticalDebugAllocations]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ee8, 0x67960 bytes
    // ntdll.dll .data:0x169fec, 0x6fc38 bytes
    // ntdll.dll .data:0x183eac, 0x74648 bytes
    // ntdll.dll .data:0x16afec, 0x6fc38 bytes
    //
    _x36(sdk::unknown_ptr) failed_critical_debug_allocations;
    
    // [RtlFinalReleaseOutOfProcessMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b20, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _x37(sdk::unknown_ptr) final_release_out_of_process_memory_stream;
    
    // [RtlFindActivationContextSectionGuid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2a920, 0x67960 bytes
    // ntdll.dll .text:0x3aea0, 0x6fc38 bytes
    // ntdll.dll .text:0x1b5a0, 0x74648 bytes
    // ntdll.dll .text:0x3aea0, 0x6fc38 bytes
    //
    _x38(sdk::unknown_ptr) find_activation_context_section_guid;
    
    // [RtlFindActivationContextSectionString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2c6e0, 0x67960 bytes
    // ntdll.dll .text:0x3a7e0, 0x6fc38 bytes
    // ntdll.dll .text:0x1d600, 0x74648 bytes
    // ntdll.dll .text:0x3a7e0, 0x6fc38 bytes
    //
    _x39(sdk::unknown_ptr) find_activation_context_section_string;
    
    // [RtlFindCharInUnicodeString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2d050, 0x67960 bytes
    // ntdll.dll .text:0x3b4b0, 0x6fc38 bytes
    // ntdll.dll .text:0x1e050, 0x74648 bytes
    // ntdll.dll .text:0x3b4b0, 0x6fc38 bytes
    //
    _x40(sdk::function<int32_t(uint32_t, nt::unicode_view*, nt::unicode_view*, wchar_t*)>*) find_char_in_unicode_string;
    
    // [RtlFlsAlloc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1bda0, 0x67960 bytes
    // ntdll.dll .text:0x74210, 0x6fc38 bytes
    // ntdll.dll .text:0x74160, 0x74648 bytes
    // ntdll.dll .text:0x743b0, 0x6fc38 bytes
    //
    _x41(sdk::function<int32_t(sdk::function<void(void*)>*, uint32_t*)>*) fls_alloc;
    
    // [RtlFlsFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1c610, 0x67960 bytes
    // ntdll.dll .text:0x73020, 0x6fc38 bytes
    // ntdll.dll .text:0x71620, 0x74648 bytes
    // ntdll.dll .text:0x731c0, 0x6fc38 bytes
    //
    _x42(sdk::function<int32_t(uint32_t)>*) fls_free;
    
    // [RtlFlushHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x179d0, 0x67960 bytes
    // ntdll.dll .text:0x73930, 0x6fc38 bytes
    // ntdll.dll .text:0x77340, 0x74648 bytes
    // ntdll.dll .text:0x73ad0, 0x6fc38 bytes
    //
    _x43(sdk::function<void()>*) flush_heaps;
    
    // [RtlFlushSecureMemoryCache]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee1c0, 0x67960 bytes
    // ntdll.dll .text:0xf74b0, 0x6fc38 bytes
    // ntdll.dll .text:0x103080, 0x74648 bytes
    // ntdll.dll .text:0xf7460, 0x6fc38 bytes
    //
    _x44(sdk::function<uint8_t(void*, uint64_t)>*) flush_secure_memory_cache;
    
    // [RtlFreeActivationContextStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78780, 0x67960 bytes
    // ntdll.dll .text:0x6f780, 0x6fc38 bytes
    // ntdll.dll .text:0x738d0, 0x74648 bytes
    // ntdll.dll .text:0x6f920, 0x6fc38 bytes
    //
    _x45(sdk::unknown_ptr) free_activation_context_stack;
    
    // [RtlFreeHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6f020, 0x67960 bytes
    // ntdll.dll .text:0x58cf0, 0x6fc38 bytes
    // ntdll.dll .text:0x3eb0, 0x74648 bytes
    // ntdll.dll .text:0x58cf0, 0x6fc38 bytes
    //
    _x46(sdk::function<uint8_t(struct rtl::handle_table_t*, struct rtl::handle_table_entry_t*)>*) free_handle;
    
    // [RtlFreeMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll RT:0x1080f0, 0x67960 bytes
    // ntdll.dll RT:0x11a190, 0x6fc38 bytes
    // ntdll.dll RT:0x12f150, 0x74648 bytes
    // ntdll.dll RT:0x11b190, 0x6fc38 bytes
    //
    _x47(sdk::function<int32_t(void*, void*)>*) free_memory_block_lookaside;
    
    // [RtlFreeSid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b940, 0x67960 bytes
    // ntdll.dll .text:0x74750, 0x6fc38 bytes
    // ntdll.dll .text:0x76640, 0x74648 bytes
    // ntdll.dll .text:0x748f0, 0x6fc38 bytes
    //
    _x48(sdk::function<void*(void*)>*) free_sid;
    
    // [RtlFreeThreadActivationContextStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78740, 0x67960 bytes
    // ntdll.dll .text:0x6f740, 0x6fc38 bytes
    // ntdll.dll .text:0x73830, 0x74648 bytes
    // ntdll.dll .text:0x6f8e0, 0x6fc38 bytes
    //
    _x49(sdk::unknown_ptr) free_thread_activation_context_stack;
    
    // [RtlFreeUserStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x868b0, 0x67960 bytes
    // ntdll.dll .text:0x7e2b0, 0x6fc38 bytes
    // ntdll.dll .text:0x87340, 0x74648 bytes
    // ntdll.dll .text:0x7e450, 0x6fc38 bytes
    //
    _x50(sdk::function<int32_t(void*)>*) free_user_stack;
    
    // [RtlGetActiveActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfb30, 0x67960 bytes
    // ntdll.dll .text:0x30010, 0x6fc38 bytes
    // ntdll.dll .text:0x76d80, 0x74648 bytes
    // ntdll.dll .text:0x30010, 0x6fc38 bytes
    //
    _x51(sdk::unknown_ptr) get_active_activation_context;
    
    // [RtlGetAssemblyStorageRoot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1c89c, 0x67960 bytes
    // ntdll.dll .text:0x718f0, 0x6fc38 bytes
    // ntdll.dll .text:0x74ad0, 0x74648 bytes
    // ntdll.dll .text:0x71a90, 0x6fc38 bytes
    //
    _x52(sdk::unknown_ptr) get_assembly_storage_root;
    
    // [RtlGetCriticalSectionRecursionCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x752c0, 0x67960 bytes
    // ntdll.dll .text:0xe8720, 0x6fc38 bytes
    // ntdll.dll .text:0xf3670, 0x74648 bytes
    // ntdll.dll .text:0xe8690, 0x6fc38 bytes
    //
    _x53(sdk::function<uint32_t(struct rtl::critical_section_t*)>*) get_critical_section_recursion_count;
    
    // [RtlGetCurrentDirectory_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7aad0, 0x67960 bytes
    // ntdll.dll .text:0x60e80, 0x6fc38 bytes
    // ntdll.dll .text:0x7b680, 0x74648 bytes
    // ntdll.dll .text:0x60fa0, 0x6fc38 bytes
    //
    _x54(sdk::function<uint32_t(uint32_t, wchar_t*)>*) get_current_directory_u;
    
    // [RtlGetCurrentPeb]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90900, 0x67960 bytes
    // ntdll.dll .text:0xfc7c0, 0x6fc38 bytes
    // ntdll.dll .text:0x2d30, 0x74648 bytes
    // ntdll.dll .text:0xfc770, 0x6fc38 bytes
    //
    _x55(sdk::function<struct nt::peb_t*()>*) get_current_peb;
    
    // [RtlGetCurrentProcessorNumber]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5c80, 0x67960 bytes
    // ntdll.dll .text:0xa0a00, 0x6fc38 bytes
    // ntdll.dll .text:0xa3bd0, 0x74648 bytes
    // ntdll.dll .text:0xa09e0, 0x6fc38 bytes
    //
    _x56(sdk::function<uint32_t()>*) get_current_processor_number;
    
    // [RtlGetCurrentProcessorNumberEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5cb0, 0x67960 bytes
    // ntdll.dll .text:0xa0a40, 0x6fc38 bytes
    // ntdll.dll .text:0xa3c20, 0x74648 bytes
    // ntdll.dll .text:0xa0a20, 0x6fc38 bytes
    //
    _x57(sdk::function<void(struct nt::processor_number_t*)>*) get_current_processor_number_ex;
    
    // [RtlGetCurrentTransaction]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x781d0, 0x67960 bytes
    // ntdll.dll .text:0x6e6b0, 0x6fc38 bytes
    // ntdll.dll .text:0x70c70, 0x74648 bytes
    // ntdll.dll .text:0x6e7d0, 0x6fc38 bytes
    //
    _x58(sdk::function<void*()>*) get_current_transaction;
    
    // [RtlGetCurrentUmsThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x69fd0, 0x67960 bytes
    // ntdll.dll .text:0x58ec0, 0x6fc38 bytes
    // ntdll.dll .text:0x102c20, 0x74648 bytes
    // ntdll.dll .text:0x58ec0, 0x6fc38 bytes
    //
    _x59(sdk::unknown_ptr) get_current_ums_thread;
    
    // [RtlGetDeviceFamilyInfoEnum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7bd30, 0x67960 bytes
    // ntdll.dll .text:0x6bac0, 0x6fc38 bytes
    // ntdll.dll .text:0x78040, 0x74648 bytes
    // ntdll.dll .text:0x6bbe0, 0x6fc38 bytes
    //
    _x60(sdk::unknown_ptr) get_device_family_info_enum;
    
    // [RtlGetExePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86320, 0x67960 bytes
    // ntdll.dll .text:0x610c0, 0x6fc38 bytes
    // ntdll.dll .text:0x837a0, 0x74648 bytes
    // ntdll.dll .text:0x611e0, 0x6fc38 bytes
    //
    _x61(sdk::function<wchar_t*()>*) get_exe_path;
    
    // [RtlGetExtendedFeaturesMask]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x885f0, 0x67960 bytes
    // ntdll.dll .text:0xf55d0, 0x6fc38 bytes
    // ntdll.dll .text:0x101720, 0x74648 bytes
    // ntdll.dll .text:0xf5580, 0x6fc38 bytes
    //
    _x62(sdk::function<uint64_t(struct win::context_ex_t*)>*) get_extended_features_mask;
    
    // [RtlGetFileMUIPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x19ac0, 0x67960 bytes
    // ntdll.dll .text:0x50f00, 0x6fc38 bytes
    // ntdll.dll .text:0x9780, 0x74648 bytes
    // ntdll.dll .text:0x50f00, 0x6fc38 bytes
    //
    _x63(sdk::unknown_ptr) get_file_mui_path;
    
    // [RtlGetFrame]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1a70, 0x67960 bytes
    // ntdll.dll .text:0xcd910, 0x6fc38 bytes
    // ntdll.dll .text:0x880c0, 0x74648 bytes
    // ntdll.dll .text:0xcd890, 0x6fc38 bytes
    //
    _x64(sdk::function<struct nt::teb_active_frame_t*()>*) get_frame;
    
    // [RtlGetFullPathName_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1c870, 0x67960 bytes
    // ntdll.dll .text:0x80820, 0x6fc38 bytes
    // ntdll.dll .text:0x83830, 0x74648 bytes
    // ntdll.dll .text:0x809c0, 0x6fc38 bytes
    //
    _x65(sdk::function<uint32_t(const wchar_t*, uint32_t, wchar_t*, wchar_t**)>*) get_full_path_name_u;
    
    // [RtlGetFullPathName_UEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e460, 0x67960 bytes
    // ntdll.dll .text:0x3b920, 0x6fc38 bytes
    // ntdll.dll .text:0x195a0, 0x74648 bytes
    // ntdll.dll .text:0x3b920, 0x6fc38 bytes
    //
    _x66(sdk::function<int32_t(const wchar_t*, uint32_t, wchar_t*, wchar_t**, uint32_t*)>*) get_full_path_name_u_ex;
    
    // [RtlGetFullPathName_Ustr]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2b440, 0x67960 bytes
    // ntdll.dll .text:0x39550, 0x6fc38 bytes
    // ntdll.dll .text:0x1c2a0, 0x74648 bytes
    // ntdll.dll .text:0x39550, 0x6fc38 bytes
    //
    _x67(sdk::unknown_ptr) get_full_path_name_ustr;
    
    // [RtlGetFullPathName_UstrEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2a680, 0x67960 bytes
    // ntdll.dll .text:0x3b9b0, 0x6fc38 bytes
    // ntdll.dll .text:0x19630, 0x74648 bytes
    // ntdll.dll .text:0x3b9b0, 0x6fc38 bytes
    //
    _x68(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, nt::unicode_view**, uint64_t*, uint8_t*, enum rtl::path_type_t*, uint64_t*)>*) get_full_path_name_ustr_ex;
    
    // [RtlGetFunctionTableListHead]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89ef0, 0x67960 bytes
    // ntdll.dll .text:0xe0940, 0x6fc38 bytes
    // ntdll.dll .text:0xeb460, 0x74648 bytes
    // ntdll.dll .text:0xe08b0, 0x6fc38 bytes
    //
    _x69(sdk::function<nt::list_entry_t*()>*) get_function_table_list_head;
    
    // [RtlGetLastNtStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x888d0, 0x67960 bytes
    // ntdll.dll .text:0x7b530, 0x6fc38 bytes
    // ntdll.dll .text:0x80520, 0x74648 bytes
    // ntdll.dll .text:0x7b6d0, 0x6fc38 bytes
    //
    _x70(sdk::function<int32_t()>*) get_last_nt_status;
    
    // [RtlGetLastWin32Error]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88a60, 0x67960 bytes
    // ntdll.dll .text:0x19f0, 0x6fc38 bytes
    // ntdll.dll .text:0xae9e0, 0x74648 bytes
    // ntdll.dll .text:0x19f0, 0x6fc38 bytes
    //
    _x71(sdk::function<int32_t()>*) get_last_win32_error;
    
    // [RtlGetLengthWithoutLastFullDosOrNtPathElement]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6d730, 0x67960 bytes
    // ntdll.dll .text:0x76e20, 0x6fc38 bytes
    // ntdll.dll .text:0x776f0, 0x74648 bytes
    // ntdll.dll .text:0x76fc0, 0x6fc38 bytes
    //
    _x72(sdk::function<int32_t(uint32_t, nt::unicode_view*, uint32_t*)>*) get_length_without_last_full_dos_or_nt_path_element;
    
    // [RtlGetLengthWithoutTrailingPathSeperators]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8caa0, 0x67960 bytes
    // ntdll.dll .text:0x848e0, 0x6fc38 bytes
    // ntdll.dll .text:0x88260, 0x74648 bytes
    // ntdll.dll .text:0x84a80, 0x6fc38 bytes
    //
    _x73(sdk::function<int32_t(uint32_t, nt::unicode_view*, uint32_t*)>*) get_length_without_trailing_path_seperators;
    
    // [RtlGetLocaleFileMappingAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80a60, 0x67960 bytes
    // ntdll.dll .text:0x7b790, 0x6fc38 bytes
    // ntdll.dll .text:0x7f840, 0x74648 bytes
    // ntdll.dll .text:0x7b930, 0x6fc38 bytes
    //
    _x74(sdk::function<int32_t(void**, uint32_t*, int64_t*)>*) get_locale_file_mapping_address;
    
    // [RtlGetLongestNtPathLength]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x879a0, 0x67960 bytes
    // ntdll.dll .text:0x846a0, 0x6fc38 bytes
    // ntdll.dll .text:0x884d0, 0x74648 bytes
    // ntdll.dll .text:0x84840, 0x6fc38 bytes
    //
    _x75(sdk::function<uint32_t()>*) get_longest_nt_path_length;
    
    // [RtlGetNextUmsListItem]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeda20, 0x67960 bytes
    // ntdll.dll .text:0xf6da0, 0x6fc38 bytes
    // ntdll.dll .text:0x102c40, 0x74648 bytes
    // ntdll.dll .text:0xf6d50, 0x6fc38 bytes
    //
    _x76(sdk::unknown_ptr) get_next_ums_list_item;
    
    // [RtlGetNtVersionNumbers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83c40, 0x67960 bytes
    // ntdll.dll .text:0xd47d0, 0x6fc38 bytes
    // ntdll.dll .text:0xdf360, 0x74648 bytes
    // ntdll.dll .text:0xd4740, 0x6fc38 bytes
    //
    _x77(sdk::function<void(uint32_t*, uint32_t*, uint32_t*)>*) get_nt_version_numbers;
    
    // [RtlGetParentLocaleName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x21cb0, 0x67960 bytes
    // ntdll.dll .text:0x2e5e0, 0x6fc38 bytes
    // ntdll.dll .text:0x13e30, 0x74648 bytes
    // ntdll.dll .text:0x2e5e0, 0x6fc38 bytes
    //
    _x78(sdk::function<int32_t(const wchar_t*, nt::unicode_view*, uint32_t, uint8_t)>*) get_parent_locale_name;
    
    // [RtlGetProcessHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x909b0, 0x67960 bytes
    // ntdll.dll .text:0xf1dc0, 0x6fc38 bytes
    // ntdll.dll .text:0xfd5c0, 0x74648 bytes
    // ntdll.dll .text:0xf1d70, 0x6fc38 bytes
    //
    _x79(sdk::function<uint32_t(uint32_t, void**)>*) get_process_heaps;
    
    // [RtlGetProcessHeapsCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90990, 0x67960 bytes
    // ntdll.dll .text:0xf1e40, 0x6fc38 bytes
    // ntdll.dll .text:0xfd650, 0x74648 bytes
    // ntdll.dll .text:0xf1df0, 0x6fc38 bytes
    //
    _x80(sdk::unknown_ptr) get_process_heaps_callback;
    
    // [RtlGetProcessPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe6920, 0x67960 bytes
    // ntdll.dll .text:0x89430, 0x6fc38 bytes
    // ntdll.dll .text:0x8b8e0, 0x74648 bytes
    // ntdll.dll .text:0x895d0, 0x6fc38 bytes
    //
    _x81(sdk::unknown_ptr) get_process_preferred_ui_languages;
    
    // [RtlGetSearchPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86b30, 0x67960 bytes
    // ntdll.dll .text:0x61070, 0x6fc38 bytes
    // ntdll.dll .text:0x86210, 0x74648 bytes
    // ntdll.dll .text:0x61190, 0x6fc38 bytes
    //
    _x82(sdk::function<uint8_t(wchar_t**)>*) get_search_path;
    
    // [RtlGetSecurityDescriptorRMControl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86720, 0x67960 bytes
    // ntdll.dll .text:0x84890, 0x6fc38 bytes
    // ntdll.dll .text:0x88430, 0x74648 bytes
    // ntdll.dll .text:0x84a30, 0x6fc38 bytes
    //
    _x83(sdk::function<uint8_t(void*, uint8_t*)>*) get_security_descriptor_rm_control;
    
    // [RtlGetSystemPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c1d0, 0x67960 bytes
    // ntdll.dll .text:0x74fd0, 0x6fc38 bytes
    // ntdll.dll .text:0x81ba0, 0x74648 bytes
    // ntdll.dll .text:0x75170, 0x6fc38 bytes
    //
    _x84(sdk::unknown_ptr) get_system_preferred_ui_languages;
    
    // [RtlGetThreadErrorMode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7490, 0x67960 bytes
    // ntdll.dll .text:0x630f0, 0x6fc38 bytes
    // ntdll.dll .text:0xd9610, 0x74648 bytes
    // ntdll.dll .text:0x63210, 0x6fc38 bytes
    //
    _x85(sdk::function<uint32_t()>*) get_thread_error_mode;
    
    // [RtlGetThreadPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x23ad0, 0x67960 bytes
    // ntdll.dll .text:0x27dc0, 0x6fc38 bytes
    // ntdll.dll .text:0x11d50, 0x74648 bytes
    // ntdll.dll .text:0x27dc0, 0x6fc38 bytes
    //
    _x86(sdk::unknown_ptr) get_thread_preferred_ui_languages;
    
    // [RtlGetThreadWorkOnBehalfTicket]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50f80, 0x67960 bytes
    // ntdll.dll .text:0x6cf00, 0x6fc38 bytes
    // ntdll.dll .text:0x7e210, 0x74648 bytes
    // ntdll.dll .text:0x6d020, 0x6fc38 bytes
    //
    _x87(sdk::unknown_ptr) get_thread_work_on_behalf_ticket;
    
    // [RtlGetTickCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe0390, 0x67960 bytes
    // ntdll.dll .text:0xe5760, 0x6fc38 bytes
    // ntdll.dll .text:0xf03f0, 0x74648 bytes
    // ntdll.dll .text:0xe56d0, 0x6fc38 bytes
    //
    _x88(sdk::unknown_ptr) get_tick_count;
    
    // [RtlGetUILanguageInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe6af0, 0x67960 bytes
    // ntdll.dll .text:0xee910, 0x6fc38 bytes
    // ntdll.dll .text:0x89eb0, 0x74648 bytes
    // ntdll.dll .text:0xee8c0, 0x6fc38 bytes
    //
    _x89(sdk::unknown_ptr) get_ui_language_info;
    
    // [RtlGetUmsCompletionListEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeda50, 0x67960 bytes
    // ntdll.dll .text:0xf6dd0, 0x6fc38 bytes
    // ntdll.dll .text:0x102c50, 0x74648 bytes
    // ntdll.dll .text:0xf6d80, 0x6fc38 bytes
    //
    _x90(sdk::unknown_ptr) get_ums_completion_list_event;
    
    // [RtlGetUnloadEventTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2220, 0x67960 bytes
    // ntdll.dll .text:0xce520, 0x6fc38 bytes
    // ntdll.dll .text:0xda700, 0x74648 bytes
    // ntdll.dll .text:0xce4a0, 0x6fc38 bytes
    //
    _x91(sdk::function<struct rtl::unload_event_trace_t*()>*) get_unload_event_trace;
    
    // [RtlGetUnloadEventTraceEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89990, 0x67960 bytes
    // ntdll.dll .text:0xce530, 0x6fc38 bytes
    // ntdll.dll .text:0xda720, 0x74648 bytes
    // ntdll.dll .text:0xce4b0, 0x6fc38 bytes
    //
    _x92(sdk::function<void(uint32_t**, uint32_t**, void**)>*) get_unload_event_trace_ex;
    
    // [RtlGetUserInfoHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x735b0, 0x67960 bytes
    // ntdll.dll .text:0x8d00, 0x6fc38 bytes
    // ntdll.dll .text:0x75e60, 0x74648 bytes
    // ntdll.dll .text:0x8d00, 0x6fc38 bytes
    //
    _x93(sdk::function<uint8_t(void*, uint32_t, void*, void**, uint32_t*)>*) get_user_info_heap;
    
    // [RtlGetUserPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b450, 0x67960 bytes
    // ntdll.dll .text:0x7b180, 0x6fc38 bytes
    // ntdll.dll .text:0x80a30, 0x74648 bytes
    // ntdll.dll .text:0x7b320, 0x6fc38 bytes
    //
    _x94(sdk::unknown_ptr) get_user_preferred_ui_languages;
    
    // [RtlGrowFunctionTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdcf60, 0x67960 bytes
    // ntdll.dll .text:0xe0950, 0x6fc38 bytes
    // ntdll.dll .text:0xeb480, 0x74648 bytes
    // ntdll.dll .text:0xe08c0, 0x6fc38 bytes
    //
    _x95(sdk::unknown_ptr) grow_function_table;
    
    // [RtlGuardAllowSuppressedCalls]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x16425a, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f29a, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992b2, 0x74648 bytes
    // ntdll.dll .mrdata:0x18029a, 0x6fc38 bytes
    //
    _x96(sdk::unknown_ptr) guard_allow_suppressed_calls;
    
    // [RtlGuardCheckImageBase]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4e3e0, 0x67960 bytes
    // ntdll.dll .text:0x74518, 0x6fc38 bytes
    // ntdll.dll .text:0x73d68, 0x74648 bytes
    // ntdll.dll .text:0x746b8, 0x6fc38 bytes
    //
    _x97(sdk::unknown_ptr) guard_check_image_base;
    
    // [RtlGuardGrantSuppressedCallAccess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf09b4, 0x67960 bytes
    // ntdll.dll .text:0x530bc, 0x6fc38 bytes
    // ntdll.dll .text:0x10a300, 0x74648 bytes
    // ntdll.dll .text:0x530bc, 0x6fc38 bytes
    //
    _x98(sdk::unknown_ptr) guard_grant_suppressed_call_access;
    
    // [RtlHeapTrkInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ef20, 0x67960 bytes
    // ntdll.dll .text:0xfd370, 0x6fc38 bytes
    // ntdll.dll .text:0x10a8e0, 0x74648 bytes
    // ntdll.dll .text:0xfd320, 0x6fc38 bytes
    //
    _x99(sdk::unknown_ptr) heap_trk_initialize;
    
    // [RtlHpQuerySegmentHeapRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b86c, 0x67960 bytes
    // ntdll.dll .text:0xf1e60, 0x6fc38 bytes
    // ntdll.dll .text:0xfd670, 0x74648 bytes
    // ntdll.dll .text:0xf1e10, 0x6fc38 bytes
    //
    _y00(sdk::unknown_ptr) hp_query_segment_heap_routine;
    
    // [RtlImageNtHeaderEx_ExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf14c4, 0x67960 bytes
    // ntdll.dll .text:0xfe7e4, 0x6fc38 bytes
    // ntdll.dll .text:0x10bcb0, 0x74648 bytes
    // ntdll.dll .text:0xfe794, 0x6fc38 bytes
    //
    _y01(sdk::unknown_ptr) image_nt_header_ex_exception_filter;
    
    // [RtlImageRvaToSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46280, 0x67960 bytes
    // ntdll.dll .text:0x24b50, 0x6fc38 bytes
    // ntdll.dll .text:0x28df0, 0x74648 bytes
    // ntdll.dll .text:0x24b50, 0x6fc38 bytes
    //
    _y02(sdk::function<struct image::section_header_t*(struct image::nt_headers64_t*, void*, uint32_t)>*) image_rva_to_section;
    
    // [RtlImageRvaToVa]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81f40, 0x67960 bytes
    // ntdll.dll .text:0x85860, 0x6fc38 bytes
    // ntdll.dll .text:0xf5a50, 0x74648 bytes
    // ntdll.dll .text:0x85a00, 0x6fc38 bytes
    //
    _y03(sdk::function<void*(struct image::nt_headers64_t*, void*, uint32_t, struct image::section_header_t**)>*) image_rva_to_va;
    
    // [RtlImpersonateSelf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ee30, 0x67960 bytes
    // ntdll.dll .text:0x76710, 0x6fc38 bytes
    // ntdll.dll .text:0x78fe0, 0x74648 bytes
    // ntdll.dll .text:0x768b0, 0x6fc38 bytes
    //
    _y04(sdk::function<int32_t(enum sec::impersonation_level_t)>*) impersonate_self;
    
    // [RtlInitBarrier]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe5e80, 0x67960 bytes
    // ntdll.dll .text:0xed220, 0x6fc38 bytes
    // ntdll.dll .text:0xf8cf0, 0x74648 bytes
    // ntdll.dll .text:0xed190, 0x6fc38 bytes
    //
    _y05(sdk::function<int32_t(struct rtl::barrier_t*, uint32_t, uint32_t)>*) init_barrier;
    
    // [RtlInitMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b20, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _y06(sdk::unknown_ptr) init_memory_stream;
    
    // [RtlInitOutOfProcessMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b20, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _y07(sdk::unknown_ptr) init_out_of_process_memory_stream;
    
    // [RtlInitializeAtomPackage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0x9e3d0, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _y08(sdk::unknown_ptr) initialize_atom_package;
    
    // [RtlInitializeConditionVariable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73220, 0x67960 bytes
    // ntdll.dll .text:0x6c8e0, 0x6fc38 bytes
    // ntdll.dll .text:0x7f570, 0x74648 bytes
    // ntdll.dll .text:0x6ca00, 0x6fc38 bytes
    //
    _y09(sdk::function<void(struct rtl::condition_variable_t*)>*) initialize_condition_variable;
    
    // [RtlInitializeContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf14e0, 0x67960 bytes
    // ntdll.dll .text:0xfe800, 0x6fc38 bytes
    // ntdll.dll .text:0x10bcd0, 0x74648 bytes
    // ntdll.dll .text:0xfe7b0, 0x6fc38 bytes
    //
    _y10(sdk::function<void(void*, nt::context*, void*, void*, void*)>*) initialize_context;
    
    // [RtlInitializeCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6c680, 0x67960 bytes
    // ntdll.dll .text:0x636b0, 0x6fc38 bytes
    // ntdll.dll .text:0x5cfe0, 0x74648 bytes
    // ntdll.dll .text:0x637d0, 0x6fc38 bytes
    //
    _y11(sdk::function<int32_t(struct rtl::critical_section_t*)>*) initialize_critical_section;
    
    // [RtlInitializeCriticalSectionAndSpinCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6c5c0, 0x67960 bytes
    // ntdll.dll .text:0x65760, 0x6fc38 bytes
    // ntdll.dll .text:0x632e0, 0x74648 bytes
    // ntdll.dll .text:0x65880, 0x6fc38 bytes
    //
    _y12(sdk::function<int32_t(struct rtl::critical_section_t*, uint32_t)>*) initialize_critical_section_and_spin_count;
    
    // [RtlInitializeCriticalSectionEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12160, 0x67960 bytes
    // ntdll.dll .text:0xb910, 0x6fc38 bytes
    // ntdll.dll .text:0x5fc40, 0x74648 bytes
    // ntdll.dll .text:0xb910, 0x6fc38 bytes
    //
    _y13(sdk::function<int32_t(struct rtl::critical_section_t*, uint32_t, uint32_t)>*) initialize_critical_section_ex;
    
    // [RtlInitializeHandleTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x821e0, 0x67960 bytes
    // ntdll.dll .text:0x7e5e0, 0x6fc38 bytes
    // ntdll.dll .text:0x81990, 0x74648 bytes
    // ntdll.dll .text:0x7e780, 0x6fc38 bytes
    //
    _y14(sdk::function<void(uint32_t, uint32_t, struct rtl::handle_table_t*)>*) initialize_handle_table;
    
    // [RtlInitializeHeapManager]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73fb0, 0x67960 bytes
    // ntdll.dll .text:0xf1ec4, 0x6fc38 bytes
    // ntdll.dll .text:0xae438, 0x74648 bytes
    // ntdll.dll .text:0xf1e74, 0x6fc38 bytes
    //
    _y15(sdk::unknown_ptr) initialize_heap_manager;
    
    // [RtlInitializeNtUserPfn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96530, 0x67960 bytes
    // ntdll.dll .text:0x8af80, 0x6fc38 bytes
    // ntdll.dll .text:0x8e4a0, 0x74648 bytes
    // ntdll.dll .text:0x8b120, 0x6fc38 bytes
    //
    _y16(sdk::unknown_ptr) initialize_nt_user_pfn;
    
    // [RtlInitializeRXact]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ccc0, 0x67960 bytes
    // ntdll.dll .text:0x8a460, 0x6fc38 bytes
    // ntdll.dll .text:0x8d880, 0x74648 bytes
    // ntdll.dll .text:0x8a600, 0x6fc38 bytes
    //
    _y17(sdk::unknown_ptr) initialize_r_xact;
    
    // [RtlInitializeResource]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x11f20, 0x67960 bytes
    // ntdll.dll .text:0xb500, 0x6fc38 bytes
    // ntdll.dll .text:0x5f820, 0x74648 bytes
    // ntdll.dll .text:0xb500, 0x6fc38 bytes
    //
    _y18(sdk::function<void(struct rtl::resource_t*)>*) initialize_resource;
    
    // [RtlInitializeSListHead]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x77c50, 0x67960 bytes
    // ntdll.dll .text:0x6eec0, 0x6fc38 bytes
    // ntdll.dll .text:0x70cb0, 0x74648 bytes
    // ntdll.dll .text:0x6f060, 0x6fc38 bytes
    //
    _y19(sdk::unknown_ptr) initialize_s_list_head;
    
    // [RtlInitializeSRWLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73220, 0x67960 bytes
    // ntdll.dll .text:0x6c8e0, 0x6fc38 bytes
    // ntdll.dll .text:0x6e020, 0x74648 bytes
    // ntdll.dll .text:0x6ca00, 0x6fc38 bytes
    //
    _y20(sdk::function<void(struct rtl::srwlock_t*)>*) initialize_srw_lock;
    
    // [RtlInstallFunctionTableCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71ae0, 0x67960 bytes
    // ntdll.dll .text:0x69310, 0x6fc38 bytes
    // ntdll.dll .text:0x8c800, 0x74648 bytes
    // ntdll.dll .text:0x69430, 0x6fc38 bytes
    //
    _y21(sdk::unknown_ptr) install_function_table_callback;
    
    // [RtlInterlockedFlushSList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x77f30, 0x67960 bytes
    // ntdll.dll .text:0x6f030, 0x6fc38 bytes
    // ntdll.dll .text:0x72c50, 0x74648 bytes
    // ntdll.dll .text:0x6f1d0, 0x6fc38 bytes
    //
    _y22(sdk::unknown_ptr) interlocked_flush_s_list;
    
    // [RtlInterlockedPushEntrySList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6c970, 0x67960 bytes
    // ntdll.dll .text:0x6c8d0, 0x6fc38 bytes
    // ntdll.dll .text:0x6e990, 0x74648 bytes
    // ntdll.dll .text:0x6c9f0, 0x6fc38 bytes
    //
    _y23(sdk::unknown_ptr) interlocked_push_entry_s_list;
    
    // [RtlInterlockedPushListSListEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf17a0, 0x67960 bytes
    // ntdll.dll .text:0xfeac0, 0x6fc38 bytes
    // ntdll.dll .text:0xaeba0, 0x74648 bytes
    // ntdll.dll .text:0xfea70, 0x6fc38 bytes
    //
    _y24(sdk::unknown_ptr) interlocked_push_list_s_list_ex;
    
    // [RtlIsActivationContextActive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdc040, 0x67960 bytes
    // ntdll.dll .text:0xdf900, 0x6fc38 bytes
    // ntdll.dll .text:0xea150, 0x74648 bytes
    // ntdll.dll .text:0xdf870, 0x6fc38 bytes
    //
    _y25(sdk::unknown_ptr) is_activation_context_active;
    
    // [RtlIsAnyDebuggerPresent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf82a4, 0x67960 bytes
    // ntdll.dll .text:0xfebe0, 0x6fc38 bytes
    // ntdll.dll .text:0x10c080, 0x74648 bytes
    // ntdll.dll .text:0xfeb90, 0x6fc38 bytes
    //
    _y26(sdk::unknown_ptr) is_any_debugger_present;
    
    // [RtlIsCriticalSectionLocked]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4df0, 0x67960 bytes
    // ntdll.dll .text:0xe8750, 0x6fc38 bytes
    // ntdll.dll .text:0xae110, 0x74648 bytes
    // ntdll.dll .text:0xe86c0, 0x6fc38 bytes
    //
    _y27(sdk::function<uint32_t(struct rtl::critical_section_t*)>*) is_critical_section_locked;
    
    // [RtlIsCriticalSectionLockedByThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdcf0, 0x67960 bytes
    // ntdll.dll .text:0x3d150, 0x6fc38 bytes
    // ntdll.dll .text:0x2cea0, 0x74648 bytes
    // ntdll.dll .text:0x3d150, 0x6fc38 bytes
    //
    _y28(sdk::function<uint32_t(struct rtl::critical_section_t*)>*) is_critical_section_locked_by_thread;
    
    // [RtlIsCurrentThreadAttachExempt]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd56f0, 0x67960 bytes
    // ntdll.dll .text:0x9a460, 0x6fc38 bytes
    // ntdll.dll .text:0x9e0a0, 0x74648 bytes
    // ntdll.dll .text:0x9a600, 0x6fc38 bytes
    //
    _y29(sdk::function<uint8_t()>*) is_current_thread_attach_exempt;
    
    // [RtlIsDosDeviceName_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x802c0, 0x67960 bytes
    // ntdll.dll .text:0x3c4e0, 0x6fc38 bytes
    // ntdll.dll .text:0x7b1d0, 0x74648 bytes
    // ntdll.dll .text:0x3c4e0, 0x6fc38 bytes
    //
    _y30(sdk::function<uint32_t(const wchar_t*)>*) is_dos_device_name_u;
    
    // [RtlIsTextUnicode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x69b10, 0x67960 bytes
    // ntdll.dll .text:0x65280, 0x6fc38 bytes
    // ntdll.dll .text:0x5acd0, 0x74648 bytes
    // ntdll.dll .text:0x653a0, 0x6fc38 bytes
    //
    _y31(sdk::function<uint8_t(void*, uint32_t, uint32_t*)>*) is_text_unicode;
    
    // [RtlIsThreadWithinLoaderCallout]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86030, 0x67960 bytes
    // ntdll.dll .text:0x7c740, 0x6fc38 bytes
    // ntdll.dll .text:0x85b00, 0x74648 bytes
    // ntdll.dll .text:0x7c8e0, 0x6fc38 bytes
    //
    _y32(sdk::function<uint8_t()>*) is_thread_within_loader_callout;
    
    // [RtlIsValidHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6f740, 0x67960 bytes
    // ntdll.dll .text:0x589b0, 0x6fc38 bytes
    // ntdll.dll .text:0x3b80, 0x74648 bytes
    // ntdll.dll .text:0x589b0, 0x6fc38 bytes
    //
    _y33(sdk::function<uint8_t(struct rtl::handle_table_t*, struct rtl::handle_table_entry_t*)>*) is_valid_handle;
    
    // [RtlIsValidIndexHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6f700, 0x67960 bytes
    // ntdll.dll .text:0x58970, 0x6fc38 bytes
    // ntdll.dll .text:0x3b40, 0x74648 bytes
    // ntdll.dll .text:0x58970, 0x6fc38 bytes
    //
    _y34(sdk::function<uint8_t(struct rtl::handle_table_t*, uint32_t, struct rtl::handle_table_entry_t**)>*) is_valid_index_handle;
    
    // [RtlIsValidLocaleName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xefe70, 0x67960 bytes
    // ntdll.dll .text:0xfc8a0, 0x6fc38 bytes
    // ntdll.dll .text:0x109790, 0x74648 bytes
    // ntdll.dll .text:0xfc850, 0x6fc38 bytes
    //
    _y35(sdk::function<uint8_t(const wchar_t*, uint32_t)>*) is_valid_locale_name;
    
    // [RtlKnownExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89f00, 0x67960 bytes
    // ntdll.dll .text:0x100190, 0x6fc38 bytes
    // ntdll.dll .text:0x10d610, 0x74648 bytes
    // ntdll.dll .text:0x100140, 0x6fc38 bytes
    //
    _y36(sdk::function<int32_t(struct nt::exception_pointers_t*)>*) known_exception_filter;
    
    // [RtlLcidToLocaleName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x25a60, 0x67960 bytes
    // ntdll.dll .text:0x2d440, 0x6fc38 bytes
    // ntdll.dll .text:0x15fa0, 0x74648 bytes
    // ntdll.dll .text:0x2d440, 0x6fc38 bytes
    //
    _y37(sdk::function<int32_t(uint32_t, nt::unicode_view*, uint32_t, uint8_t)>*) lcid_to_locale_name;
    
    // [RtlLeaveCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30e60, 0x67960 bytes
    // ntdll.dll .text:0x1b720, 0x6fc38 bytes
    // ntdll.dll .text:0x271b0, 0x74648 bytes
    // ntdll.dll .text:0x1b720, 0x6fc38 bytes
    //
    _y38(sdk::function<int32_t(struct rtl::critical_section_t*)>*) leave_critical_section;
    
    // [RtlLocaleNameToLcid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x25d20, 0x67960 bytes
    // ntdll.dll .text:0x2dbe0, 0x6fc38 bytes
    // ntdll.dll .text:0x15780, 0x74648 bytes
    // ntdll.dll .text:0x2dbe0, 0x6fc38 bytes
    //
    _y39(sdk::function<int32_t(const wchar_t*, uint32_t*, uint32_t)>*) locale_name_to_lcid;
    
    // [RtlLocateLegacyContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85c50, 0x67960 bytes
    // ntdll.dll .text:0x805b0, 0x6fc38 bytes
    // ntdll.dll .text:0x85e30, 0x74648 bytes
    // ntdll.dll .text:0x80750, 0x6fc38 bytes
    //
    _y40(sdk::function<nt::context*(struct win::context_ex_t*, uint32_t*)>*) locate_legacy_context;
    
    // [RtlLockCurrentThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2260, 0x67960 bytes
    // ntdll.dll .text:0x82870, 0x6fc38 bytes
    // ntdll.dll .text:0x87040, 0x74648 bytes
    // ntdll.dll .text:0x82a10, 0x6fc38 bytes
    //
    _y41(sdk::function<int32_t()>*) lock_current_thread;
    
    // [RtlLockHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30f80, 0x67960 bytes
    // ntdll.dll .text:0x644c0, 0x6fc38 bytes
    // ntdll.dll .text:0x2a050, 0x74648 bytes
    // ntdll.dll .text:0x645e0, 0x6fc38 bytes
    //
    _y42(sdk::function<uint8_t(void*)>*) lock_heap;
    
    // [RtlLockHeapManagerForCloning]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea070, 0x67960 bytes
    // ntdll.dll .text:0xf20d4, 0x6fc38 bytes
    // ntdll.dll .text:0xfd760, 0x74648 bytes
    // ntdll.dll .text:0xf2084, 0x6fc38 bytes
    //
    _y43(sdk::unknown_ptr) lock_heap_manager_for_cloning;
    
    // [RtlLockMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x19d0, 0x67960 bytes
    // ntdll.dll .text:0x7fe50, 0x6fc38 bytes
    // ntdll.dll .text:0x522f0, 0x74648 bytes
    // ntdll.dll .text:0x7fff0, 0x6fc38 bytes
    //
    _y44(sdk::function<int32_t(void*)>*) lock_memory_block_lookaside;
    
    // [RtlLockMemoryStreamRegion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b30, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _y45(sdk::unknown_ptr) lock_memory_stream_region;
    
    // [RtlLockMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1a40, 0x67960 bytes
    // ntdll.dll .text:0x7fec0, 0x6fc38 bytes
    // ntdll.dll .text:0x52370, 0x74648 bytes
    // ntdll.dll .text:0x80060, 0x6fc38 bytes
    //
    _y46(sdk::function<int32_t(void*)>*) lock_memory_zone;
    
    // [RtlLockModuleSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1da0, 0x67960 bytes
    // ntdll.dll .text:0x80150, 0x6fc38 bytes
    // ntdll.dll .text:0x520c0, 0x74648 bytes
    // ntdll.dll .text:0x802f0, 0x6fc38 bytes
    //
    _y47(sdk::function<int32_t(void*)>*) lock_module_section;
    
    // [RtlLogStackBackTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf34e0, 0x67960 bytes
    // ntdll.dll .text:0x100960, 0x6fc38 bytes
    // ntdll.dll .text:0x10dde0, 0x74648 bytes
    // ntdll.dll .text:0x100910, 0x6fc38 bytes
    //
    _y48(sdk::unknown_ptr) log_stack_back_trace;
    
    // [RtlLogStackBackTraceEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x120d8, 0x67960 bytes
    // ntdll.dll .text:0xb8d0, 0x6fc38 bytes
    // ntdll.dll .text:0x5fc04, 0x74648 bytes
    // ntdll.dll .text:0xb8d0, 0x6fc38 bytes
    //
    _y49(sdk::unknown_ptr) log_stack_back_trace_ex;
    
    // [RtlLogStackTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf34f0, 0x67960 bytes
    // ntdll.dll .text:0x100970, 0x6fc38 bytes
    // ntdll.dll .text:0x10de00, 0x74648 bytes
    // ntdll.dll .text:0x100920, 0x6fc38 bytes
    //
    _y50(sdk::unknown_ptr) log_stack_trace;
    
    // [RtlMultiAppendUnicodeStringBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x777f0, 0x67960 bytes
    // ntdll.dll .text:0x3c850, 0x6fc38 bytes
    // ntdll.dll .text:0x6e9a0, 0x74648 bytes
    // ntdll.dll .text:0x3c850, 0x6fc38 bytes
    //
    _y51(sdk::unknown_ptr) multi_append_unicode_string_buffer;
    
    // [RtlMultipleAllocateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea190, 0x67960 bytes
    // ntdll.dll .text:0xf2220, 0x6fc38 bytes
    // ntdll.dll .text:0xfd8a0, 0x74648 bytes
    // ntdll.dll .text:0xf21d0, 0x6fc38 bytes
    //
    _y52(sdk::function<uint32_t(void*, uint32_t, uint64_t, uint32_t, void**)>*) multiple_allocate_heap;
    
    // [RtlMultipleFreeHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea210, 0x67960 bytes
    // ntdll.dll .text:0xf22a0, 0x6fc38 bytes
    // ntdll.dll .text:0xfd920, 0x74648 bytes
    // ntdll.dll .text:0xf2250, 0x6fc38 bytes
    //
    _y53(sdk::function<uint32_t(void*, uint32_t, uint32_t, void**)>*) multiple_free_heap;
    
    // [RtlNewInstanceSecurityObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5e50, 0x67960 bytes
    // ntdll.dll .text:0xd6bf0, 0x6fc38 bytes
    // ntdll.dll .text:0xe1b90, 0x74648 bytes
    // ntdll.dll .text:0xd6b60, 0x6fc38 bytes
    //
    _y54(sdk::function<int32_t(uint8_t, uint8_t, struct nt::luid_t*, struct nt::luid_t*, void*, void*, void**, uint8_t, void*, struct nt::generic_mapping_t*)>*) new_instance_security_object;
    
    // [RtlNewSecurityGrantedAccess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5f60, 0x67960 bytes
    // ntdll.dll .text:0xd6d20, 0x6fc38 bytes
    // ntdll.dll .text:0xe1cc0, 0x74648 bytes
    // ntdll.dll .text:0xd6c90, 0x6fc38 bytes
    //
    _y55(sdk::unknown_ptr) new_security_granted_access;
    
    // [RtlNewSecurityObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55770, 0x67960 bytes
    // ntdll.dll .text:0x87420, 0x6fc38 bytes
    // ntdll.dll .text:0x86260, 0x74648 bytes
    // ntdll.dll .text:0x875c0, 0x6fc38 bytes
    //
    _y56(sdk::function<int32_t(void*, void*, void**, uint8_t, void*, struct nt::generic_mapping_t*)>*) new_security_object;
    
    // [RtlNewSecurityObjectEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x56900, 0x67960 bytes
    // ntdll.dll .text:0x79170, 0x6fc38 bytes
    // ntdll.dll .text:0x7dae0, 0x74648 bytes
    // ntdll.dll .text:0x79310, 0x6fc38 bytes
    //
    _y57(sdk::function<int32_t(void*, void*, void**, struct nt::guid_t*, uint8_t, uint32_t, void*, struct nt::generic_mapping_t*)>*) new_security_object_ex;
    
    // [RtlNewSecurityObjectWithMultipleInheritance]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8f750, 0x67960 bytes
    // ntdll.dll .text:0x84c00, 0x6fc38 bytes
    // ntdll.dll .text:0xe1e10, 0x74648 bytes
    // ntdll.dll .text:0x84da0, 0x6fc38 bytes
    //
    _y58(sdk::function<int32_t(void*, void*, void**, struct nt::guid_t**, uint32_t, uint8_t, uint32_t, void*, struct nt::generic_mapping_t*)>*) new_security_object_with_multiple_inheritance;
    
    // [RtlNormalizeProcessParams]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8c9b0, 0x67960 bytes
    // ntdll.dll .text:0x87c00, 0x6fc38 bytes
    // ntdll.dll .text:0x87440, 0x74648 bytes
    // ntdll.dll .text:0x87da0, 0x6fc38 bytes
    //
    _y59(sdk::function<struct rtl::user_process_parameters_t*(struct rtl::user_process_parameters_t*)>*) normalize_process_params;
    
    // [RtlNtPathNameToDosPathName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1160, 0x67960 bytes
    // ntdll.dll .text:0xcc1e0, 0x6fc38 bytes
    // ntdll.dll .text:0xd73e0, 0x74648 bytes
    // ntdll.dll .text:0xcc160, 0x6fc38 bytes
    //
    _y60(sdk::unknown_ptr) nt_path_name_to_dos_path_name;
    
    // [RtlNtdllName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10a338, 0x67960 bytes
    // ntdll.dll .rdata:0x11d410, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132680, 0x74648 bytes
    // ntdll.dll .rdata:0x11d430, 0x6fc38 bytes
    //
    _y61(wchar_t**) ntdll_name;
    
    // [RtlOpenModernAppOptionsKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xddd50, 0x67960 bytes
    // ntdll.dll .text:0xe17d8, 0x6fc38 bytes
    // ntdll.dll .text:0xec358, 0x74648 bytes
    // ntdll.dll .text:0xe1748, 0x6fc38 bytes
    //
    _y62(sdk::unknown_ptr) open_modern_app_options_key;
    
    // [RtlPopFrame]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x726b0, 0x67960 bytes
    // ntdll.dll .text:0x6cee0, 0x6fc38 bytes
    // ntdll.dll .text:0x68250, 0x74648 bytes
    // ntdll.dll .text:0x6d000, 0x6fc38 bytes
    //
    _y63(sdk::function<void(struct nt::teb_active_frame_t*)>*) pop_frame;
    
    // [RtlPosixBarrier]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe5ea4, 0x67960 bytes
    // ntdll.dll .text:0xed248, 0x6fc38 bytes
    // ntdll.dll .text:0xf8d18, 0x74648 bytes
    // ntdll.dll .text:0xed1b8, 0x6fc38 bytes
    //
    _y64(sdk::unknown_ptr) posix_barrier;
    
    // [RtlPrepareForProcessCloning]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5730, 0x67960 bytes
    // ntdll.dll .text:0x9a4a0, 0x6fc38 bytes
    // ntdll.dll .text:0x9e0e0, 0x74648 bytes
    // ntdll.dll .text:0x9a640, 0x6fc38 bytes
    //
    _y65(sdk::unknown_ptr) prepare_for_process_cloning;
    
    // [RtlProcessFlsData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7db0, 0x67960 bytes
    // ntdll.dll .text:0x63dd0, 0x6fc38 bytes
    // ntdll.dll .text:0x51830, 0x74648 bytes
    // ntdll.dll .text:0x63ef0, 0x6fc38 bytes
    //
    _y66(sdk::unknown_ptr) process_fls_data;
    
    // [RtlProtectHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe8a0, 0x67960 bytes
    // ntdll.dll .text:0xdef0, 0x6fc38 bytes
    // ntdll.dll .text:0x49240, 0x74648 bytes
    // ntdll.dll .text:0xdef0, 0x6fc38 bytes
    //
    _y67(sdk::function<void(void*, uint8_t)>*) protect_heap;
    
    // [RtlPublishWnfStateData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82620, 0x67960 bytes
    // ntdll.dll .text:0x7b9b0, 0x6fc38 bytes
    // ntdll.dll .text:0x80540, 0x74648 bytes
    // ntdll.dll .text:0x7bb50, 0x6fc38 bytes
    //
    _y68(sdk::unknown_ptr) publish_wnf_state_data;
    
    // [RtlPushFrame]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x72680, 0x67960 bytes
    // ntdll.dll .text:0x6ce20, 0x6fc38 bytes
    // ntdll.dll .text:0x681a0, 0x74648 bytes
    // ntdll.dll .text:0x6cf40, 0x6fc38 bytes
    //
    _y69(sdk::function<void(struct nt::teb_active_frame_t*)>*) push_frame;
    
    // [RtlQueryActivationContextApplicationSettings]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80b30, 0x67960 bytes
    // ntdll.dll .text:0x79320, 0x6fc38 bytes
    // ntdll.dll .text:0x7d230, 0x74648 bytes
    // ntdll.dll .text:0x794c0, 0x6fc38 bytes
    //
    _y70(sdk::unknown_ptr) query_activation_context_application_settings;
    
    // [RtlQueryApplicationKeyOption]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7fe40, 0x67960 bytes
    // ntdll.dll .text:0x79b88, 0x6fc38 bytes
    // ntdll.dll .text:0x7d73c, 0x74648 bytes
    // ntdll.dll .text:0x79d28, 0x6fc38 bytes
    //
    _y71(sdk::unknown_ptr) query_application_key_option;
    
    // [RtlQueryCriticalSectionOwner]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4e10, 0x67960 bytes
    // ntdll.dll .text:0xe8770, 0x6fc38 bytes
    // ntdll.dll .text:0xf36a0, 0x74648 bytes
    // ntdll.dll .text:0xe86e0, 0x6fc38 bytes
    //
    _y72(sdk::function<void*(void*)>*) query_critical_section_owner;
    
    // [RtlQueryDepthSList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6c980, 0x67960 bytes
    // ntdll.dll .text:0x6cf80, 0x6fc38 bytes
    // ntdll.dll .text:0x6eb60, 0x74648 bytes
    // ntdll.dll .text:0x6d0a0, 0x6fc38 bytes
    //
    _y73(sdk::function<uint16_t(union nt::slist_header_t*)>*) query_depth_s_list;
    
    // [RtlQueryEnvironmentVariable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30800, 0x67960 bytes
    // ntdll.dll .text:0x24c80, 0x6fc38 bytes
    // ntdll.dll .text:0x1ed70, 0x74648 bytes
    // ntdll.dll .text:0x24c80, 0x6fc38 bytes
    //
    _y74(sdk::function<int32_t(void*, const wchar_t*, uint64_t, wchar_t*, uint64_t, uint64_t*)>*) query_environment_variable;
    
    // [RtlQueryEnvironmentVariable_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67a90, 0x67960 bytes
    // ntdll.dll .text:0x47ef0, 0x6fc38 bytes
    // ntdll.dll .text:0x58ee0, 0x74648 bytes
    // ntdll.dll .text:0x47ef0, 0x6fc38 bytes
    //
    _y75(sdk::function<int32_t(void*, nt::unicode_view*, nt::unicode_view*)>*) query_environment_variable_u;
    
    // [RtlQueryHeapInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81800, 0x67960 bytes
    // ntdll.dll .text:0x73950, 0x6fc38 bytes
    // ntdll.dll .text:0x8acc0, 0x74648 bytes
    // ntdll.dll .text:0x73af0, 0x6fc38 bytes
    //
    _y76(sdk::function<int32_t(void*, enum heap::information_class_t, void*, uint64_t, uint64_t*)>*) query_heap_information;
    
    // [RtlQueryInformationActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2dd00, 0x67960 bytes
    // ntdll.dll .text:0x3dcc0, 0x6fc38 bytes
    // ntdll.dll .text:0x33640, 0x74648 bytes
    // ntdll.dll .text:0x3dcc0, 0x6fc38 bytes
    //
    _y77(sdk::unknown_ptr) query_information_activation_context;
    
    // [RtlQueryInformationActiveActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84ba0, 0x67960 bytes
    // ntdll.dll .text:0x7d0a0, 0x6fc38 bytes
    // ntdll.dll .text:0x82be0, 0x74648 bytes
    // ntdll.dll .text:0x7d240, 0x6fc38 bytes
    //
    _y78(sdk::unknown_ptr) query_information_active_activation_context;
    
    // [RtlQueryInterfaceMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b40, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _y79(sdk::unknown_ptr) query_interface_memory_stream;
    
    // [RtlQueryPerformanceCounter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x621f0, 0x67960 bytes
    // ntdll.dll .text:0x2ff60, 0x6fc38 bytes
    // ntdll.dll .text:0x10b40, 0x74648 bytes
    // ntdll.dll .text:0x2ff60, 0x6fc38 bytes
    //
    _y80(sdk::function<uint32_t(int64_t*)>*) query_performance_counter;
    
    // [RtlQueryPerformanceFrequency]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78090, 0x67960 bytes
    // ntdll.dll .text:0x70060, 0x6fc38 bytes
    // ntdll.dll .text:0x77230, 0x74648 bytes
    // ntdll.dll .text:0x70200, 0x6fc38 bytes
    //
    _y81(sdk::function<uint32_t(int64_t*)>*) query_performance_frequency;
    
    // [RtlQueryProcessBackTraceInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6390, 0x67960 bytes
    // ntdll.dll .text:0xd74a0, 0x6fc38 bytes
    // ntdll.dll .text:0xe2160, 0x74648 bytes
    // ntdll.dll .text:0xd7410, 0x6fc38 bytes
    //
    _y82(sdk::unknown_ptr) query_process_back_trace_information;
    
    // [RtlQueryProcessDebugInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x700e0, 0x67960 bytes
    // ntdll.dll .text:0xd7630, 0x6fc38 bytes
    // ntdll.dll .text:0x1320, 0x74648 bytes
    // ntdll.dll .text:0xd75a0, 0x6fc38 bytes
    //
    _y83(sdk::function<int32_t(void*, uint32_t, struct rtl::debug_information_t*)>*) query_process_debug_information;
    
    // [RtlQueryProcessHeapInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x957b0, 0x67960 bytes
    // ntdll.dll .text:0xd7b10, 0x6fc38 bytes
    // ntdll.dll .text:0xe22f0, 0x74648 bytes
    // ntdll.dll .text:0xd7a80, 0x6fc38 bytes
    //
    _y84(sdk::unknown_ptr) query_process_heap_information;
    
    // [RtlQueryProcessLockInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6520, 0x67960 bytes
    // ntdll.dll .text:0xd7ef0, 0x6fc38 bytes
    // ntdll.dll .text:0xe2880, 0x74648 bytes
    // ntdll.dll .text:0xd7e60, 0x6fc38 bytes
    //
    _y85(sdk::unknown_ptr) query_process_lock_information;
    
    // [RtlQueryProcessModuleInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70314, 0x67960 bytes
    // ntdll.dll .text:0xd8190, 0x6fc38 bytes
    // ntdll.dll .text:0x14c0, 0x74648 bytes
    // ntdll.dll .text:0xd8100, 0x6fc38 bytes
    //
    _y86(sdk::unknown_ptr) query_process_module_information;
    
    // [RtlQueryProtectedPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84390, 0x67960 bytes
    // ntdll.dll .text:0x811a0, 0x6fc38 bytes
    // ntdll.dll .text:0x84610, 0x74648 bytes
    // ntdll.dll .text:0x81340, 0x6fc38 bytes
    //
    _y87(sdk::function<int32_t(struct nt::guid_t*, uint64_t*)>*) query_protected_policy;
    
    // [RtlQueryResourcePolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x123d0, 0x67960 bytes
    // ntdll.dll .text:0x9550, 0x6fc38 bytes
    // ntdll.dll .text:0x49df0, 0x74648 bytes
    // ntdll.dll .text:0x9550, 0x6fc38 bytes
    //
    _y88(sdk::unknown_ptr) query_resource_policy;
    
    // [RtlQuerySecurityObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd60a0, 0x67960 bytes
    // ntdll.dll .text:0xd6e50, 0x6fc38 bytes
    // ntdll.dll .text:0xe1e70, 0x74648 bytes
    // ntdll.dll .text:0xd6dc0, 0x6fc38 bytes
    //
    _y89(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*)>*) query_security_object;
    
    // [RtlQuerySystemTime]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f140, 0x67960 bytes
    // ntdll.dll .text:0x74fb0, 0x6fc38 bytes
    // ntdll.dll .text:0x776d0, 0x74648 bytes
    // ntdll.dll .text:0x75150, 0x6fc38 bytes
    //
    _y90(sdk::unknown_ptr) query_system_time;
    
    // [RtlQueryTagHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea280, 0x67960 bytes
    // ntdll.dll .text:0xf2310, 0x6fc38 bytes
    // ntdll.dll .text:0xfd990, 0x74648 bytes
    // ntdll.dll .text:0xf22c0, 0x6fc38 bytes
    //
    _y91(sdk::function<wchar_t*(void*, uint32_t, uint16_t, uint8_t, struct rtl::heap_tag_info_t*)>*) query_tag_heap;
    
    // [RtlQueryThreadProfiling]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0cb0, 0x67960 bytes
    // ntdll.dll .text:0xcbda0, 0x6fc38 bytes
    // ntdll.dll .text:0xd6fc0, 0x74648 bytes
    // ntdll.dll .text:0xcbd20, 0x6fc38 bytes
    //
    _y92(sdk::function<int32_t(void*, uint8_t*)>*) query_thread_profiling;
    
    // [RtlQueryUmsThreadInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xedab0, 0x67960 bytes
    // ntdll.dll .text:0xf6e30, 0x6fc38 bytes
    // ntdll.dll .text:0x102c60, 0x74648 bytes
    // ntdll.dll .text:0xf6de0, 0x6fc38 bytes
    //
    _y93(sdk::unknown_ptr) query_ums_thread_information;
    
    // [RtlQueryUnbiasedInterruptTime]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f0e0, 0x67960 bytes
    // ntdll.dll .text:0x5f570, 0x6fc38 bytes
    // ntdll.dll .text:0x67ab0, 0x74648 bytes
    // ntdll.dll .text:0x5f690, 0x6fc38 bytes
    //
    _y94(sdk::unknown_ptr) query_unbiased_interrupt_time;
    
    // [RtlQueryVolumeDiskSpeedPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8b350, 0x67960 bytes
    // ntdll.dll .text:0x8a29c, 0x6fc38 bytes
    // ntdll.dll .text:0x6276c, 0x74648 bytes
    // ntdll.dll .text:0x8a43c, 0x6fc38 bytes
    //
    _y95(sdk::unknown_ptr) query_volume_disk_speed_policy;
    
    // [RtlQueryWnfMetaNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88510, 0x67960 bytes
    // ntdll.dll .text:0x820d0, 0x6fc38 bytes
    // ntdll.dll .text:0x862b0, 0x74648 bytes
    // ntdll.dll .text:0x82270, 0x6fc38 bytes
    //
    _y96(sdk::unknown_ptr) query_wnf_meta_notification;
    
    // [RtlQueryWnfStateData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80e90, 0x67960 bytes
    // ntdll.dll .text:0x8960, 0x6fc38 bytes
    // ntdll.dll .text:0x5bad0, 0x74648 bytes
    // ntdll.dll .text:0x8960, 0x6fc38 bytes
    //
    _y97(sdk::unknown_ptr) query_wnf_state_data;
    
    // [RtlQueryWnfStateDataWithExplicitScope]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x863a0, 0x67960 bytes
    // ntdll.dll .text:0x82f80, 0x6fc38 bytes
    // ntdll.dll .text:0x87260, 0x74648 bytes
    // ntdll.dll .text:0x83120, 0x6fc38 bytes
    //
    _y98(sdk::unknown_ptr) query_wnf_state_data_with_explicit_scope;
    
    // [RtlQueueApcWow64Thread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd94c0, 0x67960 bytes
    // ntdll.dll .text:0xdbee0, 0x6fc38 bytes
    // ntdll.dll .text:0xe65b0, 0x74648 bytes
    // ntdll.dll .text:0xdbe50, 0x6fc38 bytes
    //
    _y99(sdk::function<int32_t(void*, sdk::function<void(void*, void*, void*)>*, void*, void*, void*)>*) queue_apc_wow64_thread;
    
    // [RtlQueueWorkItem]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4e5e0, 0x67960 bytes
    // ntdll.dll .text:0x42ee0, 0x6fc38 bytes
    // ntdll.dll .text:0x4cb30, 0x74648 bytes
    // ntdll.dll .text:0x42ee0, 0x6fc38 bytes
    //
    _z00(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint32_t)>*) queue_work_item;
    
    // [RtlReAllocateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x35930, 0x67960 bytes
    // ntdll.dll .text:0x1c9a0, 0x6fc38 bytes
    // ntdll.dll .text:0x422e0, 0x74648 bytes
    // ntdll.dll .text:0x1c9a0, 0x6fc38 bytes
    //
    _z01(sdk::function<void*(void*, uint32_t, void*, uint64_t)>*) re_allocate_heap;
    
    // [RtlReadMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b50, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _z02(sdk::unknown_ptr) read_memory_stream;
    
    // [RtlReadOutOfProcessMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b50, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _z03(sdk::unknown_ptr) read_out_of_process_memory_stream;
    
    // [RtlReadThreadProfilingData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0ce0, 0x67960 bytes
    // ntdll.dll .text:0xcbdd0, 0x6fc38 bytes
    // ntdll.dll .text:0xd6ff0, 0x74648 bytes
    // ntdll.dll .text:0xcbd50, 0x6fc38 bytes
    //
    _z04(sdk::function<int32_t(void*, uint32_t, struct win::performance_data_t*)>*) read_thread_profiling_data;
    
    // [RtlRegisterForWnfMetaNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86ad0, 0x67960 bytes
    // ntdll.dll .text:0x46e20, 0x6fc38 bytes
    // ntdll.dll .text:0x5b4b0, 0x74648 bytes
    // ntdll.dll .text:0x46e20, 0x6fc38 bytes
    //
    _z05(sdk::unknown_ptr) register_for_wnf_meta_notification;
    
    // [RtlRegisterSecureMemoryCacheCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee230, 0x67960 bytes
    // ntdll.dll .text:0xf7520, 0x6fc38 bytes
    // ntdll.dll .text:0x1030f0, 0x74648 bytes
    // ntdll.dll .text:0xf74d0, 0x6fc38 bytes
    //
    _z06(sdk::function<int32_t(sdk::function<int32_t(void*, uint64_t)>*)>*) register_secure_memory_cache_callback;
    
    // [RtlRegisterThreadWithCsrss]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81c20, 0x67960 bytes
    // ntdll.dll .text:0x7c630, 0x6fc38 bytes
    // ntdll.dll .text:0x80460, 0x74648 bytes
    // ntdll.dll .text:0x7c7d0, 0x6fc38 bytes
    //
    _z07(sdk::function<int32_t()>*) register_thread_with_csrss;
    
    // [RtlRegisterWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51990, 0x67960 bytes
    // ntdll.dll .text:0x42830, 0x6fc38 bytes
    // ntdll.dll .text:0x4d740, 0x74648 bytes
    // ntdll.dll .text:0x42830, 0x6fc38 bytes
    //
    _z08(sdk::function<int32_t(void**, void*, sdk::function<void(void*, uint8_t)>*, void*, uint32_t, uint32_t)>*) register_wait;
    
    // [RtlReleaseActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f6d0, 0x67960 bytes
    // ntdll.dll .text:0x40950, 0x6fc38 bytes
    // ntdll.dll .text:0x33eb0, 0x74648 bytes
    // ntdll.dll .text:0x40950, 0x6fc38 bytes
    //
    _z09(sdk::unknown_ptr) release_activation_context;
    
    // [RtlReleaseMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xe0ae0, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _z10(sdk::unknown_ptr) release_memory_stream;
    
    // [RtlReleasePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30400, 0x67960 bytes
    // ntdll.dll .text:0x62ed0, 0x6fc38 bytes
    // ntdll.dll .text:0x32e80, 0x74648 bytes
    // ntdll.dll .text:0x62ff0, 0x6fc38 bytes
    //
    _z11(sdk::unknown_ptr) release_path;
    
    // [RtlReleasePebLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2ef00, 0x67960 bytes
    // ntdll.dll .text:0x76a90, 0x6fc38 bytes
    // ntdll.dll .text:0x7d9b0, 0x74648 bytes
    // ntdll.dll .text:0x76c30, 0x6fc38 bytes
    //
    _z12(sdk::function<void()>*) release_peb_lock;
    
    // [RtlReleaseRelativeName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1e3d0, 0x67960 bytes
    // ntdll.dll .text:0x38440, 0x6fc38 bytes
    // ntdll.dll .text:0x2e940, 0x74648 bytes
    // ntdll.dll .text:0x38440, 0x6fc38 bytes
    //
    _z13(sdk::function<void(struct rtl::relative_name_u_t*)>*) release_relative_name;
    
    // [RtlReleaseResource]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6fde0, 0x67960 bytes
    // ntdll.dll .text:0x65b40, 0x6fc38 bytes
    // ntdll.dll .text:0x5abf0, 0x74648 bytes
    // ntdll.dll .text:0x65c60, 0x6fc38 bytes
    //
    _z14(sdk::function<void(struct rtl::resource_t*)>*) release_resource;
    
    // [RtlReleaseSRWLockExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x31a70, 0x67960 bytes
    // ntdll.dll .text:0x20b10, 0x6fc38 bytes
    // ntdll.dll .text:0x33d60, 0x74648 bytes
    // ntdll.dll .text:0x20b10, 0x6fc38 bytes
    //
    _z15(sdk::function<void(struct rtl::srwlock_t*)>*) release_srw_lock_exclusive;
    
    // [RtlReleaseSRWLockShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x45ed0, 0x67960 bytes
    // ntdll.dll .text:0x205f0, 0x6fc38 bytes
    // ntdll.dll .text:0x26e00, 0x74648 bytes
    // ntdll.dll .text:0x205f0, 0x6fc38 bytes
    //
    _z16(sdk::function<void(struct rtl::srwlock_t*)>*) release_srw_lock_shared;
    
    // [RtlReleaseStackTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf3510, 0x67960 bytes
    // ntdll.dll .text:0x100990, 0x6fc38 bytes
    // ntdll.dll .text:0x10de20, 0x74648 bytes
    // ntdll.dll .text:0x100940, 0x6fc38 bytes
    //
    _z17(sdk::unknown_ptr) release_stack_trace;
    
    // [RtlRemoteCall]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf1610, 0x67960 bytes
    // ntdll.dll .text:0xfe930, 0x6fc38 bytes
    // ntdll.dll .text:0x10be00, 0x74648 bytes
    // ntdll.dll .text:0xfe8e0, 0x6fc38 bytes
    //
    _z18(sdk::function<int32_t(void*, void*, void*, uint32_t, uint64_t*, uint8_t, uint8_t)>*) remote_call;
    
    // [RtlRemovePrivileges]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87780, 0x67960 bytes
    // ntdll.dll .text:0x87760, 0x6fc38 bytes
    // ntdll.dll .text:0x87910, 0x74648 bytes
    // ntdll.dll .text:0x87900, 0x6fc38 bytes
    //
    _z19(sdk::function<int32_t(void*, uint32_t*, uint32_t)>*) remove_privileges;
    
    // [RtlRemoveVectoredContinueHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7290, 0x67960 bytes
    // ntdll.dll .text:0xd9510, 0x6fc38 bytes
    // ntdll.dll .text:0xe3b90, 0x74648 bytes
    // ntdll.dll .text:0xd9480, 0x6fc38 bytes
    //
    _z20(sdk::function<uint32_t(void*)>*) remove_vectored_continue_handler;
    
    // [RtlRemoveVectoredExceptionHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85990, 0x67960 bytes
    // ntdll.dll .text:0x81620, 0x6fc38 bytes
    // ntdll.dll .text:0x85450, 0x74648 bytes
    // ntdll.dll .text:0x817c0, 0x6fc38 bytes
    //
    _z21(sdk::function<uint32_t(void*)>*) remove_vectored_exception_handler;
    
    // [RtlReplaceSystemDirectoryInPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70d50, 0x67960 bytes
    // ntdll.dll .text:0x86000, 0x6fc38 bytes
    // ntdll.dll .text:0x85f00, 0x74648 bytes
    // ntdll.dll .text:0x861a0, 0x6fc38 bytes
    //
    _z22(sdk::unknown_ptr) replace_system_directory_in_path;
    
    // [RtlReportCriticalFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf82cc, 0x67960 bytes
    // ntdll.dll .text:0xfecac, 0x6fc38 bytes
    // ntdll.dll .text:0x10c0fc, 0x74648 bytes
    // ntdll.dll .text:0xfec5c, 0x6fc38 bytes
    //
    _z23(sdk::unknown_ptr) report_critical_failure;
    
    // [RtlReportException]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x47f0, 0x67960 bytes
    // ntdll.dll .text:0xdc820, 0x6fc38 bytes
    // ntdll.dll .text:0xe6c90, 0x74648 bytes
    // ntdll.dll .text:0xdc790, 0x6fc38 bytes
    //
    _z24(sdk::function<int32_t(struct nt::exception_record_t*, nt::context*, uint32_t)>*) report_exception;
    
    // [RtlReportExceptionEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd9ba0, 0x67960 bytes
    // ntdll.dll .text:0xdc8f0, 0x6fc38 bytes
    // ntdll.dll .text:0xe6d60, 0x74648 bytes
    // ntdll.dll .text:0xdc860, 0x6fc38 bytes
    //
    _z25(sdk::function<int32_t(struct nt::exception_record_t*, nt::context*, uint32_t, int64_t*)>*) report_exception_ex;
    
    // [RtlReportExceptionHelper]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4bc8, 0x67960 bytes
    // ntdll.dll .text:0xdcdc0, 0x6fc38 bytes
    // ntdll.dll .text:0xe7250, 0x74648 bytes
    // ntdll.dll .text:0xdcd30, 0x6fc38 bytes
    //
    _z26(sdk::unknown_ptr) report_exception_helper;
    
    // [RtlReportSilentProcessExit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b80, 0x67960 bytes
    // ntdll.dll .text:0x63f70, 0x6fc38 bytes
    // ntdll.dll .text:0x513c0, 0x74648 bytes
    // ntdll.dll .text:0x64090, 0x6fc38 bytes
    //
    _z27(sdk::function<int32_t(void*, int32_t)>*) report_silent_process_exit;
    
    // [RtlReportSqmEscalation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd9f40, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xe76c0, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _z28(sdk::unknown_ptr) report_sqm_escalation;
    
    // [RtlResetMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe4010, 0x67960 bytes
    // ntdll.dll .text:0xeab40, 0x6fc38 bytes
    // ntdll.dll .text:0xf5af0, 0x74648 bytes
    // ntdll.dll .text:0xeaab0, 0x6fc38 bytes
    //
    _z29(sdk::function<int32_t(void*)>*) reset_memory_block_lookaside;
    
    // [RtlResetMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe4170, 0x67960 bytes
    // ntdll.dll .text:0xeaba0, 0x6fc38 bytes
    // ntdll.dll .text:0xf5c60, 0x74648 bytes
    // ntdll.dll .text:0xeab10, 0x6fc38 bytes
    //
    _z30(sdk::function<int32_t(void*)>*) reset_memory_zone;
    
    // [RtlResetNtUserPfn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96710, 0x67960 bytes
    // ntdll.dll .text:0x8b0a0, 0x6fc38 bytes
    // ntdll.dll .text:0x8e5c0, 0x74648 bytes
    // ntdll.dll .text:0x8b240, 0x6fc38 bytes
    //
    _z31(sdk::unknown_ptr) reset_nt_user_pfn;
    
    // [RtlResetStackOverflow]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdacd8, 0x67960 bytes
    // ntdll.dll .text:0xde584, 0x6fc38 bytes
    // ntdll.dll .text:0xe8a18, 0x74648 bytes
    // ntdll.dll .text:0xde4f4, 0x6fc38 bytes
    //
    _z32(sdk::unknown_ptr) reset_stack_overflow;
    
    // [RtlRetrieveNtUserPfn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96790, 0x67960 bytes
    // ntdll.dll .text:0x8b120, 0x6fc38 bytes
    // ntdll.dll .text:0x8e640, 0x74648 bytes
    // ntdll.dll .text:0x8b2c0, 0x6fc38 bytes
    //
    _z33(sdk::unknown_ptr) retrieve_nt_user_pfn;
    
    // [RtlRevertMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b60, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _z34(sdk::unknown_ptr) revert_memory_stream;
    
    // [RtlRunDecodeUnicodeString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8fcb0, 0x67960 bytes
    // ntdll.dll .text:0xe6900, 0x6fc38 bytes
    // ntdll.dll .text:0xf1930, 0x74648 bytes
    // ntdll.dll .text:0xe6870, 0x6fc38 bytes
    //
    _z35(sdk::function<void(uint8_t, nt::unicode_view*)>*) run_decode_unicode_string;
    
    // [RtlRunEncodeUnicodeString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8fad0, 0x67960 bytes
    // ntdll.dll .text:0xe6960, 0x6fc38 bytes
    // ntdll.dll .text:0xf1990, 0x74648 bytes
    // ntdll.dll .text:0xe68d0, 0x6fc38 bytes
    //
    _z36(sdk::function<void(uint8_t*, nt::unicode_view*)>*) run_encode_unicode_string;
    
    // [RtlSecureMemorySystemRangeStart]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151ac0, 0x67960 bytes
    // ntdll.dll .data:0x168cc0, 0x6fc38 bytes
    // ntdll.dll .data:0x182f60, 0x74648 bytes
    // ntdll.dll .data:0x169cd0, 0x6fc38 bytes
    //
    _z37(sdk::unknown_ptr) secure_memory_system_range_start;
    
    // [RtlSeekMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b70, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _z38(sdk::unknown_ptr) seek_memory_stream;
    
    // [RtlSendMsgToSm]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8d1c0, 0x67960 bytes
    // ntdll.dll .text:0x88810, 0x6fc38 bytes
    // ntdll.dll .text:0x88670, 0x74648 bytes
    // ntdll.dll .text:0x889b0, 0x6fc38 bytes
    //
    _z39(sdk::unknown_ptr) send_msg_to_sm;
    
    // [RtlSetAttributesSecurityDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe0fd0, 0x67960 bytes
    // ntdll.dll .text:0xe6a20, 0x6fc38 bytes
    // ntdll.dll .text:0xf1a40, 0x74648 bytes
    // ntdll.dll .text:0xe6990, 0x6fc38 bytes
    //
    _z40(sdk::function<int32_t(void*, uint16_t, uint32_t*)>*) set_attributes_security_descriptor;
    
    // [RtlSetCriticalSectionSpinCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30de0, 0x67960 bytes
    // ntdll.dll .text:0x71090, 0x6fc38 bytes
    // ntdll.dll .text:0x74970, 0x74648 bytes
    // ntdll.dll .text:0x71230, 0x6fc38 bytes
    //
    _z41(sdk::function<uint32_t(struct rtl::critical_section_t*, uint32_t)>*) set_critical_section_spin_count;
    
    // [RtlSetCurrentDirectory_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7a8b0, 0x67960 bytes
    // ntdll.dll .text:0x60c20, 0x6fc38 bytes
    // ntdll.dll .text:0x7b430, 0x74648 bytes
    // ntdll.dll .text:0x60d40, 0x6fc38 bytes
    //
    _z42(sdk::function<int32_t(nt::unicode_view*)>*) set_current_directory_u;
    
    // [RtlSetCurrentEnvironment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88920, 0x67960 bytes
    // ntdll.dll .text:0x8aac0, 0x6fc38 bytes
    // ntdll.dll .text:0x8df10, 0x74648 bytes
    // ntdll.dll .text:0x8ac60, 0x6fc38 bytes
    //
    _z43(sdk::function<int32_t(void*, void**)>*) set_current_environment;
    
    // [RtlSetCurrentTransaction]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73230, 0x67960 bytes
    // ntdll.dll .text:0x69f60, 0x6fc38 bytes
    // ntdll.dll .text:0x6b360, 0x74648 bytes
    // ntdll.dll .text:0x6a080, 0x6fc38 bytes
    //
    _z44(sdk::function<uint32_t(void*)>*) set_current_transaction;
    
    // [RtlSetEnvironmentStrings]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85070, 0x67960 bytes
    // ntdll.dll .text:0x81e30, 0x6fc38 bytes
    // ntdll.dll .text:0xd9310, 0x74648 bytes
    // ntdll.dll .text:0x81fd0, 0x6fc38 bytes
    //
    _z45(sdk::function<int32_t(const wchar_t*, uint64_t)>*) set_environment_strings;
    
    // [RtlSetEnvironmentVar]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67b50, 0x67960 bytes
    // ntdll.dll .text:0x481e0, 0x6fc38 bytes
    // ntdll.dll .text:0x14e20, 0x74648 bytes
    // ntdll.dll .text:0x481e0, 0x6fc38 bytes
    //
    _z46(sdk::function<int32_t(void**, const wchar_t*, uint64_t, const wchar_t*, uint64_t)>*) set_environment_var;
    
    // [RtlSetEnvironmentVariable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67b00, 0x67960 bytes
    // ntdll.dll .text:0x47f80, 0x6fc38 bytes
    // ntdll.dll .text:0x58f50, 0x74648 bytes
    // ntdll.dll .text:0x47f80, 0x6fc38 bytes
    //
    _z47(sdk::function<int32_t(void**, nt::unicode_view*, nt::unicode_view*)>*) set_environment_variable;
    
    // [RtlSetExtendedFeaturesMask]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x885c0, 0x67960 bytes
    // ntdll.dll .text:0xf5610, 0x6fc38 bytes
    // ntdll.dll .text:0x101760, 0x74648 bytes
    // ntdll.dll .text:0xf55c0, 0x6fc38 bytes
    //
    _z48(sdk::function<void(struct win::context_ex_t*, uint64_t)>*) set_extended_features_mask;
    
    // [RtlSetHeapDebuggingInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8f390, 0x67960 bytes
    // ntdll.dll .text:0xf24e8, 0x6fc38 bytes
    // ntdll.dll .text:0xfdccc, 0x74648 bytes
    // ntdll.dll .text:0xf2498, 0x6fc38 bytes
    //
    _z49(sdk::unknown_ptr) set_heap_debugging_information;
    
    // [RtlSetHeapInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f600, 0x67960 bytes
    // ntdll.dll .text:0x73760, 0x6fc38 bytes
    // ntdll.dll .text:0x7cb50, 0x74648 bytes
    // ntdll.dll .text:0x73900, 0x6fc38 bytes
    //
    _z50(sdk::function<int32_t(void*, enum heap::information_class_t, void*, uint64_t)>*) set_heap_information;
    
    // [RtlSetInformationAcl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe2db0, 0x67960 bytes
    // ntdll.dll .text:0xe9790, 0x6fc38 bytes
    // ntdll.dll .text:0xf4730, 0x74648 bytes
    // ntdll.dll .text:0xe9700, 0x6fc38 bytes
    //
    _z51(sdk::function<int32_t(struct nt::acl_t*, void*, uint32_t, enum win::acl_information_class_t)>*) set_information_acl;
    
    // [RtlSetIoCompletionCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8fde0, 0x67960 bytes
    // ntdll.dll .text:0x1125b0, 0x6fc38 bytes
    // ntdll.dll .text:0x1268a0, 0x74648 bytes
    // ntdll.dll .text:0x112750, 0x6fc38 bytes
    //
    _z52(sdk::function<int32_t(void*, sdk::function<void(uint32_t, void*, void*)>*, uint32_t)>*) set_io_completion_callback;
    
    // [RtlSetLastWin32Error]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60780, 0x67960 bytes
    // ntdll.dll .text:0x4a840, 0x6fc38 bytes
    // ntdll.dll .text:0x53970, 0x74648 bytes
    // ntdll.dll .text:0x4a840, 0x6fc38 bytes
    //
    _z53(sdk::function<void(int32_t)>*) set_last_win32_error;
    
    // [RtlSetLastWin32ErrorAndNtStatusFromNtStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60760, 0x67960 bytes
    // ntdll.dll .text:0x4a820, 0x6fc38 bytes
    // ntdll.dll .text:0x537b0, 0x74648 bytes
    // ntdll.dll .text:0x4a820, 0x6fc38 bytes
    //
    _z54(sdk::function<void(int32_t)>*) set_last_win32_error_and_nt_status_from_nt_status;
    
    // [RtlSetLFHDebuggingInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfced4, 0x67960 bytes
    // ntdll.dll .text:0x10b0b8, 0x6fc38 bytes
    // ntdll.dll .text:0x11898c, 0x74648 bytes
    // ntdll.dll .text:0x10b048, 0x6fc38 bytes
    //
    _z55(sdk::unknown_ptr) set_lfh_debugging_information;
    
    // [RtlSetLowFragHeapGlobalFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89564, 0x67960 bytes
    // ntdll.dll .text:0xf25b8, 0x6fc38 bytes
    // ntdll.dll .text:0xae614, 0x74648 bytes
    // ntdll.dll .text:0xf2568, 0x6fc38 bytes
    //
    _z56(sdk::unknown_ptr) set_low_frag_heap_global_flags;
    
    // [RtlSetMemoryStreamSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b80, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _z57(sdk::unknown_ptr) set_memory_stream_size;
    
    // [RtlSetProcessDebugInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd67d0, 0x67960 bytes
    // ntdll.dll .text:0xd8290, 0x6fc38 bytes
    // ntdll.dll .text:0xe2b20, 0x74648 bytes
    // ntdll.dll .text:0xd8200, 0x6fc38 bytes
    //
    _z58(sdk::function<int32_t(void*, uint32_t, struct rtl::debug_information_t*)>*) set_process_debug_information;
    
    // [RtlSetProcessIsCritical]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8d7d0, 0x67960 bytes
    // ntdll.dll .text:0x8a9a0, 0x6fc38 bytes
    // ntdll.dll .text:0x8dd40, 0x74648 bytes
    // ntdll.dll .text:0x8ab40, 0x6fc38 bytes
    //
    _z59(sdk::unknown_ptr) set_process_is_critical;
    
    // [RtlSetProcessPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88640, 0x67960 bytes
    // ntdll.dll .text:0x88670, 0x6fc38 bytes
    // ntdll.dll .text:0x6fba0, 0x74648 bytes
    // ntdll.dll .text:0x88810, 0x6fc38 bytes
    //
    _z60(sdk::unknown_ptr) set_process_preferred_ui_languages;
    
    // [RtlSetProtectedPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x827f0, 0x67960 bytes
    // ntdll.dll .text:0x7f910, 0x6fc38 bytes
    // ntdll.dll .text:0x82820, 0x74648 bytes
    // ntdll.dll .text:0x7fab0, 0x6fc38 bytes
    //
    _z61(sdk::function<int32_t(struct nt::guid_t*, uint64_t, uint64_t*)>*) set_protected_policy;
    
    // [RtlSetSearchPathMode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87f60, 0x67960 bytes
    // ntdll.dll .text:0x7e640, 0x6fc38 bytes
    // ntdll.dll .text:0x2000, 0x74648 bytes
    // ntdll.dll .text:0x7e7e0, 0x6fc38 bytes
    //
    _z62(sdk::function<int32_t(uint32_t)>*) set_search_path_mode;
    
    // [RtlSetSecurityDescriptorRMControl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x889f0, 0x67960 bytes
    // ntdll.dll .text:0x847e0, 0x6fc38 bytes
    // ntdll.dll .text:0x882c0, 0x74648 bytes
    // ntdll.dll .text:0x84980, 0x6fc38 bytes
    //
    _z63(sdk::function<void(void*, uint8_t*)>*) set_security_descriptor_rm_control;
    
    // [RtlSetSecurityObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55740, 0x67960 bytes
    // ntdll.dll .text:0x75640, 0x6fc38 bytes
    // ntdll.dll .text:0x79e00, 0x74648 bytes
    // ntdll.dll .text:0x757e0, 0x6fc38 bytes
    //
    _z64(sdk::function<int32_t(uint32_t, void*, void**, struct nt::generic_mapping_t*, void*)>*) set_security_object;
    
    // [RtlSetSecurityObjectEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x907b0, 0x67960 bytes
    // ntdll.dll .text:0xd7160, 0x6fc38 bytes
    // ntdll.dll .text:0x8c660, 0x74648 bytes
    // ntdll.dll .text:0xd70d0, 0x6fc38 bytes
    //
    _z65(sdk::function<int32_t(uint32_t, void*, void**, uint32_t, struct nt::generic_mapping_t*, void*)>*) set_security_object_ex;
    
    // [RtlSetThreadErrorMode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c3e0, 0x67960 bytes
    // ntdll.dll .text:0x473f0, 0x6fc38 bytes
    // ntdll.dll .text:0x57a60, 0x74648 bytes
    // ntdll.dll .text:0x473f0, 0x6fc38 bytes
    //
    _z66(sdk::function<int32_t(uint32_t, uint32_t*)>*) set_thread_error_mode;
    
    // [RtlSetThreadIsCritical]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8cc40, 0x67960 bytes
    // ntdll.dll .text:0x87fc0, 0x6fc38 bytes
    // ntdll.dll .text:0x880e0, 0x74648 bytes
    // ntdll.dll .text:0x88160, 0x6fc38 bytes
    //
    _z67(sdk::unknown_ptr) set_thread_is_critical;
    
    // [RtlSetThreadPoolStartFunc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0x87aa0, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _z68(sdk::function<int32_t(sdk::function<int32_t(sdk::function<uint32_t(void*)>*, void*, void**)>*, sdk::function<int32_t(int32_t)>*)>*) set_thread_pool_start_func;
    
    // [RtlSetThreadPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x22f20, 0x67960 bytes
    // ntdll.dll .text:0x6a260, 0x6fc38 bytes
    // ntdll.dll .text:0x6feb0, 0x74648 bytes
    // ntdll.dll .text:0x6a380, 0x6fc38 bytes
    //
    _z69(sdk::unknown_ptr) set_thread_preferred_ui_languages;
    
    // [RtlSetThreadSubProcessTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f3c0, 0x67960 bytes
    // ntdll.dll .text:0x3f460, 0x6fc38 bytes
    // ntdll.dll .text:0x4ef80, 0x74648 bytes
    // ntdll.dll .text:0x3f460, 0x6fc38 bytes
    //
    _z70(sdk::unknown_ptr) set_thread_sub_process_tag;
    
    // [RtlSetThreadWorkOnBehalfTicket]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f350, 0x67960 bytes
    // ntdll.dll .text:0x3f3f0, 0x6fc38 bytes
    // ntdll.dll .text:0x4ef10, 0x74648 bytes
    // ntdll.dll .text:0x3f3f0, 0x6fc38 bytes
    //
    _z71(sdk::unknown_ptr) set_thread_work_on_behalf_ticket;
    
    // [RtlSetTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff780, 0x67960 bytes
    // ntdll.dll .text:0x1125a0, 0x6fc38 bytes
    // ntdll.dll .text:0x126890, 0x74648 bytes
    // ntdll.dll .text:0x112740, 0x6fc38 bytes
    //
    _z72(sdk::unknown_ptr) set_timer;
    
    // [RtlSetUmsThreadInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xedb60, 0x67960 bytes
    // ntdll.dll .text:0xf6ed0, 0x6fc38 bytes
    // ntdll.dll .text:0x102c70, 0x74648 bytes
    // ntdll.dll .text:0xf6e80, 0x6fc38 bytes
    //
    _z73(sdk::unknown_ptr) set_ums_thread_information;
    
    // [RtlSetUnhandledExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x763d0, 0x67960 bytes
    // ntdll.dll .text:0x7e5a0, 0x6fc38 bytes
    // ntdll.dll .text:0x81f50, 0x74648 bytes
    // ntdll.dll .text:0x7e740, 0x6fc38 bytes
    //
    _z74(sdk::function<void(sdk::function<uint32_t(struct nt::exception_pointers_t*)>*)>*) set_unhandled_exception_filter;
    
    // [RtlSetUserFlagsHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea450, 0x67960 bytes
    // ntdll.dll .text:0xf26b0, 0x6fc38 bytes
    // ntdll.dll .text:0xfde70, 0x74648 bytes
    // ntdll.dll .text:0xf2660, 0x6fc38 bytes
    //
    _z75(sdk::function<uint8_t(void*, uint32_t, void*, uint32_t, uint32_t)>*) set_user_flags_heap;
    
    // [RtlSetUserValueHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73950, 0x67960 bytes
    // ntdll.dll .text:0xba60, 0x6fc38 bytes
    // ntdll.dll .text:0x76290, 0x74648 bytes
    // ntdll.dll .text:0xba60, 0x6fc38 bytes
    //
    _z76(sdk::function<uint8_t(void*, uint32_t, void*, void*)>*) set_user_value_heap;
    
    // [RtlSidEqualLevel]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe1000, 0x67960 bytes
    // ntdll.dll .text:0xe6a50, 0x6fc38 bytes
    // ntdll.dll .text:0xf1a70, 0x74648 bytes
    // ntdll.dll .text:0xe69c0, 0x6fc38 bytes
    //
    _z77(sdk::function<int32_t(void*, void*, uint8_t*)>*) sid_equal_level;
    
    // [RtlSidIsHigherLevel]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe1090, 0x67960 bytes
    // ntdll.dll .text:0xe6ae0, 0x6fc38 bytes
    // ntdll.dll .text:0xf1b00, 0x74648 bytes
    // ntdll.dll .text:0xe6a50, 0x6fc38 bytes
    //
    _z78(sdk::function<int32_t(void*, void*, uint8_t*)>*) sid_is_higher_level;
    
    // [RtlSleepConditionVariableCS]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6b140, 0x67960 bytes
    // ntdll.dll .text:0x650c0, 0x6fc38 bytes
    // ntdll.dll .text:0x69280, 0x74648 bytes
    // ntdll.dll .text:0x651e0, 0x6fc38 bytes
    //
    _z79(sdk::function<int32_t(struct rtl::condition_variable_t*, struct rtl::critical_section_t*, int64_t*)>*) sleep_condition_variable_cs;
    
    // [RtlSleepConditionVariableSRW]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6afb0, 0x67960 bytes
    // ntdll.dll .text:0x64e20, 0x6fc38 bytes
    // ntdll.dll .text:0x69700, 0x74648 bytes
    // ntdll.dll .text:0x64f40, 0x6fc38 bytes
    //
    _z80(sdk::function<int32_t(struct rtl::condition_variable_t*, struct rtl::srwlock_t*, int64_t*, uint32_t)>*) sleep_condition_variable_srw;
    
    // [RtlStackDbContextSerialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102288, 0x67960 bytes
    // ntdll.dll .text:0x117ccc, 0x6fc38 bytes
    // ntdll.dll .text:0x12be40, 0x74648 bytes
    // ntdll.dll .text:0x117e6c, 0x6fc38 bytes
    //
    _z81(sdk::unknown_ptr) stack_db_context_serialize;
    
    // [RtlStackDbStackAdd]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102644, 0x67960 bytes
    // ntdll.dll .text:0x118018, 0x6fc38 bytes
    // ntdll.dll .text:0x12c1b4, 0x74648 bytes
    // ntdll.dll .text:0x1181b8, 0x6fc38 bytes
    //
    _z82(sdk::unknown_ptr) stack_db_stack_add;
    
    // [RtlStackDbStackRemove]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102c98, 0x67960 bytes
    // ntdll.dll .text:0x1185f0, 0x6fc38 bytes
    // ntdll.dll .text:0x12c780, 0x74648 bytes
    // ntdll.dll .text:0x118790, 0x6fc38 bytes
    //
    _z83(sdk::unknown_ptr) stack_db_stack_remove;
    
    // [RtlStartRXact]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82d90, 0x67960 bytes
    // ntdll.dll .text:0x80600, 0x6fc38 bytes
    // ntdll.dll .text:0x80cf0, 0x74648 bytes
    // ntdll.dll .text:0x807a0, 0x6fc38 bytes
    //
    _z84(sdk::unknown_ptr) start_r_xact;
    
    // [RtlStatMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b90, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _z85(sdk::unknown_ptr) stat_memory_stream;
    
    // [RtlStdDeleteStackDatabase]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf3540, 0x67960 bytes
    // ntdll.dll .text:0x1009c0, 0x6fc38 bytes
    // ntdll.dll .text:0x10de50, 0x74648 bytes
    // ntdll.dll .text:0x100970, 0x6fc38 bytes
    //
    _z86(sdk::unknown_ptr) std_delete_stack_database;
    
    // [RtlSubscribeWnfStateChangeNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x148c0, 0x67960 bytes
    // ntdll.dll .text:0x97a0, 0x6fc38 bytes
    // ntdll.dll .text:0x5bba0, 0x74648 bytes
    // ntdll.dll .text:0x97a0, 0x6fc38 bytes
    //
    _z87(sdk::unknown_ptr) subscribe_wnf_state_change_notification;
    
    // [RtlSwitchedVVI]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x119b0, 0x67960 bytes
    // ntdll.dll .text:0x2ed80, 0x6fc38 bytes
    // ntdll.dll .text:0x49ee0, 0x74648 bytes
    // ntdll.dll .text:0x2ed80, 0x6fc38 bytes
    //
    _z88(sdk::unknown_ptr) switched_vvi;
    
    // [RtlTestAndPublishWnfStateData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87380, 0x67960 bytes
    // ntdll.dll .text:0x83c70, 0x6fc38 bytes
    // ntdll.dll .text:0x864a0, 0x74648 bytes
    // ntdll.dll .text:0x83e10, 0x6fc38 bytes
    //
    _z89(sdk::unknown_ptr) test_and_publish_wnf_state_data;
    
    // [RtlTpETWCallbackDequeue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x24d0, 0x67960 bytes
    // ntdll.dll .text:0x112e7c, 0x6fc38 bytes
    // ntdll.dll .text:0x126e68, 0x74648 bytes
    // ntdll.dll .text:0x11301c, 0x6fc38 bytes
    //
    _z90(sdk::unknown_ptr) tp_etw_callback_dequeue;
    
    // [RtlTryAcquirePebLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x167f0, 0x67960 bytes
    // ntdll.dll .text:0xe4a0, 0x6fc38 bytes
    // ntdll.dll .text:0x47980, 0x74648 bytes
    // ntdll.dll .text:0xe4a0, 0x6fc38 bytes
    //
    _z91(sdk::function<uint32_t()>*) try_acquire_peb_lock;
    
    // [RtlTryAcquireSRWLockExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x537e0, 0x67960 bytes
    // ntdll.dll .text:0x81370, 0x6fc38 bytes
    // ntdll.dll .text:0x75cc0, 0x74648 bytes
    // ntdll.dll .text:0x81510, 0x6fc38 bytes
    //
    _z92(sdk::function<uint8_t(struct rtl::srwlock_t*)>*) try_acquire_srw_lock_exclusive;
    
    // [RtlTryAcquireSRWLockShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f930, 0x67960 bytes
    // ntdll.dll .text:0x75c60, 0x6fc38 bytes
    // ntdll.dll .text:0x79c40, 0x74648 bytes
    // ntdll.dll .text:0x75e00, 0x6fc38 bytes
    //
    _z93(sdk::function<uint8_t(struct rtl::srwlock_t*)>*) try_acquire_srw_lock_shared;
    
    // [RtlTryConvertSRWLockSharedToExclusiveOrRelease]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe2600, 0x67960 bytes
    // ntdll.dll .text:0xe8620, 0x6fc38 bytes
    // ntdll.dll .text:0xf3560, 0x74648 bytes
    // ntdll.dll .text:0xe8590, 0x6fc38 bytes
    //
    _z94(sdk::unknown_ptr) try_convert_srw_lock_shared_to_exclusive_or_release;
    
    // [RtlTryEnterCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x16810, 0x67960 bytes
    // ntdll.dll .text:0x103a0, 0x6fc38 bytes
    // ntdll.dll .text:0x43ff0, 0x74648 bytes
    // ntdll.dll .text:0x103a0, 0x6fc38 bytes
    //
    _z95(sdk::function<uint32_t(struct rtl::critical_section_t*)>*) try_enter_critical_section;
    
    // [RtlUmsThreadYield]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xedba0, 0x67960 bytes
    // ntdll.dll .text:0xf6f10, 0x6fc38 bytes
    // ntdll.dll .text:0x102c80, 0x74648 bytes
    // ntdll.dll .text:0xf6ec0, 0x6fc38 bytes
    //
    _z96(sdk::unknown_ptr) ums_thread_yield;
    
    // [RtlUnhandledExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf2d40, 0x67960 bytes
    // ntdll.dll .text:0x9b6e0, 0x6fc38 bytes
    // ntdll.dll .text:0x9e460, 0x74648 bytes
    // ntdll.dll .text:0x9b6c0, 0x6fc38 bytes
    //
    _z97(sdk::function<int32_t(struct nt::exception_pointers_t*)>*) unhandled_exception_filter;
    
    // [RtlUnhandledExceptionFilter2]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf2d60, 0x67960 bytes
    // ntdll.dll .text:0x1001b0, 0x6fc38 bytes
    // ntdll.dll .text:0x10d630, 0x74648 bytes
    // ntdll.dll .text:0x100160, 0x6fc38 bytes
    //
    _z98(sdk::function<int32_t(struct nt::exception_pointers_t*, uint32_t)>*) unhandled_exception_filter2;
    
    // [RtlUnicodeStringCbCopyStringN]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6e0a8, 0x67960 bytes
    // ntdll.dll .text:0x69b7c, 0x6fc38 bytes
    // ntdll.dll .text:0x682f4, 0x74648 bytes
    // ntdll.dll .text:0x69c9c, 0x6fc38 bytes
    //
    _z99(sdk::unknown_ptr) unicode_string_cb_copy_string_n;
    
    // [RtlUnicodeStringToLcid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe7088, 0x67960 bytes
    // ntdll.dll .text:0xeef48, 0x6fc38 bytes
    // ntdll.dll .text:0xfa32c, 0x74648 bytes
    // ntdll.dll .text:0xeeef8, 0x6fc38 bytes
    //
    _a00(sdk::unknown_ptr) unicode_string_to_lcid;
    
    // [RtlUniform]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x74340, 0x67960 bytes
    // ntdll.dll .text:0x744d0, 0x6fc38 bytes
    // ntdll.dll .text:0x8e350, 0x74648 bytes
    // ntdll.dll .text:0x74670, 0x6fc38 bytes
    //
    _a01(sdk::function<uint32_t(uint32_t*)>*) uniform;
    
    // [RtlUnlockCurrentThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2320, 0x67960 bytes
    // ntdll.dll .text:0x85bb0, 0x6fc38 bytes
    // ntdll.dll .text:0x87170, 0x74648 bytes
    // ntdll.dll .text:0x85d50, 0x6fc38 bytes
    //
    _a02(sdk::function<int32_t()>*) unlock_current_thread;
    
    // [RtlUnlockHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30ee0, 0x67960 bytes
    // ntdll.dll .text:0x64560, 0x6fc38 bytes
    // ntdll.dll .text:0x29ed0, 0x74648 bytes
    // ntdll.dll .text:0x64680, 0x6fc38 bytes
    //
    _a03(sdk::function<uint8_t(void*)>*) unlock_heap;
    
    // [RtlUnlockHeapManagerForCloning]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea818, 0x67960 bytes
    // ntdll.dll .text:0xf2a58, 0x6fc38 bytes
    // ntdll.dll .text:0xfe3a0, 0x74648 bytes
    // ntdll.dll .text:0xf2a08, 0x6fc38 bytes
    //
    _a04(sdk::unknown_ptr) unlock_heap_manager_for_cloning;
    
    // [RtlUnlockMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1c10, 0x67960 bytes
    // ntdll.dll .text:0x7fcc0, 0x6fc38 bytes
    // ntdll.dll .text:0x524b0, 0x74648 bytes
    // ntdll.dll .text:0x7fe60, 0x6fc38 bytes
    //
    _a05(sdk::function<int32_t(void*)>*) unlock_memory_block_lookaside;
    
    // [RtlUnlockMemoryStreamRegion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0b30, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _a06(sdk::unknown_ptr) unlock_memory_stream_region;
    
    // [RtlUnlockMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1c70, 0x67960 bytes
    // ntdll.dll .text:0x7fd20, 0x6fc38 bytes
    // ntdll.dll .text:0x52510, 0x74648 bytes
    // ntdll.dll .text:0x7fec0, 0x6fc38 bytes
    //
    _a07(sdk::function<int32_t(void*)>*) unlock_memory_zone;
    
    // [RtlUnlockModuleSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1ea0, 0x67960 bytes
    // ntdll.dll .text:0x800a0, 0x6fc38 bytes
    // ntdll.dll .text:0x52010, 0x74648 bytes
    // ntdll.dll .text:0x80240, 0x6fc38 bytes
    //
    _a08(sdk::function<int32_t(void*)>*) unlock_module_section;
    
    // [RtlUnlockProcessHeapOnProcessTerminate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ad8, 0x67960 bytes
    // ntdll.dll .text:0x64100, 0x6fc38 bytes
    // ntdll.dll .text:0x51540, 0x74648 bytes
    // ntdll.dll .text:0x64220, 0x6fc38 bytes
    //
    _a09(sdk::unknown_ptr) unlock_process_heap_on_process_terminate;
    
    // [RtlUnsubscribeWnfNotificationWaitForCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x15970, 0x67960 bytes
    // ntdll.dll .text:0x45c70, 0x6fc38 bytes
    // ntdll.dll .text:0x4c630, 0x74648 bytes
    // ntdll.dll .text:0x45c70, 0x6fc38 bytes
    //
    _a10(sdk::unknown_ptr) unsubscribe_wnf_notification_wait_for_completion;
    
    // [RtlUnsubscribeWnfNotificationWithCompletionCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54960, 0x67960 bytes
    // ntdll.dll .text:0x46e80, 0x6fc38 bytes
    // ntdll.dll .text:0x88c80, 0x74648 bytes
    // ntdll.dll .text:0x46e80, 0x6fc38 bytes
    //
    _a11(sdk::unknown_ptr) unsubscribe_wnf_notification_with_completion_callback;
    
    // [RtlUnsubscribeWnfStateChangeNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53c40, 0x67960 bytes
    // ntdll.dll .text:0x469f0, 0x6fc38 bytes
    // ntdll.dll .text:0x88090, 0x74648 bytes
    // ntdll.dll .text:0x469f0, 0x6fc38 bytes
    //
    _a12(sdk::unknown_ptr) unsubscribe_wnf_state_change_notification;
    
    // [RtlUpdateClonedCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b50, 0x67960 bytes
    // ntdll.dll .text:0x640d0, 0x6fc38 bytes
    // ntdll.dll .text:0x51510, 0x74648 bytes
    // ntdll.dll .text:0x641f0, 0x6fc38 bytes
    //
    _a13(sdk::function<void(struct rtl::critical_section_t*)>*) update_cloned_critical_section;
    
    // [RtlUpdateClonedSRWLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89290, 0x67960 bytes
    // ntdll.dll .text:0x9b580, 0x6fc38 bytes
    // ntdll.dll .text:0x9e3b0, 0x74648 bytes
    // ntdll.dll .text:0x9b4e0, 0x6fc38 bytes
    //
    _a14(sdk::function<void(struct rtl::srwlock_t*, uint32_t)>*) update_cloned_srw_lock;
    
    // [RtlUpdateProcessRegistryInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5d24, 0x67960 bytes
    // ntdll.dll .text:0x69f88, 0x6fc38 bytes
    // ntdll.dll .text:0x8a40c, 0x74648 bytes
    // ntdll.dll .text:0x6a0a8, 0x6fc38 bytes
    //
    _a15(sdk::unknown_ptr) update_process_registry_info;
    
    // [RtlUpdateTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54380, 0x67960 bytes
    // ntdll.dll .text:0x46900, 0x6fc38 bytes
    // ntdll.dll .text:0x50680, 0x74648 bytes
    // ntdll.dll .text:0x46900, 0x6fc38 bytes
    //
    _a16(sdk::function<int32_t(void*, void*, uint32_t, uint32_t)>*) update_timer;
    
    // [RtlUserThreadStart]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67070, 0x67960 bytes
    // ntdll.dll .text:0x4cea0, 0x6fc38 bytes
    // ntdll.dll .text:0x5df50, 0x74648 bytes
    // ntdll.dll .text:0x4cea0, 0x6fc38 bytes
    //
    _a17(sdk::function<void(sdk::function<uint32_t(void*)>*, void*)>*) user_thread_start;
    
    // [RtlValidateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x779b0, 0x67960 bytes
    // ntdll.dll .text:0x641b0, 0x6fc38 bytes
    // ntdll.dll .text:0x86bb0, 0x74648 bytes
    // ntdll.dll .text:0x642d0, 0x6fc38 bytes
    //
    _a18(sdk::function<uint8_t(void*, uint32_t, void*)>*) validate_heap;
    
    // [RtlValidateProcessHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea940, 0x67960 bytes
    // ntdll.dll .text:0xf2b90, 0x6fc38 bytes
    // ntdll.dll .text:0xfe4e0, 0x74648 bytes
    // ntdll.dll .text:0xf2b40, 0x6fc38 bytes
    //
    _a19(sdk::function<uint8_t()>*) validate_process_heaps;
    
    // [RtlWaitForWnfMetaNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86960, 0x67960 bytes
    // ntdll.dll .text:0x46cb0, 0x6fc38 bytes
    // ntdll.dll .text:0x5b340, 0x74648 bytes
    // ntdll.dll .text:0x46cb0, 0x6fc38 bytes
    //
    _a20(sdk::unknown_ptr) wait_for_wnf_meta_notification;
    
    // [RtlWaitOnAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88870, 0x67960 bytes
    // ntdll.dll .text:0x45d50, 0x6fc38 bytes
    // ntdll.dll .text:0x4c110, 0x74648 bytes
    // ntdll.dll .text:0x45d50, 0x6fc38 bytes
    //
    _a21(sdk::function<int32_t(volatile void*, void*, uint64_t, int64_t*)>*) wait_on_address;
    
    // [RtlWakeAddressAll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e950, 0x67960 bytes
    // ntdll.dll .text:0x45a40, 0x6fc38 bytes
    // ntdll.dll .text:0x2a180, 0x74648 bytes
    // ntdll.dll .text:0x45a40, 0x6fc38 bytes
    //
    _a22(sdk::function<void(void*)>*) wake_address_all;
    
    // [RtlWakeAddressAllNoFence]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf48a0, 0x67960 bytes
    // ntdll.dll .text:0x102b30, 0x6fc38 bytes
    // ntdll.dll .text:0x10ff90, 0x74648 bytes
    // ntdll.dll .text:0x102ac0, 0x6fc38 bytes
    //
    _a23(sdk::unknown_ptr) wake_address_all_no_fence;
    
    // [RtlWakeAddressSingle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf48b0, 0x67960 bytes
    // ntdll.dll .text:0x46430, 0x6fc38 bytes
    // ntdll.dll .text:0x869e0, 0x74648 bytes
    // ntdll.dll .text:0x46430, 0x6fc38 bytes
    //
    _a24(sdk::function<void(void*)>*) wake_address_single;
    
    // [RtlWakeAddressSingleNoFence]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf48d0, 0x67960 bytes
    // ntdll.dll .text:0x102b40, 0x6fc38 bytes
    // ntdll.dll .text:0x10ffa0, 0x74648 bytes
    // ntdll.dll .text:0x102ad0, 0x6fc38 bytes
    //
    _a25(sdk::unknown_ptr) wake_address_single_no_fence;
    
    // [RtlWakeAllConditionVariable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x63770, 0x67960 bytes
    // ntdll.dll .text:0x4d3d0, 0x6fc38 bytes
    // ntdll.dll .text:0x5e6a0, 0x74648 bytes
    // ntdll.dll .text:0x4d3d0, 0x6fc38 bytes
    //
    _a26(sdk::function<void(struct rtl::condition_variable_t*)>*) wake_all_condition_variable;
    
    // [RtlWakeConditionVariable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6b580, 0x67960 bytes
    // ntdll.dll .text:0x795e0, 0x6fc38 bytes
    // ntdll.dll .text:0x69b80, 0x74648 bytes
    // ntdll.dll .text:0x79780, 0x6fc38 bytes
    //
    _a27(sdk::function<void(struct rtl::condition_variable_t*)>*) wake_condition_variable;
    
    // [RtlWalkHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x11f0, 0x67960 bytes
    // ntdll.dll .text:0xf2cc0, 0x6fc38 bytes
    // ntdll.dll .text:0xae700, 0x74648 bytes
    // ntdll.dll .text:0xf2c70, 0x6fc38 bytes
    //
    _a28(sdk::function<int32_t(void*, struct rtl::heap_walk_entry_t*)>*) walk_heap;
    
    // [RtlWerpReportException]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89f20, 0x67960 bytes
    // ntdll.dll .text:0xdd230, 0x6fc38 bytes
    // ntdll.dll .text:0xe76d0, 0x74648 bytes
    // ntdll.dll .text:0xdd1a0, 0x6fc38 bytes
    //
    _a29(sdk::function<int32_t(uint32_t, void*, uint32_t, void**)>*) werp_report_exception;
    
    // [RtlWnfCompareChangeStamp]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdae20, 0x67960 bytes
    // ntdll.dll .text:0xde6d0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8c60, 0x74648 bytes
    // ntdll.dll .text:0xde640, 0x6fc38 bytes
    //
    _a30(sdk::unknown_ptr) wnf_compare_change_stamp;
    
    // [RtlWnfDllUnloadCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55580, 0x67960 bytes
    // ntdll.dll .text:0x849d0, 0x6fc38 bytes
    // ntdll.dll .text:0x88d20, 0x74648 bytes
    // ntdll.dll .text:0x84b70, 0x6fc38 bytes
    //
    _a31(sdk::unknown_ptr) wnf_dll_unload_callback;
    
    // [RtlWow64CallFunction64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89430, 0x67960 bytes
    // ntdll.dll .text:0x848c0, 0x6fc38 bytes
    // ntdll.dll .text:0x9e1c0, 0x74648 bytes
    // ntdll.dll .text:0x84a60, 0x6fc38 bytes
    //
    _a32(sdk::unknown_ptr) wow64_call_function64;
    
    // [RtlWow64EnableFsRedirection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89430, 0x67960 bytes
    // ntdll.dll .text:0x848c0, 0x6fc38 bytes
    // ntdll.dll .text:0xe6620, 0x74648 bytes
    // ntdll.dll .text:0x84a60, 0x6fc38 bytes
    //
    _a33(sdk::function<int32_t(uint8_t)>*) wow64_enable_fs_redirection;
    
    // [RtlWow64EnableFsRedirectionEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89430, 0x67960 bytes
    // ntdll.dll .text:0x848c0, 0x6fc38 bytes
    // ntdll.dll .text:0x88d10, 0x74648 bytes
    // ntdll.dll .text:0x84a60, 0x6fc38 bytes
    //
    _a34(sdk::function<int32_t(void*, void**)>*) wow64_enable_fs_redirection_ex;
    
    // [RtlWow64GetCurrentCpuArea]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x77600, 0x67960 bytes
    // ntdll.dll .text:0x4bd80, 0x6fc38 bytes
    // ntdll.dll .text:0x54b20, 0x74648 bytes
    // ntdll.dll .text:0x4bd80, 0x6fc38 bytes
    //
    _a35(sdk::unknown_ptr) wow64_get_current_cpu_area;
    
    // [RtlWow64GetCurrentMachine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x77420, 0x67960 bytes
    // ntdll.dll .text:0x4ada0, 0x6fc38 bytes
    // ntdll.dll .text:0x545e0, 0x74648 bytes
    // ntdll.dll .text:0x4ada0, 0x6fc38 bytes
    //
    _a36(sdk::unknown_ptr) wow64_get_current_machine;
    
    // [RtlWow64GetProcessMachines]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70f00, 0x67960 bytes
    // ntdll.dll .text:0x7a580, 0x6fc38 bytes
    // ntdll.dll .text:0x7e940, 0x74648 bytes
    // ntdll.dll .text:0x7a720, 0x6fc38 bytes
    //
    _a37(sdk::unknown_ptr) wow64_get_process_machines;
    
    // [RtlWow64GetThreadContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd94e0, 0x67960 bytes
    // ntdll.dll .text:0xdbf00, 0x6fc38 bytes
    // ntdll.dll .text:0xe6630, 0x74648 bytes
    // ntdll.dll .text:0xdbe70, 0x6fc38 bytes
    //
    _a38(sdk::function<int32_t(void*, struct win::wow64_context_t*)>*) wow64_get_thread_context;
    
    // [RtlWow64GetThreadSelectorEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd9510, 0x67960 bytes
    // ntdll.dll .text:0xdbf30, 0x6fc38 bytes
    // ntdll.dll .text:0xe6660, 0x74648 bytes
    // ntdll.dll .text:0xdbea0, 0x6fc38 bytes
    //
    _a39(sdk::unknown_ptr) wow64_get_thread_selector_entry;
    
    // [RtlWow64IsWowGuestMachineSupported]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83520, 0x67960 bytes
    // ntdll.dll .text:0x7b5a0, 0x6fc38 bytes
    // ntdll.dll .text:0x81220, 0x74648 bytes
    // ntdll.dll .text:0x7b740, 0x6fc38 bytes
    //
    _a40(sdk::unknown_ptr) wow64_is_wow_guest_machine_supported;
    
    // [RtlWow64LogMessageInEventLogger]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5850, 0x67960 bytes
    // ntdll.dll .text:0xd6610, 0x6fc38 bytes
    // ntdll.dll .text:0xe1960, 0x74648 bytes
    // ntdll.dll .text:0xd6580, 0x6fc38 bytes
    //
    _a41(sdk::unknown_ptr) wow64_log_message_in_event_logger;
    
    // [RtlWow64SetThreadContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd96b0, 0x67960 bytes
    // ntdll.dll .text:0xdc0d0, 0x6fc38 bytes
    // ntdll.dll .text:0xe6800, 0x74648 bytes
    // ntdll.dll .text:0xdc040, 0x6fc38 bytes
    //
    _a42(sdk::function<int32_t(void*, struct win::wow64_context_t*)>*) wow64_set_thread_context;
    
    // [RtlWow64SuspendThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd96d0, 0x67960 bytes
    // ntdll.dll .text:0xdc260, 0x6fc38 bytes
    // ntdll.dll .text:0x1c60, 0x74648 bytes
    // ntdll.dll .text:0xdc1d0, 0x6fc38 bytes
    //
    _a43(sdk::unknown_ptr) wow64_suspend_thread;
    
    // [RtlWriteMemoryStream]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4390, 0x67960 bytes
    // ntdll.dll .text:0xd5800, 0x6fc38 bytes
    // ntdll.dll .text:0xe0ba0, 0x74648 bytes
    // ntdll.dll .text:0xd5770, 0x6fc38 bytes
    //
    _a44(sdk::unknown_ptr) write_memory_stream;
    
    // [RtlZombifyActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdbd60, 0x67960 bytes
    // ntdll.dll .text:0xdf620, 0x6fc38 bytes
    // ntdll.dll .text:0xe9e60, 0x74648 bytes
    // ntdll.dll .text:0xdf590, 0x6fc38 bytes
    //
    _a45(sdk::unknown_ptr) zombify_activation_context;
};
#include "magic/api.end.hpp"
