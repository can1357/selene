#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/heap_t.hpp"
#include "hp_lock_type_t.hpp"
#include "../heap/entry_t.hpp"
#include "hp_memory_type_t.hpp"
#include "hp_heap_manager_t.hpp"
#include "../heap/free_entry_t.hpp"
#include "../heap/list_lookup_t.hpp"
#include "../heap/failure_type_t.hpp"
#include "../rtl/balanced_node_t.hpp"
#include "../rtl/hp_env_handle_t.hpp"
#include "hp_queue_lock_handle_t.hpp"
#include "../ntdll/segment_heap_t.hpp"
#include "../rtl/heap_walk_entry_t.hpp"
#include "../nt/exception_pointers_t.hpp"
#include "../heap/page_range_descriptor_t.hpp"

#include "magic/api.start.hpp"
namespace rtlp
{
    // [RtlpAcquirePropStoreLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x596080, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) acquire_prop_store_lock_exclusive;
    
    // [RtlpAcquirePropStoreLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5960f4, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) acquire_prop_store_lock_shared;
    
    // [RtlpApplyFunctionPatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x664ce8, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) apply_function_patch;
    
    // [RtlpCalculateSubsegmentSizeIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x324c34, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) calculate_subsegment_size_index;
    
    // [RtlpComparePropertyEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x596170, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) compare_property_entry;
    
    // [RtlpCopyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xa4f58, 0x32828 bytes
    //
    _m05(sdk::unknown_ptr) copy_context;
    
    // [RtlpCopyKernelCetChunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5961bc, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) copy_kernel_cet_chunk;
    
    // [RtlpCpuFeatureTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x25690, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) cpu_feature_table;
    
    // [RtlpExceptionLogSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37a5c, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) exception_log_size;
    
    // [RtlpFcCompareUsageSubscriptionToUsageSubscriptionUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe PAGE:0x916eb8, 0x1fe000 bytes
    //
    _m09(sdk::unknown_ptr) fc_compare_usage_subscription_to_usage_subscription_update;
    
    // [RtlpFcGetBufferManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7ec4bc, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) fc_get_buffer_manager;
    
    // [RtlpFlsCallbackEntryGetContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34c53c, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) fls_callback_entry_get_context;
    
    // [RtlpFlsHeapAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b4ffc, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) fls_heap_alloc;
    
    // [RtlpFlsHeapFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b7164, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) fls_heap_free;
    
    // [RtlpFlsInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86db38, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) fls_initialize;
    
    // [RtlpFlsLockInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7ed350, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) fls_lock_initialize;
    
    // [RtlpFlsSetValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b4df4, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) fls_set_value;
    
    // [RtlpFlsSetValueSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b4e84, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) fls_set_value_slot;
    
    // [RtlpFlsSlotDataValidateEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3792b0, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) fls_slot_data_validate_empty;
    
    // [RtlpGetCodePageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x759530, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) get_code_page_data;
    
    // [RtlpGetFunctionOverrideIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x20b4ac, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) get_function_override_index;
    
    // [RtlpHeapFatalExceptionFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x211d88, 0x32828 bytes
    //
    _m21(sdk::unknown_ptr) heap_fatal_exception_filter;
    
    // [RtlpHeapZeroFastString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3eb270, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) heap_zero_fast_string;
    
    // [RtlpHpCustomVaCallbacksEncodedComparison]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5a1300, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) hp_custom_va_callbacks_encoded_comparison;
    
    // [RtlpHpCustomVaCallbacksRegistrarRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5a1380, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) hp_custom_va_callbacks_registrar_register;
    
    // [RtlpHpCustomVaCallbacksRegistrarUnregister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5a1740, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) hp_custom_va_callbacks_registrar_unregister;
    
    // [RtlpHpHeapVaCallbacksRegistrar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37780, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) hp_heap_va_callbacks_registrar;
    
    // [RtlpInitCodePageTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x82df40, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) init_code_page_tables;
    
    // [RtlpInitMachineFrameEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5e9a8, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) init_machine_frame_entries;
    
    // [RtlpInitUppercaseTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x82d8bc, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) init_uppercase_tables;
    
    // [RtlpIsImmutableFeatureConfigurationPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f0e88, 0x1fe000 bytes
    //
    _m30(sdk::unknown_ptr) is_immutable_feature_configuration_priority;
    
    // [RtlpIsMachineFrameEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5950e0, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) is_machine_frame_entry;
    
    // [RtlpIsValidFeatureConfigurationPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x5892f8, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) is_valid_feature_configuration_priority;
    
    // [RtlpIsValidFeatureEnabledState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x589308, 0x1fe000 bytes
    //
    _m33(sdk::unknown_ptr) is_valid_feature_enabled_state;
    
    // [RtlpIsValidFeatureEnabledStateOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x589318, 0x1fe000 bytes
    //
    _m34(sdk::unknown_ptr) is_valid_feature_enabled_state_options;
    
    // [RtlpIsValidFeatureVariant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x589328, 0x1fe000 bytes
    //
    _m35(sdk::unknown_ptr) is_valid_feature_variant;
    
    // [RtlpIsValidFeatureVariantPayloadKind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x589338, 0x1fe000 bytes
    //
    _m36(sdk::unknown_ptr) is_valid_feature_variant_payload_kind;
    
    // [RtlpLogHeapDestroyEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x218f50, 0x32828 bytes
    //
    _m37(sdk::unknown_ptr) log_heap_destroy_event;
    
    // [RtlpLookupDynamicUserFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x59d7e8, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) lookup_dynamic_user_function_table;
    
    // [RtlpMuiRegConfigNodePopulate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6e95a0, 0x32828 bytes
    //
    _m39(sdk::unknown_ptr) mui_reg_config_node_populate;
    
    // [RtlpNoShadowStackUnwindMachineFrameEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc02f08, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) no_shadow_stack_unwind_machine_frame_entries;
    
    // [RtlpOpenSystemSessionKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9ac818, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) open_system_session_key;
    
    // [RtlpPropStoreEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc379c0, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) prop_store_entries;
    
    // [RtlpPropStoreEntriesActiveCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc379cc, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) prop_store_entries_active_count;
    
    // [RtlpPropStoreEntriesTotalCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc379c8, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) prop_store_entries_total_count;
    
    // [RtlpPropStoreLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd1b5cc, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) prop_store_lock;
    
    // [RtlpPtrTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0da50, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) ptr_tree;
    
    // [RtlpPtrTreeLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd1b5d0, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) ptr_tree_lock;
    
    // [RtlpQueryNlsSystemCodePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x82e16c, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) query_nls_system_code_pages;
    
    // [RtlpRemoveArchDisallowedXStateFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37fce8, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) remove_arch_disallowed_x_state_features;
    
    // [RtlpSearchPropertyEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x596170, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) search_property_entry;
    
    // [RtlpTrivialFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1575bc, 0x32828 bytes
    //
    _m51(sdk::unknown_ptr) trivial_function;
    
    // [RtlpValidateContextXStateDisabledFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x20eec4, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) validate_context_x_state_disabled_features;
    
    // [RtlpVirtualPopShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x462a70, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) virtual_pop_shadow_stack;
    
    // [RtlpAcquireBootStatusLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ef628, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f0c58, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) acquire_boot_status_lock;
    
    // [RtlpDynamicEnforcedAddressRangesTreeCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9b6448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7838, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) dynamic_enforced_address_ranges_tree_compare;
    
    // [RtlpEnvRegisterFaultRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x398fbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39a47c, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) env_register_fault_range;
    
    // [RtlpFcAreSortedFeatureUpdatesValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9bb6c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915548, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) fc_are_sorted_feature_updates_valid;
    
    // [RtlpFcCompareUsageSubscriptionToUsageSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a0f88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f0e48, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) fc_compare_usage_subscription_to_usage_subscription;
    
    // [RtlpFcEnterRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x827738, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778dac, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) fc_enter_region;
    
    // [RtlpFcLeaveRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x827720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779114, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) fc_leave_region;
    
    // [RtlpFcLowerBounds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91708c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x915a9c, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) fc_lower_bounds;
    
    // [RtlpFcValidateFeatureConfigurationBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9bc0b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7494, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) fc_validate_feature_configuration_buffer;
    
    // [RtlpFcValidateFeatureUsageSubscriptionBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9bc17c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7560, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) fc_validate_feature_usage_subscription_buffer;
    
    // [RtlpHpEnvGetHeapManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33ce38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b3704, 0x1fe000 bytes
    //
    _m64(sdk::function<struct rtlp::hp_heap_manager_t*(struct rtl::hp_env_handle_t)>*) hp_env_get_heap_manager;
    
    // [RtlpHpGetOwnerHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2204ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ac314, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) hp_get_owner_heap;
    
    // [RtlpOpenImageFileOptionsKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x487b5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9ac800, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) open_image_file_options_key;
    
    // [RtlpPopUserShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27033c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x321b5c, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) pop_user_shadow_stack;
    
    // [RtlpReleaseBootStatusLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ef658, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f0c88, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) release_boot_status_lock;
    
    // [RtlpApplyGenericRetpolineFixup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x245fe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3385f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2efeb0, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) apply_generic_retpoline_fixup;
    
    // [RtlpBootStatHandleLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb288, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb290, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) boot_stat_handle_lock;
    
    // [RtlpBootStatusFields]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1eb40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x174a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1eac0, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) boot_status_fields;
    
    // [RtlpCSparseBitmapLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32112c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3618cc, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) c_sparse_bitmap_lock;
    
    // [RtlpCSparseBitmapPageCommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e4c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320fa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361770, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) c_sparse_bitmap_page_commit;
    
    // [RtlpCSparseBitmapPageDecommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21d470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36071c, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) c_sparse_bitmap_page_decommit;
    
    // [RtlpCSparseBitmapUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3211bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36152c, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) c_sparse_bitmap_unlock;
    
    // [RtlpCSparseBitmapWaitOnAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58f838, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2938, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58f6b8, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) c_sparse_bitmap_wait_on_address;
    
    // [RtlpCapChkTelemetryRunOnce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9186e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916ef0, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) cap_chk_telemetry_run_once;
    
    // [RtlpCapChkTelemetryRunOnceCtx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9d90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d90, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) cap_chk_telemetry_run_once_ctx;
    
    // [RtlpCapabilityCheckSystemCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x910dec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ecad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f50c, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) capability_check_system_capability;
    
    // [RtlpCaptureContext2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3fc020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd900, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) capture_context2;
    
    // [RtlpCaptureDynamicRelocationTableRva]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b183c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b6ab4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ad2bc, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) capture_dynamic_relocation_table_rva;
    
    // [RtlpCaptureRetpolineBinaryInfoForImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b1790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b699c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ad210, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) capture_retpoline_binary_info_for_image;
    
    // [RtlpCheckFunctionPatchApplied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9afeb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99838, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aee28, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) check_function_patch_applied;
    
    // [RtlpCheckFunctionPatchAppliedInOriginalImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9afed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664d08, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aee40, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) check_function_patch_applied_in_original_image;
    
    // [RtlpClFlushSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0f350, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09a18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f3a8, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) cl_flush_size;
    
    // [RtlpCompressRvaList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69a410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x777780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63c9a0, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) compress_rva_list;
    
    // [RtlpConstructCrossVmObjectPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x912928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b15e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911088, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) construct_cross_vm_object_path;
    
    // [RtlpConstructImportRelocationFixup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x246040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x338660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eff10, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) construct_import_relocation_fixup;
    
    // [RtlpConstructIndirectRelocationFixup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58a368, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6647ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58a1ec, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) construct_indirect_relocation_fixup;
    
    // [RtlpConstructSwitchJumpRelocationFixup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58a520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6649b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58a3a4, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) construct_switch_jump_relocation_fixup;
    
    // [RtlpControlFlowGuardEnforced]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x284be8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f1f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32bb58, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) control_flow_guard_enforced;
    
    // [RtlpCopyRetpolineRelocationBlockEntryArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x244434, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2056cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x324688, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) copy_retpoline_relocation_block_entry_array;
    
    // [RtlpCtAllocateMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9165c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5a38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914d28, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) ct_allocate_memory;
    
    // [RtlpCtContextFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9165ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5a5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914d4c, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) ct_context_free;
    
    // [RtlpCtContextInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916648, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5ab8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914da8, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) ct_context_init;
    
    // [RtlpCtFreeMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914e70, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) ct_free_memory;
    
    // [RtlpCtInitializeNotificationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91672c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5b9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914e8c, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) ct_initialize_notification_event;
    
    // [RtlpCtInitializeWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916778, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5be4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914ed8, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) ct_initialize_work_item;
    
    // [RtlpCtPublishInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dcf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd38, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) ct_publish_in_progress;
    
    // [RtlpCtQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9167d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914f34, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) ct_queue_work_item;
    
    // [RtlpCtSelfSubscribe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9167f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5c5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914f50, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) ct_self_subscribe;
    
    // [RtlpDetermineHotPatchExtent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9183c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99854, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916bcc, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) determine_hot_patch_extent;
    
    // [RtlpDisableIFEOCaching]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4b48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b4c, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) disable_ifeo_caching;
    
    // [RtlpDynamicEHContinuationTargetsTreeCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8c7518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89232c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c5cf8, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) dynamic_eh_continuation_targets_tree_compare;
    
    // [RtlpDynamicLookasideBucketCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24b780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f53a0, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) dynamic_lookaside_bucket_compare;
    
    // [RtlpDynamicLookasideInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3befd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b4998, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bfde0, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) dynamic_lookaside_initialize;
    
    // [RtlpDynamicLookasideRebalance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23ecd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b9c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec260, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) dynamic_lookaside_rebalance;
    
    // [RtlpFcAddDelayedUsageReportToBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58934c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a0e1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58917c, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) fc_add_delayed_usage_report_to_buffer;
    
    // [RtlpFcAddUsageSubscriptionFromUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916b18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bb5f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915478, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) fc_add_usage_subscription_from_update;
    
    // [RtlpFcApplyUpdateAndAddFeature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916b68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bb640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9154c8, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) fc_apply_update_and_add_feature;
    
    // [RtlpFcBufferManagerDereferenceBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7716e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a37e0, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) fc_buffer_manager_dereference_buffers;
    
    // [RtlpFcBufferManagerReferenceBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77133c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac214, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3458, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) fc_buffer_manager_reference_buffers;
    
    // [RtlpFcBufferManagerUpdateBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77771c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82714c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b4214, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) fc_buffer_manager_update_buffers;
    
    // [RtlpFcCalculateRequiredSizeForNewFeatureTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916be8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bb754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9155f8, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) fc_calculate_required_size_for_new_feature_table;
    
    // [RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bb8b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915760, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) fc_calculate_required_size_for_new_usage_subscription_table;
    
    // [RtlpFcCompareFeatureToUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bb9e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x91588c, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) fc_compare_feature_to_update;
    
    // [RtlpFcCompareUpdates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bba20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9158c0, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) fc_compare_updates;
    
    // [RtlpFcCompareUsageSubscriptionUpdates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bba50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9158f0, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) fc_compare_usage_subscription_updates;
    
    // [RtlpFcCreateAndAddFeatureFromUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bba90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915930, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) fc_create_and_add_feature_from_update;
    
    // [RtlpFcDoesFeatureHaveUniqueState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bbaf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915998, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) fc_does_feature_have_unique_state;
    
    // [RtlpFcInitializeBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271858, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385bb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3233e8, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) fc_initialize_buffers;
    
    // [RtlpFcInitializeDelayedUsageReportBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec4cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9159d0, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) fc_initialize_delayed_usage_report_buffer;
    
    // [RtlpFcIsUpdateModifyingOrAddingFeature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bbb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9159f0, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) fc_is_update_modifying_or_adding_feature;
    
    // [RtlpFcLinearSearchInSortedArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bbb64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915a24, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) fc_linear_search_in_sorted_array;
    
    // [RtlpFcNotifyFeatureUsageTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91712c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bc230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915258, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) fc_notify_feature_usage_target;
    
    // [RtlpFcQueryAllFeatureConfigurationsFromBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91728c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bbbdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915b3c, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) fc_query_all_feature_configurations_from_buffers;
    
    // [RtlpFcQueryFeatureConfigurationFromBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9172e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8275f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915b90, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) fc_query_feature_configuration_from_buffers;
    
    // [RtlpFcReadHighLowHigh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ffa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3226e0, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) fc_read_high_low_high;
    
    // [RtlpFcSectionTypeToBufferType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec434, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915cd8, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) fc_section_type_to_buffer_type;
    
    // [RtlpFcSendFeatureUsageNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917428, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bc390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9153b8, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) fc_send_feature_usage_notifications;
    
    // [RtlpFcUpdateFeature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9174c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bbc30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915d20, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) fc_update_feature;
    
    // [RtlpFcUpdateFeatureConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x91753c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bbcac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915d94, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) fc_update_feature_configuration;
    
    // [RtlpFcUpdateUsageTriggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bbeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x915f98, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) fc_update_usage_triggers;
    
    // [RtlpFcValidateFeatureConfigurationType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3877c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac16c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x388d7c, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) fc_validate_feature_configuration_type;
    
    // [RtlpFcWriteHighLowHigh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a5d28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3abfb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9ec8, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) fc_write_high_low_high;
    
    // [RtlpFindDynamicEHContinuationTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x917c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b6478, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916438, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) find_dynamic_eh_continuation_target;
    
    // [RtlpFindMessageInTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x356148, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3572d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b3c8, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) find_message_in_table;
    
    // [RtlpGetBootStatusPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x395194, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8124, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3961f4, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) get_boot_status_path;
    
    // [RtlpGetBootStatusPathFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3951f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396250, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) get_boot_status_path_from_registry;
    
    // [RtlpGetEntireXStateAreaLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x266670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36efb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x316d30, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) get_entire_x_state_area_length;
    
    // [RtlpGetNonLegacyXStateAreaLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5898f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5965c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589844, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) get_non_legacy_x_state_area_length;
    
    // [RtlpGetPolicyValueForSystemCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9114d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ecb60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90fbf4, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) get_policy_value_for_system_capability;
    
    // [RtlpGetRetpolineStubsFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589c9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59d6a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589b20, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) get_retpoline_stubs_function_table;
    
    // [RtlpGetStackLimitsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x284ca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32bc10, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) get_stack_limits_ex;
    
    // [RtlpGetTimeZoneInfoHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6399a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x808654, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67c8ac, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) get_time_zone_info_handle;
    
    // [RtlpGetTokenNamedObjectPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9116e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b05cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90fe08, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) get_token_named_object_path;
    
    // [RtlpHpAcquireLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x296a0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27cfa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23c5ac, 0x1fe000 bytes
    //
    _n47(sdk::function<uint8_t(uint64_t*, enum rtlp::hp_lock_type_t)>*) hp_acquire_lock_exclusive;
    
    // [RtlpHpAcquireLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223ce8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x324fa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x238714, 0x1fe000 bytes
    //
    _n48(sdk::function<uint8_t(uint64_t*, enum rtlp::hp_lock_type_t)>*) hp_acquire_lock_shared;
    
    // [RtlpHpAcquireQueuedLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2258a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27d100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35e570, 0x1fe000 bytes
    //
    _n49(sdk::function<void(uint64_t*, enum rtlp::hp_lock_type_t, struct rtlp::hp_queue_lock_handle_t*)>*) hp_acquire_queued_lock_exclusive;
    
    // [RtlpHpAcquireReleaseLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26c534, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31dd94, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) hp_acquire_release_lock_exclusive;
    
    // [RtlpHpAllocVA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33fd44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x271f28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b11f0, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) hp_alloc_va;
    
    // [RtlpHpAllocVirtBlockCommitFirst]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ef698, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x598bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f0cc8, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) hp_alloc_virt_block_commit_first;
    
    // [RtlpHpCheckAllocationSizeLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222b98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a12a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35fcd0, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) hp_check_allocation_size_limit;
    
    // [RtlpHpEnvAllocVA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x340694, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x272124, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b13cc, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) hp_env_alloc_va;
    
    // [RtlpHpEnvFreeVA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21fe00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31f320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ac068, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) hp_env_free_va;
    
    // [RtlpHpExtrasAppend]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58e8cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a18d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58e74c, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) hp_extras_append;
    
    // [RtlpHpFixedHeapCommitRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58ec10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a1d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58ea90, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) hp_fixed_heap_commit_routine;
    
    // [RtlpHpFixedHeapCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x377378, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387b2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3786f8, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) hp_fixed_heap_create;
    
    // [RtlpHpFixedVsAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26fd90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3215b0, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) hp_fixed_vs_allocate;
    
    // [RtlpHpFixedVsCommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26fc80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321390, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) hp_fixed_vs_commit;
    
    // [RtlpHpFixedVsDecommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) hp_fixed_vs_decommit;
    
    // [RtlpHpFixedVsFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37c430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37d7b0, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) hp_fixed_vs_free;
    
    // [RtlpHpFreeVA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21fd6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31f298, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ab58c, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) hp_free_va;
    
    // [RtlpHpHeapAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3776d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x386efc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x378a50, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) hp_heap_allocate;
    
    // [RtlpHpHeapCheckCommitLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33f16c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x272f78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b0fdc, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) hp_heap_check_commit_limit;
    
    // [RtlpHpHeapCompact]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222c78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x324694, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35db5c, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) hp_heap_compact;
    
    // [RtlpHpHeapCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x376d44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x386b1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3780c4, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) hp_heap_create;
    
    // [RtlpHpHeapDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x385154, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a1a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x385f14, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) hp_heap_destroy;
    
    // [RtlpHpHeapExtendContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26c1bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b42c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31da1c, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) hp_heap_extend_context;
    
    // [RtlpHpHeapGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dcc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6ae40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd00, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) hp_heap_globals;
    
    // [RtlpHpHeapHandleError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58d940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a02fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58d7c0, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) hp_heap_handle_error;
    
    // [RtlpHpLegacyEnvHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dd00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd40, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) hp_legacy_env_handle;
    
    // [RtlpHpLegacyGetEnvHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271294, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387b14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322c5c, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) hp_legacy_get_env_handle;
    
    // [RtlpHpLfhBucketAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38de30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39abe8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38eec0, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) hp_lfh_bucket_allocate;
    
    // [RtlpHpLfhBucketAllocateSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3905bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b43c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39160c, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) hp_lfh_bucket_allocate_slot;
    
    // [RtlpHpLfhBucketComputeNewSubsegmentBlockCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32490c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2381d8, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) hp_lfh_bucket_compute_new_subsegment_block_count;
    
    // [RtlpHpLfhBucketGetSubsegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2231f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27d304, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x237af4, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) hp_lfh_bucket_get_subsegment;
    
    // [RtlpHpLfhBucketSubsegmentStatsUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x324c64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x239a30, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) hp_lfh_bucket_subsegment_stats_update;
    
    // [RtlpHpLfhContextCompact]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223aa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x324d18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2384cc, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) hp_lfh_context_compact;
    
    // [RtlpHpLfhPerfFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1dca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37760, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dce0, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) hp_lfh_perf_flags;
    
    // [RtlpHpLfhSlotAddSubsegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2250b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27cd10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x237da8, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) hp_lfh_slot_add_subsegment;
    
    // [RtlpHpLfhSubsegmentFindEmptyUnits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x224ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27cae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2395d0, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) hp_lfh_subsegment_find_empty_units;
    
    // [RtlpHpLfhSubsegmentSizeBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58f180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58f000, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) hp_lfh_subsegment_size_block;
    
    // [RtlpHpMetadataCommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c5ca4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8b7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6b74, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) hp_metadata_commit;
    
    // [RtlpHpMetadataHeapCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x376d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x386490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x378080, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) hp_metadata_heap_create;
    
    // [RtlpHpMetadataHeapCtxGet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2229a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x322bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35fad8, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) hp_metadata_heap_ctx_get;
    
    // [RtlpHpMetadataHeapStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22296c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x322bec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35faa4, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) hp_metadata_heap_start;
    
    // [RtlpHpQueryVA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2227f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3208ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35f92c, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) hp_query_va;
    
    // [RtlpHpRegisterEnvironment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x377948, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38785c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x378cc8, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) hp_register_environment;
    
    // [RtlpHpReleaseQueuedLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35e6e0, 0x1fe000 bytes
    //
    _n90(sdk::function<void(enum rtlp::hp_lock_type_t, struct rtlp::hp_queue_lock_handle_t*)>*) hp_release_queued_lock_exclusive;
    
    // [RtlpHpScheduleCompaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33de84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27ba3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3224, 0x1fe000 bytes
    //
    _n91(sdk::function<int32_t(void*)>*) hp_schedule_compaction;
    
    // [RtlpHpSegContextCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x385304, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a1e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3860c4, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) hp_seg_context_cleanup;
    
    // [RtlpHpSegContextCompact]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x324740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35dc10, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) hp_seg_context_compact;
    
    // [RtlpHpSegContextInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x376ff4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x386dd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x378374, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) hp_seg_context_initialize;
    
    // [RtlpHpSegContextReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3771a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3877d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x378520, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) hp_seg_context_reserve;
    
    // [RtlpHpSegFreeRangeInsert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33f040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27b920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b0eb0, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) hp_seg_free_range_insert;
    
    // [RtlpHpSegFreeRangeRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33de30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x272b48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b31d0, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) hp_seg_free_range_remove;
    
    // [RtlpHpSegHeapCheckCommitLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33f13c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x322c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b0fac, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) hp_seg_heap_check_commit_limit;
    
    // [RtlpHpSegLargeRangeAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x379edc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e7f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b25c, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) hp_seg_large_range_allocate;
    
    // [RtlpHpSegMgrAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e764, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x321230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361a10, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) hp_seg_mgr_allocate;
    
    // [RtlpHpSegMgrApplyLargePagePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26a194, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c69c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b824, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) hp_seg_mgr_apply_large_page_policy;
    
    // [RtlpHpSegMgrCommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33ece0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x272fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b0b50, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) hp_seg_mgr_commit;
    
    // [RtlpHpSegMgrCommitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2679a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x369d48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318898, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) hp_seg_mgr_commit_complete;
    
    // [RtlpHpSegMgrCommitInitiate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33cc8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x271054, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b373c, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) hp_seg_mgr_commit_initiate;
    
    // [RtlpHpSegMgrRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3853ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320254, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3861ac, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) hp_seg_mgr_release;
    
    // [RtlpHpSegMgrReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e81c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3212e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361ac8, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) hp_seg_mgr_reserve;
    
    // [RtlpHpSegMgrVaCtxAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e93c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3213fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361be8, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) hp_seg_mgr_va_ctx_alloc;
    
    // [RtlpHpSegMgrVaCtxFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58ec40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320668, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58eac0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) hp_seg_mgr_va_ctx_free;
    
    // [RtlpHpSegMgrVaCtxInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26f744, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31ec1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ff94, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) hp_seg_mgr_va_ctx_initialize;
    
    // [RtlpHpSegMgrVaCtxInsert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26d5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31ec7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x360000, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) hp_seg_mgr_va_ctx_insert;
    
    // [RtlpHpSegPageRangeComputeLargePageCost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33dd80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x278a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3120, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) hp_seg_page_range_compute_large_page_cost;
    
    // [RtlpHpSegPageRangeFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58efb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a1ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58ee34, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) hp_seg_page_range_free;
    
    // [RtlpHpSegPageRangeHandleCommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33f1c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x272dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b1030, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) hp_seg_page_range_handle_commit;
    
    // [RtlpHpSegSegmentFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x385364, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x386124, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) hp_seg_segment_free;
    
    // [RtlpHpSegSizeInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58f0f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a2020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58ef70, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) hp_seg_size_internal;
    
    // [RtlpHpSegSubAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25b3dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36909c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30b05c, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) hp_seg_sub_allocate;
    
    // [RtlpHpVaMgrAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21d9d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31edcc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x360c80, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) hp_va_mgr_alloc;
    
    // [RtlpHpVaMgrAllocAligned]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e6ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31f1b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361998, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) hp_va_mgr_alloc_aligned;
    
    // [RtlpHpVaMgrCtxAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21d964, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31ed5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x360c10, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) hp_va_mgr_ctx_alloc;
    
    // [RtlpHpVaMgrCtxAllocatorDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x388850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a1da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3892c0, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) hp_va_mgr_ctx_allocator_dereference;
    
    // [RtlpHpVaMgrCtxAllocatorFind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x377b48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387a54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x378ec8, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) hp_va_mgr_ctx_allocator_find;
    
    // [RtlpHpVaMgrCtxAllocatorReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x377a30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387934, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x378db0, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) hp_va_mgr_ctx_allocator_reference;
    
    // [RtlpHpVaMgrCtxFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21ead0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31fe1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x360180, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) hp_va_mgr_ctx_free;
    
    // [RtlpHpVaMgrCtxQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33ce70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x270dd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3490, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) hp_va_mgr_ctx_query;
    
    // [RtlpHpVaMgrCtxStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x398d58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b54fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39a218, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) hp_va_mgr_ctx_start;
    
    // [RtlpHpVaMgrFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x269b48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x322328, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361dcc, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) hp_va_mgr_free;
    
    // [RtlpHpVaMgrRangeCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21d0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3200bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36034c, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) hp_va_mgr_range_cleanup;
    
    // [RtlpHpVaMgrRangeCoalesce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x269be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3223c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361e64, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) hp_va_mgr_range_coalesce;
    
    // [RtlpHpVaMgrRangeCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21e0ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x320c64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361358, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) hp_va_mgr_range_create;
    
    // [RtlpHpVaMgrRangeFind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21cb68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x321f9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361d14, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) hp_va_mgr_range_find;
    
    // [RtlpHpVaMgrRangeFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21ea68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31f230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3602e4, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) hp_va_mgr_range_free;
    
    // [RtlpHpVaMgrRangeSplit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26d790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3224d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361f48, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) hp_va_mgr_range_split;
    
    // [RtlpHpVaMgrRegionAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26d700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x322548, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3600f0, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) hp_va_mgr_region_allocate;
    
    // [RtlpHpVaMgrStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a0d14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3defb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a21d4, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) hp_va_mgr_start;
    
    // [RtlpHpVsChunkAlignSplit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2257b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2734f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35e480, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) hp_vs_chunk_align_split;
    
    // [RtlpHpVsChunkFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2254f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2739d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35e1bc, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) hp_vs_chunk_free;
    
    // [RtlpHpVsChunkSetExtraPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58f6f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a27f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58f578, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) hp_vs_chunk_set_extra_present;
    
    // [RtlpHpVsContextAddSubsegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2252a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x369340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35df6c, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) hp_vs_context_add_subsegment;
    
    // [RtlpHpVsContextAllocateInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2cc000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x274f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24d020, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) hp_vs_context_allocate_internal;
    
    // [RtlpHpVsContextFreeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225344, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x273830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35e010, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) hp_vs_context_free_list;
    
    // [RtlpHpVsContextMultiAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225934, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x274c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35e604, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) hp_vs_context_multi_alloc;
    
    // [RtlpHpVsSubsegmentFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2265c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f984, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) hp_vs_subsegment_free;
    
    // [RtlpIdnToUnicodeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5873a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59b020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5871d4, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) idn_to_unicode_worker;
    
    // [RtlpInitializeNonVolatileFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3af160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e93d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb024, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) initialize_non_volatile_flush;
    
    // [RtlpInsertInvertedFunctionTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x36da50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x338dbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36edd0, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) insert_inverted_function_table_entry;
    
    // [RtlpInternEntryCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x652d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ce5cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c6ef8, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) intern_entry_create;
    
    // [RtlpInternEntryFind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6528c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75cbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c6a70, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) intern_entry_find;
    
    // [RtlpInternEntryHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x652a18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75cd3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c6bc0, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) intern_entry_hash;
    
    // [RtlpInternEntryMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x652ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d144c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c6e48, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) intern_entry_match;
    
    // [RtlpInternHashBucketsAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b5664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec264, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd224, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) intern_hash_buckets_allocate;
    
    // [RtlpInternHashBucketsFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b5d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec2e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd8d0, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) intern_hash_buckets_free;
    
    // [RtlpInvertedFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CFGRO:0xe00000, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe00000, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe00000, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) inverted_function_table;
    
    // [RtlpIsAddressInIgnoreRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58a5e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664a78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58a46c, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) is_address_in_ignore_region;
    
    // [RtlpIsAppContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x911da8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b0c8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9104c8, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) is_app_container;
    
    // [RtlpIsDrainRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9d6f, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70949, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d6e, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) is_drain_required;
    
    // [RtlpIsFlushRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12a5c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0da48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12acc, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) is_flush_required;
    
    // [RtlpIsFrameInBounds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2851c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a7560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32c130, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) is_frame_in_bounds;
    
    // [RtlpIsUtf8Process]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c5710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d78e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61bb40, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) is_utf8_process;
    
    // [RtlpLfhIncrementDataSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ef7e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423514, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f0ff4, 0x1fe000 bytes
    //
    _o59(sdk::function<uint16_t()>*) lfh_increment_data_slot;
    
    // [RtlpLogCapabilityCheckLatency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x918714, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec9ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x916f24, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) log_capability_check_latency;
    
    // [RtlpLogExceptionDisposition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3917f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x363000, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) log_exception_disposition;
    
    // [RtlpLookasideAdjustDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23ee18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34bb08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec3a8, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) lookaside_adjust_depth;
    
    // [_RtlpMuiRegLoadInstalledFromKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b3054, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa66c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b3904, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) mui_reg_load_installed_from_key;
    
    // [RtlpNameprepAsciiRealWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x587654, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59b2dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x587484, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) nameprep_ascii_real_worker;
    
    // [RtlpNopProcessorCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) nop_processor_callback;
    
    // [RtlpOpenBaseImageFileOptionsKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b22c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9e58, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) open_base_image_file_options_key_ex;
    
    // [RtlpOpenImageFileOptionsKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65f928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7284, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d32b4, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) open_image_file_options_key_ex;
    
    // [RtlpOptimalFlushMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12a58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09a14, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12ac8, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) optimal_flush_method;
    
    // [RtlpPerformanceCounterFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9d88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ca0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d88, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) performance_counter_frequency;
    
    // [RtlpRecordBootStatusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76da44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d53fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7754b4, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) record_boot_status_data;
    
    // [RtlpRestrictedMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e008, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd198, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xa690, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) restricted_mapping;
    
    // [RtlpRtlpCtSelfSubscribeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x588940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588770, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) rtlp_ct_self_subscribe_callback;
    
    // [RtlpRtlpCtWaitForWnfQuiescentWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x916820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914f80, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) rtlp_ct_wait_for_wnf_quiescent_worker;
    
    // [RtlpRvaCompressionTableScales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x11940, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x16c28, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x11480, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) rva_compression_table_scales;
    
    // [RtlpSetRvaListRvaStateBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66b1ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x778390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ddf0c, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) set_rva_list_rva_state_bits;
    
    // [RtlpSystemBootStatusRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77801c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x814dbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77a2bc, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) system_boot_status_request;
    
    // [RtlpTimeFieldsToTimeNoLeapSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x254a54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f5b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201a34, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) time_fields_to_time_no_leap_seconds;
    
    // [RtlpTimeToTimeFields]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x254c68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38eca8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201c48, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) time_to_time_fields;
    
    // [RtlpTimeToTimeFieldsNoLeapSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x254d44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38ed84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201d24, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) time_to_time_fields_no_leap_seconds;
    
    // [RtlpUnwindPrologue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x286e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20e3f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32dde0, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) unwind_prologue;
    
    // [RtlpValidAccessFilterAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90ff1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af438, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90e63c, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) valid_access_filter_ace;
    
    // [RtlpValidFilterAclSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x911f14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e5c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x910634, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) valid_filter_acl_subject_context;
    
    // [RtlpVirtualUnwind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa22f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x287610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32e580, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) virtual_unwind;
    
    // [RtlpWalkWowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10d54c, 0x32828 bytes
    // ntoskrnl.exe .text:0x26bd64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31d3f4, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) walk_wow_stack;
    
    // [RtlpAddIntersectingRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79c268, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85384c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a38e0, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) add_intersecting_ranges;
    
    // [RtlpAddKnownAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d2f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6afa80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a0890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6060b0, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) add_known_ace;
    
    // [RtlpAddKnownObjectAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689248, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90fa20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aef20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90e140, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) add_known_object_ace;
    
    // [RtlpAddRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54eaac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdc34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74c574, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) add_range;
    
    // [RtlpAddToMergedRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f284, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79c384, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x853924, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a39fc, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) add_to_merged_range;
    
    // [RtlpAllocDeallocQueryBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dbeb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e77d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6821b8, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) alloc_dealloc_query_buffer;
    
    // [RtlpAllocateAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4278fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cedc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ebb10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69f304, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) allocate_atom;
    
    // [RtlpAllocateAtomTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c694, 0x32828 bytes
    // ntoskrnl.exe .text:0x2018e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea4a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e51b8, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) allocate_atom_table_entry;
    
    // [RtlpAllocateHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb6564, 0x32828 bytes
    // ntoskrnl.exe .text:0x582cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x596618, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582b00, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) allocate_heap;
    
    // [RtlpAllocateHeapInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb6480, 0x32828 bytes
    // ntoskrnl.exe .text:0x226168, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360248, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ee78, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) allocate_heap_internal;
    
    // [RtlpAllocateHeapRaiseException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2135ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5835a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x596f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5833d8, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) allocate_heap_raise_exception;
    
    // [RtlpAllocateSecondLevelDir]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc86b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345d78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32220c, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) allocate_second_level_dir;
    
    // [RtlpAllowsLowBoxAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf854, 0x32828 bytes
    // ntoskrnl.exe .text:0x266e08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x317e58, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) allows_low_box_access;
    
    // [RtlpAnalyzeHeapFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x218414, 0x32828 bytes
    // ntoskrnl.exe .text:0x58d5d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ff80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58d454, 0x1fe000 bytes
    //
    _o98(sdk::function<void(struct nt::heap_t*, struct heap::entry_t*, uint8_t)>*) analyze_heap_failure;
    
    // [RtlpAppPackageAuthority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e000, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa700, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf0b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd238, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) app_package_authority;
    
    // [RtlpApplyAclToObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cf870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ae100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74f650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x604730, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) apply_acl_to_object;
    
    // [RtlpArchContextFlagFromMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x467b34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f46d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x686114, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fd3e0, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) arch_context_flag_from_machine;
    
    // [RtlpAtomMapAtomToHandleEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x401c80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69cf30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68be08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637f00, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) atom_map_atom_to_handle_entry;
    
    // [RtlpBitsClearAnywhere]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26f310, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x177c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x17570, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x17730, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) bits_clear_anywhere;
    
    // [RtlpBitsClearHigh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26f210, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1d830, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1fe80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1d7b0, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) bits_clear_high;
    
    // [RtlpBitsClearLow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26d720, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1d930, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1fd80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1d8b0, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) bits_clear_low;
    
    // [RtlpBitsClearTotal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x272230, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1a070, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1bdf0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x19ff0, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) bits_clear_total;
    
    // [RtlpBreakWithStatusInstruction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1635f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbd40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4307a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd620, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) break_with_status_instruction;
    
    // [RtlpCallQueryRegistryRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a18c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dbf34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e7854, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682238, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) call_query_registry_routine;
    
    // [RtlpCaptureContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163770, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd7a0, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) capture_context;
    
    // [RtlpCheckDynamicTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542e24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x786ab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84d068, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790850, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) check_dynamic_time_zone_information;
    
    // [RtlpCheckTokenCapabilityGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281778, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x34ac0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10108, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x34e00, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) check_token_capability_generic_mapping;
    
    // [RtlpCheckTokenMembershipGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fc18, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa708, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf0c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd240, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) check_token_membership_generic_mapping;
    
    // [RtlpCoalesceFreeBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb611c, 0x32828 bytes
    // ntoskrnl.exe .text:0x583630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x596fa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x583460, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) coalesce_free_blocks;
    
    // [RtlpCombineAcls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cf930, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ae1c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x750e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6047f0, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) combine_acls;
    
    // [RtlpCompareKnownObjectAces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68862c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910f4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b0058, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f66c, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) compare_known_object_aces;
    
    // [RtlpComputeCrcInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e9b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x250b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fec30, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) compute_crc_internal;
    
    // [RtlpComputeEpilogueOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15722c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3e6494, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x405b78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3e7564, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) compute_epilogue_offset;
    
    // [RtlpComputeFraction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134a50, 0x32828 bytes
    // ntoskrnl.exe .text:0x393988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a357c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3949e8, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) compute_fraction;
    
    // [RtlpComputeMergedAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68878c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9110b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b01b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f7d0, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) compute_merged_acl;
    
    // [RtlpComputeMergedAcl2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6888ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9111d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b02dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90f8f8, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) compute_merged_acl2;
    
    // [RtlpConvertAbsoluteToRelativeSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6893c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90fbb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af0c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90e2d0, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) convert_absolute_to_relative_security_attribute;
    
    // [RtlpConvertFunctionEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13df68, 0x32828 bytes
    // ntoskrnl.exe .text:0x2879d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32e940, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) convert_function_entry;
    
    // [RtlpCopyAces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cfe90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ae830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69bd40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x604e60, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) copy_aces;
    
    // [RtlpCopyBitMapTailToHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9530c, 0x32828 bytes
    // ntoskrnl.exe .text:0x21c8ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209bec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e17ec, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) copy_bit_map_tail_to_head;
    
    // [RtlpCopyBitMapTailToHeadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213274, 0x32828 bytes
    // ntoskrnl.exe .text:0x5827d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5946a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x582604, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) copy_bit_map_tail_to_head_ex;
    
    // [RtlpCopyEffectiveAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d31a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6afd70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69c240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6063a0, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) copy_effective_ace;
    
    // [RtlpCopyExtendedContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa20e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2881c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f3c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32f130, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) copy_extended_context;
    
    // [RtlpCopyLegacyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa219c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2604d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310d3c, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) copy_legacy_context;
    
    // [RtlpCopyLegacyContextAmd64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1edc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2886c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f4e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32f630, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) copy_legacy_context_amd64;
    
    // [RtlpCopyLegacyContextArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x216268, 0x32828 bytes
    // ntoskrnl.exe .text:0x589534, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x596204, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x589484, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) copy_legacy_context_arm;
    
    // [RtlpCopyLegacyContextArm64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2163c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x589694, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x596364, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5895e4, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) copy_legacy_context_arm64;
    
    // [RtlpCopyLegacyContextX86]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3ef4, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cd64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d464, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) copy_legacy_context_x86;
    
    // [RtlpCopyRangeListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749350, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) copy_range_list_entry;
    
    // [RtlpCopyXStateChunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc75e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x260cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37a474, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310f34, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) copy_x_state_chunk;
    
    // [RtlpCreateHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc85b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x371c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345c10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x372fe0, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) create_hash_table;
    
    // [RtlpCreateHeapEncoding]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12cd6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5839b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x597330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5837e8, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) create_heap_encoding;
    
    // [RtlpCreateRangeListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54eb6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7449e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdbc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74c620, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) create_range_list_entry;
    
    // [RtlpCreateServerAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x688b98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b534, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7278d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de114, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) create_server_acl;
    
    // [RtlpCreateSplitBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb57ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x583a20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x597398, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x583850, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) create_split_block;
    
    // [RtlpCreateUCREntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb73b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x584144, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x597acc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x583f74, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) create_ucr_entry;
    
    // [RtlpCreateUserProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79b864, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4478c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5563c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3eb74, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) create_user_process;
    
    // [RtlpCreateUserThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46bd34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ec754, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7c28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x641e08, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) create_user_thread_ex;
    
    // [RtlpDeCommitFreeBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb5540, 0x32828 bytes
    // ntoskrnl.exe .text:0x584284, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x597c0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5840b4, 0x1fe000 bytes
    //
    _p43(sdk::function<void(struct nt::heap_t*, struct heap::free_entry_t*, uint64_t, uint8_t)>*) de_commit_free_block;
    
    // [RtlpDebugPrintCallbackList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4250, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02a70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02ab0, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) debug_print_callback_list;
    
    // [RtlpDebugPrintCallbackLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33ec20, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec5a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0c220, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec5a0, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) debug_print_callback_lock;
    
    // [RtlpDebugPrintCallbacksActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326eb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50510, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17338, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50510, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) debug_print_callbacks_active;
    
    // [RtlpDeleteFromMergedRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54cde0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a72f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8664b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af414, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) delete_from_merged_range;
    
    // [RtlpDeleteRangeListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f80c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741a88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be2a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7496c8, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) delete_range_list_entry;
    
    // [RtlpDereferenceAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c518, 0x32828 bytes
    // ntoskrnl.exe .text:0x216fa4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea1ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2030ec, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) dereference_atom;
    
    // [RtlpDidUnicodeToOemWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x477e4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650098, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759224, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c44e8, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) did_unicode_to_oem_work;
    
    // [RtlpExceptionHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fcd20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4318b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fe600, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) exception_handler;
    
    // [RtlpExceptionLog2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342348, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17330, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48a8, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) exception_log2;
    
    // [RtlpExceptionLogCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3022b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dd98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37a58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ddec, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) exception_log_count;
    
    // [RtlpExecuteHandlerForException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163f10, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fcd50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4318e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fe630, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) execute_handler_for_exception;
    
    // [RtlpExecuteHandlerForUnwind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163f90, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fcdd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fe6b0, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) execute_handler_for_unwind;
    
    // [RtlpExtendHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb54b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x584854, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5981c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x584684, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) extend_heap;
    
    // [RtlpFillMemoryRandomUp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21670c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58a758, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664ecc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58a5dc, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) fill_memory_random_up;
    
    // [RtlpFillMemoryWithInverseStride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x216758, 0x32828 bytes
    // ntoskrnl.exe .text:0x58a7a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664ef8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58a628, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) fill_memory_with_inverse_stride;
    
    // [RtlpFilterSacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ac6b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c3e74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dd46c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61a2a4, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) filter_sacl;
    
    // [RtlpFindAndCommitPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7234, 0x32828 bytes
    // ntoskrnl.exe .text:0x584ad8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59841c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x584908, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) find_and_commit_pages;
    
    // [RtlpFindEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb6f98, 0x32828 bytes
    // ntoskrnl.exe .text:0x58dca8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a0658, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58db28, 0x1fe000 bytes
    //
    _p61(sdk::function<nt::list_entry_t*(struct nt::heap_t*, uint64_t)>*) find_entry;
    
    // [RtlpFindRegTziForCurrentYear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1376ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b26e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d05c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2f94, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) find_reg_tzi_for_current_year;
    
    // [RtlpFindUCREntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7530, 0x32828 bytes
    // ntoskrnl.exe .text:0x58dd24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a06d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58dba4, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) find_ucr_entry;
    
    // [RtlpFreeAllAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c234, 0x32828 bytes
    // ntoskrnl.exe .text:0x217034, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345648, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20317c, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) free_all_atom;
    
    // [RtlpFreeAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42602c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60921c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796af4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d5bec, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) free_atom;
    
    // [RtlpFreeHandleForAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425598, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60924c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796b24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d5c1c, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) free_handle_for_atom;
    
    // [RtlpFreeHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb5b9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x584d34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x598678, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x584b64, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) free_heap;
    
    // [RtlpFreeHeapInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb59b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x226084, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360174, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ed94, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) free_heap_internal;
    
    // [RtlpFreeRangeListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f868, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741ae8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749728, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) free_range_list_entry;
    
    // [RtlpFunctionAddressTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3b60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4e544, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb57cb0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4e3c8, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) function_address_table_entry;
    
    // [RtlpGenerateInheritAcl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c61d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ef30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69b210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e4be0, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) generate_inherit_acl;
    
    // [RtlpGenerateInheritedAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c63a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63f100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69b3f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e4db0, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) generate_inherited_ace;
    
    // [RtlpGenericInverseCouplingWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21687c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58a8ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x665044, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58a770, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) generic_inverse_coupling_worker;
    
    // [RtlpGenericMATSPlusWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x216b2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58abc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x665320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58aa48, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) generic_mats_plus_worker;
    
    // [RtlpGenericRandomPatternWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x216c28, 0x32828 bytes
    // ntoskrnl.exe .text:0x58acc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x665424, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58ab4c, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) generic_random_pattern_worker;
    
    // [RtlpGenericStrideWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x216f38, 0x32828 bytes
    // ntoskrnl.exe .text:0x58afe8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x665718, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58ae6c, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) generic_stride_worker;
    
    // [RtlpGetChainHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70554, 0x32828 bytes
    // ntoskrnl.exe .text:0x20afdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3394cc, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) get_chain_head;
    
    // [RtlpGetContextFlagsLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5708, 0x32828 bytes
    // ntoskrnl.exe .text:0x288b94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20bce4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32fb04, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) get_context_flags_location;
    
    // [RtlpGetDynamicTimeZoneInfoHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542f4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x786bf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84d1ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790994, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) get_dynamic_time_zone_info_handle;
    
    // [RtlpGetLegacyContextLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa37bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x287f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32eef0, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) get_legacy_context_length;
    
    // [RtlpGetNameFromLangInfoNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13d4e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b3270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b3b20, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) get_name_from_lang_info_node;
    
    // [RtlpGetNormalization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x690da0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9188c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bb4e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9170d0, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) get_normalization;
    
    // [RtlpGetNtProductTypeFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68d90c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75dd5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7657ac, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) get_nt_product_type_from_registry;
    
    // [RtlpGetRegistryHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43cab4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dc758, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e7c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6177bc, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) get_registry_handle;
    
    // [RtlpGetSetBootStatusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53383c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76d830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d51e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7752a0, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) get_set_boot_status_data;
    
    // [RtlpGetStackLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x41d40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ea530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cc9e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x208310, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) get_stack_limits;
    
    // [RtlpGetWindowsPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554538, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78ab10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x823230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7948b0, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) get_windows_policy;
    
    // [RtlpHashStringToAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x401d50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69d030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68a840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x638000, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) hash_string_to_atom;
    
    // [RtlpHeapAddListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb63b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x58ddcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a077c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58dc4c, 0x1fe000 bytes
    //
    _p89(sdk::function<void(struct nt::heap_t*, struct heap::list_lookup_t*, uint8_t, nt::list_entry_t*, uint32_t, uint64_t)>*) heap_add_list_entry;
    
    // [RtlpHeapErrorHandlerThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359190, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b5e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d98, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) heap_error_handler_threshold;
    
    // [RtlpHeapExceptionFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213654, 0x32828 bytes
    // ntoskrnl.exe .text:0x58d468, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59fe14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58d2e8, 0x1fe000 bytes
    //
    _p91(sdk::function<uint32_t(int32_t, struct nt::exception_pointers_t*)>*) heap_exception_filter;
    
    // [RtlpHeapFailureInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa0e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c1c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11760, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) heap_failure_info;
    
    // [RtlpHeapFindListLookupEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb700c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58de7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a082c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58dcfc, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) heap_find_list_lookup_entry;
    
    // [RtlpHeapGenerateRandomValue64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213764, 0x32828 bytes
    // ntoskrnl.exe .text:0x223a64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x325214, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2aa144, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) heap_generate_random_value64;
    
    // [RtlpHeapHandleError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x218744, 0x32828 bytes
    // ntoskrnl.exe .text:0x58d8f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a02b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58d778, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) heap_handle_error;
    
    // [RtlpHeapKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54290, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70950, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54250, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) heap_key;
    
    // [RtlpHeapListCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb71e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x58e020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a09cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58dea0, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) heap_list_compare;
    
    // [RtlpHeapRemoveListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb6eb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x58e09c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a0a48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58df1c, 0x1fe000 bytes
    //
    _p98(sdk::function<void(struct nt::heap_t*, struct heap::list_lookup_t*, uint8_t, nt::list_entry_t*, uint32_t, uint64_t)>*) heap_remove_list_entry;
    
    // [RtlpHpAllocWithExceptionProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211da0, 0x32828 bytes
    // ntoskrnl.exe .text:0x58079c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59517c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5805cc, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) hp_alloc_with_exception_protection;
    
    // [RtlpHpFreeWithExceptionProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211de8, 0x32828 bytes
    // ntoskrnl.exe .text:0x580810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5951f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580640, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) hp_free_with_exception_protection;
    
    // [RtlpImageDirectoryEntryToData32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8b34, 0x32828 bytes
    // ntoskrnl.exe .text:0x355910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x361828, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ab90, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) image_directory_entry_to_data32;
    
    // [RtlpImageDirectoryEntryToData64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xde74c, 0x32828 bytes
    // ntoskrnl.exe .text:0x355890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5aec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ab10, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) image_directory_entry_to_data64;
    
    // [RtlpImageDirectoryEntryToDataEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xde83c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3557b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5938, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33aa38, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) image_directory_entry_to_data_ex;
    
    // [RtlpInheritAcl2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cf3a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6adc60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69b8a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x604290, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) inherit_acl2;
    
    // [RtlpInitNlsFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x668c08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cd55c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dbe88, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) init_nls_file_name;
    
    // [RtlpInitNlsSectionName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e7cb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x668ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6e6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dbe20, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) init_nls_section_name;
    
    // [RtlpInitializeHandleTableForAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x474808, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cec5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0ecc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69f19c, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) initialize_handle_table_for_atom_table;
    
    // [RtlpInitializeHeapSegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12cbac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5852a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x598ccc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5850d0, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) initialize_heap_segment;
    
    // [RtlpInitializeLockAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x474800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cec4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0ebc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69f18c, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) initialize_lock_atom_table;
    
    // [RtlpInitializeSecondLevelDir]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x371dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345da4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x373150, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) initialize_second_level_dir;
    
    // [RtlpInitializeStackTraceDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c25c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90ebd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ae088, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90d2f4, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) initialize_stack_trace_database;
    
    // [RtlpInsertFreeBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb559c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58554c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x598f7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58537c, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) insert_free_block;
    
    // [RtlpInsertStringAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425fac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664eac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ec624, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d820c, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) insert_string_atom;
    
    // [RtlpInsertUCRBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb74b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x585890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5992c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5856c0, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) insert_ucr_block;
    
    // [RtlpIntegerChars]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec3b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9806e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa641a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97efc0, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) integer_chars;
    
    // [RtlpIntegerWChars]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f500, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) integer_w_chars;
    
    // [RtlpInterceptorRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e7c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x173d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1c020, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x17340, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) interceptor_routines;
    
    // [RtlpInterlockedFlushSList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1636f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbe40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4308a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd720, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) interlocked_flush_s_list;
    
    // [RtlpInterlockedPopEntrySList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163670, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbdc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd6a0, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) interlocked_pop_entry_s_list;
    
    // [RtlpInterlockedPushEntrySList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1636b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbe00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd6e0, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) interlocked_push_entry_s_list;
    
    // [RtlpIsALicensedLIPLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8f30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97da88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa60758, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97c368, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) is_a_licensed_lip_language;
    
    // [RtlpIsALicensedRegularLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553ca0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a284, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8222c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x794024, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) is_a_licensed_regular_language;
    
    // [RtlpIsDuplicateAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c6a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63f420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69b710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e51c0, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) is_duplicate_ace;
    
    // [RtlpIsFrameInBoundsEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa21e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2875a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20eb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32e514, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) is_frame_in_bounds_ex;
    
    // [RtlpIsNameInExpressionPrivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa9e50, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eb180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357f40, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) is_name_in_expression_private;
    
    // [RtlpIsRangeAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54eeb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7409fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74863c, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) is_range_available;
    
    // [RtlpLangNameInMultiSzString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553d00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a2fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82233c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79409c, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) lang_name_in_multi_sz_string;
    
    // [RtlpLegacyApplicationCapabilityBaseRid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec2a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9805a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64044, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee84, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) legacy_application_capability_base_rid;
    
    // [RtlpLegacyApplicationCapabilityNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f0390, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x984d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa69450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9835e0, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) legacy_application_capability_names;
    
    // [RtlpLoadInstallLanguageFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5529d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x821c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792c90, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) load_install_language_fallback;
    
    // [RtlpLoadLanguageConfigList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552fec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x821e14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793ef0, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) load_language_config_list;
    
    // [RtlpLoadPolicyLanguageSpec]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8f94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97db00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa607c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97c3e0, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) load_policy_language_spec;
    
    // [RtlpLocateRelatedBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2189e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x58d9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a038c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58d850, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) locate_related_blocks;
    
    // [RtlpLockAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x401ab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69cee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68a99c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637eb4, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) lock_atom_table;
    
    // [RtlpLogExceptionDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210d84, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f0fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x591db8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57ef30, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) log_exception_dispatch;
    
    // [RtlpLogExceptionHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210f1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f2a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x591f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f0d0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) log_exception_handler;
    
    // [RtlpLogHeapFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1576ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x58d580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ff2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58d400, 0x1fe000 bytes
    //
    _q37(sdk::function<void(enum heap::failure_type_t, void*, void*, void*, void*, void*)>*) log_heap_failure;
    
    // [RtlpLookupFunctionEntryForStackWalks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x43d10, 0x32828 bytes
    // ntoskrnl.exe .text:0x286810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20de10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32d780, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) lookup_function_entry_for_stack_walks;
    
    // [RtlpLookupLowBox]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11818, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b6e78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea12c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a5b18, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) lookup_low_box;
    
    // [RtlpLookupOrCreateLowBox]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11fa4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b6eec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x213c28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a5b8c, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) lookup_or_create_low_box;
    
    // [RtlpLookupPrimaryFunctionEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a7510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb410, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) lookup_primary_function_entry;
    
    // [RtlpLookupUserFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce260, 0x32828 bytes
    // ntoskrnl.exe .text:0x2879f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37dc20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32e964, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) lookup_user_function_table;
    
    // [RtlpLookupUserFunctionTableInverted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce410, 0x32828 bytes
    // ntoskrnl.exe .text:0x287c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37dc64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32eb80, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) lookup_user_function_table_inverted;
    
    // [RtlpMakeXpressCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111cb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3847e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59fd98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3855a0, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) make_xpress_callback;
    
    // [RtlpModernAppKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b8a8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d4a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd54760, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d4a8, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) modern_app_key;
    
    // [RtlpMuiRegAddAlternateCodePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13d3b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2ea8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b3758, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) mui_reg_add_alternate_code_page;
    
    // [_RtlpMuiRegAddBaseLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ea0c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97eb3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa617f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97d41c, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) mui_reg_add_base_language;
    
    // [RtlpMuiRegAddLanguageByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553834, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789cdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x821fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793a7c, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) mui_reg_add_language_by_name;
    
    // [_RtlpMuiRegAddNeutralLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554238, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a7ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79458c, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) mui_reg_add_neutral_language;
    
    // [RtlpMuiRegConfigListAddLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97dcd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6097c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97c5b4, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) mui_reg_config_list_add_language;
    
    // [RtlpMuiRegConfigMatchesInstalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e92bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97de2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa60ad4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97c70c, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) mui_reg_config_matches_installed;
    
    // [RtlpMuiRegCreateKernelRegistryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13d584, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b331c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b3bcc, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) mui_reg_create_kernel_registry_info;
    
    // [RtlpMuiRegCreateLanguageConfigList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5533ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822a74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793810, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) mui_reg_create_language_config_list;
    
    // [RtlpMuiRegCreateLanguages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553398, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8228cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7937b0, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) mui_reg_create_languages;
    
    // [RtlpMuiRegCreateRegistryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552f3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78ac20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7949c0, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) mui_reg_create_registry_info;
    
    // [RtlpMuiRegCreateStringPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55344c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789ad8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822adc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793878, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) mui_reg_create_string_pool;
    
    // [RtlpMuiRegFreeRegistryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553104, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789734, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822fd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7934d4, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) mui_reg_free_registry_info;
    
    // [RtlpMuiRegGetInstalledLangInfoIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e96b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e0f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa60da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97c9d4, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) mui_reg_get_installed_lang_info_index;
    
    // [RtlpMuiRegGetInstalledLanguageIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa60ee4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97cb18, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) mui_reg_get_installed_language_index;
    
    // [RtlpMuiRegGetInstalledLanguageIndexByLangId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5540a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a638, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822398, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7943d8, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) mui_reg_get_installed_language_index_by_lang_id;
    
    // [RtlpMuiRegGetInstalledLanguageIndexByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9948, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e38c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa61044, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97cc6c, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) mui_reg_get_installed_language_index_by_name;
    
    // [RtlpMuiRegGetLangInfoIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d138, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0fdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868a5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8b6c, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) mui_reg_get_lang_info_index;
    
    // [RtlpMuiRegGetLanguageSpec]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e46c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa61124, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97cd4c, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) mui_reg_get_language_spec;
    
    // [RtlpMuiRegGetOrAddLangInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d074, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0f10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8aa0, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) mui_reg_get_or_add_lang_info;
    
    // [RtlpMuiRegGetOrAddString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554258, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822c88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7945b4, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) mui_reg_get_or_add_string;
    
    // [RtlpMuiRegGetOrAddStringToPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5542f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a8b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822d28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x794654, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) mui_reg_get_or_add_string_to_pool;
    
    // [RtlpMuiRegGetStringIndexInPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5543f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a9b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822e2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x794758, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) mui_reg_get_string_index_in_pool;
    
    // [RtlpMuiRegGrowStringPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9ac8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e538, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa611f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ce18, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) mui_reg_grow_string_pool;
    
    // [_RtlpMuiRegInitAnyLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554170, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822b84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7944b0, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) mui_reg_init_any_language;
    
    // [_RtlpMuiRegInitLIPLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ea420, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97ee9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa61b2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97d77c, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) mui_reg_init_lip_language;
    
    // [_RtlpMuiRegInitPartialLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ea664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97f0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa61d7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97d9c0, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) mui_reg_init_partial_language;
    
    // [RtlpMuiRegLangInfoMatchesSpec]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9b28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e5b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa61268, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ce90, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) mui_reg_lang_info_matches_spec;
    
    // [_RtlpMuiRegLoadInstalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55353c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8227f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793920, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) mui_reg_load_installed;
    
    // [RtlpMuiRegLoadLicInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13d7fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b34f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aab5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b3da8, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) mui_reg_load_lic_information;
    
    // [RtlpMuiRegLoadRegistryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552f80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7896c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793464, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) mui_reg_load_registry_info;
    
    // [_RtlpMuiRegPopulateBaseLanguages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ea6b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97f13c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa61dd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97da1c, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) mui_reg_populate_base_languages;
    
    // [RtlpMuiRegResizeLanguageConfigList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9d38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e7a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6145c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97d088, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) mui_reg_resize_language_config_list;
    
    // [RtlpMuiRegResizeLanguages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9d98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa614c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97d0f4, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) mui_reg_resize_languages;
    
    // [RtlpMuiRegResizeStringPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e9df8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97e880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa61534, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97d160, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) mui_reg_resize_string_pool;
    
    // [_RtlpMuiRegSerializeRegistryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553dd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a358, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7940f8, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) mui_reg_serialize_registry_info;
    
    // [_RtlpMuiRegValidateAndGetInstallFallbackBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eab04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97f59c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa62210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97de7c, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) mui_reg_validate_and_get_install_fallback_base;
    
    // [RtlpMuiRegValidateConfigNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23df3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c58bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x664048, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c471c, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) mui_reg_validate_config_node;
    
    // [_RtlpMuiRegValidateInstalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553a24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793c80, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) mui_reg_validate_installed;
    
    // [_RtlpMuiRegValidateLIPLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eab98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97f644, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa622b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97df24, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) mui_reg_validate_lip_language;
    
    // [_RtlpMuiRegValidatePartialLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eadc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97f880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa624fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97e160, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) mui_reg_validate_partial_language;
    
    // [RtlpMultiUsersInSessionSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342654, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4bfc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc640d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bfa8, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) multi_users_in_session_supported;
    
    // [RtlpNameprepAsciiWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68de10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9137e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2d0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911f40, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) nameprep_ascii_worker;
    
    // [RtlpNewSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cd630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ac530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c3360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x602b60, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) new_security_object;
    
    // [RtlpNormalizeStringWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6907a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x916054, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5594, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9147b4, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) normalize_string_worker;
    
    // [RtlpNtAuthority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260930, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa718, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf7d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xab20, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) nt_authority;
    
    // [RtlpOpenBaseImageFileOptionsKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x487c30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65fa58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c73b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d33e4, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) open_base_image_file_options_key;
    
    // [RtlpOpenThreadToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48fbe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66a05c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb9a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd09c, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) open_thread_token;
    
    // [RtlpOwnerAcesPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1cb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x245ca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3347f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2efb70, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) owner_aces_present;
    
    // [RtlpPopulateContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x704c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20af40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345804, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x339430, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) populate_context;
    
    // [RtlpPopulateLanguageConfigList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553288, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7898cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82292c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79366c, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) populate_language_config_list;
    
    // [RtlpPopulateListIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12caa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x58e190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a0b3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58e010, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) populate_list_index;
    
    // [RtlpProbeUserBufferSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2190e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x585958, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59938c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585788, 0x1fe000 bytes
    //
    _q97(sdk::function<struct heap::entry_t*(struct nt::heap_t*, void*)>*) probe_user_buffer_safe;
    
    // [RtlpProcessIFEOKeyFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x487cd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65fab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7424, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3444, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) process_ifeo_key_filter;
    
    // [RtlpQueryLowBoxId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c5b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b7008, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a5ca8, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) query_low_box_id;
    
    // [RtlpQueryPackageIdentityAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71b8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x203358, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f1478, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e6728, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) query_package_identity_attributes;
    
    // [RtlpQueryRegistryDirect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a458, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ddd34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9774, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6829b8, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) query_registry_direct;
    
    // [RtlpQueryRegistryValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dba6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e7350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x681d70, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) query_registry_values;
    
    // [RtlpQuerySecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48bad4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749b94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73a764, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x751454, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) query_security_descriptor;
    
    // [RtlpQueryTimeZoneInformationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51172c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639718, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8083c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67c61c, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) query_time_zone_information_worker;
    
    // [RtlpQueryTimeZoneKeyNameRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570064, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d2b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb6e0, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) query_time_zone_key_name_routine;
    
    // [RtlpRangeListEntryLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33c240, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec840, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) range_list_entry_lookaside_list;
    
    // [RtlpReadExtendedContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x467298, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68e2f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6873e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f21c0, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) read_extended_context;
    
    // [RtlpReadExtendedContextLayout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4670a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68e5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x687700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f24c0, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) read_extended_context_layout;
    
    // [RtlpReferenceAtom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c4c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b73f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a9188, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) reference_atom;
    
    // [RtlpRegTziFormatToTzi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x543008, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x786d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84d96c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790b20, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) reg_tzi_format_to_tzi;
    
    // [RtlpRegistryPaths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed2a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9816b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ff90, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) registry_paths;
    
    // [RtlpRegistryQueryInitialBuffersize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec5c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9808b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f198, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) registry_query_initial_buffersize;
    
    // [_RtlpRemovePendingDeleteLanguages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13d430, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2f34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa5ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b37e4, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) remove_pending_delete_languages;
    
    // [RtlpRemoveUCRBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb757c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5859e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59941c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585818, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) remove_ucr_block;
    
    // [RtlpRunOnceWaitForInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6908f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x916868, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5cc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914fc8, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) run_once_wait_for_init;
    
    // [RtlpRunTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x270f90, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x196d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x194a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x19640, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) run_table;
    
    // [RtlpSafeMachineFrameEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3300, 0x32828 bytes
    // ntoskrnl.exe .data:0xc00330, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02ee8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00330, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) safe_machine_frame_entries;
    
    // [RtlpSameFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157524, 0x32828 bytes
    // ntoskrnl.exe .text:0x580690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ce20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5804c0, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) same_function;
    
    // [RtlpSanitizeContextFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x467a70, 0x32828 bytes
    // ntoskrnl.exe .text:0x287e84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32edf4, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) sanitize_context_flags;
    
    // [RtlpSearchFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ba70, 0x32828 bytes
    // ntoskrnl.exe .text:0x392e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3569f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393e60, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) search_function_table;
    
    // [RtlpSeedGlfsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2170ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x58b130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x665860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58afb0, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) seed_glfsr;
    
    // [RtlpSetSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x427dc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bf580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74ea40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x614500, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) set_security_object;
    
    // [RtlpSetTimeZoneInformationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cdc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9122ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b10bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9109cc, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) set_time_zone_information_worker;
    
    // [RtlpSetupExtendedBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213790, 0x32828 bytes
    // ntoskrnl.exe .text:0x585a78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5994ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5858a8, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) setup_extended_block;
    
    // [RtlpSizeHeapInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213914, 0x32828 bytes
    // ntoskrnl.exe .text:0x585bf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59963c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585a28, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) size_heap_internal;
    
    // [RtlpStackTraceDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302250, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dd38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc379f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dd78, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) stack_trace_database;
    
    // [RtlpStatusTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26f410, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x178c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x19e90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x17830, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) status_table;
    
    // [RtlpStdExtendLowerWatermark]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211724, 0x32828 bytes
    // ntoskrnl.exe .text:0x58006c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x594acc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57fe9c, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) std_extend_lower_watermark;
    
    // [RtlpStdExtendUpperWatermark]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211800, 0x32828 bytes
    // ntoskrnl.exe .text:0x5801b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x594c0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57ffe4, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) std_extend_upper_watermark;
    
    // [RtlpStdGetRecordedStackTraceIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2118dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5802f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x594d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580120, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) std_get_recorded_stack_trace_index;
    
    // [RtlpStdGetSpaceForTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2119ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x580420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x594e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580250, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) std_get_space_for_trace;
    
    // [RtlpStdLogCapturedStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211a68, 0x32828 bytes
    // ntoskrnl.exe .text:0x5804e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x594f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x580310, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) std_log_captured_stack_trace;
    
    // [RtlpSysVolCheckOwnerAndSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51af38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x715d98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b1fa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71d7d8, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) sys_vol_check_owner_and_security;
    
    // [RtlpSysVolCreateSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ade4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x715c3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b22d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71d67c, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) sys_vol_create_security_descriptor;
    
    // [RtlpSysVolTakeOwnership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68d59c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x912fe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x911748, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) sys_vol_take_ownership;
    
    // [RtlpTerminateCurrentProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68cb80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x911fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b0dfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x910700, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) terminate_current_process;
    
    // [RtlpTestAndFillMemoryUp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2170e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x58b16c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x66589c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58afec, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) test_and_fill_memory_up;
    
    // [RtlpTestMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x217100, 0x32828 bytes
    // ntoskrnl.exe .text:0x58b194, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6658c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58b014, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) test_memory;
    
    // [RtlpTestMemoryRandomUp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21711c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58b1b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6658e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58b038, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) test_memory_random_up;
    
    // [RtlpTraceDatabaseAcquireLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215d04, 0x32828 bytes
    // ntoskrnl.exe .text:0x588d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ca38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588b80, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) trace_database_acquire_lock;
    
    // [RtlpTraceDatabaseAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215d3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x588d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ca78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588bc0, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) trace_database_allocate;
    
    // [RtlpTraceDatabaseInternalAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215d54, 0x32828 bytes
    // ntoskrnl.exe .text:0x588db8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59caa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588be8, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) trace_database_internal_add;
    
    // [RtlpTraceDatabaseInternalFind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215f04, 0x32828 bytes
    // ntoskrnl.exe .text:0x588f74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59cc64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588da4, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) trace_database_internal_find;
    
    // [RtlpTraceDatabaseReleaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x215fac, 0x32828 bytes
    // ntoskrnl.exe .text:0x589028, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59cd18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588e58, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) trace_database_release_lock;
    
    // [RtlpTreeDoubleRotateNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f30, 0x32828 bytes
    // ntoskrnl.exe .text:0x346080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x279318, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a3c70, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) tree_double_rotate_nodes;
    
    // [RtlpUnlockAtomTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425f74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69d374, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ebad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6389b8, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) unlock_atom_table;
    
    // [RtlpUnwindEpilogue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3798, 0x32828 bytes
    // ntoskrnl.exe .text:0x270144, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321964, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) unwind_epilogue;
    
    // [RtlpUnwindHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163f30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fcd70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x431900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fe650, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) unwind_handler;
    
    // [RtlpUnwindHistoryTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa5f0, 0x32828 bytes
    // ntoskrnl.exe CFGRO:0xe01940, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01950, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01940, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) unwind_history_table;
    
    // [RtlpUnwindOpSlotTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26d860, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x11890, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x45aa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x11a20, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) unwind_op_slot_table;
    
    // [RtlpUnwindOpSlots]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3954, 0x32828 bytes
    // ntoskrnl.exe .text:0x270300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x462a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321b20, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) unwind_op_slots;
    
    // [RtlpUpcaseUnicodeStringPrivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130fcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2daf38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eb670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c178, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) upcase_unicode_string_private;
    
    // [RtlpUpdateDynamicTimeZones]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542b3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x786754, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84d6d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7904f4, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) update_dynamic_time_zones;
    
    // [RtlpUpdateHeapRates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213a7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x585dc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x599804, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x585bf4, 0x1fe000 bytes
    //
    _r54(sdk::function<void(struct nt::heap_t*, uint32_t)>*) update_heap_rates;
    
    // [RtlpValidAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689718, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90ff80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af498, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90e6a0, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) valid_attribute;
    
    // [RtlpValidAttributeAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e458, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e1564, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) valid_attribute_ace;
    
    // [RtlpValidAttributeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910098, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af5b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90e7b8, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) valid_attribute_info;
    
    // [RtlpValidCompoundAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68990c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x91011c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90e83c, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) valid_compound_ace;
    
    // [RtlpValidObjectAce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689980, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x910198, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9af6a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90e8b8, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) valid_object_ace;
    
    // [RtlpValidRelativeAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x689a18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e4c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e97f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e15d4, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) valid_relative_attribute;
    
    // [RtlpValidTrustSubjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12ecf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38001c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320da0, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) valid_trust_subject_context;
    
    // [RtlpValidateAsciiStd3AndLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68e1e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9138a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b2de8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x912008, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) validate_ascii_std3_and_length;
    
    // [RtlpValidateContextFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa3910, 0x32828 bytes
    // ntoskrnl.exe .text:0x288640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32f5b0, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) validate_context_flags;
    
    // [RtlpValidateKeyTrust]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439218, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66fe5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682c2c, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) validate_key_trust;
    
    // [RtlpValidateSDOffsetAndSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f277c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62b80c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7564e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68b99c, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) validate_sd_offset_and_size;
    
    // [RtlpValidateSidBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b64c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62169c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eac44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d660, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) validate_sid_buffer;
    
    // [RtlpVerCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d09c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3798a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ade34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ac20, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) ver_compare;
    
    // [RtlpVerGetConditionMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d080, 0x32828 bytes
    // ntoskrnl.exe .text:0x379880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ade14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ac00, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) ver_get_condition_mask;
    
    // [RtlpWalkFrameChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x41ed0, 0x32828 bytes
    // ntoskrnl.exe .text:0x285b00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20d010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32ca70, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) walk_frame_chain;
    
    // [RtlpWow64CreateUserStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4862a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cdbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dacf8, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) wow64_create_user_stack;
    
    // [RtlpWow64CtxFromAmd64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4686b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4064, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x685258, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fcd74, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) wow64_ctx_from_amd64;
    
    // [RtlpWow64CtxToAmd64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469698, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7138, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fd698, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) wow64_ctx_to_amd64;
    
    // [RtlpWow64GetContextOnAmd64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4684dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f3e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x685440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fcba0, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) wow64_get_context_on_amd64;
    
    // [RtlpWow64SanitizeContextFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4680d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f424c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x685d34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fcf5c, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) wow64_sanitize_context_flags;
    
    // [RtlpWow64SetContextOnAmd64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4694b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f47a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c6f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fd4b0, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) wow64_set_context_on_amd64;
    
    // [RtlpWriteExtendedContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x468114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f3dd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x685614, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fcae4, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) write_extended_context;
    
    // [RtlpAllocateDebugInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x12110, 0x67960 bytes
    //
    _r77(sdk::unknown_ptr) allocate_debug_info;
    
    // [RtlpAllocateEnvironmentHashTable]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x58b80, 0x74648 bytes
    //
    _r78(sdk::unknown_ptr) allocate_environment_hash_table;
    
    // [RtlpAreLegacyDosDeviceNamesEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xd7670, 0x74648 bytes
    //
    _r79(sdk::unknown_ptr) are_legacy_dos_device_names_enabled;
    
    // [RtlpClearEnvironmentHashTable]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x6c23c, 0x74648 bytes
    //
    _r80(sdk::unknown_ptr) clear_environment_hash_table;
    
    // [RtlpContinuationContextMachineFrameEntries]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x17e220, 0x74648 bytes
    //
    _r81(sdk::unknown_ptr) continuation_context_machine_frame_entries;
    
    // [RtlpCreateAndInsertEnvironmentHashTableEntry]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x58ab0, 0x74648 bytes
    //
    _r82(sdk::unknown_ptr) create_and_insert_environment_hash_table_entry;
    
    // [RtlpDbgPrintCriticalSectionTimeout]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd4f78, 0x67960 bytes
    //
    _r83(sdk::unknown_ptr) dbg_print_critical_section_timeout;
    
    // [RtlpDynamicCallbackTableTreeMax]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .mrdata:0x1992c0, 0x74648 bytes
    //
    _r84(sdk::unknown_ptr) dynamic_callback_table_tree_max;
    
    // [RtlpDynamicCallbackTableTreeMin]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .mrdata:0x1992c8, 0x74648 bytes
    //
    _r85(sdk::unknown_ptr) dynamic_callback_table_tree_min;
    
    // [RtlpDynamicFunctionTableTreeFindRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x722e0, 0x67960 bytes
    //
    _r86(sdk::unknown_ptr) dynamic_function_table_tree_find_routine;
    
    // [RtlpDynamicFunctionTableTreeMax]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .mrdata:0x1992e8, 0x74648 bytes
    //
    _r87(sdk::unknown_ptr) dynamic_function_table_tree_max;
    
    // [RtlpDynamicFunctionTableTreeMin]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .mrdata:0x1992e0, 0x74648 bytes
    //
    _r88(sdk::unknown_ptr) dynamic_function_table_tree_min;
    
    // [RtlpEnvironmentHashTable]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x184aa0, 0x74648 bytes
    //
    _r89(sdk::unknown_ptr) environment_hash_table;
    
    // [RtlpFcAllocate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004
    // ntdll.dll .text:0x101660, 0x6fc38 bytes
    //
    _r90(sdk::unknown_ptr) fc_allocate;
    
    // [RtlpFcBufferManagerGetConfigurationChangeStamp]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004
    // ntdll.dll PAGE:0x11b1f4, 0x6fc38 bytes
    //
    _r91(sdk::unknown_ptr) fc_buffer_manager_get_configuration_change_stamp;
    
    // [RtlpFcFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004
    // ntdll.dll .text:0x13c60, 0x6fc38 bytes
    //
    _r92(sdk::unknown_ptr) fc_free;
    
    // [RtlpFcMapSingleBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x71224, 0x74648 bytes
    //
    _r93(sdk::unknown_ptr) fc_map_single_buffer;
    
    // [RtlpFindEnvironmentHashEntry]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x1f080, 0x74648 bytes
    //
    _r94(sdk::unknown_ptr) find_environment_hash_entry;
    
    // [RtlpFindFirstActivationContextSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x2d3a4, 0x67960 bytes
    //
    _r95(sdk::unknown_ptr) find_first_activation_context_section;
    
    // [RtlpFlsLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x154300, 0x67960 bytes
    //
    _r96(sdk::unknown_ptr) fls_lock;
    
    // [RtlpFreeEnvBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd170, 0x67960 bytes
    //
    _r97(sdk::unknown_ptr) free_env_block;
    
    // [RtlpFreeEnvironmentHashTable]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x8b99c, 0x74648 bytes
    //
    _r98(sdk::unknown_ptr) free_environment_hash_table;
    
    // [RtlpGetCurrentProcessorNumberExUninitialized]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x84850, 0x74648 bytes
    //
    _r99(sdk::unknown_ptr) get_current_processor_number_ex_uninitialized;
    
    // [RtlpGetCurrentProcessorNumberHow]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x182948, 0x74648 bytes
    //
    _s00(sdk::unknown_ptr) get_current_processor_number_how;
    
    // [RtlpGetCurrentProcessorNumberUninitialized]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x84820, 0x74648 bytes
    //
    _s01(sdk::unknown_ptr) get_current_processor_number_uninitialized;
    
    // [RtlpGetFirstWnfNameSubscription]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe8c78, 0x74648 bytes
    //
    _s02(sdk::unknown_ptr) get_first_wnf_name_subscription;
    
    // [RtlpGetHeapTag]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe2f00, 0x74648 bytes
    //
    _s03(sdk::unknown_ptr) get_heap_tag;
    
    // [RtlpGetHeapWalkEntryOverheadBytes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x89f2c, 0x67960 bytes
    //
    _s04(sdk::unknown_ptr) get_heap_walk_entry_overhead_bytes;
    
    // [RtlpGetNextWnfNameSubscription]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe8cb4, 0x74648 bytes
    //
    _s05(sdk::unknown_ptr) get_next_wnf_name_subscription;
    
    // [RtlpGetProcessCodepagesForLocale]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x109b80, 0x74648 bytes
    //
    _s06(sdk::unknown_ptr) get_process_codepages_for_locale;
    
    // [RtlpGuardIsSuppressedImageRva]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xf0b38, 0x67960 bytes
    //
    _s07(sdk::unknown_ptr) guard_is_suppressed_image_rva;
    
    // [RtlpHpCompact]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x16850, 0x67960 bytes
    //
    _s08(sdk::unknown_ptr) hp_compact;
    
    // [RtlpHpExtrasMove]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x79df0, 0x67960 bytes
    //
    _s09(sdk::unknown_ptr) hp_extras_move;
    
    // [RtlpHpInitializePerfPolicies]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xae828, 0x74648 bytes
    //
    _s10(sdk::unknown_ptr) hp_initialize_perf_policies;
    
    // [RtlpHpLargeAllocGetMetadata]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1ad2c, 0x67960 bytes
    //
    _s11(sdk::unknown_ptr) hp_large_alloc_get_metadata;
    
    // [RtlpHpLargeAllocationBitmap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x151600, 0x67960 bytes
    //
    _s12(sdk::unknown_ptr) hp_large_allocation_bitmap;
    
    // [RtlpHpLargeLockRelease]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1ad64, 0x67960 bytes
    //
    _s13(sdk::unknown_ptr) hp_large_lock_release;
    
    // [RtlpHpLargeLockReleaseShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1a794, 0x67960 bytes
    //
    _s14(sdk::unknown_ptr) hp_large_lock_release_shared;
    
    // [RtlpHpLargeSparseBmpAlloc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x7a530, 0x67960 bytes
    //
    _s15(sdk::unknown_ptr) hp_large_sparse_bmp_alloc;
    
    // [RtlpHpLargeSparseBmpFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xf8f50, 0x67960 bytes
    //
    _s16(sdk::unknown_ptr) hp_large_sparse_bmp_free;
    
    // [RtlpHpLargeSparseBmpInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x740f0, 0x67960 bytes
    //
    _s17(sdk::unknown_ptr) hp_large_sparse_bmp_initialize;
    
    // [RtlpHpLfhCacheAddSubsegment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x6c8e4, 0x67960 bytes
    //
    _s18(sdk::unknown_ptr) hp_lfh_cache_add_subsegment;
    
    // [RtlpHpLfhCacheEmpty]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x16994, 0x67960 bytes
    //
    _s19(sdk::unknown_ptr) hp_lfh_cache_empty;
    
    // [RtlpHpLfhSubsegmentAllocateBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x455b0, 0x67960 bytes
    //
    _s20(sdk::unknown_ptr) hp_lfh_subsegment_allocate_block;
    
    // [RtlpHpLfhSubsegmentCommitBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x43c54, 0x67960 bytes
    //
    _s21(sdk::unknown_ptr) hp_lfh_subsegment_commit_block;
    
    // [RtlpHpLfhSubsegmentLockOwner]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x328e8, 0x67960 bytes
    //
    _s22(sdk::unknown_ptr) hp_lfh_subsegment_lock_owner;
    
    // [RtlpHpMetadataHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x154050, 0x67960 bytes
    //
    _s23(sdk::unknown_ptr) hp_metadata_heap;
    
    // [RtlpHpMetadataHeapInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x88800, 0x67960 bytes
    //
    _s24(sdk::unknown_ptr) hp_metadata_heap_init;
    
    // [RtlpHpMetadataHeapInitVar]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x154398, 0x67960 bytes
    //
    _s25(sdk::unknown_ptr) hp_metadata_heap_init_var;
    
    // [RtlpHpProtectHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xfad40, 0x67960 bytes
    //
    _s26(sdk::unknown_ptr) hp_protect_heap;
    
    // [RtlpHpReallocComputeSizes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x4489c, 0x67960 bytes
    //
    _s27(sdk::unknown_ptr) hp_realloc_compute_sizes;
    
    // [RtlpHpSegAllocSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x73c10, 0x67960 bytes
    //
    _s28(sdk::unknown_ptr) hp_seg_alloc_size;
    
    // [RtlpHpSegAllocSizeInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x44a58, 0x67960 bytes
    //
    _s29(sdk::unknown_ptr) hp_seg_alloc_size_internal;
    
    // [RtlpHpSegFreeRangeCompare]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x2ee24, 0x67960 bytes
    //
    _s30(sdk::function<int32_t(void*, struct rtl::balanced_node_t*)>*) hp_seg_free_range_compare;
    
    // [RtlpHpSegHeapAllocate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x16128, 0x67960 bytes
    //
    _s31(sdk::unknown_ptr) hp_seg_heap_allocate;
    
    // [RtlpHpSegHeapCreate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x15dc4, 0x67960 bytes
    //
    _s32(sdk::unknown_ptr) hp_seg_heap_create;
    
    // [RtlpHpSegHeapDestroy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x179e8, 0x67960 bytes
    //
    _s33(sdk::unknown_ptr) hp_seg_heap_destroy;
    
    // [RtlpHpSegLockRelease]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x7292c, 0x67960 bytes
    //
    _s34(sdk::unknown_ptr) hp_seg_lock_release;
    
    // [RtlpHpSegPageRangeCalcCommitRegion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x44588, 0x67960 bytes
    //
    _s35(sdk::unknown_ptr) hp_seg_page_range_calc_commit_region;
    
    // [RtlpHpSegPageRangeDecommit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x44438, 0x67960 bytes
    //
    _s36(sdk::unknown_ptr) hp_seg_page_range_decommit;
    
    // [RtlpHpSegReportCounters]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xfaf50, 0x67960 bytes
    //
    _s37(sdk::unknown_ptr) hp_seg_report_counters;
    
    // [RtlpHpSegUpdateCommit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x44528, 0x67960 bytes
    //
    _s38(sdk::unknown_ptr) hp_seg_update_commit;
    
    // [RtlpHpSegWalkHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x18b14, 0x67960 bytes
    //
    _s39(sdk::function<int32_t(struct ntdll::segment_heap_t*, struct rtl::heap_walk_entry_t*, uint8_t)>*) hp_seg_walk_heap;
    
    // [RtlpHpStackDbContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x1516a0, 0x67960 bytes
    //
    _s40(sdk::unknown_ptr) hp_stack_db_context;
    
    // [RtlpHpStackDbInitVar]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x155428, 0x67960 bytes
    //
    _s41(sdk::unknown_ptr) hp_stack_db_init_var;
    
    // [RtlpHpStackDbInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xf8f60, 0x67960 bytes
    //
    _s42(sdk::unknown_ptr) hp_stack_db_initialize;
    
    // [RtlpHpVsChunkCompare]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x328c0, 0x67960 bytes
    //
    _s43(sdk::unknown_ptr) hp_vs_chunk_compare;
    
    // [RtlpImageNtHeader]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x120654, 0x74648 bytes
    //
    _s44(sdk::unknown_ptr) image_nt_header;
    
    // [RtlpInitAndCallLcidToCultureName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x21e68, 0x67960 bytes
    //
    _s45(sdk::unknown_ptr) init_and_call_lcid_to_culture_name;
    
    // [RtlpInitializeActivationContextStackFrameList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1d570, 0x67960 bytes
    //
    _s46(sdk::unknown_ptr) initialize_activation_context_stack_frame_list;
    
    // [RtlpInitializeLegacyDosDevicePathState]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xd77b4, 0x74648 bytes
    //
    _s47(sdk::unknown_ptr) initialize_legacy_dos_device_path_state;
    
    // [RtlpInsertEnvironmentHashTableEntry]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x58bb4, 0x74648 bytes
    //
    _s48(sdk::unknown_ptr) insert_environment_hash_table_entry;
    
    // [RtlpIsContinuationContextMachineFrameEntry]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x9e474, 0x74648 bytes
    //
    _s49(sdk::unknown_ptr) is_continuation_context_machine_frame_entry;
    
    // [RtlpIsProtectedHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x7f774, 0x67960 bytes
    //
    _s50(sdk::unknown_ptr) is_protected_heap;
    
    // [RtlpLockFlsCallbackVector]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd5978, 0x67960 bytes
    //
    _s51(sdk::unknown_ptr) lock_fls_callback_vector;
    
    // [RtlpLogHeapTagUpdateEvent]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x1178d8, 0x74648 bytes
    //
    _s52(sdk::unknown_ptr) log_heap_tag_update_event;
    
    // [RtlpMuiRegLoadMachinePreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x5e1c, 0x67960 bytes
    //
    _s53(sdk::unknown_ptr) mui_reg_load_machine_preferred_ui_languages;
    
    // [RtlpNonNegativeDecrement]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x6feb0, 0x67960 bytes
    //
    _s54(sdk::unknown_ptr) non_negative_decrement;
    
    // [RtlpQueryCriticalSectionOwner]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe2f3c, 0x74648 bytes
    //
    _s55(sdk::unknown_ptr) query_critical_section_owner;
    
    // [RtlpQueryCriticalSectionOwner32]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe303c, 0x74648 bytes
    //
    _s56(sdk::unknown_ptr) query_critical_section_owner32;
    
    // [RtlpQueryCriticalSectionOwner64]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe30dc, 0x74648 bytes
    //
    _s57(sdk::unknown_ptr) query_critical_section_owner64;
    
    // [RtlpQueryEnvironmentHashTable]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xd9584, 0x74648 bytes
    //
    _s58(sdk::unknown_ptr) query_environment_hash_table;
    
    // [RtlpQueryProcessMachine]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe349c, 0x74648 bytes
    //
    _s59(sdk::unknown_ptr) query_process_machine;
    
    // [RtlpSetHeapWalkEntryOverheadBytes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x10e0, 0x67960 bytes
    //
    _s60(sdk::unknown_ptr) set_heap_walk_entry_overhead_bytes;
    
    // [RtlpSetProcessBacktraces]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe35ac, 0x74648 bytes
    //
    _s61(sdk::unknown_ptr) set_process_backtraces;
    
    // [RtlpSetupEnvironmentHashTable]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x5882c, 0x74648 bytes
    //
    _s62(sdk::unknown_ptr) setup_environment_hash_table;
    
    // [RtlpSiloGetNtProductType]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xf093c, 0x67960 bytes
    //
    _s63(sdk::unknown_ptr) silo_get_nt_product_type;
    
    // [RtlpSparseBitmapCheckRangeArrayPage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1b228, 0x67960 bytes
    //
    _s64(sdk::unknown_ptr) sparse_bitmap_check_range_array_page;
    
    // [RtlpSparseBitmapCommitRangeArrayPage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x7a5ec, 0x67960 bytes
    //
    _s65(sdk::unknown_ptr) sparse_bitmap_commit_range_array_page;
    
    // [RtlpSparseBitmapCtxAppendNextRangeToRun]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101964, 0x67960 bytes
    //
    _s66(sdk::unknown_ptr) sparse_bitmap_ctx_append_next_range_to_run;
    
    // [RtlpSparseBitmapCtxCheckRangeArray]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1aff8, 0x67960 bytes
    //
    _s67(sdk::unknown_ptr) sparse_bitmap_ctx_check_range_array;
    
    // [RtlpSparseBitmapCtxCountRangeBits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101a18, 0x67960 bytes
    //
    _s68(sdk::unknown_ptr) sparse_bitmap_ctx_count_range_bits;
    
    // [RtlpSparseBitmapCtxFindNextBitInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101a3c, 0x67960 bytes
    //
    _s69(sdk::unknown_ptr) sparse_bitmap_ctx_find_next_bit_internal;
    
    // [RtlpSparseBitmapCtxFindRunsFromNullRange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101adc, 0x67960 bytes
    //
    _s70(sdk::unknown_ptr) sparse_bitmap_ctx_find_runs_from_null_range;
    
    // [RtlpSparseBitmapCtxFindRunsFromRange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101c04, 0x67960 bytes
    //
    _s71(sdk::unknown_ptr) sparse_bitmap_ctx_find_runs_from_range;
    
    // [RtlpSparseBitmapCtxFindRunsInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x101fac, 0x67960 bytes
    //
    _s72(sdk::unknown_ptr) sparse_bitmap_ctx_find_runs_internal;
    
    // [RtlpSparseBitmapCtxLockExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1b320, 0x67960 bytes
    //
    _s73(sdk::unknown_ptr) sparse_bitmap_ctx_lock_exclusive;
    
    // [RtlpSparseBitmapCtxLockShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1b204, 0x67960 bytes
    //
    _s74(sdk::unknown_ptr) sparse_bitmap_ctx_lock_shared;
    
    // [RtlpSparseBitmapCtxPrepareRanges]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1ade0, 0x67960 bytes
    //
    _s75(sdk::unknown_ptr) sparse_bitmap_ctx_prepare_ranges;
    
    // [RtlpSparseBitmapCtxUnlockExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1b300, 0x67960 bytes
    //
    _s76(sdk::unknown_ptr) sparse_bitmap_ctx_unlock_exclusive;
    
    // [RtlpSparseBitmapCtxUnlockShared]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1b1e4, 0x67960 bytes
    //
    _s77(sdk::unknown_ptr) sparse_bitmap_ctx_unlock_shared;
    
    // [RtlpSparseBitmapCtxUpdateBitRanges]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1ae94, 0x67960 bytes
    //
    _s78(sdk::unknown_ptr) sparse_bitmap_ctx_update_bit_ranges;
    
    // [RtlpSparseBitmapCtxUpdateBits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1b250, 0x67960 bytes
    //
    _s79(sdk::unknown_ptr) sparse_bitmap_ctx_update_bits;
    
    // [RtlpSparseBitmapRangeArrayCleanup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x102224, 0x67960 bytes
    //
    _s80(sdk::unknown_ptr) sparse_bitmap_range_array_cleanup;
    
    // [RtlpTpDeleteData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x4ea38, 0x67960 bytes
    //
    _s81(sdk::unknown_ptr) tp_delete_data;
    
    // [RtlpTpWorkCallbackXfgThunk]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa5880, 0x74648 bytes
    //
    _s82(sdk::unknown_ptr) tp_work_callback_xfg_thunk;
    
    // [RtlpUnWaitCriticalSectionEx]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2a140, 0x74648 bytes
    //
    _s83(sdk::unknown_ptr) un_wait_critical_section_ex;
    
    // [RtlpUnlockFlsCallbackVector]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd59d8, 0x67960 bytes
    //
    _s84(sdk::unknown_ptr) unlock_fls_callback_vector;
    
    // [RtlpWaitOnAddressSpinCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x150678, 0x67960 bytes
    //
    _s85(sdk::unknown_ptr) wait_on_address_spin_count;
    
    // [RtlpWnfCalculateRetryTime]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe8de4, 0x74648 bytes
    //
    _s86(sdk::unknown_ptr) wnf_calculate_retry_time;
    
    // [RtlpWnfNameSubscriptionCompareByStateName]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x7bb2c, 0x74648 bytes
    //
    _s87(sdk::unknown_ptr) wnf_name_subscription_compare_by_state_name;
    
    // [RtlpWow64CheckRunningSoftwareCpu]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd98dc, 0x67960 bytes
    //
    _s88(sdk::unknown_ptr) wow64_check_running_software_cpu;
    
    // [RtlpWow64SuspendProcess]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe6858, 0x74648 bytes
    //
    _s89(sdk::unknown_ptr) wow64_suspend_process;
    
    // [RtlpWow64SuspendThread]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x1c70, 0x74648 bytes
    //
    _s90(sdk::unknown_ptr) wow64_suspend_thread;
    
    // [RtlpWow64SuspendWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd9a90, 0x67960 bytes
    //
    _s91(sdk::unknown_ptr) wow64_suspend_worker;
    
    // [RtlpWow64ThunkEnvironmentTo64]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x58e0c, 0x74648 bytes
    //
    _s92(sdk::unknown_ptr) wow64_thunk_environment_to64;
    
    // [RtlpXcfgEnabledVolatileFeatures]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .rdata:0x159558, 0x74648 bytes
    //
    _s93(sdk::unknown_ptr) xcfg_enabled_volatile_features;
    
    // [RtlpXfgGetPdbSignature]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x1206b0, 0x74648 bytes
    //
    _s94(sdk::unknown_ptr) xfg_get_pdb_signature;
    
    // [RtlpXfgTlLogFailure]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x12083c, 0x74648 bytes
    //
    _s95(sdk::unknown_ptr) xfg_tl_log_failure;
    
    // [RtlpGetCriticalSectionContentionCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xe8978, 0x6fc38 bytes
    // ntdll.dll .text:0xe88e8, 0x6fc38 bytes
    //
    _s96(sdk::unknown_ptr) get_critical_section_contention_count;
    
    // [RtlpHpExtrasReportBusyBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 11
    // ntdll.dll .text:0x18e54, 0x67960 bytes
    // ntdll.dll .text:0x121d30, 0x74648 bytes
    //
    _s97(sdk::unknown_ptr) hp_extras_report_busy_block;
    
    // [RtlpShadowStackEnforced]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x10aaf0, 0x6fc38 bytes
    // ntdll.dll .text:0x10aa80, 0x6fc38 bytes
    //
    _s98(sdk::unknown_ptr) shadow_stack_enforced;
    
    // [RtlpAllocateUserBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x671b8, 0x6fc38 bytes
    // ntdll.dll .text:0x63680, 0x74648 bytes
    // ntdll.dll .text:0x672d8, 0x6fc38 bytes
    //
    _s99(sdk::unknown_ptr) allocate_user_block;
    
    // [RtlpAttachThreadToUmsCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xedc20, 0x67960 bytes
    // ntdll.dll .text:0xf6fa0, 0x6fc38 bytes
    // ntdll.dll .text:0xf6f50, 0x6fc38 bytes
    //
    _t00(sdk::unknown_ptr) attach_thread_to_ums_completion_list;
    
    // [RtlpCreateIFEOKeyFilterKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe306c, 0x6fc38 bytes
    // ntdll.dll .text:0xedfd0, 0x74648 bytes
    // ntdll.dll .text:0xe2fdc, 0x6fc38 bytes
    //
    _t01(sdk::unknown_ptr) create_ifeo_key_filter_key;
    
    // [RtlpDeleteEmptyImageFileOptionsKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe3188, 0x6fc38 bytes
    // ntdll.dll .text:0xee0ec, 0x74648 bytes
    // ntdll.dll .text:0xe30f8, 0x6fc38 bytes
    //
    _t02(sdk::unknown_ptr) delete_empty_image_file_options_key;
    
    // [RtlpDetachThreadFromUmsCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xedce4, 0x67960 bytes
    // ntdll.dll .text:0xf7068, 0x6fc38 bytes
    // ntdll.dll .text:0xf7018, 0x6fc38 bytes
    //
    _t03(sdk::unknown_ptr) detach_thread_from_ums_completion_list;
    
    // [RtlpDosPathNameToRelativeNtPathName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x39070, 0x6fc38 bytes
    // ntdll.dll .text:0x1bdc0, 0x74648 bytes
    // ntdll.dll .text:0x39070, 0x6fc38 bytes
    //
    _t04(sdk::unknown_ptr) dos_path_name_to_relative_nt_path_name;
    
    // [RtlpDupTebLanguageList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xefdb8, 0x6fc38 bytes
    // ntdll.dll .text:0x8a1f0, 0x74648 bytes
    // ntdll.dll .text:0xefd68, 0x6fc38 bytes
    //
    _t05(sdk::unknown_ptr) dup_teb_language_list;
    
    // [RtlpDynamicFunctionTableTree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164268, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f2a8, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1802a8, 0x6fc38 bytes
    //
    _t06(sdk::unknown_ptr) dynamic_function_table_tree;
    
    // [RtlpEnclaveCallDispatchFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8b4a0, 0x6fc38 bytes
    // ntdll.dll .text:0x8e9c0, 0x74648 bytes
    // ntdll.dll .text:0x8b640, 0x6fc38 bytes
    //
    _t07(sdk::unknown_ptr) enclave_call_dispatch_filter;
    
    // [RtlpEnvironLookupTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .data:0x153b30, 0x67960 bytes
    // ntdll.dll .data:0x16ad00, 0x6fc38 bytes
    // ntdll.dll .data:0x16bd00, 0x6fc38 bytes
    //
    _t08(sdk::unknown_ptr) environ_lookup_table;
    
    // [RtlpExecuteUmsThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xaa4f1, 0x67960 bytes
    // ntdll.dll .text:0xa0af1, 0x6fc38 bytes
    // ntdll.dll .text:0xa0ad1, 0x6fc38 bytes
    //
    _t09(sdk::unknown_ptr) execute_ums_thread;
    
    // [RtlpFcAllocateChangeRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x917c, 0x6fc38 bytes
    // ntdll.dll .text:0x5b598, 0x74648 bytes
    // ntdll.dll .text:0x917c, 0x6fc38 bytes
    //
    _t10(sdk::unknown_ptr) fc_allocate_change_registration;
    
    // [RtlpFcChangeRegistrationCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x101680, 0x6fc38 bytes
    // ntdll.dll .text:0xaecd0, 0x74648 bytes
    // ntdll.dll .text:0x101610, 0x6fc38 bytes
    //
    _t11(sdk::unknown_ptr) fc_change_registration_callback;
    
    // [RtlpFcEnsureSubscriptionManagerStarted]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9208, 0x6fc38 bytes
    // ntdll.dll .text:0x5b620, 0x74648 bytes
    // ntdll.dll .text:0x9208, 0x6fc38 bytes
    //
    _t12(sdk::unknown_ptr) fc_ensure_subscription_manager_started;
    
    // [RtlpFcFreeChangeRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7dae0, 0x6fc38 bytes
    // ntdll.dll .text:0x504ec, 0x74648 bytes
    // ntdll.dll .text:0x7dc80, 0x6fc38 bytes
    //
    _t13(sdk::unknown_ptr) fc_free_change_registration;
    
    // [RtlpFcInsertChangeRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9128, 0x6fc38 bytes
    // ntdll.dll .text:0x5b8fc, 0x74648 bytes
    // ntdll.dll .text:0x9128, 0x6fc38 bytes
    //
    _t14(sdk::unknown_ptr) fc_insert_change_registration;
    
    // [RtlpFcMapBuffers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f234, 0x6fc38 bytes
    // ntdll.dll .text:0x71004, 0x74648 bytes
    // ntdll.dll .text:0x5f250, 0x6fc38 bytes
    //
    _t15(sdk::unknown_ptr) fc_map_buffers;
    
    // [RtlpFcNoopCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0x891d0, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _t16(sdk::unknown_ptr) fc_noop_callback;
    
    // [RtlpFcProcessManager]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168b40, 0x6fc38 bytes
    // ntdll.dll .data:0x182de0, 0x74648 bytes
    // ntdll.dll .data:0x169b40, 0x6fc38 bytes
    //
    _t17(sdk::unknown_ptr) fc_process_manager;
    
    // [RtlpFcQueryAllFeatureConfigurationsFromBufferSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll PAGE:0x11b520, 0x6fc38 bytes
    // ntdll.dll PAGE:0x12e058, 0x74648 bytes
    // ntdll.dll PAGE:0x11a364, 0x6fc38 bytes
    //
    _t18(sdk::unknown_ptr) fc_query_all_feature_configurations_from_buffer_set;
    
    // [RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll PAGE:0x11b5bc, 0x6fc38 bytes
    // ntdll.dll PAGE:0x12e008, 0x74648 bytes
    // ntdll.dll PAGE:0x11a400, 0x6fc38 bytes
    //
    _t19(sdk::unknown_ptr) fc_query_all_feature_usage_subscription_notifications_from_buffer_set;
    
    // [RtlpFcQueryFeatureConfigurationFromKernel]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1016c0, 0x6fc38 bytes
    // ntdll.dll .text:0x10e9d0, 0x74648 bytes
    // ntdll.dll .text:0x101650, 0x6fc38 bytes
    //
    _t20(sdk::unknown_ptr) fc_query_feature_configuration_from_kernel;
    
    // [RtlpFcReferenceFeatureConfigurationBuffers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f3cc, 0x6fc38 bytes
    // ntdll.dll .text:0x70ed0, 0x74648 bytes
    // ntdll.dll .text:0x5f4cc, 0x6fc38 bytes
    //
    _t21(sdk::unknown_ptr) fc_reference_feature_configuration_buffers;
    
    // [RtlpFcRemoveChangeRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7db6c, 0x6fc38 bytes
    // ntdll.dll .text:0x50570, 0x74648 bytes
    // ntdll.dll .text:0x7dd0c, 0x6fc38 bytes
    //
    _t22(sdk::unknown_ptr) fc_remove_change_registration;
    
    // [RtlpFcStartSubscriptionManager]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8a24, 0x6fc38 bytes
    // ntdll.dll .text:0x5b950, 0x74648 bytes
    // ntdll.dll .text:0x8a24, 0x6fc38 bytes
    //
    _t23(sdk::unknown_ptr) fc_start_subscription_manager;
    
    // [RtlpFcUpdateLocalConfiguration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f07c, 0x6fc38 bytes
    // ntdll.dll .text:0x71064, 0x74648 bytes
    // ntdll.dll .text:0x5f07c, 0x6fc38 bytes
    //
    _t24(sdk::unknown_ptr) fc_update_local_configuration;
    
    // [RtlpFcUpdateUsageSubscriptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x101768, 0x6fc38 bytes
    // ntdll.dll .text:0x10ea78, 0x74648 bytes
    // ntdll.dll .text:0x1016f8, 0x6fc38 bytes
    //
    _t25(sdk::unknown_ptr) fc_update_usage_subscriptions;
    
    // [RtlpFcWnfCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x101880, 0x6fc38 bytes
    // ntdll.dll .text:0xaed20, 0x74648 bytes
    // ntdll.dll .text:0x101810, 0x6fc38 bytes
    //
    _t26(sdk::unknown_ptr) fc_wnf_callback;
    
    // [RtlpFcWnfTypeId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x124cd8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13b690, 0x74648 bytes
    // ntdll.dll .rdata:0x124fd8, 0x6fc38 bytes
    //
    _t27(sdk::unknown_ptr) fc_wnf_type_id;
    
    // [RtlpFlsCloneComplete]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdf1b4, 0x6fc38 bytes
    // ntdll.dll .text:0x1182ec, 0x74648 bytes
    // ntdll.dll .text:0xdf124, 0x6fc38 bytes
    //
    _t28(sdk::unknown_ptr) fls_clone_complete;
    
    // [RtlpFlsClonePrepare]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdf25c, 0x6fc38 bytes
    // ntdll.dll .text:0x11839c, 0x74648 bytes
    // ntdll.dll .text:0xdf1cc, 0x6fc38 bytes
    //
    _t29(sdk::unknown_ptr) fls_clone_prepare;
    
    // [RtlpFlsContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b2a0, 0x6fc38 bytes
    // ntdll.dll .data:0x184dd0, 0x74648 bytes
    // ntdll.dll .data:0x16c2a0, 0x6fc38 bytes
    //
    _t30(sdk::unknown_ptr) fls_context;
    
    // [RtlpFreeTebLanguageList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6a0fc, 0x6fc38 bytes
    // ntdll.dll .text:0x103e8, 0x74648 bytes
    // ntdll.dll .text:0x6a21c, 0x6fc38 bytes
    //
    _t31(sdk::unknown_ptr) free_teb_language_list;
    
    // [RtlpGetImageBaseViaQueryVirtualMemory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x247b4, 0x6fc38 bytes
    // ntdll.dll .text:0x72f3c, 0x74648 bytes
    // ntdll.dll .text:0x247b4, 0x6fc38 bytes
    //
    _t32(sdk::unknown_ptr) get_image_base_via_query_virtual_memory;
    
    // [RtlpGetMUIRedirectedFilePathInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x516f8, 0x6fc38 bytes
    // ntdll.dll .text:0xafe8, 0x74648 bytes
    // ntdll.dll .text:0x516f8, 0x6fc38 bytes
    //
    _t33(sdk::unknown_ptr) get_mui_redirected_file_path_internal;
    
    // [RtlpGetTargetRvaFlag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x531fc, 0x6fc38 bytes
    // ntdll.dll .text:0x10a440, 0x74648 bytes
    // ntdll.dll .text:0x531fc, 0x6fc38 bytes
    //
    _t34(sdk::unknown_ptr) get_target_rva_flag;
    
    // [RtlpGuardSynchronizeRestorePc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa0680, 0x6fc38 bytes
    // ntdll.dll .text:0xa3840, 0x74648 bytes
    // ntdll.dll .text:0xa0660, 0x6fc38 bytes
    //
    _t35(sdk::unknown_ptr) guard_synchronize_restore_pc;
    
    // [RtlpHpConvertSegmentFlagsToFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xf8404, 0x67960 bytes
    // ntdll.dll .text:0xf64f4, 0x6fc38 bytes
    // ntdll.dll .text:0xf64a4, 0x6fc38 bytes
    //
    _t36(sdk::unknown_ptr) hp_convert_segment_flags_to_flags;
    
    // [RtlpHpEnvEnableSimulatedLargePageCommit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1686a0, 0x6fc38 bytes
    // ntdll.dll .data:0x18294c, 0x74648 bytes
    // ntdll.dll .data:0x1696a0, 0x6fc38 bytes
    //
    _t37(sdk::unknown_ptr) hp_env_enable_simulated_large_page_commit;
    
    // [RtlpHpEnvHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1688d0, 0x6fc38 bytes
    // ntdll.dll .data:0x182b70, 0x74648 bytes
    // ntdll.dll .data:0x1698d0, 0x6fc38 bytes
    //
    _t38(sdk::unknown_ptr) hp_env_handle;
    
    // [RtlpHpEnvQueryProcessorCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x74a0, 0x6fc38 bytes
    // ntdll.dll .text:0x666b8, 0x74648 bytes
    // ntdll.dll .text:0x74a0, 0x6fc38 bytes
    //
    _t39(sdk::unknown_ptr) hp_env_query_processor_count;
    
    // [RtlpHpGCCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73c10, 0x6fc38 bytes
    // ntdll.dll .text:0x77360, 0x74648 bytes
    // ntdll.dll .text:0x73db0, 0x6fc38 bytes
    //
    _t40(sdk::unknown_ptr) hp_gc_callback;
    
    // [RtlpHpGCFlushCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60f0, 0x6fc38 bytes
    // ntdll.dll .text:0x5a300, 0x74648 bytes
    // ntdll.dll .text:0x60f0, 0x6fc38 bytes
    //
    _t41(sdk::unknown_ptr) hp_gc_flush_callback;
    
    // [RtlpHpGCInterval]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168cc8, 0x6fc38 bytes
    // ntdll.dll .data:0x182fa8, 0x74648 bytes
    // ntdll.dll .data:0x169cd8, 0x6fc38 bytes
    //
    _t42(sdk::unknown_ptr) hp_gc_interval;
    
    // [RtlpHpGCTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b1d0, 0x6fc38 bytes
    // ntdll.dll .data:0x184c78, 0x74648 bytes
    // ntdll.dll .data:0x16c1d0, 0x6fc38 bytes
    //
    _t43(sdk::unknown_ptr) hp_gc_timer;
    
    // [RtlpHpGCTimerInitialized]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b52c, 0x6fc38 bytes
    // ntdll.dll .data:0x1850cc, 0x74648 bytes
    // ntdll.dll .data:0x16c50c, 0x6fc38 bytes
    //
    _t44(sdk::unknown_ptr) hp_gc_timer_initialized;
    
    // [RtlpHpGCTimerScheduled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b528, 0x6fc38 bytes
    // ntdll.dll .data:0x1850c8, 0x74648 bytes
    // ntdll.dll .data:0x16c508, 0x6fc38 bytes
    //
    _t45(sdk::unknown_ptr) hp_gc_timer_scheduled;
    
    // [RtlpHpHeapManager]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16bc00, 0x6fc38 bytes
    // ntdll.dll .data:0x1859a0, 0x74648 bytes
    // ntdll.dll .data:0x16cc00, 0x6fc38 bytes
    //
    _t46(sdk::unknown_ptr) hp_heap_manager;
    
    // [RtlpHpHeapProtect]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10da34, 0x6fc38 bytes
    // ntdll.dll .text:0x121d94, 0x74648 bytes
    // ntdll.dll .text:0x10dbd4, 0x6fc38 bytes
    //
    _t47(sdk::unknown_ptr) hp_heap_protect;
    
    // [RtlpHpHeapReportCounters]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7a264, 0x6fc38 bytes
    // ntdll.dll .text:0x8abb0, 0x74648 bytes
    // ntdll.dll .text:0x7a404, 0x6fc38 bytes
    //
    _t48(sdk::unknown_ptr) hp_heap_report_counters;
    
    // [RtlpHpHeapValidateProtection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe7ac, 0x6fc38 bytes
    // ntdll.dll .text:0x46818, 0x74648 bytes
    // ntdll.dll .text:0xe7ac, 0x6fc38 bytes
    //
    _t49(sdk::function<uint32_t(void*, uint32_t)>*) hp_heap_validate_protection;
    
    // [RtlpHpHeapWalk]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1c9c, 0x6fc38 bytes
    // ntdll.dll .text:0x63bac, 0x74648 bytes
    // ntdll.dll .text:0x1c9c, 0x6fc38 bytes
    //
    _t50(sdk::unknown_ptr) hp_heap_walk;
    
    // [RtlpHpLargeWalkHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x23d4, 0x6fc38 bytes
    // ntdll.dll .text:0x63a9c, 0x74648 bytes
    // ntdll.dll .text:0x23d4, 0x6fc38 bytes
    //
    _t51(sdk::function<int32_t(struct ntdll::segment_heap_t*, struct rtl::heap_walk_entry_t*)>*) hp_large_walk_heap;
    
    // [RtlpHpOverrideGCInterval]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf3f88, 0x6fc38 bytes
    // ntdll.dll .text:0xff7c8, 0x74648 bytes
    // ntdll.dll .text:0xf3f38, 0x6fc38 bytes
    //
    _t52(sdk::unknown_ptr) hp_override_gc_interval;
    
    // [RtlpHpParametersVerify]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10ad0c, 0x6fc38 bytes
    // ntdll.dll .text:0x1185cc, 0x74648 bytes
    // ntdll.dll .text:0x10ac9c, 0x6fc38 bytes
    //
    _t53(sdk::unknown_ptr) hp_parameters_verify;
    
    // [RtlpHpRaiseFatalLimitError]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x107ffc, 0x6fc38 bytes
    // ntdll.dll .text:0x11573c, 0x74648 bytes
    // ntdll.dll .text:0x107f8c, 0x6fc38 bytes
    //
    _t54(sdk::unknown_ptr) hp_raise_fatal_limit_error;
    
    // [RtlpHpSegProtect]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10ebb4, 0x6fc38 bytes
    // ntdll.dll .text:0x12290c, 0x74648 bytes
    // ntdll.dll .text:0x10ed54, 0x6fc38 bytes
    //
    _t55(sdk::unknown_ptr) hp_seg_protect;
    
    // [RtlpHpSegWalk]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1d94, 0x6fc38 bytes
    // ntdll.dll .text:0x63ca0, 0x74648 bytes
    // ntdll.dll .text:0x1d94, 0x6fc38 bytes
    //
    _t56(sdk::unknown_ptr) hp_seg_walk;
    
    // [RtlpHpStackDbLogStackDbEnd]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x108108, 0x6fc38 bytes
    // ntdll.dll .text:0x115848, 0x74648 bytes
    // ntdll.dll .text:0x108098, 0x6fc38 bytes
    //
    _t57(sdk::unknown_ptr) hp_stack_db_log_stack_db_end;
    
    // [RtlpHpStackDbLogStackDbSnapshot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x108184, 0x6fc38 bytes
    // ntdll.dll .text:0x1158c4, 0x74648 bytes
    // ntdll.dll .text:0x108114, 0x6fc38 bytes
    //
    _t58(sdk::unknown_ptr) hp_stack_db_log_stack_db_snapshot;
    
    // [RtlpHpStackLoggingEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x15d90, 0x6fc38 bytes
    // ntdll.dll .text:0x3b210, 0x74648 bytes
    // ntdll.dll .text:0x15d90, 0x6fc38 bytes
    //
    _t59(sdk::unknown_ptr) hp_stack_logging_enabled;
    
    // [RtlpHpStackTraceAllocFindMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x108618, 0x6fc38 bytes
    // ntdll.dll .text:0x115d40, 0x74648 bytes
    // ntdll.dll .text:0x1085a8, 0x6fc38 bytes
    //
    _t60(sdk::unknown_ptr) hp_stack_trace_alloc_find_mapping;
    
    // [RtlpHpStackTraceConfig]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x108850, 0x6fc38 bytes
    // ntdll.dll .text:0x115f78, 0x74648 bytes
    // ntdll.dll .text:0x1087e0, 0x6fc38 bytes
    //
    _t61(sdk::unknown_ptr) hp_stack_trace_config;
    
    // [RtlpHpStackTraceDisable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1088c4, 0x6fc38 bytes
    // ntdll.dll .text:0x115fec, 0x74648 bytes
    // ntdll.dll .text:0x108854, 0x6fc38 bytes
    //
    _t62(sdk::unknown_ptr) hp_stack_trace_disable;
    
    // [RtlpHpStackTraceEnable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x108918, 0x6fc38 bytes
    // ntdll.dll .text:0x116040, 0x74648 bytes
    // ntdll.dll .text:0x1088a8, 0x6fc38 bytes
    //
    _t63(sdk::unknown_ptr) hp_stack_trace_enable;
    
    // [RtlpHpStackTraceEtwCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1089c0, 0x6fc38 bytes
    // ntdll.dll .text:0x1160f0, 0x74648 bytes
    // ntdll.dll .text:0x108950, 0x6fc38 bytes
    //
    _t64(sdk::unknown_ptr) hp_stack_trace_etw_callback;
    
    // [RtlpHpStackTraceEventWriter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x108a90, 0x6fc38 bytes
    // ntdll.dll .text:0x1161c0, 0x74648 bytes
    // ntdll.dll .text:0x108a20, 0x6fc38 bytes
    //
    _t65(sdk::unknown_ptr) hp_stack_trace_event_writer;
    
    // [RtlpHpStackTraceHeapDestroy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xb1a8, 0x6fc38 bytes
    // ntdll.dll .text:0x49970, 0x74648 bytes
    // ntdll.dll .text:0xb1a8, 0x6fc38 bytes
    //
    _t66(sdk::unknown_ptr) hp_stack_trace_heap_destroy;
    
    // [RtlpHpStackTraceHeapDisable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x108b80, 0x6fc38 bytes
    // ntdll.dll .text:0x1162c0, 0x74648 bytes
    // ntdll.dll .text:0x108b10, 0x6fc38 bytes
    //
    _t67(sdk::unknown_ptr) hp_stack_trace_heap_disable;
    
    // [RtlpHpStackTraceHeapGetContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x108bdc, 0x6fc38 bytes
    // ntdll.dll .text:0x11631c, 0x74648 bytes
    // ntdll.dll .text:0x108b6c, 0x6fc38 bytes
    //
    _t68(sdk::unknown_ptr) hp_stack_trace_heap_get_context;
    
    // [RtlpHpStackTraceLogInstance]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16bbf8, 0x6fc38 bytes
    // ntdll.dll .data:0x185998, 0x74648 bytes
    // ntdll.dll .data:0x16cbf0, 0x6fc38 bytes
    //
    _t69(sdk::unknown_ptr) hp_stack_trace_log_instance;
    
    // [RtlpHpStackTraceProviderHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b550, 0x6fc38 bytes
    // ntdll.dll .data:0x1850e8, 0x74648 bytes
    // ntdll.dll .data:0x16c540, 0x6fc38 bytes
    //
    _t70(sdk::unknown_ptr) hp_stack_trace_provider_handle;
    
    // [RtlpHpStackTrackingContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b560, 0x6fc38 bytes
    // ntdll.dll .data:0x1850f0, 0x74648 bytes
    // ntdll.dll .data:0x16c550, 0x6fc38 bytes
    //
    _t71(sdk::unknown_ptr) hp_stack_tracking_context;
    
    // [RtlpHpTagContextFindFreeTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4ee0, 0x6fc38 bytes
    // ntdll.dll .text:0x6752c, 0x74648 bytes
    // ntdll.dll .text:0x4ee0, 0x6fc38 bytes
    //
    _t72(sdk::unknown_ptr) hp_tag_context_find_free_tag;
    
    // [RtlpHpTagDestroyHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1bc0, 0x6fc38 bytes
    // ntdll.dll .text:0x63af4, 0x74648 bytes
    // ntdll.dll .text:0x1bc0, 0x6fc38 bytes
    //
    _t73(sdk::unknown_ptr) hp_tag_destroy_heap;
    
    // [RtlpHpTlLogGCScheduled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10adf0, 0x6fc38 bytes
    // ntdll.dll .text:0x1186c4, 0x74648 bytes
    // ntdll.dll .text:0x10ad80, 0x6fc38 bytes
    //
    _t74(sdk::unknown_ptr) hp_tl_log_gc_scheduled;
    
    // [RtlpHpTlLogGCTimerFinished]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10ae4c, 0x6fc38 bytes
    // ntdll.dll .text:0x118720, 0x74648 bytes
    // ntdll.dll .text:0x10addc, 0x6fc38 bytes
    //
    _t75(sdk::unknown_ptr) hp_tl_log_gc_timer_finished;
    
    // [RtlpHpTlLogMemStats]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10aea8, 0x6fc38 bytes
    // ntdll.dll .text:0x11877c, 0x74648 bytes
    // ntdll.dll .text:0x10ae38, 0x6fc38 bytes
    //
    _t76(sdk::unknown_ptr) hp_tl_log_mem_stats;
    
    // [RtlpHpTlLogVAChange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10af84, 0x6fc38 bytes
    // ntdll.dll .text:0x118858, 0x74648 bytes
    // ntdll.dll .text:0x10af14, 0x6fc38 bytes
    //
    _t77(sdk::unknown_ptr) hp_tl_log_va_change;
    
    // [RtlpHpUnlockHeapForCloning]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10dc70, 0x6fc38 bytes
    // ntdll.dll .text:0x121ed4, 0x74648 bytes
    // ntdll.dll .text:0x10de10, 0x6fc38 bytes
    //
    _t78(sdk::unknown_ptr) hp_unlock_heap_for_cloning;
    
    // [RtlpHpVsCalculateChunkRequiredSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6ff2c, 0x6fc38 bytes
    // ntdll.dll .text:0x71c1c, 0x74648 bytes
    // ntdll.dll .text:0x700cc, 0x6fc38 bytes
    //
    _t79(sdk::unknown_ptr) hp_vs_calculate_chunk_required_size;
    
    // [RtlpHpVsChunkSetUnusedBytes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6ff4c, 0x6fc38 bytes
    // ntdll.dll .text:0x71c3c, 0x74648 bytes
    // ntdll.dll .text:0x700ec, 0x6fc38 bytes
    //
    _t80(sdk::unknown_ptr) hp_vs_chunk_set_unused_bytes;
    
    // [RtlpHpVsContextGrowInPlace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6fc88, 0x6fc38 bytes
    // ntdll.dll .text:0x71994, 0x74648 bytes
    // ntdll.dll .text:0x6fe28, 0x6fc38 bytes
    //
    _t81(sdk::unknown_ptr) hp_vs_context_grow_in_place;
    
    // [RtlpHypervisorSharedUserVa]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168fc8, 0x6fc38 bytes
    // ntdll.dll .data:0x1832a8, 0x74648 bytes
    // ntdll.dll .data:0x169fc8, 0x6fc38 bytes
    //
    _t82(sdk::unknown_ptr) hypervisor_shared_user_va;
    
    // [RtlpInitializeThreadActivationContextStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6f858, 0x6fc38 bytes
    // ntdll.dll .text:0x73868, 0x74648 bytes
    // ntdll.dll .text:0x6f9f8, 0x6fc38 bytes
    //
    _t83(sdk::unknown_ptr) initialize_thread_activation_context_stack;
    
    // [RtlpIsEmptyImageFileOptionsKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe3208, 0x6fc38 bytes
    // ntdll.dll .text:0xee180, 0x74648 bytes
    // ntdll.dll .text:0xe3178, 0x6fc38 bytes
    //
    _t84(sdk::unknown_ptr) is_empty_image_file_options_key;
    
    // [RtlpLoadPrimaryDbgRegWrap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xaa8f0, 0x67960 bytes
    // ntdll.dll .text:0xa0ea0, 0x6fc38 bytes
    // ntdll.dll .text:0xa0e80, 0x6fc38 bytes
    //
    _t85(sdk::unknown_ptr) load_primary_dbg_reg_wrap;
    
    // [RtlpLoadUmsDebugRegisterState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xfda60, 0x67960 bytes
    // ntdll.dll .text:0x10d450, 0x6fc38 bytes
    // ntdll.dll .text:0x10d3e0, 0x6fc38 bytes
    //
    _t86(sdk::unknown_ptr) load_ums_debug_register_state;
    
    // [RtlpLogHeapLockEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x109b9c, 0x6fc38 bytes
    // ntdll.dll .text:0x117304, 0x74648 bytes
    // ntdll.dll .text:0x109b2c, 0x6fc38 bytes
    //
    _t87(sdk::unknown_ptr) log_heap_lock_event;
    
    // [RtlpLogHeapReallocateEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x109c18, 0x6fc38 bytes
    // ntdll.dll .text:0x117380, 0x74648 bytes
    // ntdll.dll .text:0x109ba8, 0x6fc38 bytes
    //
    _t88(sdk::unknown_ptr) log_heap_reallocate_event;
    
    // [RtlpLogHeapUnlockEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10a170, 0x6fc38 bytes
    // ntdll.dll .text:0x117958, 0x74648 bytes
    // ntdll.dll .text:0x10a100, 0x6fc38 bytes
    //
    _t89(sdk::unknown_ptr) log_heap_unlock_event;
    
    // [RtlpLogHeapValidateEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10a1ec, 0x6fc38 bytes
    // ntdll.dll .text:0x1179d4, 0x74648 bytes
    // ntdll.dll .text:0x10a17c, 0x6fc38 bytes
    //
    _t90(sdk::unknown_ptr) log_heap_validate_event;
    
    // [RtlpLogHeapWalkEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10a268, 0x6fc38 bytes
    // ntdll.dll .text:0x117a50, 0x74648 bytes
    // ntdll.dll .text:0x10a1f8, 0x6fc38 bytes
    //
    _t91(sdk::unknown_ptr) log_heap_walk_event;
    
    // [RtlpMergeContextXState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70350, 0x6fc38 bytes
    // ntdll.dll .text:0x76520, 0x74648 bytes
    // ntdll.dll .text:0x704f0, 0x6fc38 bytes
    //
    _t92(sdk::unknown_ptr) merge_context_x_state;
    
    // [RtlpMuiRegDupLanguageConfigList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x103f68, 0x6fc38 bytes
    // ntdll.dll .text:0x111578, 0x74648 bytes
    // ntdll.dll .text:0x103ef8, 0x6fc38 bytes
    //
    _t93(sdk::unknown_ptr) mui_reg_dup_language_config_list;
    
    // [RtlpNlsCompareLocaleNames]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2dd28, 0x6fc38 bytes
    // ntdll.dll .text:0x158c0, 0x74648 bytes
    // ntdll.dll .text:0x2dd28, 0x6fc38 bytes
    //
    _t94(sdk::unknown_ptr) nls_compare_locale_names;
    
    // [RtlpQueryDiskWriteConstraintPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1179e0, 0x6fc38 bytes
    // ntdll.dll .text:0x12bb48, 0x74648 bytes
    // ntdll.dll .text:0x117b80, 0x6fc38 bytes
    //
    _t95(sdk::unknown_ptr) query_disk_write_constraint_policy;
    
    // [RtlpQueryDiskWriteConstraintPolicyByHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x117a48, 0x6fc38 bytes
    // ntdll.dll .text:0x12bbb0, 0x74648 bytes
    // ntdll.dll .text:0x117be8, 0x6fc38 bytes
    //
    _t96(sdk::unknown_ptr) query_disk_write_constraint_policy_by_handle;
    
    // [RtlpQueryEafPlusModuleList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe33e8, 0x6fc38 bytes
    // ntdll.dll .text:0xee360, 0x74648 bytes
    // ntdll.dll .text:0xe3358, 0x6fc38 bytes
    //
    _t97(sdk::unknown_ptr) query_eaf_plus_module_list;
    
    // [RtlpQueryEnvironmentCache]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x30548, 0x67960 bytes
    // ntdll.dll .text:0x25260, 0x6fc38 bytes
    // ntdll.dll .text:0x25260, 0x6fc38 bytes
    //
    _t98(sdk::unknown_ptr) query_environment_cache;
    
    // [RtlpQueryInformationActivationContextBasicInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x2e320, 0x67960 bytes
    // ntdll.dll .text:0x3e30c, 0x6fc38 bytes
    // ntdll.dll .text:0x3e30c, 0x6fc38 bytes
    //
    _t99(sdk::unknown_ptr) query_information_activation_context_basic_information;
    
    // [RtlpRaiseExceptionOnPossibleDeadlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168fc1, 0x6fc38 bytes
    // ntdll.dll .data:0x1832a1, 0x74648 bytes
    // ntdll.dll .data:0x169fc1, 0x6fc38 bytes
    //
    _u00(sdk::unknown_ptr) raise_exception_on_possible_deadlock;
    
    // [RtlpSanitizeContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4bbd8, 0x6fc38 bytes
    // ntdll.dll .text:0x20610, 0x74648 bytes
    // ntdll.dll .text:0x4bbd8, 0x6fc38 bytes
    //
    _u01(sdk::unknown_ptr) sanitize_context;
    
    // [RtlpSaveUmsDebugRegisterState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xfdac4, 0x67960 bytes
    // ntdll.dll .text:0x10d4b4, 0x6fc38 bytes
    // ntdll.dll .text:0x10d444, 0x6fc38 bytes
    //
    _u02(sdk::unknown_ptr) save_ums_debug_register_state;
    
    // [RtlpSubscribeWnfStateChangeNotificationInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97ec, 0x6fc38 bytes
    // ntdll.dll .text:0x5bbec, 0x74648 bytes
    // ntdll.dll .text:0x97ec, 0x6fc38 bytes
    //
    _u03(sdk::unknown_ptr) subscribe_wnf_state_change_notification_internal;
    
    // [RtlpTimeFieldsToTime]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5b550, 0x6fc38 bytes
    // ntdll.dll .text:0x59470, 0x74648 bytes
    // ntdll.dll .text:0x5b550, 0x6fc38 bytes
    //
    _u04(sdk::unknown_ptr) time_fields_to_time;
    
    // [RtlpUmsExecuteYieldThreadEnd]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xaa86f, 0x67960 bytes
    // ntdll.dll .text:0xa0e16, 0x6fc38 bytes
    // ntdll.dll .text:0xa0df6, 0x6fc38 bytes
    //
    _u05(sdk::unknown_ptr) ums_execute_yield_thread_end;
    
    // [RtlpUmsPrimaryContextWrap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xaa910, 0x67960 bytes
    // ntdll.dll .text:0xa0ec0, 0x6fc38 bytes
    // ntdll.dll .text:0xa0ea0, 0x6fc38 bytes
    //
    _u06(sdk::unknown_ptr) ums_primary_context_wrap;
    
    // [RtlpUmsSwitchSequence]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xaa4f0, 0x67960 bytes
    // ntdll.dll .text:0xa0af0, 0x6fc38 bytes
    // ntdll.dll .text:0xa0ad0, 0x6fc38 bytes
    //
    _u07(sdk::unknown_ptr) ums_switch_sequence;
    
    // [RtlpUmsThreadYield]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xaa767, 0x67960 bytes
    // ntdll.dll .text:0xa0d23, 0x6fc38 bytes
    // ntdll.dll .text:0xa0d03, 0x6fc38 bytes
    //
    _u08(sdk::unknown_ptr) ums_thread_yield;
    
    // [RtlpUnsuppressForwardReferencingCallTarget]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfd1e4, 0x6fc38 bytes
    // ntdll.dll .text:0x10a754, 0x74648 bytes
    // ntdll.dll .text:0xfd194, 0x6fc38 bytes
    //
    _u09(sdk::unknown_ptr) unsuppress_forward_referencing_call_target;
    
    // [RtlpValidKnownAce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x29a20, 0x6fc38 bytes
    // ntdll.dll .text:0x1b550, 0x74648 bytes
    // ntdll.dll .text:0x29a20, 0x6fc38 bytes
    //
    _u10(sdk::unknown_ptr) valid_known_ace;
    
    // [RtlpWaitOnAddressSpinCycleCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168b2c, 0x6fc38 bytes
    // ntdll.dll .data:0x182dcc, 0x74648 bytes
    // ntdll.dll .data:0x169b2c, 0x6fc38 bytes
    //
    _u11(sdk::unknown_ptr) wait_on_address_spin_cycle_count;
    
    // [RtlpWow64ThunkEnvironment32To64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x679bc, 0x67960 bytes
    // ntdll.dll .text:0x47e1c, 0x6fc38 bytes
    // ntdll.dll .text:0x47e1c, 0x6fc38 bytes
    //
    _u12(sdk::unknown_ptr) wow64_thunk_environment32_to64;
    
    // [RtlpActivateLowFragmentationHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x13784, 0x67960 bytes
    // ntdll.dll .text:0x9354, 0x6fc38 bytes
    // ntdll.dll .text:0x49a9c, 0x74648 bytes
    // ntdll.dll .text:0x9354, 0x6fc38 bytes
    //
    _u13(sdk::unknown_ptr) activate_low_fragmentation_heap;
    
    // [RtlpAddDebugInfoToCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12010, 0x67960 bytes
    // ntdll.dll .text:0xb670, 0x6fc38 bytes
    // ntdll.dll .text:0x5f9a0, 0x74648 bytes
    // ntdll.dll .text:0xb670, 0x6fc38 bytes
    //
    _u14(sdk::unknown_ptr) add_debug_info_to_critical_section;
    
    // [RtlpAddHeapToProtectedList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10014, 0x67960 bytes
    // ntdll.dll .text:0xd9d4, 0x6fc38 bytes
    // ntdll.dll .text:0x499ac, 0x74648 bytes
    // ntdll.dll .text:0xd9d4, 0x6fc38 bytes
    //
    _u15(sdk::unknown_ptr) add_heap_to_protected_list;
    
    // [RtlpAddHeapToUnprotectedList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfc04, 0x67960 bytes
    // ntdll.dll .text:0xddd4, 0x6fc38 bytes
    // ntdll.dll .text:0x48e9c, 0x74648 bytes
    // ntdll.dll .text:0xddd4, 0x6fc38 bytes
    //
    _u16(sdk::unknown_ptr) add_heap_to_unprotected_list;
    
    // [RtlpAddLanguagesToMultiSZ]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe7194, 0x67960 bytes
    // ntdll.dll .text:0xef054, 0x6fc38 bytes
    // ntdll.dll .text:0xfa438, 0x74648 bytes
    // ntdll.dll .text:0xef004, 0x6fc38 bytes
    //
    _u17(sdk::unknown_ptr) add_languages_to_multi_sz;
    
    // [RtlpAddVectoredHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x762d0, 0x67960 bytes
    // ntdll.dll .text:0x80f60, 0x6fc38 bytes
    // ntdll.dll .text:0x843d0, 0x74648 bytes
    // ntdll.dll .text:0x81100, 0x6fc38 bytes
    //
    _u18(sdk::unknown_ptr) add_vectored_handler;
    
    // [RtlpAddWaitBlockToWaitList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f9f4, 0x67960 bytes
    // ntdll.dll .text:0x460a4, 0x6fc38 bytes
    // ntdll.dll .text:0x3448c, 0x74648 bytes
    // ntdll.dll .text:0x460a4, 0x6fc38 bytes
    //
    _u19(sdk::unknown_ptr) add_wait_block_to_wait_list;
    
    // [RtlpAddWnfUserSubToNameSub]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x144c8, 0x67960 bytes
    // ntdll.dll .text:0x993c, 0x6fc38 bytes
    // ntdll.dll .text:0x5be2c, 0x74648 bytes
    // ntdll.dll .text:0x993c, 0x6fc38 bytes
    //
    _u20(sdk::unknown_ptr) add_wnf_user_sub_to_name_sub;
    
    // [RtlpAffinitizeSegmentInfoForBucket]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x781e8, 0x67960 bytes
    // ntdll.dll .text:0x710d8, 0x6fc38 bytes
    // ntdll.dll .text:0x72fb0, 0x74648 bytes
    // ntdll.dll .text:0x71278, 0x6fc38 bytes
    //
    _u21(sdk::unknown_ptr) affinitize_segment_info_for_bucket;
    
    // [RtlpAffinityState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1513e0, 0x67960 bytes
    // ntdll.dll .data:0x1686c0, 0x6fc38 bytes
    // ntdll.dll .data:0x182960, 0x74648 bytes
    // ntdll.dll .data:0x1696c0, 0x6fc38 bytes
    //
    _u22(sdk::unknown_ptr) affinity_state;
    
    // [RtlpAllocateActivationContextStackFrame]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1ce08, 0x67960 bytes
    // ntdll.dll .text:0x71e5c, 0x6fc38 bytes
    // ntdll.dll .text:0x75048, 0x74648 bytes
    // ntdll.dll .text:0x71ffc, 0x6fc38 bytes
    //
    _u23(sdk::unknown_ptr) allocate_activation_context_stack_frame;
    
    // [RtlpAllocateDirPrefixBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb6c0, 0x67960 bytes
    // ntdll.dll .text:0xdecd8, 0x6fc38 bytes
    // ntdll.dll .text:0xe966c, 0x74648 bytes
    // ntdll.dll .text:0xdec48, 0x6fc38 bytes
    //
    _u24(sdk::unknown_ptr) allocate_dir_prefix_block;
    
    // [RtlpAllocateEnvBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x68518, 0x67960 bytes
    // ntdll.dll .text:0x48b6c, 0x6fc38 bytes
    // ntdll.dll .text:0x144e4, 0x74648 bytes
    // ntdll.dll .text:0x48b6c, 0x6fc38 bytes
    //
    _u25(sdk::unknown_ptr) allocate_env_block;
    
    // [RtlpAllocateTags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeaa64, 0x67960 bytes
    // ntdll.dll .text:0xf2cd0, 0x6fc38 bytes
    // ntdll.dll .text:0xfe538, 0x74648 bytes
    // ntdll.dll .text:0xf2c80, 0x6fc38 bytes
    //
    _u26(sdk::unknown_ptr) allocate_tags;
    
    // [RtlpAllocateUserBlockFromHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30aa4, 0x67960 bytes
    // ntdll.dll .text:0x67354, 0x6fc38 bytes
    // ntdll.dll .text:0x6381c, 0x74648 bytes
    // ntdll.dll .text:0x67474, 0x6fc38 bytes
    //
    _u27(sdk::unknown_ptr) allocate_user_block_from_heap;
    
    // [RtlpApplyLengthFunction]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6d690, 0x67960 bytes
    // ntdll.dll .text:0x7cd90, 0x6fc38 bytes
    // ntdll.dll .text:0x80910, 0x74648 bytes
    // ntdll.dll .text:0x7cf30, 0x6fc38 bytes
    //
    _u28(sdk::unknown_ptr) apply_length_function;
    
    // [RtlpAssemblyStorageMapResolutionDefaultCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1d370, 0x67960 bytes
    // ntdll.dll .text:0x505b0, 0x6fc38 bytes
    // ntdll.dll .text:0x834f0, 0x74648 bytes
    // ntdll.dll .text:0x505b0, 0x6fc38 bytes
    //
    _u29(sdk::unknown_ptr) assembly_storage_map_resolution_default_callback;
    
    // [RtlpAutoCompleteLanguageFallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe74b4, 0x67960 bytes
    // ntdll.dll .text:0xef34c, 0x6fc38 bytes
    // ntdll.dll .text:0xfa71c, 0x74648 bytes
    // ntdll.dll .text:0xef2fc, 0x6fc38 bytes
    //
    _u30(sdk::unknown_ptr) auto_complete_language_fallback;
    
    // [RtlpBreakPointHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfc598, 0x67960 bytes
    // ntdll.dll .text:0xf9e2c, 0x6fc38 bytes
    // ntdll.dll .text:0x106968, 0x74648 bytes
    // ntdll.dll .text:0xf9ddc, 0x6fc38 bytes
    //
    _u31(sdk::function<void(void*)>*) break_point_heap;
    
    // [RtlpBucketSizeIndexReuseThreshold]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x112490, 0x67960 bytes
    // ntdll.dll .rdata:0x124bd0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13b6c0, 0x74648 bytes
    // ntdll.dll .rdata:0x124ed0, 0x6fc38 bytes
    //
    _u32(sdk::unknown_ptr) bucket_size_index_reuse_threshold;
    
    // [RtlpBusyList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151aa0, 0x67960 bytes
    // ntdll.dll .data:0x168ca0, 0x6fc38 bytes
    // ntdll.dll .data:0x182f40, 0x74648 bytes
    // ntdll.dll .data:0x169cb0, 0x6fc38 bytes
    //
    _u33(sdk::unknown_ptr) busy_list;
    
    // [RtlpCachedPathLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154428, 0x67960 bytes
    // ntdll.dll .data:0x16b660, 0x6fc38 bytes
    // ntdll.dll .data:0x185068, 0x74648 bytes
    // ntdll.dll .data:0x16c650, 0x6fc38 bytes
    //
    _u34(sdk::unknown_ptr) cached_path_lock;
    
    // [RtlpCallInterceptRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90a94, 0x67960 bytes
    // ntdll.dll .text:0xf2e94, 0x6fc38 bytes
    // ntdll.dll .text:0xae70e, 0x74648 bytes
    // ntdll.dll .text:0xf2e44, 0x6fc38 bytes
    //
    _u35(sdk::unknown_ptr) call_intercept_routine;
    
    // [RtlpCallSecureMemoryCallbacks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee2e0, 0x67960 bytes
    // ntdll.dll .text:0xf75d4, 0x6fc38 bytes
    // ntdll.dll .text:0x1031a4, 0x74648 bytes
    // ntdll.dll .text:0xf7584, 0x6fc38 bytes
    //
    _u36(sdk::unknown_ptr) call_secure_memory_callbacks;
    
    // [RtlpCallVectoredHandlers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6c70c, 0x67960 bytes
    // ntdll.dll .text:0x77f24, 0x6fc38 bytes
    // ntdll.dll .text:0x779b8, 0x74648 bytes
    // ntdll.dll .text:0x780c4, 0x6fc38 bytes
    //
    _u37(sdk::unknown_ptr) call_vectored_handlers;
    
    // [RtlpCaptureActivationContextActivationStacks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553b0, 0x67960 bytes
    // ntdll.dll .data:0x16bafc, 0x6fc38 bytes
    // ntdll.dll .data:0x18568c, 0x74648 bytes
    // ntdll.dll .data:0x16cafc, 0x6fc38 bytes
    //
    _u38(sdk::unknown_ptr) capture_activation_context_activation_stacks;
    
    // [RtlpChangeQueryDebugBufferTarget]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71098, 0x67960 bytes
    // ntdll.dll .text:0xd84c0, 0x6fc38 bytes
    // ntdll.dll .text:0x270c, 0x74648 bytes
    // ntdll.dll .text:0xd8430, 0x6fc38 bytes
    //
    _u39(sdk::unknown_ptr) change_query_debug_buffer_target;
    
    // [RtlpCheckBusyBlockTail]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8acb4, 0x67960 bytes
    // ntdll.dll .text:0xf62c8, 0x6fc38 bytes
    // ntdll.dll .text:0x1025f8, 0x74648 bytes
    // ntdll.dll .text:0xf6278, 0x6fc38 bytes
    //
    _u40(sdk::unknown_ptr) check_busy_block_tail;
    
    // [RtlpCheckDeviceName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd13dc, 0x67960 bytes
    // ntdll.dll .text:0x894ec, 0x6fc38 bytes
    // ntdll.dll .text:0x8b9bc, 0x74648 bytes
    // ntdll.dll .text:0x8968c, 0x6fc38 bytes
    //
    _u41(sdk::unknown_ptr) check_device_name;
    
    // [RtlpCheckForSameCurdir]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7aa0c, 0x67960 bytes
    // ntdll.dll .text:0x60dc0, 0x6fc38 bytes
    // ntdll.dll .text:0x7b5d0, 0x74648 bytes
    // ntdll.dll .text:0x60ee0, 0x6fc38 bytes
    //
    _u42(sdk::unknown_ptr) check_for_same_curdir;
    
    // [RtlpCheckHeapSignature]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30e24, 0x67960 bytes
    // ntdll.dll .text:0x645f0, 0x6fc38 bytes
    // ntdll.dll .text:0x2a00c, 0x74648 bytes
    // ntdll.dll .text:0x64710, 0x6fc38 bytes
    //
    _u43(sdk::unknown_ptr) check_heap_signature;
    
    // [RtlpCheckMuiMultiStringSafe]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1fe54, 0x67960 bytes
    // ntdll.dll .text:0x6a654, 0x6fc38 bytes
    // ntdll.dll .text:0x701dc, 0x74648 bytes
    // ntdll.dll .text:0x6a774, 0x6fc38 bytes
    //
    _u44(sdk::unknown_ptr) check_mui_multi_string_safe;
    
    // [RtlpCheckRelativeDrive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1718, 0x67960 bytes
    // ntdll.dll .text:0x4726c, 0x6fc38 bytes
    // ntdll.dll .text:0x578d8, 0x74648 bytes
    // ntdll.dll .text:0x4726c, 0x6fc38 bytes
    //
    _u45(sdk::unknown_ptr) check_relative_drive;
    
    // [RtlpCleanupRegistryKeys]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe7600, 0x67960 bytes
    // ntdll.dll .text:0xef4a0, 0x6fc38 bytes
    // ntdll.dll .text:0xfa870, 0x74648 bytes
    // ntdll.dll .text:0xef450, 0x6fc38 bytes
    //
    _u46(sdk::unknown_ptr) cleanup_registry_keys;
    
    // [RtlpCoalesceHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90684, 0x67960 bytes
    // ntdll.dll .text:0xf2edc, 0x6fc38 bytes
    // ntdll.dll .text:0xfe6fc, 0x74648 bytes
    // ntdll.dll .text:0xf2e8c, 0x6fc38 bytes
    //
    _u47(sdk::unknown_ptr) coalesce_heap;
    
    // [RtlpCollectFreeBlocks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1570c, 0x67960 bytes
    // ntdll.dll .text:0xe81c, 0x6fc38 bytes
    // ntdll.dll .text:0x46a04, 0x74648 bytes
    // ntdll.dll .text:0xe81c, 0x6fc38 bytes
    //
    _u48(sdk::unknown_ptr) collect_free_blocks;
    
    // [RtlpCommitBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1564c, 0x67960 bytes
    // ntdll.dll .text:0xe654, 0x6fc38 bytes
    // ntdll.dll .text:0x468dc, 0x74648 bytes
    // ntdll.dll .text:0xe654, 0x6fc38 bytes
    //
    _u49(sdk::function<uint8_t(struct nt::heap_t*, struct heap::free_entry_t*)>*) commit_block;
    
    // [RtlpCommitQueryDebugInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70cbc, 0x67960 bytes
    // ntdll.dll .text:0xd87b8, 0x6fc38 bytes
    // ntdll.dll .text:0x1900, 0x74648 bytes
    // ntdll.dll .text:0xd8728, 0x6fc38 bytes
    //
    _u50(sdk::unknown_ptr) commit_query_debug_info;
    
    // [RtlpCompareAces]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe1114, 0x67960 bytes
    // ntdll.dll .text:0x2a328, 0x6fc38 bytes
    // ntdll.dll .text:0x10934, 0x74648 bytes
    // ntdll.dll .text:0x2a328, 0x6fc38 bytes
    //
    _u51(sdk::unknown_ptr) compare_aces;
    
    // [RtlpCompareActivationContextDataTOCEntryById]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6ec50, 0x67960 bytes
    // ntdll.dll .text:0x68a10, 0x6fc38 bytes
    // ntdll.dll .text:0x69e40, 0x74648 bytes
    // ntdll.dll .text:0x68b30, 0x6fc38 bytes
    //
    _u52(sdk::unknown_ptr) compare_activation_context_data_toc_entry_by_id;
    
    // [RtlpCompareActivationContextGuidSectionEntryByGuid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c050, 0x67960 bytes
    // ntdll.dll .text:0x74f90, 0x6fc38 bytes
    // ntdll.dll .text:0x2d60, 0x74648 bytes
    // ntdll.dll .text:0x75130, 0x6fc38 bytes
    //
    _u53(sdk::unknown_ptr) compare_activation_context_guid_section_entry_by_guid;
    
    // [RtlpCompareActivationContextStringSectionEntryByPseudoKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80970, 0x67960 bytes
    // ntdll.dll .text:0x788a0, 0x6fc38 bytes
    // ntdll.dll .text:0x7adc0, 0x74648 bytes
    // ntdll.dll .text:0x78a40, 0x6fc38 bytes
    //
    _u54(sdk::unknown_ptr) compare_activation_context_string_section_entry_by_pseudo_key;
    
    // [RtlpCompareConfigNodeWithSpec]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88a74, 0x67960 bytes
    // ntdll.dll .text:0xef8f4, 0x6fc38 bytes
    // ntdll.dll .text:0xfacb8, 0x74648 bytes
    // ntdll.dll .text:0xef8a4, 0x6fc38 bytes
    //
    _u55(sdk::unknown_ptr) compare_config_node_with_spec;
    
    // [RtlpCompareProtectedPolicyEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c050, 0x67960 bytes
    // ntdll.dll .text:0x74f90, 0x6fc38 bytes
    // ntdll.dll .text:0x1012d0, 0x74648 bytes
    // ntdll.dll .text:0x75130, 0x6fc38 bytes
    //
    _u56(sdk::unknown_ptr) compare_protected_policy_entry;
    
    // [RtlpComputeBackupIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81f18, 0x67960 bytes
    // ntdll.dll .text:0x807ec, 0x6fc38 bytes
    // ntdll.dll .text:0x83fd8, 0x74648 bytes
    // ntdll.dll .text:0x8098c, 0x6fc38 bytes
    //
    _u57(sdk::unknown_ptr) compute_backup_index;
    
    // [RtlpComputeDllPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x76530, 0x67960 bytes
    // ntdll.dll .text:0x6d230, 0x6fc38 bytes
    // ntdll.dll .text:0x6a370, 0x74648 bytes
    // ntdll.dll .text:0x6d350, 0x6fc38 bytes
    //
    _u58(sdk::unknown_ptr) compute_dll_path;
    
    // [RtlpComputeDllPathWithOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x76610, 0x67960 bytes
    // ntdll.dll .text:0x6d100, 0x6fc38 bytes
    // ntdll.dll .text:0x6a230, 0x74648 bytes
    // ntdll.dll .text:0x6d220, 0x6fc38 bytes
    //
    _u59(sdk::unknown_ptr) compute_dll_path_with_options;
    
    // [RtlpComputeExePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x76440, 0x67960 bytes
    // ntdll.dll .text:0x6cfc0, 0x6fc38 bytes
    // ntdll.dll .text:0x6a1a0, 0x74648 bytes
    // ntdll.dll .text:0x6d0e0, 0x6fc38 bytes
    //
    _u60(sdk::unknown_ptr) compute_exe_path;
    
    // [RtlpComputeLangListCheckSum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x21804, 0x67960 bytes
    // ntdll.dll .text:0x27840, 0x6fc38 bytes
    // ntdll.dll .text:0x137ec, 0x74648 bytes
    // ntdll.dll .text:0x27840, 0x6fc38 bytes
    //
    _u61(sdk::unknown_ptr) compute_lang_list_check_sum;
    
    // [RtlpComputePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x76764, 0x67960 bytes
    // ntdll.dll .text:0x6d330, 0x6fc38 bytes
    // ntdll.dll .text:0x6a450, 0x74648 bytes
    // ntdll.dll .text:0x6d450, 0x6fc38 bytes
    //
    _u62(sdk::unknown_ptr) compute_path;
    
    // [RtlpComputeSearchPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x764a0, 0x67960 bytes
    // ntdll.dll .text:0x6d050, 0x6fc38 bytes
    // ntdll.dll .text:0x6a0e0, 0x74648 bytes
    // ntdll.dll .text:0x6d170, 0x6fc38 bytes
    //
    _u63(sdk::unknown_ptr) compute_search_path;
    
    // [RtlpConsoleFallbackNameFromLocaleName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x216d8, 0x67960 bytes
    // ntdll.dll .text:0x2f220, 0x6fc38 bytes
    // ntdll.dll .text:0x7a79c, 0x74648 bytes
    // ntdll.dll .text:0x2f220, 0x6fc38 bytes
    //
    _u64(sdk::unknown_ptr) console_fallback_name_from_locale_name;
    
    // [RtlpConvertAclToAutoInherit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe12ac, 0x67960 bytes
    // ntdll.dll .text:0xe71fc, 0x6fc38 bytes
    // ntdll.dll .text:0xf1e00, 0x74648 bytes
    // ntdll.dll .text:0xe716c, 0x6fc38 bytes
    //
    _u65(sdk::unknown_ptr) convert_acl_to_auto_inherit;
    
    // [RtlpConvertCultureNamesToLCIDs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe7a70, 0x67960 bytes
    // ntdll.dll .text:0xef990, 0x6fc38 bytes
    // ntdll.dll .text:0xfad60, 0x74648 bytes
    // ntdll.dll .text:0xef940, 0x6fc38 bytes
    //
    _u66(sdk::unknown_ptr) convert_culture_names_to_lci_ds;
    
    // [RtlpConvertLCIDsToCultureNames]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe7c90, 0x67960 bytes
    // ntdll.dll .text:0xefba0, 0x6fc38 bytes
    // ntdll.dll .text:0xfaf70, 0x74648 bytes
    // ntdll.dll .text:0xefb50, 0x6fc38 bytes
    //
    _u67(sdk::unknown_ptr) convert_lci_ds_to_culture_names;
    
    // [RtlpConvertRelativeToAbsoluteSecurityAttribute]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe3150, 0x67960 bytes
    // ntdll.dll .text:0xe9cd0, 0x6fc38 bytes
    // ntdll.dll .text:0xf4c90, 0x74648 bytes
    // ntdll.dll .text:0xe9c40, 0x6fc38 bytes
    //
    _u68(sdk::unknown_ptr) convert_relative_to_absolute_security_attribute;
    
    // [RtlpConvertToAutoInheritSecurityObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe1ab8, 0x67960 bytes
    // ntdll.dll .text:0xe7a20, 0x6fc38 bytes
    // ntdll.dll .text:0xf2684, 0x74648 bytes
    // ntdll.dll .text:0xe7990, 0x6fc38 bytes
    //
    _u69(sdk::unknown_ptr) convert_to_auto_inherit_security_object;
    
    // [RtlpCopyMappedMemoryEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86c90, 0x67960 bytes
    // ntdll.dll .text:0x842d0, 0x6fc38 bytes
    // ntdll.dll .text:0x86110, 0x74648 bytes
    // ntdll.dll .text:0x84470, 0x6fc38 bytes
    //
    _u70(sdk::unknown_ptr) copy_mapped_memory_ex;
    
    // [RtlpCopyMappedMemoryEx_ExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xecbd4, 0x67960 bytes
    // ntdll.dll .text:0xf5c94, 0x6fc38 bytes
    // ntdll.dll .text:0x101e28, 0x74648 bytes
    // ntdll.dll .text:0xf5c44, 0x6fc38 bytes
    //
    _u71(sdk::unknown_ptr) copy_mapped_memory_ex_exception_filter;
    
    // [RtlpCopyProcString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67608, 0x67960 bytes
    // ntdll.dll .text:0x47c9c, 0x6fc38 bytes
    // ntdll.dll .text:0x58440, 0x74648 bytes
    // ntdll.dll .text:0x47c9c, 0x6fc38 bytes
    //
    _u72(sdk::unknown_ptr) copy_proc_string;
    
    // [RtlpCopyRemoteDebugInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd697c, 0x67960 bytes
    // ntdll.dll .text:0xd8850, 0x6fc38 bytes
    // ntdll.dll .text:0xe2d10, 0x74648 bytes
    // ntdll.dll .text:0xd87c0, 0x6fc38 bytes
    //
    _u73(sdk::unknown_ptr) copy_remote_debug_information;
    
    // [RtlpCrackActivationContextStringSectionHeader]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7cb10, 0x67960 bytes
    // ntdll.dll .text:0x7795c, 0x6fc38 bytes
    // ntdll.dll .text:0x8cd0c, 0x74648 bytes
    // ntdll.dll .text:0x77afc, 0x6fc38 bytes
    //
    _u74(sdk::unknown_ptr) crack_activation_context_string_section_header;
    
    // [RtlpCreateDeferredCriticalSectionEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83054, 0x67960 bytes
    // ntdll.dll .text:0x46450, 0x6fc38 bytes
    // ntdll.dll .text:0x82db0, 0x74648 bytes
    // ntdll.dll .text:0x46450, 0x6fc38 bytes
    //
    _u75(sdk::unknown_ptr) create_deferred_critical_section_event;
    
    // [RtlpCreateExecutionRequiredRequest]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8450, 0x67960 bytes
    // ntdll.dll .text:0x10a9a4, 0x6fc38 bytes
    // ntdll.dll .text:0x1181a0, 0x74648 bytes
    // ntdll.dll .text:0x10a934, 0x6fc38 bytes
    //
    _u76(sdk::unknown_ptr) create_execution_required_request;
    
    // [RtlpCreateLowFragHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x133e4, 0x67960 bytes
    // ntdll.dll .text:0xbfd4, 0x6fc38 bytes
    // ntdll.dll .text:0x49484, 0x74648 bytes
    // ntdll.dll .text:0xbfd4, 0x6fc38 bytes
    //
    _u77(sdk::unknown_ptr) create_low_frag_heap;
    
    // [RtlpCreateNewDirectoryReference]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7acb8, 0x67960 bytes
    // ntdll.dll .text:0x611b8, 0x6fc38 bytes
    // ntdll.dll .text:0x7b8e0, 0x74648 bytes
    // ntdll.dll .text:0x612d8, 0x6fc38 bytes
    //
    _u78(sdk::unknown_ptr) create_new_directory_reference;
    
    // [RtlpCreateProcessRegistryInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x242a0, 0x67960 bytes
    // ntdll.dll .text:0x285b0, 0x6fc38 bytes
    // ntdll.dll .text:0x1f370, 0x74648 bytes
    // ntdll.dll .text:0x285b0, 0x6fc38 bytes
    //
    _u79(sdk::unknown_ptr) create_process_registry_info;
    
    // [RtlpCreateSerializationGroup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14ed8, 0x67960 bytes
    // ntdll.dll .text:0x8acc, 0x6fc38 bytes
    // ntdll.dll .text:0x5c24c, 0x74648 bytes
    // ntdll.dll .text:0x8acc, 0x6fc38 bytes
    //
    _u80(sdk::unknown_ptr) create_serialization_group;
    
    // [RtlpCreateTraverseNodes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1a990, 0x67960 bytes
    // ntdll.dll .text:0x52ec0, 0x6fc38 bytes
    // ntdll.dll .text:0x41ac, 0x74648 bytes
    // ntdll.dll .text:0x52ec0, 0x6fc38 bytes
    //
    _u81(sdk::unknown_ptr) create_traverse_nodes;
    
    // [RtlpCreateWnfNameSubscription]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14614, 0x67960 bytes
    // ntdll.dll .text:0x9abc, 0x6fc38 bytes
    // ntdll.dll .text:0x5bfac, 0x74648 bytes
    // ntdll.dll .text:0x9abc, 0x6fc38 bytes
    //
    _u82(sdk::unknown_ptr) create_wnf_name_subscription;
    
    // [RtlpCreateWnfUserSubscription]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x147d0, 0x67960 bytes
    // ntdll.dll .text:0x9c60, 0x6fc38 bytes
    // ntdll.dll .text:0x5bd3c, 0x74648 bytes
    // ntdll.dll .text:0x9c60, 0x6fc38 bytes
    //
    _u83(sdk::unknown_ptr) create_wnf_user_subscription;
    
    // [RtlpCriticalSectionVerifier]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544a8, 0x67960 bytes
    // ntdll.dll .data:0x16b711, 0x6fc38 bytes
    // ntdll.dll .data:0x185259, 0x74648 bytes
    // ntdll.dll .data:0x16c711, 0x6fc38 bytes
    //
    _u84(sdk::unknown_ptr) critical_section_verifier;
    
    // [RtlpCrtHeapAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553e0, 0x67960 bytes
    // ntdll.dll .data:0x16bb60, 0x6fc38 bytes
    // ntdll.dll .data:0x1858f8, 0x74648 bytes
    // ntdll.dll .data:0x16cb60, 0x6fc38 bytes
    //
    _u85(sdk::unknown_ptr) crt_heap_address;
    
    // [RtlpCsVerifyDoNotBreak]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154500, 0x67960 bytes
    // ntdll.dll .data:0x16bb18, 0x6fc38 bytes
    // ntdll.dll .data:0x1858a1, 0x74648 bytes
    // ntdll.dll .data:0x16cb18, 0x6fc38 bytes
    //
    _u86(sdk::unknown_ptr) cs_verify_do_not_break;
    
    // [RtlpCurDirRef]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153b18, 0x67960 bytes
    // ntdll.dll .data:0x16acf0, 0x6fc38 bytes
    // ntdll.dll .data:0x184c00, 0x74648 bytes
    // ntdll.dll .data:0x16bcf0, 0x6fc38 bytes
    //
    _u87(sdk::unknown_ptr) cur_dir_ref;
    
    // [RtlpDeCommitQueryDebugInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6b34, 0x67960 bytes
    // ntdll.dll .text:0xd8a0c, 0x6fc38 bytes
    // ntdll.dll .text:0xe2ed0, 0x74648 bytes
    // ntdll.dll .text:0xd897c, 0x6fc38 bytes
    //
    _u88(sdk::unknown_ptr) de_commit_query_debug_info;
    
    // [RtlpDebugPageHeapCreate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8260, 0x67960 bytes
    // ntdll.dll .text:0x10a950, 0x6fc38 bytes
    // ntdll.dll .text:0x118140, 0x74648 bytes
    // ntdll.dll .text:0x10a8e0, 0x6fc38 bytes
    //
    _u89(sdk::unknown_ptr) debug_page_heap_create;
    
    // [RtlpDebugPageHeapDestroy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8290, 0x67960 bytes
    // ntdll.dll .text:0x10a990, 0x6fc38 bytes
    // ntdll.dll .text:0x118180, 0x74648 bytes
    // ntdll.dll .text:0x10a920, 0x6fc38 bytes
    //
    _u90(sdk::unknown_ptr) debug_page_heap_destroy;
    
    // [RtlpDebugPageHeapTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d3f0, 0x67960 bytes
    // ntdll.dll .data:0x1649b0, 0x6fc38 bytes
    // ntdll.dll .data:0x17e820, 0x74648 bytes
    // ntdll.dll .data:0x1659b0, 0x6fc38 bytes
    //
    _u91(sdk::unknown_ptr) debug_page_heap_table;
    
    // [RtlpDecRefWnfNameSubscription]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53718, 0x67960 bytes
    // ntdll.dll .text:0x43900, 0x6fc38 bytes
    // ntdll.dll .text:0x4fbb8, 0x74648 bytes
    // ntdll.dll .text:0x43900, 0x6fc38 bytes
    //
    _u92(sdk::unknown_ptr) dec_ref_wnf_name_subscription;
    
    // [RtlpDecRefWnfUserSubscription]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53648, 0x67960 bytes
    // ntdll.dll .text:0x42344, 0x6fc38 bytes
    // ntdll.dll .text:0x4e3ac, 0x74648 bytes
    // ntdll.dll .text:0x42344, 0x6fc38 bytes
    //
    _u93(sdk::unknown_ptr) dec_ref_wnf_user_subscription;
    
    // [RtlpDecommitBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x157cc, 0x67960 bytes
    // ntdll.dll .text:0xe8dc, 0x6fc38 bytes
    // ntdll.dll .text:0x46ac4, 0x74648 bytes
    // ntdll.dll .text:0xe8dc, 0x6fc38 bytes
    //
    _u94(sdk::unknown_ptr) decommit_block;
    
    // [RtlpDecrementWnfSerializationGroup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54284, 0x67960 bytes
    // ntdll.dll .text:0x81384, 0x6fc38 bytes
    // ntdll.dll .text:0x50458, 0x74648 bytes
    // ntdll.dll .text:0x81524, 0x6fc38 bytes
    //
    _u95(sdk::unknown_ptr) decrement_wnf_serialization_group;
    
    // [RtlpDefaultHeapDebuggingOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151bc0, 0x67960 bytes
    // ntdll.dll .data:0x168dc0, 0x6fc38 bytes
    // ntdll.dll .data:0x1830a0, 0x74648 bytes
    // ntdll.dll .data:0x169dc0, 0x6fc38 bytes
    //
    _u96(sdk::unknown_ptr) default_heap_debugging_options;
    
    // [RtlpDeleteData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c4d0, 0x67960 bytes
    // ntdll.dll .text:0x77ce0, 0x6fc38 bytes
    // ntdll.dll .text:0x7bef0, 0x74648 bytes
    // ntdll.dll .text:0x77e80, 0x6fc38 bytes
    //
    _u97(sdk::unknown_ptr) delete_data;
    
    // [RtlpDestroyExecutionRequiredRequest]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8550, 0x67960 bytes
    // ntdll.dll .text:0x10aaa4, 0x6fc38 bytes
    // ntdll.dll .text:0x1182a0, 0x74648 bytes
    // ntdll.dll .text:0x10aa34, 0x6fc38 bytes
    //
    _u98(sdk::unknown_ptr) destroy_execution_required_request;
    
    // [RtlpDetermineDosPathNameType4]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6d844, 0x67960 bytes
    // ntdll.dll .text:0x76f34, 0x6fc38 bytes
    // ntdll.dll .text:0x77820, 0x74648 bytes
    // ntdll.dll .text:0x770d4, 0x6fc38 bytes
    //
    _u99(sdk::unknown_ptr) determine_dos_path_name_type4;
    
    // [RtlpDisableBreakOnFailureCookie]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154014, 0x67960 bytes
    // ntdll.dll .data:0x16b1dc, 0x6fc38 bytes
    // ntdll.dll .data:0x184c84, 0x74648 bytes
    // ntdll.dll .data:0x16c1dc, 0x6fc38 bytes
    //
    _v00(sdk::unknown_ptr) disable_break_on_failure_cookie;
    
    // [RtlpDisableHeapLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154490, 0x67960 bytes
    // ntdll.dll .data:0x16b714, 0x6fc38 bytes
    // ntdll.dll .data:0x18525c, 0x74648 bytes
    // ntdll.dll .data:0x16c714, 0x6fc38 bytes
    //
    _v01(sdk::unknown_ptr) disable_heap_lookaside;
    
    // [RtlpDiskSpeedInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154420, 0x67960 bytes
    // ntdll.dll .data:0x16b688, 0x6fc38 bytes
    // ntdll.dll .data:0x1851f8, 0x74648 bytes
    // ntdll.dll .data:0x16c678, 0x6fc38 bytes
    //
    _v02(sdk::unknown_ptr) disk_speed_init;
    
    // [RtlpDiskSpeedInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8b2e0, 0x67960 bytes
    // ntdll.dll .text:0x8a230, 0x6fc38 bytes
    // ntdll.dll .text:0x62700, 0x74648 bytes
    // ntdll.dll .text:0x8a3d0, 0x6fc38 bytes
    //
    _v03(sdk::unknown_ptr) disk_speed_initialize;
    
    // [RtlpDiskSpeedPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150684, 0x67960 bytes
    // ntdll.dll .data:0x167718, 0x6fc38 bytes
    // ntdll.dll .data:0x181698, 0x74648 bytes
    // ntdll.dll .data:0x168718, 0x6fc38 bytes
    //
    _v04(sdk::unknown_ptr) disk_speed_policy;
    
    // [RtlpDllSearchPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152188, 0x67960 bytes
    // ntdll.dll .data:0x169468, 0x6fc38 bytes
    // ntdll.dll .data:0x183328, 0x74648 bytes
    // ntdll.dll .data:0x16a468, 0x6fc38 bytes
    //
    _v05(sdk::unknown_ptr) dll_search_path;
    
    // [RtlpDllSearchPathWithOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152178, 0x67960 bytes
    // ntdll.dll .data:0x169458, 0x6fc38 bytes
    // ntdll.dll .data:0x183318, 0x74648 bytes
    // ntdll.dll .data:0x16a458, 0x6fc38 bytes
    //
    _v06(sdk::unknown_ptr) dll_search_path_with_options;
    
    // [RtlpDosAUXDevice]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109020, 0x67960 bytes
    // ntdll.dll .rdata:0x11c040, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131078, 0x74648 bytes
    // ntdll.dll .rdata:0x11c040, 0x6fc38 bytes
    //
    _v07(sdk::unknown_ptr) dos_aux_device;
    
    // [RtlpDosCOMDevice]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109090, 0x67960 bytes
    // ntdll.dll .rdata:0x11c0c8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132530, 0x74648 bytes
    // ntdll.dll .rdata:0x11c0c8, 0x6fc38 bytes
    //
    _v08(sdk::unknown_ptr) dos_com_device;
    
    // [RtlpDosCONDevice]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109030, 0x67960 bytes
    // ntdll.dll .rdata:0x11c050, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131068, 0x74648 bytes
    // ntdll.dll .rdata:0x11c050, 0x6fc38 bytes
    //
    _v09(sdk::unknown_ptr) dos_con_device;
    
    // [RtlpDosCONINDevice]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109060, 0x67960 bytes
    // ntdll.dll .rdata:0x11c060, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131010, 0x74648 bytes
    // ntdll.dll .rdata:0x11c060, 0x6fc38 bytes
    //
    _v10(sdk::unknown_ptr) dos_conin_device;
    
    // [RtlpDosCONOUTDevice]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109050, 0x67960 bytes
    // ntdll.dll .rdata:0x11c010, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131000, 0x74648 bytes
    // ntdll.dll .rdata:0x11c010, 0x6fc38 bytes
    //
    _v11(sdk::unknown_ptr) dos_conout_device;
    
    // [RtlpDosDevicesPrefix]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1090e0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c1c0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1311f0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c1c0, 0x6fc38 bytes
    //
    _v12(sdk::unknown_ptr) dos_devices_prefix;
    
    // [RtlpDosDevicesUncPrefix]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109070, 0x67960 bytes
    // ntdll.dll .rdata:0x11c0d8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1310e0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c0d8, 0x6fc38 bytes
    //
    _v13(sdk::unknown_ptr) dos_devices_unc_prefix;
    
    // [RtlpDosLPTDevice]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109080, 0x67960 bytes
    // ntdll.dll .rdata:0x11c0b8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132510, 0x74648 bytes
    // ntdll.dll .rdata:0x11c0b8, 0x6fc38 bytes
    //
    _v14(sdk::unknown_ptr) dos_lpt_device;
    
    // [RtlpDosNULDevice]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109010, 0x67960 bytes
    // ntdll.dll .rdata:0x11c030, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131048, 0x74648 bytes
    // ntdll.dll .rdata:0x11c030, 0x6fc38 bytes
    //
    _v15(sdk::unknown_ptr) dos_nul_device;
    
    // [RtlpDosPathNameToRelativeNtPathName_U]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e518, 0x67960 bytes
    // ntdll.dll .text:0x38a94, 0x6fc38 bytes
    // ntdll.dll .text:0x1ab7c, 0x74648 bytes
    // ntdll.dll .text:0x38a94, 0x6fc38 bytes
    //
    _v16(sdk::unknown_ptr) dos_path_name_to_relative_nt_path_name_u;
    
    // [RtlpDosPRNDevice]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109000, 0x67960 bytes
    // ntdll.dll .rdata:0x11c020, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131058, 0x74648 bytes
    // ntdll.dll .rdata:0x11c020, 0x6fc38 bytes
    //
    _v17(sdk::unknown_ptr) dos_prn_device;
    
    // [RtlpDphInitFailureFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151a60, 0x67960 bytes
    // ntdll.dll .data:0x168b28, 0x6fc38 bytes
    // ntdll.dll .data:0x182dc8, 0x74648 bytes
    // ntdll.dll .data:0x169b28, 0x6fc38 bytes
    //
    _v18(sdk::unknown_ptr) dph_init_failure_flags;
    
    // [RtlpDynamicFunctionTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164270, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f2b0, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992d0, 0x74648 bytes
    // ntdll.dll .mrdata:0x1802b0, 0x6fc38 bytes
    //
    _v19(sdk::unknown_ptr) dynamic_function_table;
    
    // [RtlpDynamicFunctionTableLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152170, 0x67960 bytes
    // ntdll.dll .data:0x169450, 0x6fc38 bytes
    // ntdll.dll .data:0x183310, 0x74648 bytes
    // ntdll.dll .data:0x16a450, 0x6fc38 bytes
    //
    _v20(sdk::unknown_ptr) dynamic_function_table_lock;
    
    // [RtlpEmptyString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10a328, 0x67960 bytes
    // ntdll.dll .rdata:0x11d2b0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132550, 0x74648 bytes
    // ntdll.dll .rdata:0x11d2d0, 0x6fc38 bytes
    //
    _v21(sdk::unknown_ptr) empty_string;
    
    // [RtlpEnsureBufferSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x77900, 0x67960 bytes
    // ntdll.dll .text:0x7ea50, 0x6fc38 bytes
    // ntdll.dll .text:0x6eab0, 0x74648 bytes
    // ntdll.dll .text:0x7ebf0, 0x6fc38 bytes
    //
    _v22(sdk::unknown_ptr) ensure_buffer_size;
    
    // [RtlpEnsureLiveDeadListsInitialized]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdbdd8, 0x67960 bytes
    // ntdll.dll .text:0xdf6a0, 0x6fc38 bytes
    // ntdll.dll .text:0xe9ee4, 0x74648 bytes
    // ntdll.dll .text:0xdf610, 0x6fc38 bytes
    //
    _v23(sdk::unknown_ptr) ensure_live_dead_lists_initialized;
    
    // [RtlpEnsureTailingSlashAndAddToList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb708, 0x67960 bytes
    // ntdll.dll .text:0xded24, 0x6fc38 bytes
    // ntdll.dll .text:0xe96b8, 0x74648 bytes
    // ntdll.dll .text:0xdec94, 0x6fc38 bytes
    //
    _v24(sdk::unknown_ptr) ensure_tailing_slash_and_add_to_list;
    
    // [RtlpEnterCriticalSectionContended]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30c38, 0x67960 bytes
    // ntdll.dll .text:0x213f0, 0x6fc38 bytes
    // ntdll.dll .text:0x21d60, 0x74648 bytes
    // ntdll.dll .text:0x213f0, 0x6fc38 bytes
    //
    _v25(sdk::unknown_ptr) enter_critical_section_contended;
    
    // [RtlpEnumProcessHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x164b8, 0x67960 bytes
    // ntdll.dll .text:0x73c4c, 0x6fc38 bytes
    // ntdll.dll .text:0x7739c, 0x74648 bytes
    // ntdll.dll .text:0x73dec, 0x6fc38 bytes
    //
    _v26(sdk::unknown_ptr) enum_process_heaps;
    
    // [RtlpEstimateAllocatedSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8c68, 0x67960 bytes
    // ntdll.dll .text:0x7a328, 0x6fc38 bytes
    // ntdll.dll .text:0x8ac80, 0x74648 bytes
    // ntdll.dll .text:0x7a4c8, 0x6fc38 bytes
    //
    _v27(sdk::unknown_ptr) estimate_allocated_size;
    
    // [RtlpExeSearchPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152190, 0x67960 bytes
    // ntdll.dll .data:0x169470, 0x6fc38 bytes
    // ntdll.dll .data:0x183330, 0x74648 bytes
    // ntdll.dll .data:0x16a470, 0x6fc38 bytes
    //
    _v28(sdk::unknown_ptr) exe_search_path;
    
    // [RtlpExtendFrontEndUsageArray]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1396c, 0x67960 bytes
    // ntdll.dll .text:0x92b8, 0x6fc38 bytes
    // ntdll.dll .text:0x4a5a8, 0x74648 bytes
    // ntdll.dll .text:0x92b8, 0x6fc38 bytes
    //
    _v29(sdk::unknown_ptr) extend_front_end_usage_array;
    
    // [RtlpExtendListLookup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1366c, 0x67960 bytes
    // ntdll.dll .text:0xb0e4, 0x6fc38 bytes
    // ntdll.dll .text:0x4a748, 0x74648 bytes
    // ntdll.dll .text:0xb0e4, 0x6fc38 bytes
    //
    _v30(sdk::unknown_ptr) extend_list_lookup;
    
    // [RtlpExtendLowFragHeapSegment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78390, 0x67960 bytes
    // ntdll.dll .text:0x7128c, 0x6fc38 bytes
    // ntdll.dll .text:0x731bc, 0x74648 bytes
    // ntdll.dll .text:0x7142c, 0x6fc38 bytes
    //
    _v31(sdk::unknown_ptr) extend_low_frag_heap_segment;
    
    // [RtlpExtendedHeapInformationGenerator]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeac20, 0x67960 bytes
    // ntdll.dll .text:0xf30f0, 0x6fc38 bytes
    // ntdll.dll .text:0xfe920, 0x74648 bytes
    // ntdll.dll .text:0xf30a0, 0x6fc38 bytes
    //
    _v32(sdk::unknown_ptr) extended_heap_information_generator;
    
    // [RtlpExtendedHeapInformationWorkerCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeaf60, 0x67960 bytes
    // ntdll.dll .text:0xf3420, 0x6fc38 bytes
    // ntdll.dll .text:0xfec50, 0x74648 bytes
    // ntdll.dll .text:0xf33d0, 0x6fc38 bytes
    //
    _v33(sdk::unknown_ptr) extended_heap_information_worker_callback;
    
    // [RtlpExtendedHeapInformationWorkerThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeb070, 0x67960 bytes
    // ntdll.dll .text:0xf3540, 0x6fc38 bytes
    // ntdll.dll .text:0xfed70, 0x74648 bytes
    // ntdll.dll .text:0xf34f0, 0x6fc38 bytes
    //
    _v34(sdk::unknown_ptr) extended_heap_information_worker_thread;
    
    // [RtlpFileIsWin32WithRCManifest]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x197e0, 0x67960 bytes
    // ntdll.dll .text:0x57dc4, 0x6fc38 bytes
    // ntdll.dll .text:0x7fe4, 0x74648 bytes
    // ntdll.dll .text:0x57dc4, 0x6fc38 bytes
    //
    _v35(sdk::unknown_ptr) file_is_win32_with_rc_manifest;
    
    // [RtlpFilterandReplaceConsoleLanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x22d54, 0x67960 bytes
    // ntdll.dll .text:0x2e424, 0x6fc38 bytes
    // ntdll.dll .text:0x7a5e4, 0x74648 bytes
    // ntdll.dll .text:0x2e424, 0x6fc38 bytes
    //
    _v36(sdk::unknown_ptr) filterand_replace_console_languages;
    
    // [RtlpFindActivationContextSection_CheckParameters]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2ced8, 0x67960 bytes
    // ntdll.dll .text:0x3b398, 0x6fc38 bytes
    // ntdll.dll .text:0x1dfd0, 0x74648 bytes
    // ntdll.dll .text:0x3b398, 0x6fc38 bytes
    //
    _v37(sdk::unknown_ptr) find_activation_context_section_check_parameters;
    
    // [RtlpFindActivationContextSection_FillOutReturnedData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82420, 0x67960 bytes
    // ntdll.dll .text:0x7f64c, 0x6fc38 bytes
    // ntdll.dll .text:0x80e54, 0x74648 bytes
    // ntdll.dll .text:0x7f7ec, 0x6fc38 bytes
    //
    _v38(sdk::unknown_ptr) find_activation_context_section_fill_out_returned_data;
    
    // [RtlpFindGuidInSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2aaf4, 0x67960 bytes
    // ntdll.dll .text:0x3b70c, 0x6fc38 bytes
    // ntdll.dll .text:0x19ff4, 0x74648 bytes
    // ntdll.dll .text:0x3b70c, 0x6fc38 bytes
    //
    _v39(sdk::unknown_ptr) find_guid_in_section;
    
    // [RtlpFindNextActivationContextSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2c93c, 0x67960 bytes
    // ntdll.dll .text:0x3b080, 0x6fc38 bytes
    // ntdll.dll .text:0x1dca0, 0x74648 bytes
    // ntdll.dll .text:0x3b080, 0x6fc38 bytes
    //
    _v40(sdk::unknown_ptr) find_next_activation_context_section;
    
    // [RtlpFindUnicodeStringInSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2cc40, 0x67960 bytes
    // ntdll.dll .text:0x3ab38, 0x6fc38 bytes
    // ntdll.dll .text:0x1d930, 0x74648 bytes
    // ntdll.dll .text:0x3ab38, 0x6fc38 bytes
    //
    _v41(sdk::unknown_ptr) find_unicode_string_in_section;
    
    // [RtlpFlushHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x165c8, 0x67960 bytes
    // ntdll.dll .text:0x6930, 0x6fc38 bytes
    // ntdll.dll .text:0x5a8ac, 0x74648 bytes
    // ntdll.dll .text:0x6930, 0x6fc38 bytes
    //
    _v42(sdk::unknown_ptr) flush_heap;
    
    // [RtlpFlushHeapsCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x165b0, 0x67960 bytes
    // ntdll.dll .text:0x60d0, 0x6fc38 bytes
    // ntdll.dll .text:0x5a2e0, 0x74648 bytes
    // ntdll.dll .text:0x60d0, 0x6fc38 bytes
    //
    _v43(sdk::unknown_ptr) flush_heaps_callback;
    
    // [RtlpForceCSDebugInfoCreation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ea0, 0x67960 bytes
    // ntdll.dll .data:0x168fc0, 0x6fc38 bytes
    // ntdll.dll .data:0x1832a0, 0x74648 bytes
    // ntdll.dll .data:0x169fc0, 0x6fc38 bytes
    //
    _v44(sdk::unknown_ptr) force_cs_debug_info_creation;
    
    // [RtlpForceCSToUseEvents]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ea1, 0x67960 bytes
    // ntdll.dll .data:0x168fc2, 0x6fc38 bytes
    // ntdll.dll .data:0x1832a2, 0x74648 bytes
    // ntdll.dll .data:0x169fc2, 0x6fc38 bytes
    //
    _v45(sdk::unknown_ptr) force_cs_to_use_events;
    
    // [RtlpFreeActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x852cc, 0x67960 bytes
    // ntdll.dll .text:0x81b88, 0x6fc38 bytes
    // ntdll.dll .text:0x857d4, 0x74648 bytes
    // ntdll.dll .text:0x81d28, 0x6fc38 bytes
    //
    _v46(sdk::unknown_ptr) free_activation_context;
    
    // [RtlpFreeActivationContextStackFrame]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78968, 0x67960 bytes
    // ntdll.dll .text:0x6f9c8, 0x6fc38 bytes
    // ntdll.dll .text:0x73aac, 0x74648 bytes
    // ntdll.dll .text:0x6fb68, 0x6fc38 bytes
    //
    _v47(sdk::unknown_ptr) free_activation_context_stack_frame;
    
    // [RtlpFreeDebugInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x16468, 0x67960 bytes
    // ntdll.dll .text:0x4ce40, 0x6fc38 bytes
    // ntdll.dll .text:0x5ded0, 0x74648 bytes
    // ntdll.dll .text:0x4ce40, 0x6fc38 bytes
    //
    _v48(sdk::unknown_ptr) free_debug_info;
    
    // [RtlpFreeTraverseNodes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1a8c0, 0x67960 bytes
    // ntdll.dll .text:0x52dd0, 0x6fc38 bytes
    // ntdll.dll .text:0x4170, 0x74648 bytes
    // ntdll.dll .text:0x52dd0, 0x6fc38 bytes
    //
    _v49(sdk::unknown_ptr) free_traverse_nodes;
    
    // [RtlpFreeUserBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x174e8, 0x67960 bytes
    // ntdll.dll .text:0xc1b8, 0x6fc38 bytes
    // ntdll.dll .text:0x47b88, 0x74648 bytes
    // ntdll.dll .text:0xc1b8, 0x6fc38 bytes
    //
    _v50(sdk::unknown_ptr) free_user_block;
    
    // [RtlpFreeUserBlockToHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x17684, 0x67960 bytes
    // ntdll.dll .text:0xc3a0, 0x6fc38 bytes
    // ntdll.dll .text:0x47de0, 0x74648 bytes
    // ntdll.dll .text:0xc3a0, 0x6fc38 bytes
    //
    _v51(sdk::unknown_ptr) free_user_block_to_heap;
    
    // [RtlpFreezeTimeBias]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154358, 0x67960 bytes
    // ntdll.dll .data:0x16b510, 0x6fc38 bytes
    // ntdll.dll .data:0x1850b0, 0x74648 bytes
    // ntdll.dll .data:0x16c4f0, 0x6fc38 bytes
    //
    _v52(sdk::unknown_ptr) freeze_time_bias;
    
    // [RtlpGetActivationContextData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e288, 0x67960 bytes
    // ntdll.dll .text:0x3e254, 0x6fc38 bytes
    // ntdll.dll .text:0x33c7c, 0x74648 bytes
    // ntdll.dll .text:0x3e254, 0x6fc38 bytes
    //
    _v53(sdk::unknown_ptr) get_activation_context_data;
    
    // [RtlpGetActivationContextDataStorageMapAndRosterHeader]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1c9d8, 0x67960 bytes
    // ntdll.dll .text:0x71a14, 0x6fc38 bytes
    // ntdll.dll .text:0x74bf4, 0x74648 bytes
    // ntdll.dll .text:0x71bb4, 0x6fc38 bytes
    //
    _v54(sdk::unknown_ptr) get_activation_context_data_storage_map_and_roster_header;
    
    // [RtlpGetAlternateCodePage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeff28, 0x67960 bytes
    // ntdll.dll .text:0xfc94c, 0x6fc38 bytes
    // ntdll.dll .text:0x10983c, 0x74648 bytes
    // ntdll.dll .text:0xfc8fc, 0x6fc38 bytes
    //
    _v55(sdk::unknown_ptr) get_alternate_code_page;
    
    // [RtlpGetAssemblyStorageMapRootLocation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdc67c, 0x67960 bytes
    // ntdll.dll .text:0xdff40, 0x6fc38 bytes
    // ntdll.dll .text:0xea794, 0x74648 bytes
    // ntdll.dll .text:0xdfeb0, 0x6fc38 bytes
    //
    _v56(sdk::unknown_ptr) get_assembly_storage_map_root_location;
    
    // [RtlpGetBlockInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee448, 0x67960 bytes
    // ntdll.dll .text:0xf774c, 0x6fc38 bytes
    // ntdll.dll .text:0x103328, 0x74648 bytes
    // ntdll.dll .text:0xf76fc, 0x6fc38 bytes
    //
    _v57(sdk::unknown_ptr) get_block_info;
    
    // [RtlpGetBlockSizeEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x68544, 0x67960 bytes
    // ntdll.dll .text:0x48b98, 0x6fc38 bytes
    // ntdll.dll .text:0x587d0, 0x74648 bytes
    // ntdll.dll .text:0x48b98, 0x6fc38 bytes
    //
    _v58(sdk::unknown_ptr) get_block_size_ex;
    
    // [RtlpGetCachedPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x302c0, 0x67960 bytes
    // ntdll.dll .text:0x62938, 0x6fc38 bytes
    // ntdll.dll .text:0x31ef0, 0x74648 bytes
    // ntdll.dll .text:0x62a58, 0x6fc38 bytes
    //
    _v59(sdk::unknown_ptr) get_cached_path;
    
    // [RtlpGetCompleteLanguageFallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe7eb4, 0x67960 bytes
    // ntdll.dll .text:0xefe3c, 0x6fc38 bytes
    // ntdll.dll .text:0xfb188, 0x74648 bytes
    // ntdll.dll .text:0xefdec, 0x6fc38 bytes
    //
    _v60(sdk::unknown_ptr) get_complete_language_fallback;
    
    // [RtlpGetContainingRange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x896ec, 0x67960 bytes
    // ntdll.dll .text:0xf3764, 0x6fc38 bytes
    // ntdll.dll .text:0xfef94, 0x74648 bytes
    // ntdll.dll .text:0xf3714, 0x6fc38 bytes
    //
    _v61(sdk::unknown_ptr) get_containing_range;
    
    // [RtlpGetCustomCultureData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeffcc, 0x67960 bytes
    // ntdll.dll .text:0xfc9f0, 0x6fc38 bytes
    // ntdll.dll .text:0x1098e4, 0x74648 bytes
    // ntdll.dll .text:0xfc9a0, 0x6fc38 bytes
    //
    _v62(sdk::unknown_ptr) get_custom_culture_data;
    
    // [RtlpGetCustomCultureDataFromFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf0044, 0x67960 bytes
    // ntdll.dll .text:0xfca68, 0x6fc38 bytes
    // ntdll.dll .text:0x10995c, 0x74648 bytes
    // ntdll.dll .text:0xfca18, 0x6fc38 bytes
    //
    _v63(sdk::unknown_ptr) get_custom_culture_data_from_file;
    
    // [RtlpGetDefaultLanguageBaseOrParent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe800c, 0x67960 bytes
    // ntdll.dll .text:0xeff90, 0x6fc38 bytes
    // ntdll.dll .text:0xfb2dc, 0x74648 bytes
    // ntdll.dll .text:0xeff40, 0x6fc38 bytes
    //
    _v64(sdk::unknown_ptr) get_default_language_base_or_parent;
    
    // [RtlpGetDefaultTrustSubjectContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x59f0c, 0x67960 bytes
    // ntdll.dll .text:0x68138, 0x6fc38 bytes
    // ntdll.dll .text:0x68dd8, 0x74648 bytes
    // ntdll.dll .text:0x68258, 0x6fc38 bytes
    //
    _v65(sdk::unknown_ptr) get_default_trust_subject_context;
    
    // [RtlpGetDefaultsSubjectContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x59cd0, 0x67960 bytes
    // ntdll.dll .text:0x67efc, 0x6fc38 bytes
    // ntdll.dll .text:0x68b9c, 0x74648 bytes
    // ntdll.dll .text:0x6801c, 0x6fc38 bytes
    //
    _v66(sdk::unknown_ptr) get_defaults_subject_context;
    
    // [RtlpGetDeviceFamilyInfoEnum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7bd40, 0x67960 bytes
    // ntdll.dll .text:0x6bad0, 0x6fc38 bytes
    // ntdll.dll .text:0x78050, 0x74648 bytes
    // ntdll.dll .text:0x6bbf0, 0x6fc38 bytes
    //
    _v67(sdk::unknown_ptr) get_device_family_info_enum;
    
    // [RtlpGetDirPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x76d5c, 0x67960 bytes
    // ntdll.dll .text:0x6d9d4, 0x6fc38 bytes
    // ntdll.dll .text:0x6aad0, 0x74648 bytes
    // ntdll.dll .text:0x6daf4, 0x6fc38 bytes
    //
    _v68(sdk::unknown_ptr) get_dir_path;
    
    // [RtlpGetExtraStuffPointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73c64, 0x67960 bytes
    // ntdll.dll .text:0xbfb0, 0x6fc38 bytes
    // ntdll.dll .text:0x764f4, 0x74648 bytes
    // ntdll.dll .text:0xbfb0, 0x6fc38 bytes
    //
    _v69(sdk::unknown_ptr) get_extra_stuff_pointer;
    
    // [RtlpGetExtraStuffPointerUnsafe]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeb218, 0x67960 bytes
    // ntdll.dll .text:0xf3864, 0x6fc38 bytes
    // ntdll.dll .text:0xff090, 0x74648 bytes
    // ntdll.dll .text:0xf3814, 0x6fc38 bytes
    //
    _v70(sdk::unknown_ptr) get_extra_stuff_pointer_unsafe;
    
    // [RtlpGetFileSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf0158, 0x67960 bytes
    // ntdll.dll .text:0xfcb84, 0x6fc38 bytes
    // ntdll.dll .text:0x109a78, 0x74648 bytes
    // ntdll.dll .text:0xfcb34, 0x6fc38 bytes
    //
    _v71(sdk::unknown_ptr) get_file_size;
    
    // [RtlpGetFirstBlockAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1008, 0x67960 bytes
    // ntdll.dll .text:0x10b110, 0x6fc38 bytes
    // ntdll.dll .text:0xaef78, 0x74648 bytes
    // ntdll.dll .text:0x10b0a0, 0x6fc38 bytes
    //
    _v72(sdk::unknown_ptr) get_first_block_address;
    
    // [RtlpGetFreeBlockInsidePageBoundaries]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x158c0, 0x67960 bytes
    // ntdll.dll .text:0xea14, 0x6fc38 bytes
    // ntdll.dll .text:0x46bfc, 0x74648 bytes
    // ntdll.dll .text:0xea14, 0x6fc38 bytes
    //
    _v73(sdk::unknown_ptr) get_free_block_inside_page_boundaries;
    
    // [RtlpGetHeapBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee490, 0x67960 bytes
    // ntdll.dll .text:0xf7798, 0x6fc38 bytes
    // ntdll.dll .text:0x103374, 0x74648 bytes
    // ntdll.dll .text:0xf7748, 0x6fc38 bytes
    //
    _v74(sdk::unknown_ptr) get_heap_block;
    
    // [RtlpGetHeapInterceptorIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ed80, 0x67960 bytes
    // ntdll.dll .text:0x107a28, 0x6fc38 bytes
    // ntdll.dll .text:0x1151e8, 0x74648 bytes
    // ntdll.dll .text:0x1079b8, 0x6fc38 bytes
    //
    _v75(sdk::unknown_ptr) get_heap_interceptor_index;
    
    // [RtlpGetHeapProtection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x44ee4, 0x67960 bytes
    // ntdll.dll .text:0xe77c, 0x6fc38 bytes
    // ntdll.dll .text:0x467e4, 0x74648 bytes
    // ntdll.dll .text:0xe77c, 0x6fc38 bytes
    //
    _v76(sdk::unknown_ptr) get_heap_protection;
    
    // [RtlpGetInstalledLanguageType]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8d5dc, 0x67960 bytes
    // ntdll.dll .text:0xf0180, 0x6fc38 bytes
    // ntdll.dll .text:0xfb4b0, 0x74648 bytes
    // ntdll.dll .text:0xf0130, 0x6fc38 bytes
    //
    _v77(sdk::unknown_ptr) get_installed_language_type;
    
    // [RtlpGetLCIDFromLangInfoNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84340, 0x67960 bytes
    // ntdll.dll .text:0x80e20, 0x6fc38 bytes
    // ntdll.dll .text:0x866c0, 0x74648 bytes
    // ntdll.dll .text:0x80fc0, 0x6fc38 bytes
    //
    _v78(sdk::unknown_ptr) get_lcid_from_lang_info_node;
    
    // [RtlpGetLengthWithoutLastPathElement]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6d744, 0x67960 bytes
    // ntdll.dll .text:0x76e34, 0x6fc38 bytes
    // ntdll.dll .text:0x77704, 0x74648 bytes
    // ntdll.dll .text:0x76fd4, 0x6fc38 bytes
    //
    _v79(sdk::unknown_ptr) get_length_without_last_path_element;
    
    // [RtlpGetLFHContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x782dc, 0x67960 bytes
    // ntdll.dll .text:0x711d4, 0x6fc38 bytes
    // ntdll.dll .text:0x73104, 0x74648 bytes
    // ntdll.dll .text:0x71374, 0x6fc38 bytes
    //
    _v80(sdk::unknown_ptr) get_lfh_context;
    
    // [RtlpGetLocaleDataKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf01b4, 0x67960 bytes
    // ntdll.dll .text:0xfcbe4, 0x6fc38 bytes
    // ntdll.dll .text:0x109ad8, 0x74648 bytes
    // ntdll.dll .text:0xfcb94, 0x6fc38 bytes
    //
    _v81(sdk::unknown_ptr) get_locale_data_key;
    
    // [RtlpGetLowFragHeapMetadataSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfcf2c, 0x67960 bytes
    // ntdll.dll .text:0x10b198, 0x6fc38 bytes
    // ntdll.dll .text:0x1189e4, 0x74648 bytes
    // ntdll.dll .text:0x10b128, 0x6fc38 bytes
    //
    _v82(sdk::unknown_ptr) get_low_frag_heap_metadata_size;
    
    // [RtlpGetMemoryFlag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee524, 0x67960 bytes
    // ntdll.dll .text:0xf7834, 0x6fc38 bytes
    // ntdll.dll .text:0x103410, 0x74648 bytes
    // ntdll.dll .text:0xf77e4, 0x6fc38 bytes
    //
    _v83(sdk::unknown_ptr) get_memory_flag;
    
    // [RtlpGetModifiedProcessCookie]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x742bc, 0x67960 bytes
    // ntdll.dll .text:0x107a58, 0x6fc38 bytes
    // ntdll.dll .text:0xaee78, 0x74648 bytes
    // ntdll.dll .text:0x1079e8, 0x6fc38 bytes
    //
    _v84(sdk::unknown_ptr) get_modified_process_cookie;
    
    // [RtlpGetMUIRedirectedFilePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1a4d4, 0x67960 bytes
    // ntdll.dll .text:0x51564, 0x6fc38 bytes
    // ntdll.dll .text:0x9c6c, 0x74648 bytes
    // ntdll.dll .text:0x51564, 0x6fc38 bytes
    //
    _v85(sdk::unknown_ptr) get_mui_redirected_file_path;
    
    // [RtlpGetMultiStringLength]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe8210, 0x67960 bytes
    // ntdll.dll .text:0xf0220, 0x6fc38 bytes
    // ntdll.dll .text:0xfb550, 0x74648 bytes
    // ntdll.dll .text:0xf01d0, 0x6fc38 bytes
    //
    _v86(sdk::unknown_ptr) get_multi_string_length;
    
    // [RtlpGetReservedBlockSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1058, 0x67960 bytes
    // ntdll.dll .text:0x10b1d8, 0x6fc38 bytes
    // ntdll.dll .text:0xaeffe, 0x74648 bytes
    // ntdll.dll .text:0x10b168, 0x6fc38 bytes
    //
    _v87(sdk::unknown_ptr) get_reserved_block_size;
    
    // [RtlpGetStackTraceAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf3920, 0x67960 bytes
    // ntdll.dll .text:0x100db0, 0x6fc38 bytes
    // ntdll.dll .text:0x10e240, 0x74648 bytes
    // ntdll.dll .text:0x100d60, 0x6fc38 bytes
    //
    _v88(sdk::unknown_ptr) get_stack_trace_address;
    
    // [RtlpGetStackTraceAddressEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x16440, 0x67960 bytes
    // ntdll.dll .text:0x4ce10, 0x6fc38 bytes
    // ntdll.dll .text:0x5dea0, 0x74648 bytes
    // ntdll.dll .text:0x4ce10, 0x6fc38 bytes
    //
    _v89(sdk::unknown_ptr) get_stack_trace_address_ex;
    
    // [RtlpGetSubSegmentBlockCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x45e70, 0x67960 bytes
    // ntdll.dll .text:0x6c8ec, 0x6fc38 bytes
    // ntdll.dll .text:0x417c0, 0x74648 bytes
    // ntdll.dll .text:0x6ca0c, 0x6fc38 bytes
    //
    _v90(sdk::unknown_ptr) get_sub_segment_block_count;
    
    // [RtlpGetSystemDefaultUILanguage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x267c0, 0x67960 bytes
    // ntdll.dll .text:0x2e700, 0x6fc38 bytes
    // ntdll.dll .text:0x12f40, 0x74648 bytes
    // ntdll.dll .text:0x2e700, 0x6fc38 bytes
    //
    _v91(sdk::unknown_ptr) get_system_default_ui_language;
    
    // [RtlpGetTagName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeb268, 0x67960 bytes
    // ntdll.dll .text:0xf38b8, 0x6fc38 bytes
    // ntdll.dll .text:0xff0e4, 0x74648 bytes
    // ntdll.dll .text:0xf3868, 0x6fc38 bytes
    //
    _v92(sdk::unknown_ptr) get_tag_name;
    
    // [RtlpGetUserLocaleName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf0260, 0x67960 bytes
    // ntdll.dll .text:0xfcc8c, 0x6fc38 bytes
    // ntdll.dll .text:0x109c64, 0x74648 bytes
    // ntdll.dll .text:0xfcc3c, 0x6fc38 bytes
    //
    _v93(sdk::unknown_ptr) get_user_locale_name;
    
    // [RtlpGetUserOrMachineUILanguage4NLS]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf48e0, 0x67960 bytes
    // ntdll.dll .text:0x1031e0, 0x6fc38 bytes
    // ntdll.dll .text:0x110900, 0x74648 bytes
    // ntdll.dll .text:0x103170, 0x6fc38 bytes
    //
    _v94(sdk::unknown_ptr) get_user_or_machine_ui_language4nls;
    
    // [RtlpGetVolumeHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8b400, 0x67960 bytes
    // ntdll.dll .text:0x8a34c, 0x6fc38 bytes
    // ntdll.dll .text:0x625e8, 0x74648 bytes
    // ntdll.dll .text:0x8a4ec, 0x6fc38 bytes
    //
    _v95(sdk::unknown_ptr) get_volume_handle;
    
    // [RtlpGlobalTagHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544e8, 0x67960 bytes
    // ntdll.dll .data:0x16bb28, 0x6fc38 bytes
    // ntdll.dll .data:0x1858b0, 0x74648 bytes
    // ntdll.dll .data:0x16cb28, 0x6fc38 bytes
    //
    _v96(sdk::unknown_ptr) global_tag_heap;
    
    // [RtlpGrowBlockInPlace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6dac8, 0x67960 bytes
    // ntdll.dll .text:0x103e4, 0x6fc38 bytes
    // ntdll.dll .text:0x44064, 0x74648 bytes
    // ntdll.dll .text:0x103e4, 0x6fc38 bytes
    //
    _v97(sdk::unknown_ptr) grow_block_in_place;
    
    // [RtlpGuardGrantSuppressedCallAccess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf0a04, 0x67960 bytes
    // ntdll.dll .text:0x53128, 0x6fc38 bytes
    // ntdll.dll .text:0x10a554, 0x74648 bytes
    // ntdll.dll .text:0x53128, 0x6fc38 bytes
    //
    _v98(sdk::unknown_ptr) guard_grant_suppressed_call_access;
    
    // [RtlpGuardIsSuppressedAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf0a9c, 0x67960 bytes
    // ntdll.dll .text:0xfd150, 0x6fc38 bytes
    // ntdll.dll .text:0x10a5f8, 0x74648 bytes
    // ntdll.dll .text:0xfd100, 0x6fc38 bytes
    //
    _v99(sdk::unknown_ptr) guard_is_suppressed_address;
    
    // [RtlpHandleInvalidUserCallTarget]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf0be0, 0x67960 bytes
    // ntdll.dll .text:0xfd180, 0x6fc38 bytes
    // ntdll.dll .text:0x10a630, 0x74648 bytes
    // ntdll.dll .text:0xfd130, 0x6fc38 bytes
    //
    _w00(sdk::unknown_ptr) handle_invalid_user_call_target;
    
    // [RtlpHasMachineUILock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf4c3c, 0x67960 bytes
    // ntdll.dll .text:0x103530, 0x6fc38 bytes
    // ntdll.dll .text:0x110b34, 0x74648 bytes
    // ntdll.dll .text:0x1034c0, 0x6fc38 bytes
    //
    _w01(sdk::unknown_ptr) has_machine_ui_lock;
    
    // [RtlpHeapGenerateRandomValue32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x45cb0, 0x67960 bytes
    // ntdll.dll .text:0xc8c8, 0x6fc38 bytes
    // ntdll.dll .text:0x41db0, 0x74648 bytes
    // ntdll.dll .text:0xc8c8, 0x6fc38 bytes
    //
    _w02(sdk::unknown_ptr) heap_generate_random_value32;
    
    // [RtlpHeapHeaderFieldOffsets]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109d10, 0x67960 bytes
    // ntdll.dll .rdata:0x11d650, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1328f0, 0x74648 bytes
    // ntdll.dll .rdata:0x11d670, 0x6fc38 bytes
    //
    _w03(sdk::unknown_ptr) heap_header_field_offsets;
    
    // [RtlpHeapInvalidBreakPoint]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151651, 0x67960 bytes
    // ntdll.dll .data:0x168c49, 0x6fc38 bytes
    // ntdll.dll .data:0x182ee9, 0x74648 bytes
    // ntdll.dll .data:0x169c90, 0x6fc38 bytes
    //
    _w04(sdk::unknown_ptr) heap_invalid_break_point;
    
    // [RtlpHeapPerformCrossProcessQuery]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeb36c, 0x67960 bytes
    // ntdll.dll .text:0xf39b4, 0x6fc38 bytes
    // ntdll.dll .text:0xff1d8, 0x74648 bytes
    // ntdll.dll .text:0xf3964, 0x6fc38 bytes
    //
    _w05(sdk::unknown_ptr) heap_perform_cross_process_query;
    
    // [RtlpHeapQueryTotalReserveSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96300, 0x67960 bytes
    // ntdll.dll .text:0xf3bc0, 0x6fc38 bytes
    // ntdll.dll .text:0xff3e0, 0x74648 bytes
    // ntdll.dll .text:0xf3b70, 0x6fc38 bytes
    //
    _w06(sdk::unknown_ptr) heap_query_total_reserve_size;
    
    // [RtlpHeapStackTraceLog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x155430, 0x67960 bytes
    // ntdll.dll .data:0x16bbf0, 0x6fc38 bytes
    // ntdll.dll .data:0x185990, 0x74648 bytes
    // ntdll.dll .data:0x16cbf8, 0x6fc38 bytes
    //
    _w07(sdk::unknown_ptr) heap_stack_trace_log;
    
    // [RtlpHeapStopOn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151660, 0x67960 bytes
    // ntdll.dll .data:0x168c60, 0x6fc38 bytes
    // ntdll.dll .data:0x182f00, 0x74648 bytes
    // ntdll.dll .data:0x169c60, 0x6fc38 bytes
    //
    _w08(sdk::unknown_ptr) heap_stop_on;
    
    // [RtlpHeapTrkInterceptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90af0, 0x67960 bytes
    // ntdll.dll .text:0xfdd40, 0x6fc38 bytes
    // ntdll.dll .text:0x10b180, 0x74648 bytes
    // ntdll.dll .text:0xfdcf0, 0x6fc38 bytes
    //
    _w09(sdk::unknown_ptr) heap_trk_interceptor;
    
    // [RtlpHeapTrkLeakCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf0f70, 0x67960 bytes
    // ntdll.dll .text:0xfdf10, 0x6fc38 bytes
    // ntdll.dll .text:0x10b350, 0x74648 bytes
    // ntdll.dll .text:0xfdec0, 0x6fc38 bytes
    //
    _w10(sdk::unknown_ptr) heap_trk_leak_callback;
    
    // [RtlpHpAppCompatDontChangePolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0x89160, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _w11(sdk::unknown_ptr) hp_app_compat_dont_change_policy;
    
    // [RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf83e0, 0x67960 bytes
    // ntdll.dll .text:0xf3c50, 0x6fc38 bytes
    // ntdll.dll .text:0xff470, 0x74648 bytes
    // ntdll.dll .text:0xf3c00, 0x6fc38 bytes
    //
    _w12(sdk::unknown_ptr) hp_app_compat_enable_padding_and_lfh_subsegment_commit;
    
    // [RtlpHpAppCompatFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x15067c, 0x67960 bytes
    // ntdll.dll .data:0x16773c, 0x6fc38 bytes
    // ntdll.dll .data:0x185284, 0x74648 bytes
    // ntdll.dll .data:0x16873c, 0x6fc38 bytes
    //
    _w13(sdk::unknown_ptr) hp_app_compat_flags;
    
    // [RtlpHpApplySegmentHeapConfigurations]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89618, 0x67960 bytes
    // ntdll.dll .text:0xf3c74, 0x6fc38 bytes
    // ntdll.dll .text:0xae756, 0x74648 bytes
    // ntdll.dll .text:0xf3c24, 0x6fc38 bytes
    //
    _w14(sdk::unknown_ptr) hp_apply_segment_heap_configurations;
    
    // [RtlpHpCalculateAllocSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x44a20, 0x67960 bytes
    // ntdll.dll .text:0x6ec8, 0x6fc38 bytes
    // ntdll.dll .text:0x66dc4, 0x74648 bytes
    // ntdll.dll .text:0x6ec8, 0x6fc38 bytes
    //
    _w15(sdk::unknown_ptr) hp_calculate_alloc_size;
    
    // [RtlpHpDefaultBrowserPackageName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10e7e0, 0x67960 bytes
    // ntdll.dll .rdata:0x124aa8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x152a48, 0x74648 bytes
    // ntdll.dll .rdata:0x124da8, 0x6fc38 bytes
    //
    _w16(sdk::unknown_ptr) hp_default_browser_package_name;
    
    // [RtlpHpGetUserInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x738f0, 0x67960 bytes
    // ntdll.dll .text:0x9030, 0x6fc38 bytes
    // ntdll.dll .text:0x761ac, 0x74648 bytes
    // ntdll.dll .text:0x9030, 0x6fc38 bytes
    //
    _w17(sdk::unknown_ptr) hp_get_user_info;
    
    // [RtlpHpHeapLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x32d48, 0x67960 bytes
    // ntdll.dll .text:0x64624, 0x6fc38 bytes
    // ntdll.dll .text:0x2d9cc, 0x74648 bytes
    // ntdll.dll .text:0x64744, 0x6fc38 bytes
    //
    _w18(sdk::unknown_ptr) hp_heap_lock;
    
    // [RtlpHpHeapUnlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x319c4, 0x67960 bytes
    // ntdll.dll .text:0x646fc, 0x6fc38 bytes
    // ntdll.dll .text:0x2da94, 0x74648 bytes
    // ntdll.dll .text:0x6481c, 0x6fc38 bytes
    //
    _w19(sdk::unknown_ptr) hp_heap_unlock;
    
    // [RtlpHpLargeAllocReport]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfcd64, 0x67960 bytes
    // ntdll.dll .text:0x10dd60, 0x6fc38 bytes
    // ntdll.dll .text:0x121fc0, 0x74648 bytes
    // ntdll.dll .text:0x10df00, 0x6fc38 bytes
    //
    _w20(sdk::unknown_ptr) hp_large_alloc_report;
    
    // [RtlpHpLargeAllocSizeInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1a7b4, 0x67960 bytes
    // ntdll.dll .text:0x838cc, 0x6fc38 bytes
    // ntdll.dll .text:0x877fc, 0x74648 bytes
    // ntdll.dll .text:0x83a6c, 0x6fc38 bytes
    //
    _w21(sdk::unknown_ptr) hp_large_alloc_size_internal;
    
    // [RtlpHpLargeAllocationProtect]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfce58, 0x67960 bytes
    // ntdll.dll .text:0x10def0, 0x6fc38 bytes
    // ntdll.dll .text:0x122110, 0x74648 bytes
    // ntdll.dll .text:0x10e090, 0x6fc38 bytes
    //
    _w22(sdk::unknown_ptr) hp_large_allocation_protect;
    
    // [RtlpHpLargeReAlloc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x79c3c, 0x67960 bytes
    // ntdll.dll .text:0x10df6c, 0x6fc38 bytes
    // ntdll.dll .text:0x8dfcc, 0x74648 bytes
    // ntdll.dll .text:0x10e10c, 0x6fc38 bytes
    //
    _w23(sdk::unknown_ptr) hp_large_re_alloc;
    
    // [RtlpHpLfhContentionLimit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150680, 0x67960 bytes
    // ntdll.dll .data:0x1677a8, 0x6fc38 bytes
    // ntdll.dll .data:0x181800, 0x74648 bytes
    // ntdll.dll .data:0x1687a8, 0x6fc38 bytes
    //
    _w24(sdk::unknown_ptr) hp_lfh_contention_limit;
    
    // [RtlpHpLfhContextLockUnlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfdb74, 0x67960 bytes
    // ntdll.dll .text:0x10d800, 0x6fc38 bytes
    // ntdll.dll .text:0x121598, 0x74648 bytes
    // ntdll.dll .text:0x10d9a0, 0x6fc38 bytes
    //
    _w25(sdk::unknown_ptr) hp_lfh_context_lock_unlock;
    
    // [RtlpHpLfhOwnerListLockUnlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfdbc4, 0x67960 bytes
    // ntdll.dll .text:0x10d880, 0x6fc38 bytes
    // ntdll.dll .text:0x121618, 0x74648 bytes
    // ntdll.dll .text:0x10da20, 0x6fc38 bytes
    //
    _w26(sdk::unknown_ptr) hp_lfh_owner_list_lock_unlock;
    
    // [RtlpHpLfhOwnerLockUnlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfdc38, 0x67960 bytes
    // ntdll.dll .text:0x10d8f4, 0x6fc38 bytes
    // ntdll.dll .text:0x121688, 0x74648 bytes
    // ntdll.dll .text:0x10da94, 0x6fc38 bytes
    //
    _w27(sdk::unknown_ptr) hp_lfh_owner_lock_unlock;
    
    // [RtlpHpLfhSubsegmentWalk]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x19068, 0x67960 bytes
    // ntdll.dll .text:0x242c, 0x6fc38 bytes
    // ntdll.dll .text:0x8b5b4, 0x74648 bytes
    // ntdll.dll .text:0x242c, 0x6fc38 bytes
    //
    _w28(sdk::unknown_ptr) hp_lfh_subsegment_walk;
    
    // [RtlpHpNullGUID]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543a0, 0x67960 bytes
    // ntdll.dll .data:0x16b5c8, 0x6fc38 bytes
    // ntdll.dll .data:0x185158, 0x74648 bytes
    // ntdll.dll .data:0x16c5b8, 0x6fc38 bytes
    //
    _w29(sdk::unknown_ptr) hp_null_guid;
    
    // [RtlpHpOptIntoSegmentHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x74388, 0x67960 bytes
    // ntdll.dll .text:0xf3d48, 0x6fc38 bytes
    // ntdll.dll .text:0xff494, 0x74648 bytes
    // ntdll.dll .text:0xf3cf8, 0x6fc38 bytes
    //
    _w30(sdk::unknown_ptr) hp_opt_into_segment_heap;
    
    // [RtlpHpPerHeapStackTraceCleanup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14af8, 0x67960 bytes
    // ntdll.dll .text:0x107e00, 0x6fc38 bytes
    // ntdll.dll .text:0x115540, 0x74648 bytes
    // ntdll.dll .text:0x107d90, 0x6fc38 bytes
    //
    _w31(sdk::unknown_ptr) hp_per_heap_stack_trace_cleanup;
    
    // [RtlpHpPerHeapStackTraceInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8ec0, 0x67960 bytes
    // ntdll.dll .text:0x107fa0, 0x6fc38 bytes
    // ntdll.dll .text:0x1156e0, 0x74648 bytes
    // ntdll.dll .text:0x107f30, 0x6fc38 bytes
    //
    _w32(sdk::unknown_ptr) hp_per_heap_stack_trace_initialize;
    
    // [RtlpHpReAllocWithExceptionProtection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73434, 0x67960 bytes
    // ntdll.dll .text:0x1c948, 0x6fc38 bytes
    // ntdll.dll .text:0x43898, 0x74648 bytes
    // ntdll.dll .text:0x1c948, 0x6fc38 bytes
    //
    _w33(sdk::unknown_ptr) hp_re_alloc_with_exception_protection;
    
    // [RtlpHpReAllocateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x445f4, 0x67960 bytes
    // ntdll.dll .text:0x1b870, 0x6fc38 bytes
    // ntdll.dll .text:0x41e8c, 0x74648 bytes
    // ntdll.dll .text:0x1b870, 0x6fc38 bytes
    //
    _w34(sdk::unknown_ptr) hp_re_allocate_heap;
    
    // [RtlpHpReallocMove]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4506c, 0x67960 bytes
    // ntdll.dll .text:0x10db80, 0x6fc38 bytes
    // ntdll.dll .text:0x8e06c, 0x74648 bytes
    // ntdll.dll .text:0x10dd20, 0x6fc38 bytes
    //
    _w35(sdk::unknown_ptr) hp_realloc_move;
    
    // [RtlpHpRemoteStackSerializeWriter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeb570, 0x67960 bytes
    // ntdll.dll .text:0xf40f0, 0x6fc38 bytes
    // ntdll.dll .text:0xff930, 0x74648 bytes
    // ntdll.dll .text:0xf40a0, 0x6fc38 bytes
    //
    _w36(sdk::unknown_ptr) hp_remote_stack_serialize_writer;
    
    // [RtlpHpSegGetDescriptorValidateSafe]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfaed4, 0x67960 bytes
    // ntdll.dll .text:0x10e3b8, 0x6fc38 bytes
    // ntdll.dll .text:0x12218c, 0x74648 bytes
    // ntdll.dll .text:0x10e558, 0x6fc38 bytes
    //
    _w37(sdk::function<struct heap::page_range_descriptor_t*(struct ntdll::segment_heap_t*, void*)>*) hp_seg_get_descriptor_validate_safe;
    
    // [RtlpHpSegReAlloc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x44f7c, 0x67960 bytes
    // ntdll.dll .text:0x1ca30, 0x6fc38 bytes
    // ntdll.dll .text:0x43930, 0x74648 bytes
    // ntdll.dll .text:0x1ca30, 0x6fc38 bytes
    //
    _w38(sdk::unknown_ptr) hp_seg_re_alloc;
    
    // [RtlpHpSegReportBusyBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x18df0, 0x67960 bytes
    // ntdll.dll .text:0x21b8, 0x6fc38 bytes
    // ntdll.dll .text:0x8c3bc, 0x74648 bytes
    // ntdll.dll .text:0x21b8, 0x6fc38 bytes
    //
    _w39(sdk::unknown_ptr) hp_seg_report_busy_block;
    
    // [RtlpHpSegReportPageRange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfaff4, 0x67960 bytes
    // ntdll.dll .text:0x10ec94, 0x6fc38 bytes
    // ntdll.dll .text:0x1229ec, 0x74648 bytes
    // ntdll.dll .text:0x10ee34, 0x6fc38 bytes
    //
    _w40(sdk::unknown_ptr) hp_seg_report_page_range;
    
    // [RtlpHpSegReportSegment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8716c, 0x67960 bytes
    // ntdll.dll .text:0x22e4, 0x6fc38 bytes
    // ntdll.dll .text:0x63fc8, 0x74648 bytes
    // ntdll.dll .text:0x22e4, 0x6fc38 bytes
    //
    _w41(sdk::unknown_ptr) hp_seg_report_segment;
    
    // [RtlpHpStackDbAllocRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8f40, 0x67960 bytes
    // ntdll.dll .text:0x1080b0, 0x6fc38 bytes
    // ntdll.dll .text:0x1157f0, 0x74648 bytes
    // ntdll.dll .text:0x108040, 0x6fc38 bytes
    //
    _w42(sdk::unknown_ptr) hp_stack_db_alloc_routine;
    
    // [RtlpHpStackDbFreeRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8f50, 0x67960 bytes
    // ntdll.dll .text:0x1080e0, 0x6fc38 bytes
    // ntdll.dll .text:0x115820, 0x74648 bytes
    // ntdll.dll .text:0x108070, 0x6fc38 bytes
    //
    _w43(sdk::unknown_ptr) hp_stack_db_free_routine;
    
    // [RtlpHpStackTraceAddStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf9004, 0x67960 bytes
    // ntdll.dll .text:0x108210, 0x6fc38 bytes
    // ntdll.dll .text:0x115950, 0x74648 bytes
    // ntdll.dll .text:0x1081a0, 0x6fc38 bytes
    //
    _w44(sdk::unknown_ptr) hp_stack_trace_add_stack;
    
    // [RtlpHpStackTraceAllocAdd]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf90d4, 0x67960 bytes
    // ntdll.dll .text:0x108338, 0x6fc38 bytes
    // ntdll.dll .text:0x115a64, 0x74648 bytes
    // ntdll.dll .text:0x1082c8, 0x6fc38 bytes
    //
    _w45(sdk::unknown_ptr) hp_stack_trace_alloc_add;
    
    // [RtlpHpStackTraceAllocRemove]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf939c, 0x67960 bytes
    // ntdll.dll .text:0x1086ec, 0x6fc38 bytes
    // ntdll.dll .text:0x115e14, 0x74648 bytes
    // ntdll.dll .text:0x10867c, 0x6fc38 bytes
    //
    _w46(sdk::unknown_ptr) hp_stack_trace_alloc_remove;
    
    // [RtlpHpStackTraceHeapSerialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf9590, 0x67960 bytes
    // ntdll.dll .text:0x108c50, 0x6fc38 bytes
    // ntdll.dll .text:0x116390, 0x74648 bytes
    // ntdll.dll .text:0x108be0, 0x6fc38 bytes
    //
    _w47(sdk::unknown_ptr) hp_stack_trace_heap_serialize;
    
    // [RtlpHpStackTraceRemoveStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf9714, 0x67960 bytes
    // ntdll.dll .text:0x108e48, 0x6fc38 bytes
    // ntdll.dll .text:0x1165a0, 0x74648 bytes
    // ntdll.dll .text:0x108dd8, 0x6fc38 bytes
    //
    _w48(sdk::unknown_ptr) hp_stack_trace_remove_stack;
    
    // [RtlpHpStackTraceSerialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf977c, 0x67960 bytes
    // ntdll.dll .text:0x108ec4, 0x6fc38 bytes
    // ntdll.dll .text:0x11661c, 0x74648 bytes
    // ntdll.dll .text:0x108e54, 0x6fc38 bytes
    //
    _w49(sdk::unknown_ptr) hp_stack_trace_serialize;
    
    // [RtlpHpStackTraceSerializeRemote]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf9820, 0x67960 bytes
    // ntdll.dll .text:0x108fb4, 0x6fc38 bytes
    // ntdll.dll .text:0x116718, 0x74648 bytes
    // ntdll.dll .text:0x108f44, 0x6fc38 bytes
    //
    _w50(sdk::unknown_ptr) hp_stack_trace_serialize_remote;
    
    // [RtlpHpTagAllocateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86740, 0x67960 bytes
    // ntdll.dll .text:0x71d4, 0x6fc38 bytes
    // ntdll.dll .text:0x65e20, 0x74648 bytes
    // ntdll.dll .text:0x71d4, 0x6fc38 bytes
    //
    _w51(sdk::unknown_ptr) hp_tag_allocate_heap;
    
    // [RtlpHpTagContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151920, 0x67960 bytes
    // ntdll.dll .data:0x168b00, 0x6fc38 bytes
    // ntdll.dll .data:0x182da0, 0x74648 bytes
    // ntdll.dll .data:0x169b00, 0x6fc38 bytes
    //
    _w52(sdk::unknown_ptr) hp_tag_context;
    
    // [RtlpHpTagContextAllocateTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85488, 0x67960 bytes
    // ntdll.dll .text:0x4d34, 0x6fc38 bytes
    // ntdll.dll .text:0x65ba4, 0x74648 bytes
    // ntdll.dll .text:0x4d34, 0x6fc38 bytes
    //
    _w53(sdk::unknown_ptr) hp_tag_context_allocate_tag;
    
    // [RtlpHpTagContextFindMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85660, 0x67960 bytes
    // ntdll.dll .text:0x4f28, 0x6fc38 bytes
    // ntdll.dll .text:0x67420, 0x74648 bytes
    // ntdll.dll .text:0x4f28, 0x6fc38 bytes
    //
    _w54(sdk::unknown_ptr) hp_tag_context_find_mapping;
    
    // [RtlpHpTagContextGetTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf859c, 0x67960 bytes
    // ntdll.dll .text:0x9b6f4, 0x6fc38 bytes
    // ntdll.dll .text:0x9e4a0, 0x74648 bytes
    // ntdll.dll .text:0x9b6d4, 0x6fc38 bytes
    //
    _w55(sdk::unknown_ptr) hp_tag_context_get_tag;
    
    // [RtlpHpTagContextUpdate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x734ec, 0x67960 bytes
    // ntdll.dll .text:0x9b880, 0x6fc38 bytes
    // ntdll.dll .text:0x45ddc, 0x74648 bytes
    // ntdll.dll .text:0x9b860, 0x6fc38 bytes
    //
    _w56(sdk::unknown_ptr) hp_tag_context_update;
    
    // [RtlpHpTagInitVar]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543b0, 0x67960 bytes
    // ntdll.dll .data:0x16b5d8, 0x6fc38 bytes
    // ntdll.dll .data:0x185168, 0x74648 bytes
    // ntdll.dll .data:0x16c5c8, 0x6fc38 bytes
    //
    _w57(sdk::unknown_ptr) hp_tag_init_var;
    
    // [RtlpHpTagMappingComparison]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x780a8, 0x67960 bytes
    // ntdll.dll .text:0x72ff8, 0x6fc38 bytes
    // ntdll.dll .text:0x78d50, 0x74648 bytes
    // ntdll.dll .text:0x73198, 0x6fc38 bytes
    //
    _w58(sdk::unknown_ptr) hp_tag_mapping_comparison;
    
    // [RtlpHpTagQueryHeapsRemote]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf872c, 0x67960 bytes
    // ntdll.dll .text:0x10ab10, 0x6fc38 bytes
    // ntdll.dll .text:0x118454, 0x74648 bytes
    // ntdll.dll .text:0x10aaa0, 0x6fc38 bytes
    //
    _w59(sdk::unknown_ptr) hp_tag_query_heaps_remote;
    
    // [RtlpHpTagQueryTags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81930, 0x67960 bytes
    // ntdll.dll .text:0x73d74, 0x6fc38 bytes
    // ntdll.dll .text:0x8b3c0, 0x74648 bytes
    // ntdll.dll .text:0x73f14, 0x6fc38 bytes
    //
    _w60(sdk::unknown_ptr) hp_tag_query_tags;
    
    // [RtlpHpTagReAllocateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73484, 0x67960 bytes
    // ntdll.dll .text:0x9b8dc, 0x6fc38 bytes
    // ntdll.dll .text:0x45d74, 0x74648 bytes
    // ntdll.dll .text:0x9b8bc, 0x6fc38 bytes
    //
    _w61(sdk::unknown_ptr) hp_tag_re_allocate_heap;
    
    // [RtlpHpTagRunOnceInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86b70, 0x67960 bytes
    // ntdll.dll .text:0x5230, 0x6fc38 bytes
    // ntdll.dll .text:0x65d50, 0x74648 bytes
    // ntdll.dll .text:0x5230, 0x6fc38 bytes
    //
    _w62(sdk::unknown_ptr) hp_tag_run_once_init;
    
    // [RtlpHpTaggableHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x867b4, 0x67960 bytes
    // ntdll.dll .text:0x7248, 0x6fc38 bytes
    // ntdll.dll .text:0x65e94, 0x74648 bytes
    // ntdll.dll .text:0x7248, 0x6fc38 bytes
    //
    _w63(sdk::unknown_ptr) hp_taggable_heap;
    
    // [RtlpHpVsSubsegmentWalk]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x18eb0, 0x67960 bytes
    // ntdll.dll .text:0x206c, 0x6fc38 bytes
    // ntdll.dll .text:0x8c1f4, 0x74648 bytes
    // ntdll.dll .text:0x206c, 0x6fc38 bytes
    //
    _w64(sdk::unknown_ptr) hp_vs_subsegment_walk;
    
    // [RtlpInheritAcl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x58094, 0x67960 bytes
    // ntdll.dll .text:0x2bff4, 0x6fc38 bytes
    // ntdll.dll .text:0x1812c, 0x74648 bytes
    // ntdll.dll .text:0x2bff4, 0x6fc38 bytes
    //
    _w65(sdk::unknown_ptr) inherit_acl;
    
    // [RtlpInitCurrentDir]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ac48, 0x67960 bytes
    // ntdll.dll .text:0x61144, 0x6fc38 bytes
    // ntdll.dll .text:0x7b874, 0x74648 bytes
    // ntdll.dll .text:0x61264, 0x6fc38 bytes
    //
    _w66(sdk::unknown_ptr) init_current_dir;
    
    // [RtlpInitEnvironmentBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x676e8, 0x67960 bytes
    // ntdll.dll .text:0x47d68, 0x6fc38 bytes
    // ntdll.dll .text:0x5872c, 0x74648 bytes
    // ntdll.dll .text:0x47d68, 0x6fc38 bytes
    //
    _w67(sdk::unknown_ptr) init_environment_block;
    
    // [RtlpInitMuiCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x23340, 0x67960 bytes
    // ntdll.dll .text:0x8bec, 0x6fc38 bytes
    // ntdll.dll .text:0x11c54, 0x74648 bytes
    // ntdll.dll .text:0x8bec, 0x6fc38 bytes
    //
    _w68(sdk::unknown_ptr) init_mui_critical_section;
    
    // [RtlpInitParameterBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80f54, 0x67960 bytes
    // ntdll.dll .text:0x7bf78, 0x6fc38 bytes
    // ntdll.dll .text:0x7ff10, 0x74648 bytes
    // ntdll.dll .text:0x7c118, 0x6fc38 bytes
    //
    _w69(sdk::unknown_ptr) init_parameter_block;
    
    // [RtlpInitRandomExVector]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x960a0, 0x67960 bytes
    // ntdll.dll .text:0x101f70, 0x6fc38 bytes
    // ntdll.dll .text:0xaeda0, 0x74648 bytes
    // ntdll.dll .text:0x101f00, 0x6fc38 bytes
    //
    _w70(sdk::unknown_ptr) init_random_ex_vector;
    
    // [RtlpInitUnicodeStringUsingBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x25bc4, 0x67960 bytes
    // ntdll.dll .text:0x2d5a8, 0x6fc38 bytes
    // ntdll.dll .text:0x16140, 0x74648 bytes
    // ntdll.dll .text:0x2d5a8, 0x6fc38 bytes
    //
    _w71(sdk::unknown_ptr) init_unicode_string_using_buffer;
    
    // [RtlpInitializeAssemblyStorageMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x19448, 0x67960 bytes
    // ntdll.dll .text:0x72934, 0x6fc38 bytes
    // ntdll.dll .text:0x75b24, 0x74648 bytes
    // ntdll.dll .text:0x72ad4, 0x6fc38 bytes
    //
    _w72(sdk::unknown_ptr) initialize_assembly_storage_map;
    
    // [RtlpInitializeLangRegistryInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8190, 0x67960 bytes
    // ntdll.dll .text:0x6aa50, 0x6fc38 bytes
    // ntdll.dll .text:0x8a3e0, 0x74648 bytes
    // ntdll.dll .text:0x6ab70, 0x6fc38 bytes
    //
    _w73(sdk::unknown_ptr) initialize_lang_registry_info;
    
    // [RtlpInitializeLeakDetection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee588, 0x67960 bytes
    // ntdll.dll .text:0xf7898, 0x6fc38 bytes
    // ntdll.dll .text:0x103474, 0x74648 bytes
    // ntdll.dll .text:0xf7848, 0x6fc38 bytes
    //
    _w74(sdk::unknown_ptr) initialize_leak_detection;
    
    // [RtlpInitializeLfhBitmapData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89e9c, 0x67960 bytes
    // ntdll.dll .text:0x10dd0c, 0x6fc38 bytes
    // ntdll.dll .text:0x121f6c, 0x74648 bytes
    // ntdll.dll .text:0x10deac, 0x6fc38 bytes
    //
    _w75(sdk::unknown_ptr) initialize_lfh_bitmap_data;
    
    // [RtlpInitializeLfhRandomDataArray]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14ab0, 0x67960 bytes
    // ntdll.dll .text:0xc498, 0x6fc38 bytes
    // ntdll.dll .text:0x46894, 0x74648 bytes
    // ntdll.dll .text:0xc498, 0x6fc38 bytes
    //
    _w76(sdk::unknown_ptr) initialize_lfh_random_data_array;
    
    // [RtlpInitializeLowFragHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x135bc, 0x67960 bytes
    // ntdll.dll .text:0xb034, 0x6fc38 bytes
    // ntdll.dll .text:0x4a698, 0x74648 bytes
    // ntdll.dll .text:0xb034, 0x6fc38 bytes
    //
    _w77(sdk::unknown_ptr) initialize_low_frag_heap;
    
    // [RtlpInitializeLowFragHeapManager]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x741ec, 0x67960 bytes
    // ntdll.dll .text:0x10b20c, 0x6fc38 bytes
    // ntdll.dll .text:0xaf030, 0x74648 bytes
    // ntdll.dll .text:0x10b19c, 0x6fc38 bytes
    //
    _w78(sdk::unknown_ptr) initialize_low_frag_heap_manager;
    
    // [RtlpInitializeMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee62c, 0x67960 bytes
    // ntdll.dll .text:0xf7944, 0x6fc38 bytes
    // ntdll.dll .text:0x103518, 0x74648 bytes
    // ntdll.dll .text:0xf78f4, 0x6fc38 bytes
    //
    _w79(sdk::unknown_ptr) initialize_map;
    
    // [RtlpInitializeSegmentInfoForBucket]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7833c, 0x67960 bytes
    // ntdll.dll .text:0x71238, 0x6fc38 bytes
    // ntdll.dll .text:0x73168, 0x74648 bytes
    // ntdll.dll .text:0x713d8, 0x6fc38 bytes
    //
    _w80(sdk::unknown_ptr) initialize_segment_info_for_bucket;
    
    // [RtlpInitializeStackTraceLog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf9a08, 0x67960 bytes
    // ntdll.dll .text:0x10919c, 0x6fc38 bytes
    // ntdll.dll .text:0x116908, 0x74648 bytes
    // ntdll.dll .text:0x10912c, 0x6fc38 bytes
    //
    _w81(sdk::unknown_ptr) initialize_stack_trace_log;
    
    // [RtlpInitializeStaticCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86cd4, 0x67960 bytes
    // ntdll.dll .text:0x82df0, 0x6fc38 bytes
    // ntdll.dll .text:0x86530, 0x74648 bytes
    // ntdll.dll .text:0x82f90, 0x6fc38 bytes
    //
    _w82(sdk::unknown_ptr) initialize_static_critical_section;
    
    // [RtlpInitializeUCRIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87a78, 0x67960 bytes
    // ntdll.dll .text:0x898d4, 0x6fc38 bytes
    // ntdll.dll .text:0x8bd1c, 0x74648 bytes
    // ntdll.dll .text:0x89a74, 0x6fc38 bytes
    //
    _w83(sdk::unknown_ptr) initialize_ucr_index;
    
    // [RtlpInitializeUserList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x214f4, 0x67960 bytes
    // ntdll.dll .text:0x6a6cc, 0x6fc38 bytes
    // ntdll.dll .text:0x70310, 0x74648 bytes
    // ntdll.dll .text:0x6a7ec, 0x6fc38 bytes
    //
    _w84(sdk::unknown_ptr) initialize_user_list;
    
    // [RtlpInitializeWnf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x159d0, 0x67960 bytes
    // ntdll.dll .text:0x7b810, 0x6fc38 bytes
    // ntdll.dll .text:0x502f0, 0x74648 bytes
    // ntdll.dll .text:0x7b9b0, 0x6fc38 bytes
    //
    _w85(sdk::unknown_ptr) initialize_wnf;
    
    // [RtlpInsertAssemblyStorageMapEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1d5a8, 0x67960 bytes
    // ntdll.dll .text:0x723f4, 0x6fc38 bytes
    // ntdll.dll .text:0x755e4, 0x74648 bytes
    // ntdll.dll .text:0x72594, 0x6fc38 bytes
    //
    _w86(sdk::unknown_ptr) insert_assembly_storage_map_entry;
    
    // [RtlpInvalidatePathCache]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88010, 0x67960 bytes
    // ntdll.dll .text:0x7e9e0, 0x6fc38 bytes
    // ntdll.dll .text:0x78980, 0x74648 bytes
    // ntdll.dll .text:0x7eb80, 0x6fc38 bytes
    //
    _w87(sdk::unknown_ptr) invalidate_path_cache;
    
    // [RtlpIsAttributeAceInSacl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe366c, 0x67960 bytes
    // ntdll.dll .text:0xea1e0, 0x6fc38 bytes
    // ntdll.dll .text:0xf51bc, 0x74648 bytes
    // ntdll.dll .text:0xea150, 0x6fc38 bytes
    //
    _w88(sdk::unknown_ptr) is_attribute_ace_in_sacl;
    
    // [RtlpIsCustomLocale]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf033c, 0x67960 bytes
    // ntdll.dll .text:0x865a0, 0x6fc38 bytes
    // ntdll.dll .text:0x109d44, 0x74648 bytes
    // ntdll.dll .text:0x86740, 0x6fc38 bytes
    //
    _w89(sdk::unknown_ptr) is_custom_locale;
    
    // [RtlpIsDosDeviceName_Ustr]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2bea0, 0x67960 bytes
    // ntdll.dll .text:0x39fb0, 0x6fc38 bytes
    // ntdll.dll .text:0x1ce00, 0x74648 bytes
    // ntdll.dll .text:0x39fb0, 0x6fc38 bytes
    //
    _w90(sdk::unknown_ptr) is_dos_device_name_ustr;
    
    // [RtlpIsLFHZoneAllocation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1200, 0x67960 bytes
    // ntdll.dll .text:0x10b2e8, 0x6fc38 bytes
    // ntdll.dll .text:0xaf10c, 0x74648 bytes
    // ntdll.dll .text:0x10b278, 0x6fc38 bytes
    //
    _w91(sdk::unknown_ptr) is_lfh_zone_allocation;
    
    // [RtlpIsQualifiedLanguage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1a7e0, 0x67960 bytes
    // ntdll.dll .text:0x52cf0, 0x6fc38 bytes
    // ntdll.dll .text:0x4090, 0x74648 bytes
    // ntdll.dll .text:0x52cf0, 0x6fc38 bytes
    //
    _w92(sdk::unknown_ptr) is_qualified_language;
    
    // [RtlpIsSubSegmentReuseThresholdExceeded]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1771c, 0x67960 bytes
    // ntdll.dll .text:0x143b0, 0x6fc38 bytes
    // ntdll.dll .text:0x63538, 0x74648 bytes
    // ntdll.dll .text:0x143b0, 0x6fc38 bytes
    //
    _w93(sdk::unknown_ptr) is_sub_segment_reuse_threshold_exceeded;
    
    // [RtlpIsSubSegmentReuseable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3c180, 0x67960 bytes
    // ntdll.dll .text:0x14384, 0x6fc38 bytes
    // ntdll.dll .text:0x6350c, 0x74648 bytes
    // ntdll.dll .text:0x14384, 0x6fc38 bytes
    //
    _w94(sdk::unknown_ptr) is_sub_segment_reuseable;
    
    // [RtlpLangNameInMultiSzString_Size]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x21dd0, 0x67960 bytes
    // ntdll.dll .text:0x2c5e4, 0x6fc38 bytes
    // ntdll.dll .text:0x10438, 0x74648 bytes
    // ntdll.dll .text:0x2c5e4, 0x6fc38 bytes
    //
    _w95(sdk::unknown_ptr) lang_name_in_multi_sz_string_size;
    
    // [RtlpLargestLfhBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150670, 0x67960 bytes
    // ntdll.dll .data:0x1677a0, 0x6fc38 bytes
    // ntdll.dll .data:0x1817f8, 0x74648 bytes
    // ntdll.dll .data:0x1687a0, 0x6fc38 bytes
    //
    _w96(sdk::unknown_ptr) largest_lfh_block;
    
    // [RtlpLDCrtPage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553f8, 0x67960 bytes
    // ntdll.dll .data:0x16bb78, 0x6fc38 bytes
    // ntdll.dll .data:0x185910, 0x74648 bytes
    // ntdll.dll .data:0x16cb78, 0x6fc38 bytes
    //
    _w97(sdk::unknown_ptr) ld_crt_page;
    
    // [RtlpLDNumBlocks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553c0, 0x67960 bytes
    // ntdll.dll .data:0x16bb40, 0x6fc38 bytes
    // ntdll.dll .data:0x1858d8, 0x74648 bytes
    // ntdll.dll .data:0x16cb40, 0x6fc38 bytes
    //
    _w98(sdk::unknown_ptr) ld_num_blocks;
    
    // [RtlpLDPreviousPage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553f0, 0x67960 bytes
    // ntdll.dll .data:0x16bb70, 0x6fc38 bytes
    // ntdll.dll .data:0x185908, 0x74648 bytes
    // ntdll.dll .data:0x16cb70, 0x6fc38 bytes
    //
    _w99(sdk::unknown_ptr) ld_previous_page;
    
    // [RtlpLeakCallbackRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee670, 0x67960 bytes
    // ntdll.dll .text:0xf7990, 0x6fc38 bytes
    // ntdll.dll .text:0x103560, 0x74648 bytes
    // ntdll.dll .text:0xf7940, 0x6fc38 bytes
    //
    _x00(sdk::unknown_ptr) leak_callback_routine;
    
    // [RtlpLeakHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151a88, 0x67960 bytes
    // ntdll.dll .data:0x168c90, 0x6fc38 bytes
    // ntdll.dll .data:0x182f30, 0x74648 bytes
    // ntdll.dll .data:0x169c98, 0x6fc38 bytes
    //
    _x01(sdk::unknown_ptr) leak_heap;
    
    // [RtlpLeakHeapAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553d0, 0x67960 bytes
    // ntdll.dll .data:0x16bb50, 0x6fc38 bytes
    // ntdll.dll .data:0x1858e8, 0x74648 bytes
    // ntdll.dll .data:0x16cb50, 0x6fc38 bytes
    //
    _x02(sdk::unknown_ptr) leak_heap_address;
    
    // [RtlpLeakList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151ab0, 0x67960 bytes
    // ntdll.dll .data:0x168cb0, 0x6fc38 bytes
    // ntdll.dll .data:0x182f50, 0x74648 bytes
    // ntdll.dll .data:0x169cc0, 0x6fc38 bytes
    //
    _x03(sdk::unknown_ptr) leak_list;
    
    // [RtlpLeaksCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553d8, 0x67960 bytes
    // ntdll.dll .data:0x16bb58, 0x6fc38 bytes
    // ntdll.dll .data:0x1858f0, 0x74648 bytes
    // ntdll.dll .data:0x16cb58, 0x6fc38 bytes
    //
    _x04(sdk::unknown_ptr) leaks_count;
    
    // [RtlpLfhFindClearBitAndSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x173ec, 0x67960 bytes
    // ntdll.dll .text:0x3b3c, 0x6fc38 bytes
    // ntdll.dll .text:0x9e62c, 0x74648 bytes
    // ntdll.dll .text:0x3b3c, 0x6fc38 bytes
    //
    _x05(sdk::unknown_ptr) lfh_find_clear_bit_and_set;
    
    // [RtlpLFHKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154060, 0x67960 bytes
    // ntdll.dll .data:0x16b740, 0x6fc38 bytes
    // ntdll.dll .data:0x185288, 0x74648 bytes
    // ntdll.dll .data:0x16c740, 0x6fc38 bytes
    //
    _x06(sdk::unknown_ptr) lfh_key;
    
    // [RtlpLoadMachineUIByPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7950, 0x67960 bytes
    // ntdll.dll .text:0x6a150, 0x6fc38 bytes
    // ntdll.dll .text:0x87840, 0x74648 bytes
    // ntdll.dll .text:0x6a270, 0x6fc38 bytes
    //
    _x07(sdk::unknown_ptr) load_machine_ui_by_policy;
    
    // [RtlpLoadNlsData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8098c, 0x67960 bytes
    // ntdll.dll .text:0x7b6b4, 0x6fc38 bytes
    // ntdll.dll .text:0x7f778, 0x74648 bytes
    // ntdll.dll .text:0x7b854, 0x6fc38 bytes
    //
    _x08(sdk::unknown_ptr) load_nls_data;
    
    // [RtlpLoadUserUIByPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9210, 0x67960 bytes
    // ntdll.dll .text:0x6b130, 0x6fc38 bytes
    // ntdll.dll .text:0xa8b0, 0x74648 bytes
    // ntdll.dll .text:0x6b250, 0x6fc38 bytes
    //
    _x09(sdk::unknown_ptr) load_user_ui_by_policy;
    
    // [RtlpLocalInfoAllocFromCache]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1707c, 0x67960 bytes
    // ntdll.dll .text:0x3710, 0x6fc38 bytes
    // ntdll.dll .text:0x118a20, 0x74648 bytes
    // ntdll.dll .text:0x3710, 0x6fc38 bytes
    //
    _x10(sdk::unknown_ptr) local_info_alloc_from_cache;
    
    // [RtlpLocateActivationContextSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2cad0, 0x67960 bytes
    // ntdll.dll .text:0x3b21c, 0x6fc38 bytes
    // ntdll.dll .text:0x1de20, 0x74648 bytes
    // ntdll.dll .text:0x3b21c, 0x6fc38 bytes
    //
    _x11(sdk::unknown_ptr) locate_activation_context_section;
    
    // [RtlpLocateActivationContextSectionForQuery]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ca50, 0x67960 bytes
    // ntdll.dll .text:0x778a8, 0x6fc38 bytes
    // ntdll.dll .text:0x7abac, 0x74648 bytes
    // ntdll.dll .text:0x77a48, 0x6fc38 bytes
    //
    _x12(sdk::unknown_ptr) locate_activation_context_section_for_query;
    
    // [RtlpLocateModuleSectionInLockedSectionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1f48, 0x67960 bytes
    // ntdll.dll .text:0x80250, 0x6fc38 bytes
    // ntdll.dll .text:0x521c0, 0x74648 bytes
    // ntdll.dll .text:0x803f0, 0x6fc38 bytes
    //
    _x13(sdk::unknown_ptr) locate_module_section_in_locked_section_list;
    
    // [RtlpLocateXStateChunk]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8860c, 0x67960 bytes
    // ntdll.dll .text:0xf5c68, 0x6fc38 bytes
    // ntdll.dll .text:0xae8b0, 0x74648 bytes
    // ntdll.dll .text:0xf5c18, 0x6fc38 bytes
    //
    _x14(sdk::unknown_ptr) locate_x_state_chunk;
    
    // [RtlpLockStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x23ac, 0x67960 bytes
    // ntdll.dll .text:0x82928, 0x6fc38 bytes
    // ntdll.dll .text:0x870f8, 0x74648 bytes
    // ntdll.dll .text:0x82ac8, 0x6fc38 bytes
    //
    _x15(sdk::unknown_ptr) lock_stack;
    
    // [RtlpLockUlockAllHeapsCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeb6b0, 0x67960 bytes
    // ntdll.dll .text:0x64180, 0x6fc38 bytes
    // ntdll.dll .text:0x8b590, 0x74648 bytes
    // ntdll.dll .text:0x642a0, 0x6fc38 bytes
    //
    _x16(sdk::unknown_ptr) lock_ulock_all_heaps_callback;
    
    // [RtlpLockedMemoryBlockLookasideCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ff8, 0x67960 bytes
    // ntdll.dll .data:0x16b1bc, 0x6fc38 bytes
    // ntdll.dll .data:0x184c6c, 0x74648 bytes
    // ntdll.dll .data:0x16c1bc, 0x6fc38 bytes
    //
    _x17(sdk::unknown_ptr) locked_memory_block_lookaside_count;
    
    // [RtlpLockedMemoryZoneCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ffc, 0x67960 bytes
    // ntdll.dll .data:0x16b1c0, 0x6fc38 bytes
    // ntdll.dll .data:0x184c70, 0x74648 bytes
    // ntdll.dll .data:0x16c1c0, 0x6fc38 bytes
    //
    _x18(sdk::unknown_ptr) locked_memory_zone_count;
    
    // [RtlpLockedSectionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d620, 0x67960 bytes
    // ntdll.dll .data:0x164580, 0x6fc38 bytes
    // ntdll.dll .data:0x17e310, 0x74648 bytes
    // ntdll.dll .data:0x165580, 0x6fc38 bytes
    //
    _x19(sdk::unknown_ptr) locked_section_list;
    
    // [RtlpLockedSectionListLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154388, 0x67960 bytes
    // ntdll.dll .data:0x16b540, 0x6fc38 bytes
    // ntdll.dll .data:0x1850d8, 0x74648 bytes
    // ntdll.dll .data:0x16c530, 0x6fc38 bytes
    //
    _x20(sdk::unknown_ptr) locked_section_list_lock;
    
    // [RtlpLogHeapAffinityManagerEnable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf9e84, 0x67960 bytes
    // ntdll.dll .text:0x10962c, 0x6fc38 bytes
    // ntdll.dll .text:0x116d94, 0x74648 bytes
    // ntdll.dll .text:0x1095bc, 0x6fc38 bytes
    //
    _x21(sdk::unknown_ptr) log_heap_affinity_manager_enable;
    
    // [RtlpLogHeapAffinitySlotAssign]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf9f04, 0x67960 bytes
    // ntdll.dll .text:0x1096b8, 0x6fc38 bytes
    // ntdll.dll .text:0x116e20, 0x74648 bytes
    // ntdll.dll .text:0x109648, 0x6fc38 bytes
    //
    _x22(sdk::unknown_ptr) log_heap_affinity_slot_assign;
    
    // [RtlpLogHeapReuseThresholdActivate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfa33c, 0x67960 bytes
    // ntdll.dll .text:0x109cc4, 0x6fc38 bytes
    // ntdll.dll .text:0x11742c, 0x74648 bytes
    // ntdll.dll .text:0x109c54, 0x6fc38 bytes
    //
    _x23(sdk::unknown_ptr) log_heap_reuse_threshold_activate;
    
    // [RtlpLogHeapSubSegmentActivate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfa3bc, 0x67960 bytes
    // ntdll.dll .text:0x109d5c, 0x6fc38 bytes
    // ntdll.dll .text:0x1174c4, 0x74648 bytes
    // ntdll.dll .text:0x109cec, 0x6fc38 bytes
    //
    _x24(sdk::unknown_ptr) log_heap_sub_segment_activate;
    
    // [RtlpLogHeapSubSegmentAlloc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfa440, 0x67960 bytes
    // ntdll.dll .text:0x109df0, 0x6fc38 bytes
    // ntdll.dll .text:0x117558, 0x74648 bytes
    // ntdll.dll .text:0x109d80, 0x6fc38 bytes
    //
    _x25(sdk::unknown_ptr) log_heap_sub_segment_alloc;
    
    // [RtlpLogHeapSubSegmentAllocCached]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfa4cc, 0x67960 bytes
    // ntdll.dll .text:0x109ea0, 0x6fc38 bytes
    // ntdll.dll .text:0x117608, 0x74648 bytes
    // ntdll.dll .text:0x109e30, 0x6fc38 bytes
    //
    _x26(sdk::unknown_ptr) log_heap_sub_segment_alloc_cached;
    
    // [RtlpLogHeapSubSegmentFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfa558, 0x67960 bytes
    // ntdll.dll .text:0x109f50, 0x6fc38 bytes
    // ntdll.dll .text:0x1176b8, 0x74648 bytes
    // ntdll.dll .text:0x109ee0, 0x6fc38 bytes
    //
    _x27(sdk::unknown_ptr) log_heap_sub_segment_free;
    
    // [RtlpLogHeapSubSegmentFreeCached]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfa5e4, 0x67960 bytes
    // ntdll.dll .text:0x10a000, 0x6fc38 bytes
    // ntdll.dll .text:0x117768, 0x74648 bytes
    // ntdll.dll .text:0x109f90, 0x6fc38 bytes
    //
    _x28(sdk::unknown_ptr) log_heap_sub_segment_free_cached;
    
    // [RtlpLogHeapSubSegmentInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfa670, 0x67960 bytes
    // ntdll.dll .text:0x10a0b0, 0x6fc38 bytes
    // ntdll.dll .text:0x117818, 0x74648 bytes
    // ntdll.dll .text:0x10a040, 0x6fc38 bytes
    //
    _x29(sdk::unknown_ptr) log_heap_sub_segment_initialize;
    
    // [RtlpLookupCurDirSetting]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x76df4, 0x67960 bytes
    // ntdll.dll .text:0x6da70, 0x6fc38 bytes
    // ntdll.dll .text:0x6ab68, 0x74648 bytes
    // ntdll.dll .text:0x6db90, 0x6fc38 bytes
    //
    _x30(sdk::unknown_ptr) lookup_cur_dir_setting;
    
    // [RtlpLookupDynamicFunctionEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x721d8, 0x67960 bytes
    // ntdll.dll .text:0x7696c, 0x6fc38 bytes
    // ntdll.dll .text:0x6d7a8, 0x74648 bytes
    // ntdll.dll .text:0x76b0c, 0x6fc38 bytes
    //
    _x31(sdk::unknown_ptr) lookup_dynamic_function_entry;
    
    // [RtlpLookupSafeCurDirList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb7a0, 0x67960 bytes
    // ntdll.dll .text:0xdedbc, 0x6fc38 bytes
    // ntdll.dll .text:0xe9750, 0x74648 bytes
    // ntdll.dll .text:0xded2c, 0x6fc38 bytes
    //
    _x32(sdk::unknown_ptr) lookup_safe_cur_dir_list;
    
    // [RtlpLowFragHeapAllocFromContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x38c40, 0x67960 bytes
    // ntdll.dll .text:0x17650, 0x6fc38 bytes
    // ntdll.dll .text:0x3d680, 0x74648 bytes
    // ntdll.dll .text:0x17650, 0x6fc38 bytes
    //
    _x33(sdk::unknown_ptr) low_frag_heap_alloc_from_context;
    
    // [RtlpLowFragHeapAllocateFromZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x76ecc, 0x67960 bytes
    // ntdll.dll .text:0x6f134, 0x6fc38 bytes
    // ntdll.dll .text:0x6fa8c, 0x74648 bytes
    // ntdll.dll .text:0x6f2d4, 0x6fc38 bytes
    //
    _x34(sdk::unknown_ptr) low_frag_heap_allocate_from_zone;
    
    // [RtlpLowFragHeapFlushCaches]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x16ba4, 0x67960 bytes
    // ntdll.dll .text:0x2ff4, 0x6fc38 bytes
    // ntdll.dll .text:0x119224, 0x74648 bytes
    // ntdll.dll .text:0x2ff4, 0x6fc38 bytes
    //
    _x35(sdk::unknown_ptr) low_frag_heap_flush_caches;
    
    // [RtlpLowFragHeapGlobalFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154048, 0x67960 bytes
    // ntdll.dll .data:0x16b204, 0x6fc38 bytes
    // ntdll.dll .data:0x184ce8, 0x74648 bytes
    // ntdll.dll .data:0x16c204, 0x6fc38 bytes
    //
    _x36(sdk::unknown_ptr) low_frag_heap_global_flags;
    
    // [RtlpMatchUILanguage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf042c, 0x67960 bytes
    // ntdll.dll .text:0xfcd6c, 0x6fc38 bytes
    // ntdll.dll .text:0x109e38, 0x74648 bytes
    // ntdll.dll .text:0xfcd1c, 0x6fc38 bytes
    //
    _x37(sdk::unknown_ptr) match_ui_language;
    
    // [RtlpMatchUserLanguage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf050c, 0x67960 bytes
    // ntdll.dll .text:0xfce34, 0x6fc38 bytes
    // ntdll.dll .text:0x109f00, 0x74648 bytes
    // ntdll.dll .text:0xfcde4, 0x6fc38 bytes
    //
    _x38(sdk::unknown_ptr) match_user_language;
    
    // [RtlpMaxNumberOfProtectedHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150de0, 0x67960 bytes
    // ntdll.dll .data:0x167798, 0x6fc38 bytes
    // ntdll.dll .data:0x1817f4, 0x74648 bytes
    // ntdll.dll .data:0x168798, 0x6fc38 bytes
    //
    _x39(sdk::unknown_ptr) max_number_of_protected_heaps;
    
    // [RtlpMemoryBlockLookasideCriticalRoutines]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109c10, 0x67960 bytes
    // ntdll.dll .rdata:0x11ce10, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131f80, 0x74648 bytes
    // ntdll.dll .rdata:0x11ce10, 0x6fc38 bytes
    //
    _x40(sdk::unknown_ptr) memory_block_lookaside_critical_routines;
    
    // [RtlpMemoryBlockLookasideLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154360, 0x67960 bytes
    // ntdll.dll .data:0x16b518, 0x6fc38 bytes
    // ntdll.dll .data:0x1850b8, 0x74648 bytes
    // ntdll.dll .data:0x16c4f8, 0x6fc38 bytes
    //
    _x41(sdk::unknown_ptr) memory_block_lookaside_lock;
    
    // [RtlpMemoryZoneCriticalRoutines]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10a108, 0x67960 bytes
    // ntdll.dll .rdata:0x11d000, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132200, 0x74648 bytes
    // ntdll.dll .rdata:0x11d000, 0x6fc38 bytes
    //
    _x42(sdk::unknown_ptr) memory_zone_critical_routines;
    
    // [RtlpMemoryZoneLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154368, 0x67960 bytes
    // ntdll.dll .data:0x16b520, 0x6fc38 bytes
    // ntdll.dll .data:0x1850c0, 0x74648 bytes
    // ntdll.dll .data:0x16c500, 0x6fc38 bytes
    //
    _x43(sdk::unknown_ptr) memory_zone_lock;
    
    // [RtlpMergeSecurityAttributeInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87da0, 0x67960 bytes
    // ntdll.dll .text:0x830c0, 0x6fc38 bytes
    // ntdll.dll .text:0x2880, 0x74648 bytes
    // ntdll.dll .text:0x83260, 0x6fc38 bytes
    //
    _x44(sdk::unknown_ptr) merge_security_attribute_information;
    
    // [RtlpModuleEnumeratorCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1430, 0x67960 bytes
    // ntdll.dll .text:0x7dce0, 0x6fc38 bytes
    // ntdll.dll .text:0x86ab0, 0x74648 bytes
    // ntdll.dll .text:0x7de80, 0x6fc38 bytes
    //
    _x45(sdk::unknown_ptr) module_enumerator_callback;
    
    // [RtlpMoveActCtxToFreeList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdbe6c, 0x67960 bytes
    // ntdll.dll .text:0xdf738, 0x6fc38 bytes
    // ntdll.dll .text:0xe9f7c, 0x74648 bytes
    // ntdll.dll .text:0xdf6a8, 0x6fc38 bytes
    //
    _x46(sdk::unknown_ptr) move_act_ctx_to_free_list;
    
    // [RtlpMoveHeapBetweenLists]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xea54, 0x67960 bytes
    // ntdll.dll .text:0xe0b8, 0x6fc38 bytes
    // ntdll.dll .text:0x48d84, 0x74648 bytes
    // ntdll.dll .text:0xe0b8, 0x6fc38 bytes
    //
    _x47(sdk::unknown_ptr) move_heap_between_lists;
    
    // [RtlpMUIEnumerateFolder]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe8280, 0x67960 bytes
    // ntdll.dll .text:0x85c9c, 0x6fc38 bytes
    // ntdll.dll .text:0xfb5c8, 0x74648 bytes
    // ntdll.dll .text:0x85e3c, 0x6fc38 bytes
    //
    _x48(sdk::unknown_ptr) mui_enumerate_folder;
    
    // [RtlpMuiFreeLangRegistryInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6770, 0x67960 bytes
    // ntdll.dll .text:0x6aa80, 0x6fc38 bytes
    // ntdll.dll .text:0x8a360, 0x74648 bytes
    // ntdll.dll .text:0x6aba0, 0x6fc38 bytes
    //
    _x49(sdk::unknown_ptr) mui_free_lang_registry_info;
    
    // [RtlpMUIGetAllInstalledLang]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe8620, 0x67960 bytes
    // ntdll.dll .text:0xf0294, 0x6fc38 bytes
    // ntdll.dll .text:0xfb924, 0x74648 bytes
    // ntdll.dll .text:0xf0244, 0x6fc38 bytes
    //
    _x50(sdk::unknown_ptr) mui_get_all_installed_lang;
    
    // [RtlpMuiRegAddMultiSzToLangFallbackList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x24ecc, 0x67960 bytes
    // ntdll.dll .text:0x2ce0c, 0x6fc38 bytes
    // ntdll.dll .text:0x15960, 0x74648 bytes
    // ntdll.dll .text:0x2ce0c, 0x6fc38 bytes
    //
    _x51(sdk::unknown_ptr) mui_reg_add_multi_sz_to_lang_fallback_list;
    
    // [_RtlpMuiRegAddNeutralToInstalled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x830c, 0x67960 bytes
    // ntdll.dll .text:0x6b2f0, 0x6fc38 bytes
    // ntdll.dll .text:0xa664, 0x74648 bytes
    // ntdll.dll .text:0x6b410, 0x6fc38 bytes
    //
    _x52(sdk::unknown_ptr) mui_reg_add_neutral_to_installed;
    
    // [RtlpMuiRegCreateAndLoadRegistryInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85a8, 0x67960 bytes
    // ntdll.dll .text:0x6aad0, 0x6fc38 bytes
    // ntdll.dll .text:0xa754, 0x74648 bytes
    // ntdll.dll .text:0x6abf0, 0x6fc38 bytes
    //
    _x53(sdk::unknown_ptr) mui_reg_create_and_load_registry_info;
    
    // [RtlpMuiRegCreateLanguageList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9310, 0x67960 bytes
    // ntdll.dll .text:0x2aadc, 0x6fc38 bytes
    // ntdll.dll .text:0x12424, 0x74648 bytes
    // ntdll.dll .text:0x2aadc, 0x6fc38 bytes
    //
    _x54(sdk::unknown_ptr) mui_reg_create_language_list;
    
    // [_RtlpMuiRegDeserializeRegistryInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81bc, 0x67960 bytes
    // ntdll.dll .text:0x6b5a0, 0x6fc38 bytes
    // ntdll.dll .text:0xa078, 0x74648 bytes
    // ntdll.dll .text:0x6b6c0, 0x6fc38 bytes
    //
    _x55(sdk::unknown_ptr) mui_reg_deserialize_registry_info;
    
    // [RtlpMuiRegDupLanguageList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x233a0, 0x67960 bytes
    // ntdll.dll .text:0x6a9b8, 0x6fc38 bytes
    // ntdll.dll .text:0x11cb8, 0x74648 bytes
    // ntdll.dll .text:0x6aad8, 0x6fc38 bytes
    //
    _x56(sdk::unknown_ptr) mui_reg_dup_language_list;
    
    // [RtlpMuiRegFreeLanguageConfigList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67c0, 0x67960 bytes
    // ntdll.dll .text:0x6b70c, 0x6fc38 bytes
    // ntdll.dll .text:0x8a3b0, 0x74648 bytes
    // ntdll.dll .text:0x6b82c, 0x6fc38 bytes
    //
    _x57(sdk::unknown_ptr) mui_reg_free_language_config_list;
    
    // [RtlpMuiRegFreeLanguageList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x24268, 0x67960 bytes
    // ntdll.dll .text:0x2ac9c, 0x6fc38 bytes
    // ntdll.dll .text:0x127fc, 0x74648 bytes
    // ntdll.dll .text:0x2ac9c, 0x6fc38 bytes
    //
    _x58(sdk::unknown_ptr) mui_reg_free_language_list;
    
    // [RtlpMuiRegFreeStringPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67c0, 0x67960 bytes
    // ntdll.dll .text:0x6b70c, 0x6fc38 bytes
    // ntdll.dll .text:0x1115ec, 0x74648 bytes
    // ntdll.dll .text:0x6b82c, 0x6fc38 bytes
    //
    _x59(sdk::unknown_ptr) mui_reg_free_string_pool;
    
    // [RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf53b8, 0x67960 bytes
    // ntdll.dll .text:0x103fdc, 0x6fc38 bytes
    // ntdll.dll .text:0x111618, 0x74648 bytes
    // ntdll.dll .text:0x103f6c, 0x6fc38 bytes
    //
    _x60(sdk::unknown_ptr) mui_reg_get_fallback_installed_language_info_by_lang_id;
    
    // [RtlpMuiRegGetFallbackLanguageInfoByIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf5528, 0x67960 bytes
    // ntdll.dll .text:0x104108, 0x6fc38 bytes
    // ntdll.dll .text:0x111748, 0x74648 bytes
    // ntdll.dll .text:0x104098, 0x6fc38 bytes
    //
    _x61(sdk::unknown_ptr) mui_reg_get_fallback_language_info_by_index;
    
    // [RtlpMuiRegGetFallbackLanguageInfoByLangId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf5684, 0x67960 bytes
    // ntdll.dll .text:0x10425c, 0x6fc38 bytes
    // ntdll.dll .text:0x11189c, 0x74648 bytes
    // ntdll.dll .text:0x1041ec, 0x6fc38 bytes
    //
    _x62(sdk::unknown_ptr) mui_reg_get_fallback_language_info_by_lang_id;
    
    // [RtlpMuiRegGetFallbackLanguageInfoByName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf5850, 0x67960 bytes
    // ntdll.dll .text:0x10441c, 0x6fc38 bytes
    // ntdll.dll .text:0x111a54, 0x74648 bytes
    // ntdll.dll .text:0x1043ac, 0x6fc38 bytes
    //
    _x63(sdk::unknown_ptr) mui_reg_get_fallback_language_info_by_name;
    
    // [RtlpMuiRegGetFallbackLanguagesAsMultiSZ]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf59d8, 0x67960 bytes
    // ntdll.dll .text:0x104598, 0x6fc38 bytes
    // ntdll.dll .text:0x111bc4, 0x74648 bytes
    // ntdll.dll .text:0x104528, 0x6fc38 bytes
    //
    _x64(sdk::unknown_ptr) mui_reg_get_fallback_languages_as_multi_sz;
    
    // [RtlpMuiRegGetInstalledLanguageInfoByIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf5b0c, 0x67960 bytes
    // ntdll.dll .text:0x1046cc, 0x6fc38 bytes
    // ntdll.dll .text:0x111cf8, 0x74648 bytes
    // ntdll.dll .text:0x10465c, 0x6fc38 bytes
    //
    _x65(sdk::unknown_ptr) mui_reg_get_installed_language_info_by_index;
    
    // [RtlpMuiRegGetLanginfoTypeNSpec]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88be0, 0x67960 bytes
    // ntdll.dll .text:0xf0384, 0x6fc38 bytes
    // ntdll.dll .text:0xae3ce, 0x74648 bytes
    // ntdll.dll .text:0xf0334, 0x6fc38 bytes
    //
    _x66(sdk::unknown_ptr) mui_reg_get_langinfo_type_n_spec;
    
    // [RtlpMuiRegGetString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf5e58, 0x67960 bytes
    // ntdll.dll .text:0x104a1c, 0x6fc38 bytes
    // ntdll.dll .text:0x112030, 0x74648 bytes
    // ntdll.dll .text:0x1049ac, 0x6fc38 bytes
    //
    _x67(sdk::unknown_ptr) mui_reg_get_string;
    
    // [RtlpMuiRegGrowLanguageList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf5ecc, 0x67960 bytes
    // ntdll.dll .text:0x104a90, 0x6fc38 bytes
    // ntdll.dll .text:0x1120a4, 0x74648 bytes
    // ntdll.dll .text:0x104a20, 0x6fc38 bytes
    //
    _x68(sdk::unknown_ptr) mui_reg_grow_language_list;
    
    // [RtlpMuiRegLoadPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9438, 0x67960 bytes
    // ntdll.dll .text:0x2f9c8, 0x6fc38 bytes
    // ntdll.dll .text:0xb870, 0x74648 bytes
    // ntdll.dll .text:0x2f9c8, 0x6fc38 bytes
    //
    _x69(sdk::unknown_ptr) mui_reg_load_preferred_ui_languages;
    
    // [RtlpMUIRegPatchLicenseInfortmation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x23550, 0x67960 bytes
    // ntdll.dll .text:0x2e1e8, 0x6fc38 bytes
    // ntdll.dll .text:0x1053c, 0x74648 bytes
    // ntdll.dll .text:0x2e1e8, 0x6fc38 bytes
    //
    _x70(sdk::unknown_ptr) mui_reg_patch_license_infortmation;
    
    // [RtlpMuiRegResizeLanguageList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf652c, 0x67960 bytes
    // ntdll.dll .text:0x10531c, 0x6fc38 bytes
    // ntdll.dll .text:0x112c08, 0x74648 bytes
    // ntdll.dll .text:0x1052ac, 0x6fc38 bytes
    //
    _x71(sdk::unknown_ptr) mui_reg_resize_language_list;
    
    // [RtlpMuiRegTryToAppendLangId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x245f0, 0x67960 bytes
    // ntdll.dll .text:0x28c0c, 0x6fc38 bytes
    // ntdll.dll .text:0x12830, 0x74648 bytes
    // ntdll.dll .text:0x28c0c, 0x6fc38 bytes
    //
    _x72(sdk::unknown_ptr) mui_reg_try_to_append_lang_id;
    
    // [RtlpMuiRegTryToAppendLanguageName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x794a4, 0x67960 bytes
    // ntdll.dll .text:0x2f830, 0x6fc38 bytes
    // ntdll.dll .text:0x12950, 0x74648 bytes
    // ntdll.dll .text:0x2f830, 0x6fc38 bytes
    //
    _x73(sdk::unknown_ptr) mui_reg_try_to_append_language_name;
    
    // [RtlpMuiRegTryToAppendLanguageToMuiszFromLangList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2451c, 0x67960 bytes
    // ntdll.dll .text:0x28b4c, 0x6fc38 bytes
    // ntdll.dll .text:0x1273c, 0x74648 bytes
    // ntdll.dll .text:0x28b4c, 0x6fc38 bytes
    //
    _x74(sdk::unknown_ptr) mui_reg_try_to_append_language_to_muisz_from_lang_list;
    
    // [RtlpNlsGetLcidIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x25c3c, 0x67960 bytes
    // ntdll.dll .text:0x2d620, 0x6fc38 bytes
    // ntdll.dll .text:0x160e8, 0x74648 bytes
    // ntdll.dll .text:0x2d620, 0x6fc38 bytes
    //
    _x75(sdk::unknown_ptr) nls_get_lcid_index;
    
    // [RtlpNlsGetNameIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x25dc0, 0x67960 bytes
    // ntdll.dll .text:0x2dc88, 0x6fc38 bytes
    // ntdll.dll .text:0x15820, 0x74648 bytes
    // ntdll.dll .text:0x2dc88, 0x6fc38 bytes
    //
    _x76(sdk::unknown_ptr) nls_get_name_index;
    
    // [RtlpNotOwnerCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5020, 0x67960 bytes
    // ntdll.dll .text:0xe8990, 0x6fc38 bytes
    // ntdll.dll .text:0xf38c0, 0x74648 bytes
    // ntdll.dll .text:0xe8900, 0x6fc38 bytes
    //
    _x77(sdk::unknown_ptr) not_owner_critical_section;
    
    // [RtlpNtCreateKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x908c0, 0x67960 bytes
    // ntdll.dll .text:0x1075e0, 0x6fc38 bytes
    // ntdll.dll .text:0x114d70, 0x74648 bytes
    // ntdll.dll .text:0x107570, 0x6fc38 bytes
    //
    _x78(sdk::unknown_ptr) nt_create_key;
    
    // [RtlpNtEnumerateSubKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83420, 0x67960 bytes
    // ntdll.dll .text:0x81500, 0x6fc38 bytes
    // ntdll.dll .text:0x846a0, 0x74648 bytes
    // ntdll.dll .text:0x816a0, 0x6fc38 bytes
    //
    _x79(sdk::unknown_ptr) nt_enumerate_sub_key;
    
    // [RtlpNtMakeTemporaryKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf8250, 0x67960 bytes
    // ntdll.dll .text:0x107620, 0x6fc38 bytes
    // ntdll.dll .text:0x114db0, 0x74648 bytes
    // ntdll.dll .text:0x1075b0, 0x6fc38 bytes
    //
    _x80(sdk::unknown_ptr) nt_make_temporary_key;
    
    // [RtlpNtOpenKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82240, 0x67960 bytes
    // ntdll.dll .text:0x7c4b0, 0x6fc38 bytes
    // ntdll.dll .text:0x806a0, 0x74648 bytes
    // ntdll.dll .text:0x7c650, 0x6fc38 bytes
    //
    _x81(sdk::unknown_ptr) nt_open_key;
    
    // [RtlpNtQueryValueKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81240, 0x67960 bytes
    // ntdll.dll .text:0x7a820, 0x6fc38 bytes
    // ntdll.dll .text:0x80060, 0x74648 bytes
    // ntdll.dll .text:0x7a9c0, 0x6fc38 bytes
    //
    _x82(sdk::unknown_ptr) nt_query_value_key;
    
    // [RtlpNtSetValueKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90890, 0x67960 bytes
    // ntdll.dll .text:0x107630, 0x6fc38 bytes
    // ntdll.dll .text:0x114dc0, 0x74648 bytes
    // ntdll.dll .text:0x1075c0, 0x6fc38 bytes
    //
    _x83(sdk::unknown_ptr) nt_set_value_key;
    
    // [RtlpNullString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109660, 0x67960 bytes
    // ntdll.dll .rdata:0x11c3b0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131560, 0x74648 bytes
    // ntdll.dll .rdata:0x11c3b0, 0x6fc38 bytes
    //
    _x84(sdk::unknown_ptr) null_string;
    
    // [RtlpNumberOfProtectedHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154010, 0x67960 bytes
    // ntdll.dll .data:0x16b1d8, 0x6fc38 bytes
    // ntdll.dll .data:0x184c80, 0x74648 bytes
    // ntdll.dll .data:0x16c1d8, 0x6fc38 bytes
    //
    _x85(sdk::unknown_ptr) number_of_protected_heaps;
    
    // [RtlpOpenAndMapCustomCultureFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf05a8, 0x67960 bytes
    // ntdll.dll .text:0xfcec0, 0x6fc38 bytes
    // ntdll.dll .text:0x109f88, 0x74648 bytes
    // ntdll.dll .text:0xfce70, 0x6fc38 bytes
    //
    _x86(sdk::unknown_ptr) open_and_map_custom_culture_file;
    
    // [RtlpOptimizeConditionVariableWaitList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6b3e8, 0x67960 bytes
    // ntdll.dll .text:0x65228, 0x6fc38 bytes
    // ntdll.dll .text:0x698d8, 0x74648 bytes
    // ntdll.dll .text:0x65348, 0x6fc38 bytes
    //
    _x87(sdk::unknown_ptr) optimize_condition_variable_wait_list;
    
    // [RtlpOptimizeSRWLockList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x772cc, 0x67960 bytes
    // ntdll.dll .text:0x7910c, 0x6fc38 bytes
    // ntdll.dll .text:0x69dd8, 0x74648 bytes
    // ntdll.dll .text:0x792ac, 0x6fc38 bytes
    //
    _x88(sdk::unknown_ptr) optimize_srw_lock_list;
    
    // [RtlpOptimizeWaitOnAddressWaitList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e8ec, 0x67960 bytes
    // ntdll.dll .text:0x46230, 0x6fc38 bytes
    // ntdll.dll .text:0x505bc, 0x74648 bytes
    // ntdll.dll .text:0x46230, 0x6fc38 bytes
    //
    _x89(sdk::unknown_ptr) optimize_wait_on_address_wait_list;
    
    // [RtlpPageHeapStop]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd93d4, 0x67960 bytes
    // ntdll.dll .text:0xdbdf4, 0x6fc38 bytes
    // ntdll.dll .text:0xe64bc, 0x74648 bytes
    // ntdll.dll .text:0xdbd64, 0x6fc38 bytes
    //
    _x90(sdk::unknown_ptr) page_heap_stop;
    
    // [RtlpPerformHeapMaintenance]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x13730, 0x67960 bytes
    // ntdll.dll .text:0x9264, 0x6fc38 bytes
    // ntdll.dll .text:0x4a644, 0x74648 bytes
    // ntdll.dll .text:0x9264, 0x6fc38 bytes
    //
    _x91(sdk::function<void(struct nt::heap_t*)>*) perform_heap_maintenance;
    
    // [RtlpPlaceActivationContextOnLiveList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdbfa4, 0x67960 bytes
    // ntdll.dll .text:0xdf864, 0x6fc38 bytes
    // ntdll.dll .text:0xea0b4, 0x74648 bytes
    // ntdll.dll .text:0xdf7d4, 0x6fc38 bytes
    //
    _x92(sdk::unknown_ptr) place_activation_context_on_live_list;
    
    // [RtlpPossibleDeadlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5128, 0x67960 bytes
    // ntdll.dll .text:0xe8ae8, 0x6fc38 bytes
    // ntdll.dll .text:0xf3a24, 0x74648 bytes
    // ntdll.dll .text:0xe8a58, 0x6fc38 bytes
    //
    _x93(sdk::unknown_ptr) possible_deadlock;
    
    // [RtlpPreviousStartAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553e8, 0x67960 bytes
    // ntdll.dll .data:0x16bb68, 0x6fc38 bytes
    // ntdll.dll .data:0x185900, 0x74648 bytes
    // ntdll.dll .data:0x16cb68, 0x6fc38 bytes
    //
    _x94(sdk::unknown_ptr) previous_start_address;
    
    // [RtlpPrintErrorInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfa70c, 0x67960 bytes
    // ntdll.dll .text:0x10a2e4, 0x6fc38 bytes
    // ntdll.dll .text:0x117acc, 0x74648 bytes
    // ntdll.dll .text:0x10a274, 0x6fc38 bytes
    //
    _x95(sdk::unknown_ptr) print_error_information;
    
    // [RtlpProbeAssemblyStorageRootForAssembly]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1d6fc, 0x67960 bytes
    // ntdll.dll .text:0x7251c, 0x6fc38 bytes
    // ntdll.dll .text:0x75704, 0x74648 bytes
    // ntdll.dll .text:0x726bc, 0x6fc38 bytes
    //
    _x96(sdk::unknown_ptr) probe_assembly_storage_root_for_assembly;
    
    // [RtlpProcessHeapsListBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151b40, 0x67960 bytes
    // ntdll.dll .data:0x168d40, 0x6fc38 bytes
    // ntdll.dll .data:0x183020, 0x74648 bytes
    // ntdll.dll .data:0x169d40, 0x6fc38 bytes
    //
    _x97(sdk::unknown_ptr) process_heaps_list_buffer;
    
    // [RtlpProcessHeapsListLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151ae0, 0x67960 bytes
    // ntdll.dll .data:0x168ce0, 0x6fc38 bytes
    // ntdll.dll .data:0x182fc0, 0x74648 bytes
    // ntdll.dll .data:0x169ce0, 0x6fc38 bytes
    //
    _x98(sdk::unknown_ptr) process_heaps_list_lock;
    
    // [RtlpProcessMemoryMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151a90, 0x67960 bytes
    // ntdll.dll .data:0x168c98, 0x6fc38 bytes
    // ntdll.dll .data:0x182f38, 0x74648 bytes
    // ntdll.dll .data:0x169ca0, 0x6fc38 bytes
    //
    _x99(sdk::unknown_ptr) process_memory_map;
    
    // [RtlpProcessReflectionStartup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4a00, 0x67960 bytes
    // ntdll.dll .text:0xd5ec0, 0x6fc38 bytes
    // ntdll.dll .text:0xe1200, 0x74648 bytes
    // ntdll.dll .text:0xd5e30, 0x6fc38 bytes
    //
    _y00(sdk::unknown_ptr) process_reflection_startup;
    
    // [RtlpProtectHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe96c, 0x67960 bytes
    // ntdll.dll .text:0xdfd0, 0x6fc38 bytes
    // ntdll.dll .text:0x4939c, 0x74648 bytes
    // ntdll.dll .text:0xdfd0, 0x6fc38 bytes
    //
    _y01(sdk::unknown_ptr) protect_heap;
    
    // [RtlpProtectedHeapsList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d9c8, 0x67960 bytes
    // ntdll.dll .data:0x1649a8, 0x6fc38 bytes
    // ntdll.dll .data:0x17e818, 0x74648 bytes
    // ntdll.dll .data:0x1659a8, 0x6fc38 bytes
    //
    _y02(sdk::unknown_ptr) protected_heaps_list;
    
    // [RtlpProtectedHeapsListBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151b20, 0x67960 bytes
    // ntdll.dll .data:0x168d20, 0x6fc38 bytes
    // ntdll.dll .data:0x183000, 0x74648 bytes
    // ntdll.dll .data:0x169d20, 0x6fc38 bytes
    //
    _y03(sdk::unknown_ptr) protected_heaps_list_buffer;
    
    // [RtlpProtectedPolicies]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164280, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f2c0, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992f0, 0x74648 bytes
    // ntdll.dll .mrdata:0x1802c0, 0x6fc38 bytes
    //
    _y04(sdk::unknown_ptr) protected_policies;
    
    // [RtlpProtectedPoliciesActiveCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164288, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f2c8, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992f8, 0x74648 bytes
    // ntdll.dll .mrdata:0x1802c8, 0x6fc38 bytes
    //
    _y05(sdk::unknown_ptr) protected_policies_active_count;
    
    // [RtlpProtectedPoliciesSRWLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154390, 0x67960 bytes
    // ntdll.dll .data:0x16b548, 0x6fc38 bytes
    // ntdll.dll .data:0x1850e0, 0x74648 bytes
    // ntdll.dll .data:0x16c538, 0x6fc38 bytes
    //
    _y06(sdk::unknown_ptr) protected_policies_srw_lock;
    
    // [RtlpProtectedPoliciesTotalCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x16428c, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f2cc, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992fc, 0x74648 bytes
    // ntdll.dll .mrdata:0x1802cc, 0x6fc38 bytes
    //
    _y07(sdk::unknown_ptr) protected_policies_total_count;
    
    // [RtlpPushPageDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee7e4, 0x67960 bytes
    // ntdll.dll .text:0xf7b08, 0x6fc38 bytes
    // ntdll.dll .text:0x1036d8, 0x74648 bytes
    // ntdll.dll .text:0xf7ab8, 0x6fc38 bytes
    //
    _y08(sdk::unknown_ptr) push_page_descriptor;
    
    // [RtlpQueryAssemblyInformationActivationContextDetailedInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdc0ac, 0x67960 bytes
    // ntdll.dll .text:0xdf968, 0x6fc38 bytes
    // ntdll.dll .text:0xea1b8, 0x74648 bytes
    // ntdll.dll .text:0xdf8d8, 0x6fc38 bytes
    //
    _y09(sdk::unknown_ptr) query_assembly_information_activation_context_detailed_information;
    
    // [RtlpQueryCriticalSectionOwnerInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6b64, 0x67960 bytes
    // ntdll.dll .text:0xd8a3c, 0x6fc38 bytes
    // ntdll.dll .text:0xe3190, 0x74648 bytes
    // ntdll.dll .text:0xd89ac, 0x6fc38 bytes
    //
    _y10(sdk::unknown_ptr) query_critical_section_owner_information;
    
    // [RtlpQueryDefaultUILanguage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1e000, 0x67960 bytes
    // ntdll.dll .text:0x6b740, 0x6fc38 bytes
    // ntdll.dll .text:0x70600, 0x74648 bytes
    // ntdll.dll .text:0x6b860, 0x6fc38 bytes
    //
    _y11(sdk::unknown_ptr) query_default_ui_language;
    
    // [RtlpQueryDiskSpacePolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86094, 0x67960 bytes
    // ntdll.dll .text:0x1177d8, 0x6fc38 bytes
    // ntdll.dll .text:0x12b940, 0x74648 bytes
    // ntdll.dll .text:0x117978, 0x6fc38 bytes
    //
    _y12(sdk::unknown_ptr) query_disk_space_policy;
    
    // [RtlpQueryDiskSpacePolicyByHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x861f0, 0x67960 bytes
    // ntdll.dll .text:0x11792c, 0x6fc38 bytes
    // ntdll.dll .text:0x12ba94, 0x74648 bytes
    // ntdll.dll .text:0x117acc, 0x6fc38 bytes
    //
    _y13(sdk::unknown_ptr) query_disk_space_policy_by_handle;
    
    // [RtlpQueryDiskSpeedPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x899b8, 0x67960 bytes
    // ntdll.dll .text:0x874a4, 0x6fc38 bytes
    // ntdll.dll .text:0x88bc0, 0x74648 bytes
    // ntdll.dll .text:0x87644, 0x6fc38 bytes
    //
    _y14(sdk::unknown_ptr) query_disk_speed_policy;
    
    // [RtlpQueryExtendedHeapInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeb6d4, 0x67960 bytes
    // ntdll.dll .text:0x73a7c, 0x6fc38 bytes
    // ntdll.dll .text:0x8ae80, 0x74648 bytes
    // ntdll.dll .text:0x73c1c, 0x6fc38 bytes
    //
    _y15(sdk::unknown_ptr) query_extended_heap_information;
    
    // [RtlpQueryExtendedInformationAllHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xebb6c, 0x67960 bytes
    // ntdll.dll .text:0x73b5c, 0x6fc38 bytes
    // ntdll.dll .text:0x8b318, 0x74648 bytes
    // ntdll.dll .text:0x73cfc, 0x6fc38 bytes
    //
    _y16(sdk::unknown_ptr) query_extended_information_all_heaps;
    
    // [RtlpQueryExtendedInformationHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x94c80, 0x67960 bytes
    // ntdll.dll .text:0x7a070, 0x6fc38 bytes
    // ntdll.dll .text:0x8a9b0, 0x74648 bytes
    // ntdll.dll .text:0x7a210, 0x6fc38 bytes
    //
    _y17(sdk::unknown_ptr) query_extended_information_heap;
    
    // [RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdc338, 0x67960 bytes
    // ntdll.dll .text:0xdfbf8, 0x6fc38 bytes
    // ntdll.dll .text:0xea448, 0x74648 bytes
    // ntdll.dll .text:0xdfb68, 0x6fc38 bytes
    //
    _y18(sdk::unknown_ptr) query_files_in_assembly_information_activation_context_detailed_information;
    
    // [RtlpQueryInformationActivationContextCompatibilityInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c98c, 0x67960 bytes
    // ntdll.dll .text:0x777e4, 0x6fc38 bytes
    // ntdll.dll .text:0x7aae8, 0x74648 bytes
    // ntdll.dll .text:0x77984, 0x6fc38 bytes
    //
    _y19(sdk::unknown_ptr) query_information_activation_context_compatibility_information;
    
    // [RtlpQueryInformationActivationContextDetailedInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c72c, 0x67960 bytes
    // ntdll.dll .text:0x77588, 0x6fc38 bytes
    // ntdll.dll .text:0x8cab4, 0x74648 bytes
    // ntdll.dll .text:0x77728, 0x6fc38 bytes
    //
    _y20(sdk::unknown_ptr) query_information_activation_context_detailed_information;
    
    // [RtlpQueryInformationActivationContextManifestResourceName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdc5c0, 0x67960 bytes
    // ntdll.dll .text:0xdfe80, 0x6fc38 bytes
    // ntdll.dll .text:0xea6d4, 0x74648 bytes
    // ntdll.dll .text:0xdfdf0, 0x6fc38 bytes
    //
    _y21(sdk::unknown_ptr) query_information_activation_context_manifest_resource_name;
    
    // [RtlpQueryMemoryUsageHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89470, 0x67960 bytes
    // ntdll.dll .text:0xf4240, 0x6fc38 bytes
    // ntdll.dll .text:0xffb18, 0x74648 bytes
    // ntdll.dll .text:0xf41f0, 0x6fc38 bytes
    //
    _y22(sdk::unknown_ptr) query_memory_usage_heap;
    
    // [RtlpQueryPhysicalMemoryPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1235c, 0x67960 bytes
    // ntdll.dll .text:0xafd8, 0x6fc38 bytes
    // ntdll.dll .text:0x49e7c, 0x74648 bytes
    // ntdll.dll .text:0xafd8, 0x6fc38 bytes
    //
    _y23(sdk::unknown_ptr) query_physical_memory_policy;
    
    // [RtlpQueryProcessDebugInformationFromWow64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6bc0, 0x67960 bytes
    // ntdll.dll .text:0xd8a90, 0x6fc38 bytes
    // ntdll.dll .text:0xe31f0, 0x74648 bytes
    // ntdll.dll .text:0xd8a00, 0x6fc38 bytes
    //
    _y24(sdk::unknown_ptr) query_process_debug_information_from_wow64;
    
    // [RtlpQueryProcessDebugInformationRemote]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6c60, 0x67960 bytes
    // ntdll.dll .text:0xd8b30, 0x6fc38 bytes
    // ntdll.dll .text:0xe3290, 0x74648 bytes
    // ntdll.dll .text:0xd8aa0, 0x6fc38 bytes
    //
    _y25(sdk::unknown_ptr) query_process_debug_information_remote;
    
    // [RtlpQueryProcessEnumHeapsRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x95fc0, 0x67960 bytes
    // ntdll.dll .text:0xd8c20, 0x6fc38 bytes
    // ntdll.dll .text:0xe3390, 0x74648 bytes
    // ntdll.dll .text:0xd8b90, 0x6fc38 bytes
    //
    _y26(sdk::unknown_ptr) query_process_enum_heaps_routine;
    
    // [RtlpQueryPseudoEnvironmentVariable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x74550, 0x67960 bytes
    // ntdll.dll .text:0x8803c, 0x6fc38 bytes
    // ntdll.dll .text:0x6e02c, 0x74648 bytes
    // ntdll.dll .text:0x881dc, 0x6fc38 bytes
    //
    _y27(sdk::unknown_ptr) query_pseudo_environment_variable;
    
    // [RtlpQueryRunLevel]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c63c, 0x67960 bytes
    // ntdll.dll .text:0x77498, 0x6fc38 bytes
    // ntdll.dll .text:0x7a9f8, 0x74648 bytes
    // ntdll.dll .text:0x77638, 0x6fc38 bytes
    //
    _y28(sdk::unknown_ptr) query_run_level;
    
    // [RtlpQueueWaitBlockToSRWLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6b714, 0x67960 bytes
    // ntdll.dll .text:0x79738, 0x6fc38 bytes
    // ntdll.dll .text:0x69cf8, 0x74648 bytes
    // ntdll.dll .text:0x798d8, 0x6fc38 bytes
    //
    _y29(sdk::unknown_ptr) queue_wait_block_to_srw_lock;
    
    // [RtlpRandomExAuxVarY]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151900, 0x67960 bytes
    // ntdll.dll .data:0x168ae0, 0x6fc38 bytes
    // ntdll.dll .data:0x182d80, 0x74648 bytes
    // ntdll.dll .data:0x169ae0, 0x6fc38 bytes
    //
    _y30(sdk::unknown_ptr) random_ex_aux_var_y;
    
    // [RtlpRandomExConstantVector]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151700, 0x67960 bytes
    // ntdll.dll .data:0x1688e0, 0x6fc38 bytes
    // ntdll.dll .data:0x182b80, 0x74648 bytes
    // ntdll.dll .data:0x1698e0, 0x6fc38 bytes
    //
    _y31(sdk::unknown_ptr) random_ex_constant_vector;
    
    // [RtlpRandomExInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543b8, 0x67960 bytes
    // ntdll.dll .data:0x16b5e0, 0x6fc38 bytes
    // ntdll.dll .data:0x185170, 0x74648 bytes
    // ntdll.dll .data:0x16c5d0, 0x6fc38 bytes
    //
    _y32(sdk::unknown_ptr) random_ex_init;
    
    // [RtlpReAllocateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x35d80, 0x67960 bytes
    // ntdll.dll .text:0xf480, 0x6fc38 bytes
    // ntdll.dll .text:0x425b0, 0x74648 bytes
    // ntdll.dll .text:0xf480, 0x6fc38 bytes
    //
    _y33(sdk::unknown_ptr) re_allocate_heap;
    
    // [RtlpReAllocateHeapInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x35980, 0x67960 bytes
    // ntdll.dll .text:0x1c6e0, 0x6fc38 bytes
    // ntdll.dll .text:0x42370, 0x74648 bytes
    // ntdll.dll .text:0x1c6e0, 0x6fc38 bytes
    //
    _y34(sdk::unknown_ptr) re_allocate_heap_internal;
    
    // [RtlpReadProcessHeaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee94c, 0x67960 bytes
    // ntdll.dll .text:0xf7c70, 0x6fc38 bytes
    // ntdll.dll .text:0x10383c, 0x74648 bytes
    // ntdll.dll .text:0xf7c20, 0x6fc38 bytes
    //
    _y35(sdk::unknown_ptr) read_process_heaps;
    
    // [RtlpReferenceCurrentDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7abbc, 0x67960 bytes
    // ntdll.dll .text:0x60f60, 0x6fc38 bytes
    // ntdll.dll .text:0x7b768, 0x74648 bytes
    // ntdll.dll .text:0x61080, 0x6fc38 bytes
    //
    _y36(sdk::unknown_ptr) reference_current_directory;
    
    // [RtlpRefreshCachedUILanguage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf6700, 0x67960 bytes
    // ntdll.dll .text:0x105980, 0x6fc38 bytes
    // ntdll.dll .text:0x113280, 0x74648 bytes
    // ntdll.dll .text:0x105910, 0x6fc38 bytes
    //
    _y37(sdk::unknown_ptr) refresh_cached_ui_language;
    
    // [RtlpRegisterLockedMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1b7c, 0x67960 bytes
    // ntdll.dll .text:0x80000, 0x6fc38 bytes
    // ntdll.dll .text:0x52200, 0x74648 bytes
    // ntdll.dll .text:0x801a0, 0x6fc38 bytes
    //
    _y38(sdk::unknown_ptr) register_locked_memory_block_lookaside;
    
    // [RtlpRegisterLockedMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1aec, 0x67960 bytes
    // ntdll.dll .text:0x7ff6c, 0x6fc38 bytes
    // ntdll.dll .text:0x5241c, 0x74648 bytes
    // ntdll.dll .text:0x8010c, 0x6fc38 bytes
    //
    _y39(sdk::unknown_ptr) register_locked_memory_zone;
    
    // [RtlpRegisterStackTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfaa74, 0x67960 bytes
    // ntdll.dll .text:0x10a668, 0x6fc38 bytes
    // ntdll.dll .text:0x117e50, 0x74648 bytes
    // ntdll.dll .text:0x10a5f8, 0x6fc38 bytes
    //
    _y40(sdk::unknown_ptr) register_stack_trace;
    
    // [RtlpRemoveHeapFromProtectedList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1008c, 0x67960 bytes
    // ntdll.dll .text:0xd95c, 0x6fc38 bytes
    // ntdll.dll .text:0x49a24, 0x74648 bytes
    // ntdll.dll .text:0xd95c, 0x6fc38 bytes
    //
    _y41(sdk::unknown_ptr) remove_heap_from_protected_list;
    
    // [RtlpRemoveHeapFromUnprotectedList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfe5c, 0x67960 bytes
    // ntdll.dll .text:0xdbc0, 0x6fc38 bytes
    // ntdll.dll .text:0x48fac, 0x74648 bytes
    // ntdll.dll .text:0xdbc0, 0x6fc38 bytes
    //
    _y42(sdk::unknown_ptr) remove_heap_from_unprotected_list;
    
    // [RtlpRemoveUserSubFromNameSub]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53af4, 0x67960 bytes
    // ntdll.dll .text:0x458c4, 0x6fc38 bytes
    // ntdll.dll .text:0x4c69c, 0x74648 bytes
    // ntdll.dll .text:0x458c4, 0x6fc38 bytes
    //
    _y43(sdk::unknown_ptr) remove_user_sub_from_name_sub;
    
    // [RtlpRemoveVectoredHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x859a0, 0x67960 bytes
    // ntdll.dll .text:0x81630, 0x6fc38 bytes
    // ntdll.dll .text:0x85460, 0x74648 bytes
    // ntdll.dll .text:0x817d0, 0x6fc38 bytes
    //
    _y44(sdk::unknown_ptr) remove_vectored_handler;
    
    // [RtlpReportHeapFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfac38, 0x67960 bytes
    // ntdll.dll .text:0x10a838, 0x6fc38 bytes
    // ntdll.dll .text:0x118028, 0x74648 bytes
    // ntdll.dll .text:0x10a7c8, 0x6fc38 bytes
    //
    _y45(sdk::unknown_ptr) report_heap_failure;
    
    // [RtlpResUltimateFallbackInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1e138, 0x67960 bytes
    // ntdll.dll .text:0x56d70, 0x6fc38 bytes
    // ntdll.dll .text:0x7634, 0x74648 bytes
    // ntdll.dll .text:0x56d70, 0x6fc38 bytes
    //
    _y46(sdk::unknown_ptr) res_ultimate_fallback_info;
    
    // [RtlpResetDriveEnvironment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x189c, 0x67960 bytes
    // ntdll.dll .text:0x47454, 0x6fc38 bytes
    // ntdll.dll .text:0x57ac4, 0x74648 bytes
    // ntdll.dll .text:0x47454, 0x6fc38 bytes
    //
    _y47(sdk::unknown_ptr) reset_drive_environment;
    
    // [RtlpResolveAssemblyStorageMapEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1cf4c, 0x67960 bytes
    // ntdll.dll .text:0x71fd0, 0x6fc38 bytes
    // ntdll.dll .text:0x751b4, 0x74648 bytes
    // ntdll.dll .text:0x72170, 0x6fc38 bytes
    //
    _y48(sdk::unknown_ptr) resolve_assembly_storage_map_entry;
    
    // [RtlpScanEnvironment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2fc50, 0x67960 bytes
    // ntdll.dll .text:0x27bf0, 0x6fc38 bytes
    // ntdll.dll .text:0x58890, 0x74648 bytes
    // ntdll.dll .text:0x27bf0, 0x6fc38 bytes
    //
    _y49(sdk::unknown_ptr) scan_environment;
    
    // [RtlpScanHeapAllocBlocks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee9c8, 0x67960 bytes
    // ntdll.dll .text:0xf7cec, 0x6fc38 bytes
    // ntdll.dll .text:0x1038b8, 0x74648 bytes
    // ntdll.dll .text:0xf7c9c, 0x6fc38 bytes
    //
    _y50(sdk::unknown_ptr) scan_heap_alloc_blocks;
    
    // [RtlpScanProcessVirtualMemory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeec00, 0x67960 bytes
    // ntdll.dll .text:0xf7f30, 0x6fc38 bytes
    // ntdll.dll .text:0x103afc, 0x74648 bytes
    // ntdll.dll .text:0xf7ee0, 0x6fc38 bytes
    //
    _y51(sdk::unknown_ptr) scan_process_virtual_memory;
    
    // [RtlpSearchPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152180, 0x67960 bytes
    // ntdll.dll .data:0x169460, 0x6fc38 bytes
    // ntdll.dll .data:0x183320, 0x74648 bytes
    // ntdll.dll .data:0x16a460, 0x6fc38 bytes
    //
    _y52(sdk::unknown_ptr) search_path;
    
    // [RtlpSearchPathMode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fcc, 0x67960 bytes
    // ntdll.dll .data:0x16b1a0, 0x6fc38 bytes
    // ntdll.dll .data:0x184c48, 0x74648 bytes
    // ntdll.dll .data:0x16c1a0, 0x6fc38 bytes
    //
    _y53(sdk::unknown_ptr) search_path_mode;
    
    // [RtlpSearchProtectedPolicyEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c050, 0x67960 bytes
    // ntdll.dll .text:0x74f90, 0x6fc38 bytes
    // ntdll.dll .text:0x2d60, 0x74648 bytes
    // ntdll.dll .text:0x75130, 0x6fc38 bytes
    //
    _y54(sdk::unknown_ptr) search_protected_policy_entry;
    
    // [RtlpSecMemFreeVirtualMemory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x15914, 0x67960 bytes
    // ntdll.dll .text:0xea68, 0x6fc38 bytes
    // ntdll.dll .text:0x46c50, 0x74648 bytes
    // ntdll.dll .text:0xea68, 0x6fc38 bytes
    //
    _y55(sdk::unknown_ptr) sec_mem_free_virtual_memory;
    
    // [RtlpSecMemListHead]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d9d0, 0x67960 bytes
    // ntdll.dll .data:0x164a78, 0x6fc38 bytes
    // ntdll.dll .data:0x17e9c8, 0x74648 bytes
    // ntdll.dll .data:0x165a78, 0x6fc38 bytes
    //
    _y56(sdk::unknown_ptr) sec_mem_list_head;
    
    // [RtlpSecMemLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553b8, 0x67960 bytes
    // ntdll.dll .data:0x16bb38, 0x6fc38 bytes
    // ntdll.dll .data:0x1858d0, 0x74648 bytes
    // ntdll.dll .data:0x16cb38, 0x6fc38 bytes
    //
    _y57(sdk::unknown_ptr) sec_mem_lock;
    
    // [RtlpSetBlockInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeed68, 0x67960 bytes
    // ntdll.dll .text:0xf809c, 0x6fc38 bytes
    // ntdll.dll .text:0x103c60, 0x74648 bytes
    // ntdll.dll .text:0xf804c, 0x6fc38 bytes
    //
    _y58(sdk::unknown_ptr) set_block_info;
    
    // [RtlpSetHeapDebuggingInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ed10, 0x67960 bytes
    // ntdll.dll .text:0xf4330, 0x6fc38 bytes
    // ntdll.dll .text:0xffc10, 0x74648 bytes
    // ntdll.dll .text:0xf42e0, 0x6fc38 bytes
    //
    _y59(sdk::unknown_ptr) set_heap_debugging_information;
    
    // [RtlpSetInstallLanguage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe8720, 0x67960 bytes
    // ntdll.dll .text:0xf03f0, 0x6fc38 bytes
    // ntdll.dll .text:0xfba20, 0x74648 bytes
    // ntdll.dll .text:0xf03a0, 0x6fc38 bytes
    //
    _y60(sdk::unknown_ptr) set_install_language;
    
    // [RtlpSetMachineUILanguagesImmediate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe8c7c, 0x67960 bytes
    // ntdll.dll .text:0xf08d8, 0x6fc38 bytes
    // ntdll.dll .text:0xfbf08, 0x74648 bytes
    // ntdll.dll .text:0xf0888, 0x6fc38 bytes
    //
    _y61(sdk::unknown_ptr) set_machine_ui_languages_immediate;
    
    // [RtlpSetPreferredUILanguages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe8e60, 0x67960 bytes
    // ntdll.dll .text:0xf0aa0, 0x6fc38 bytes
    // ntdll.dll .text:0xfc0e0, 0x74648 bytes
    // ntdll.dll .text:0xf0a50, 0x6fc38 bytes
    //
    _y62(sdk::unknown_ptr) set_preferred_ui_languages;
    
    // [RtlpSetProcMergedLangList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x839e4, 0x67960 bytes
    // ntdll.dll .text:0x88f4, 0x6fc38 bytes
    // ntdll.dll .text:0x82440, 0x74648 bytes
    // ntdll.dll .text:0x88f4, 0x6fc38 bytes
    //
    _y63(sdk::unknown_ptr) set_proc_merged_lang_list;
    
    // [RtlpSetProcUserMachineLangList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x22180, 0x67960 bytes
    // ntdll.dll .text:0x2a634, 0x6fc38 bytes
    // ntdll.dll .text:0x12ad4, 0x74648 bytes
    // ntdll.dll .text:0x2a634, 0x6fc38 bytes
    //
    _y64(sdk::unknown_ptr) set_proc_user_machine_lang_list;
    
    // [RtlpSetProcessDebugInformationRemote]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6d50, 0x67960 bytes
    // ntdll.dll .text:0xd8d80, 0x6fc38 bytes
    // ntdll.dll .text:0xe3600, 0x74648 bytes
    // ntdll.dll .text:0xd8cf0, 0x6fc38 bytes
    //
    _y65(sdk::unknown_ptr) set_process_debug_information_remote;
    
    // [RtlpSetRequestedFrontEndHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f6c8, 0x67960 bytes
    // ntdll.dll .text:0x73870, 0x6fc38 bytes
    // ntdll.dll .text:0x7cc34, 0x74648 bytes
    // ntdll.dll .text:0x73a10, 0x6fc38 bytes
    //
    _y66(sdk::unknown_ptr) set_requested_front_end_heap;
    
    // [RtlpSetSegmentInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81360, 0x67960 bytes
    // ntdll.dll .text:0x784e4, 0x6fc38 bytes
    // ntdll.dll .text:0x81798, 0x74648 bytes
    // ntdll.dll .text:0x78684, 0x6fc38 bytes
    //
    _y67(sdk::unknown_ptr) set_segment_info;
    
    // [RtlpShutdownProcessFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154494, 0x67960 bytes
    // ntdll.dll .data:0x16b718, 0x6fc38 bytes
    // ntdll.dll .data:0x185260, 0x74648 bytes
    // ntdll.dll .data:0x16c718, 0x6fc38 bytes
    //
    _y68(sdk::unknown_ptr) shutdown_process_flags;
    
    // [RtlpSignalSystemDirsModification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdbad8, 0x67960 bytes
    // ntdll.dll .text:0xdf0f4, 0x6fc38 bytes
    // ntdll.dll .text:0xe9a7c, 0x74648 bytes
    // ntdll.dll .text:0xdf064, 0x6fc38 bytes
    //
    _y69(sdk::unknown_ptr) signal_system_dirs_modification;
    
    // [RtlpSlashSlashDot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109040, 0x67960 bytes
    // ntdll.dll .rdata:0x11c000, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131020, 0x74648 bytes
    // ntdll.dll .rdata:0x11c000, 0x6fc38 bytes
    //
    _y70(sdk::unknown_ptr) slash_slash_dot;
    
    // [RtlpSmMessageInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11c780, 0x67960 bytes
    // ntdll.dll .rdata:0x12f810, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13c410, 0x74648 bytes
    // ntdll.dll .rdata:0x12fb10, 0x6fc38 bytes
    //
    _y71(sdk::unknown_ptr) sm_message_info;
    
    // [RtlpStackDbEntryCleanup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102e10, 0x67960 bytes
    // ntdll.dll .text:0x118764, 0x6fc38 bytes
    // ntdll.dll .text:0x12c8f4, 0x74648 bytes
    // ntdll.dll .text:0x118904, 0x6fc38 bytes
    //
    _y72(sdk::unknown_ptr) stack_db_entry_cleanup;
    
    // [RtlpStackDbEntryCreate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102e84, 0x67960 bytes
    // ntdll.dll .text:0x1187e8, 0x6fc38 bytes
    // ntdll.dll .text:0x12c980, 0x74648 bytes
    // ntdll.dll .text:0x118988, 0x6fc38 bytes
    //
    _y73(sdk::unknown_ptr) stack_db_entry_create;
    
    // [RtlpStackDbEntryIsEqual]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x102f9c, 0x67960 bytes
    // ntdll.dll .text:0x1188fc, 0x6fc38 bytes
    // ntdll.dll .text:0x12caa0, 0x74648 bytes
    // ntdll.dll .text:0x118a9c, 0x6fc38 bytes
    //
    _y74(sdk::unknown_ptr) stack_db_entry_is_equal;
    
    // [RtlpStackDbRefCountIncrement]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x103048, 0x67960 bytes
    // ntdll.dll .text:0x1189a4, 0x6fc38 bytes
    // ntdll.dll .text:0x12cb48, 0x74648 bytes
    // ntdll.dll .text:0x118b44, 0x6fc38 bytes
    //
    _y75(sdk::unknown_ptr) stack_db_ref_count_increment;
    
    // [RtlpStackDbSegmentComparitor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1030ac, 0x67960 bytes
    // ntdll.dll .text:0x118a08, 0x6fc38 bytes
    // ntdll.dll .text:0x12cbac, 0x74648 bytes
    // ntdll.dll .text:0x118ba8, 0x6fc38 bytes
    //
    _y76(sdk::unknown_ptr) stack_db_segment_comparitor;
    
    // [RtlpStackDbSegmentFindOrCreate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1030e4, 0x67960 bytes
    // ntdll.dll .text:0x118a44, 0x6fc38 bytes
    // ntdll.dll .text:0x12cbe8, 0x74648 bytes
    // ntdll.dll .text:0x118be4, 0x6fc38 bytes
    //
    _y77(sdk::unknown_ptr) stack_db_segment_find_or_create;
    
    // [RtlpStackDbSegmentRemoveRef]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x103778, 0x67960 bytes
    // ntdll.dll .text:0x119050, 0x6fc38 bytes
    // ntdll.dll .text:0x12d210, 0x74648 bytes
    // ntdll.dll .text:0x1191f0, 0x6fc38 bytes
    //
    _y78(sdk::unknown_ptr) stack_db_segment_remove_ref;
    
    // [RtlpStackDbStackComparitor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x103900, 0x67960 bytes
    // ntdll.dll .text:0x1191c8, 0x6fc38 bytes
    // ntdll.dll .text:0x12d394, 0x74648 bytes
    // ntdll.dll .text:0x119368, 0x6fc38 bytes
    //
    _y79(sdk::unknown_ptr) stack_db_stack_comparitor;
    
    // [RtlpStackTraceDatabaseHeapEnum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf39e0, 0x67960 bytes
    // ntdll.dll .text:0x100e70, 0x6fc38 bytes
    // ntdll.dll .text:0x10e300, 0x74648 bytes
    // ntdll.dll .text:0x100e20, 0x6fc38 bytes
    //
    _y80(sdk::unknown_ptr) stack_trace_database_heap_enum;
    
    // [RtlpStaticDebugInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152d20, 0x67960 bytes
    // ntdll.dll .data:0x168e40, 0x6fc38 bytes
    // ntdll.dll .data:0x183120, 0x74648 bytes
    // ntdll.dll .data:0x169e40, 0x6fc38 bytes
    //
    _y81(sdk::unknown_ptr) static_debug_info;
    
    // [RtlpStdLockAcquire]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf3d48, 0x67960 bytes
    // ntdll.dll .text:0x1011d8, 0x6fc38 bytes
    // ntdll.dll .text:0x10e674, 0x74648 bytes
    // ntdll.dll .text:0x101188, 0x6fc38 bytes
    //
    _y82(sdk::unknown_ptr) std_lock_acquire;
    
    // [RtlpStdLockRelease]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf3d68, 0x67960 bytes
    // ntdll.dll .text:0x1011f8, 0x6fc38 bytes
    // ntdll.dll .text:0x10e694, 0x74648 bytes
    // ntdll.dll .text:0x1011a8, 0x6fc38 bytes
    //
    _y83(sdk::unknown_ptr) std_lock_release;
    
    // [RtlpSubSegmentDebugInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfcf6c, 0x67960 bytes
    // ntdll.dll .text:0x10b344, 0x6fc38 bytes
    // ntdll.dll .text:0x119948, 0x74648 bytes
    // ntdll.dll .text:0x10b2d4, 0x6fc38 bytes
    //
    _y84(sdk::unknown_ptr) sub_segment_debug_initialize;
    
    // [RtlpSubSegmentInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x35280, 0x67960 bytes
    // ntdll.dll .text:0xc510, 0x6fc38 bytes
    // ntdll.dll .text:0x41a00, 0x74648 bytes
    // ntdll.dll .text:0xc510, 0x6fc38 bytes
    //
    _y85(sdk::unknown_ptr) sub_segment_initialize;
    
    // [RtlpSystem32Dirs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1540f8, 0x67960 bytes
    // ntdll.dll .data:0x16b498, 0x6fc38 bytes
    // ntdll.dll .data:0x185048, 0x74648 bytes
    // ntdll.dll .data:0x16c498, 0x6fc38 bytes
    //
    _y86(sdk::unknown_ptr) system32_dirs;
    
    // [RtlpSystemDirs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154108, 0x67960 bytes
    // ntdll.dll .data:0x16b4a8, 0x6fc38 bytes
    // ntdll.dll .data:0x185058, 0x74648 bytes
    // ntdll.dll .data:0x16c4a8, 0x6fc38 bytes
    //
    _y87(sdk::unknown_ptr) system_dirs;
    
    // [RtlpTempBlocks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1553c8, 0x67960 bytes
    // ntdll.dll .data:0x16bb48, 0x6fc38 bytes
    // ntdll.dll .data:0x1858e0, 0x74648 bytes
    // ntdll.dll .data:0x16cb48, 0x6fc38 bytes
    //
    _y88(sdk::unknown_ptr) temp_blocks;
    
    // [RtlpTestHookInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154418, 0x67960 bytes
    // ntdll.dll .data:0x16b658, 0x6fc38 bytes
    // ntdll.dll .data:0x1851f0, 0x74648 bytes
    // ntdll.dll .data:0x16c648, 0x6fc38 bytes
    //
    _y89(sdk::unknown_ptr) test_hook_init;
    
    // [RtlpTestHookInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x13280, 0x67960 bytes
    // ntdll.dll .text:0x7ba40, 0x6fc38 bytes
    // ntdll.dll .text:0x7f4a0, 0x74648 bytes
    // ntdll.dll .text:0x7bbe0, 0x6fc38 bytes
    //
    _y90(sdk::unknown_ptr) test_hook_initialize;
    
    // [RtlpTheEmptyActivationContextData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10dc08, 0x67960 bytes
    // ntdll.dll .rdata:0x120d50, 0x6fc38 bytes
    // ntdll.dll .rdata:0x137c60, 0x74648 bytes
    // ntdll.dll .rdata:0x121050, 0x6fc38 bytes
    //
    _y91(sdk::unknown_ptr) the_empty_activation_context_data;
    
    // [RtlpTheEmptyActivationContextWrapped]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1091d0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c480, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131650, 0x74648 bytes
    // ntdll.dll .rdata:0x11c480, 0x6fc38 bytes
    //
    _y92(sdk::unknown_ptr) the_empty_activation_context_wrapped;
    
    // [RtlpTimeout]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152f00, 0x67960 bytes
    // ntdll.dll .data:0x16a000, 0x6fc38 bytes
    // ntdll.dll .data:0x183ec0, 0x74648 bytes
    // ntdll.dll .data:0x16b000, 0x6fc38 bytes
    //
    _y93(sdk::unknown_ptr) timeout;
    
    // [RtlpTimeoutDisable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ef8, 0x67960 bytes
    // ntdll.dll .data:0x169ff8, 0x6fc38 bytes
    // ntdll.dll .data:0x183eb8, 0x74648 bytes
    // ntdll.dll .data:0x16aff8, 0x6fc38 bytes
    //
    _y94(sdk::unknown_ptr) timeout_disable;
    
    // [RtlpTpETWCallbackEnqueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1338, 0x67960 bytes
    // ntdll.dll .text:0x111cc8, 0x6fc38 bytes
    // ntdll.dll .text:0x125f44, 0x74648 bytes
    // ntdll.dll .text:0x111e68, 0x6fc38 bytes
    //
    _y95(sdk::unknown_ptr) tp_etw_callback_enqueue;
    
    // [RtlpTpETWCallbackStart]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x116c, 0x67960 bytes
    // ntdll.dll .text:0x111d64, 0x6fc38 bytes
    // ntdll.dll .text:0x125fe0, 0x74648 bytes
    // ntdll.dll .text:0x111f04, 0x6fc38 bytes
    //
    _y96(sdk::unknown_ptr) tp_etw_callback_start;
    
    // [RtlpTpETWCallbackStop]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10f4, 0x67960 bytes
    // ntdll.dll .text:0x111e00, 0x6fc38 bytes
    // ntdll.dll .text:0x12607c, 0x74648 bytes
    // ntdll.dll .text:0x111fa0, 0x6fc38 bytes
    //
    _y97(sdk::unknown_ptr) tp_etw_callback_stop;
    
    // [RtlpTpImpersonate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78d4c, 0x67960 bytes
    // ntdll.dll .text:0x849dc, 0x6fc38 bytes
    // ntdll.dll .text:0x88f90, 0x74648 bytes
    // ntdll.dll .text:0x84b7c, 0x6fc38 bytes
    //
    _y98(sdk::unknown_ptr) tp_impersonate;
    
    // [RtlpTpInitializeData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x514d0, 0x67960 bytes
    // ntdll.dll .text:0x42ae8, 0x6fc38 bytes
    // ntdll.dll .text:0x4da10, 0x74648 bytes
    // ntdll.dll .text:0x42ae8, 0x6fc38 bytes
    //
    _y99(sdk::unknown_ptr) tp_initialize_data;
    
    // [RtlpTpIoAlloc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9007c, 0x67960 bytes
    // ntdll.dll .text:0x11273c, 0x6fc38 bytes
    // ntdll.dll .text:0x126a2c, 0x74648 bytes
    // ntdll.dll .text:0x1128dc, 0x6fc38 bytes
    //
    _z00(sdk::unknown_ptr) tp_io_alloc;
    
    // [RtlpTpIoCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96200, 0x67960 bytes
    // ntdll.dll .text:0x112900, 0x6fc38 bytes
    // ntdll.dll .text:0xafc60, 0x74648 bytes
    // ntdll.dll .text:0x112aa0, 0x6fc38 bytes
    //
    _z01(sdk::unknown_ptr) tp_io_callback;
    
    // [RtlpTpIoDllLoaded]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8fb88, 0x67960 bytes
    // ntdll.dll .text:0x112a4c, 0x6fc38 bytes
    // ntdll.dll .text:0xafdb6, 0x74648 bytes
    // ntdll.dll .text:0x112bec, 0x6fc38 bytes
    //
    _z02(sdk::unknown_ptr) tp_io_dll_loaded;
    
    // [RtlpTpIoDllNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8fb70, 0x67960 bytes
    // ntdll.dll .text:0x112b60, 0x6fc38 bytes
    // ntdll.dll .text:0xafed0, 0x74648 bytes
    // ntdll.dll .text:0x112d00, 0x6fc38 bytes
    //
    _z03(sdk::unknown_ptr) tp_io_dll_notification;
    
    // [RtlpTpIoDllNotificationCookie]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154488, 0x67960 bytes
    // ntdll.dll .data:0x16f4f8, 0x6fc38 bytes
    // ntdll.dll .data:0x1892a8, 0x74648 bytes
    // ntdll.dll .data:0x1704f0, 0x6fc38 bytes
    //
    _z04(sdk::unknown_ptr) tp_io_dll_notification_cookie;
    
    // [RtlpTpIoDllProcessUnloads]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff78c, 0x67960 bytes
    // ntdll.dll .text:0x112b78, 0x6fc38 bytes
    // ntdll.dll .text:0x126c00, 0x74648 bytes
    // ntdll.dll .text:0x112d18, 0x6fc38 bytes
    //
    _z05(sdk::unknown_ptr) tp_io_dll_process_unloads;
    
    // [RtlpTpIoDllUnloaded]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8fc3c, 0x67960 bytes
    // ntdll.dll .text:0x112c5c, 0x6fc38 bytes
    // ntdll.dll .text:0xafee8, 0x74648 bytes
    // ntdll.dll .text:0x112dfc, 0x6fc38 bytes
    //
    _z06(sdk::unknown_ptr) tp_io_dll_unloaded;
    
    // [RtlpTpIoLookup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ff30, 0x67960 bytes
    // ntdll.dll .text:0x112cf4, 0x6fc38 bytes
    // ntdll.dll .text:0x126cdc, 0x74648 bytes
    // ntdll.dll .text:0x112e94, 0x6fc38 bytes
    //
    _z07(sdk::unknown_ptr) tp_io_lookup;
    
    // [RtlpTpIoRegistered]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1540c0, 0x67960 bytes
    // ntdll.dll .data:0x16f4d8, 0x6fc38 bytes
    // ntdll.dll .data:0x189288, 0x74648 bytes
    // ntdll.dll .data:0x1704e8, 0x6fc38 bytes
    //
    _z08(sdk::unknown_ptr) tp_io_registered;
    
    // [RtlpTpIoRegisteredLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154478, 0x67960 bytes
    // ntdll.dll .data:0x16f4e0, 0x6fc38 bytes
    // ntdll.dll .data:0x189290, 0x74648 bytes
    // ntdll.dll .data:0x1704d8, 0x6fc38 bytes
    //
    _z09(sdk::unknown_ptr) tp_io_registered_lock;
    
    // [RtlpTpIoTree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1540c8, 0x67960 bytes
    // ntdll.dll .data:0x16f4e8, 0x6fc38 bytes
    // ntdll.dll .data:0x189298, 0x74648 bytes
    // ntdll.dll .data:0x1704f8, 0x6fc38 bytes
    //
    _z10(sdk::unknown_ptr) tp_io_tree;
    
    // [RtlpTpIoTreeLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154480, 0x67960 bytes
    // ntdll.dll .data:0x16f4f0, 0x6fc38 bytes
    // ntdll.dll .data:0x1892a0, 0x74648 bytes
    // ntdll.dll .data:0x1704e0, 0x6fc38 bytes
    //
    _z11(sdk::unknown_ptr) tp_io_tree_lock;
    
    // [RtlpTpResumeImpersonation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4e900, 0x67960 bytes
    // ntdll.dll .text:0x42aa4, 0x6fc38 bytes
    // ntdll.dll .text:0x4dc3c, 0x74648 bytes
    // ntdll.dll .text:0x42aa4, 0x6fc38 bytes
    //
    _z12(sdk::unknown_ptr) tp_resume_impersonation;
    
    // [RtlpTpRevertCapture]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51544, 0x67960 bytes
    // ntdll.dll .text:0x42b5c, 0x6fc38 bytes
    // ntdll.dll .text:0x4d990, 0x74648 bytes
    // ntdll.dll .text:0x42b5c, 0x6fc38 bytes
    //
    _z13(sdk::unknown_ptr) tp_revert_capture;
    
    // [RtlpTpTimerCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78c30, 0x67960 bytes
    // ntdll.dll .text:0x42410, 0x6fc38 bytes
    // ntdll.dll .text:0x4c020, 0x74648 bytes
    // ntdll.dll .text:0x42410, 0x6fc38 bytes
    //
    _z14(sdk::unknown_ptr) tp_timer_callback;
    
    // [RtlpTpTimerFinalizationCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51ed0, 0x67960 bytes
    // ntdll.dll .text:0x468d0, 0x6fc38 bytes
    // ntdll.dll .text:0x50650, 0x74648 bytes
    // ntdll.dll .text:0x468d0, 0x6fc38 bytes
    //
    _z15(sdk::unknown_ptr) tp_timer_finalization_callback;
    
    // [RtlpTpTimerQueueRundown]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5490c, 0x67960 bytes
    // ntdll.dll .text:0x47044, 0x6fc38 bytes
    // ntdll.dll .text:0x51f60, 0x74648 bytes
    // ntdll.dll .text:0x47044, 0x6fc38 bytes
    //
    _z16(sdk::unknown_ptr) tp_timer_queue_rundown;
    
    // [RtlpTpTimerRundown]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51e6c, 0x67960 bytes
    // ntdll.dll .text:0x4419c, 0x6fc38 bytes
    // ntdll.dll .text:0x4f96c, 0x74648 bytes
    // ntdll.dll .text:0x4419c, 0x6fc38 bytes
    //
    _z17(sdk::unknown_ptr) tp_timer_rundown;
    
    // [RtlpTpWaitCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52dc0, 0x67960 bytes
    // ntdll.dll .text:0x77ad0, 0x6fc38 bytes
    // ntdll.dll .text:0x4e530, 0x74648 bytes
    // ntdll.dll .text:0x77c70, 0x6fc38 bytes
    //
    _z18(sdk::unknown_ptr) tp_wait_callback;
    
    // [RtlpTpWaitCheckReset]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52f08, 0x67960 bytes
    // ntdll.dll .text:0x77bec, 0x6fc38 bytes
    // ntdll.dll .text:0x4e654, 0x74648 bytes
    // ntdll.dll .text:0x77d8c, 0x6fc38 bytes
    //
    _z19(sdk::unknown_ptr) tp_wait_check_reset;
    
    // [RtlpTpWaitFinalizationCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x522c0, 0x67960 bytes
    // ntdll.dll .text:0x452a0, 0x6fc38 bytes
    // ntdll.dll .text:0x502c0, 0x74648 bytes
    // ntdll.dll .text:0x452a0, 0x6fc38 bytes
    //
    _z20(sdk::unknown_ptr) tp_wait_finalization_callback;
    
    // [RtlpTpWaitRundown]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52274, 0x67960 bytes
    // ntdll.dll .text:0x45250, 0x6fc38 bytes
    // ntdll.dll .text:0x4fc8c, 0x74648 bytes
    // ntdll.dll .text:0x45250, 0x6fc38 bytes
    //
    _z21(sdk::unknown_ptr) tp_wait_rundown;
    
    // [RtlpTpWorkCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4eb30, 0x67960 bytes
    // ntdll.dll .text:0x42c70, 0x6fc38 bytes
    // ntdll.dll .text:0x4cf30, 0x74648 bytes
    // ntdll.dll .text:0x42c70, 0x6fc38 bytes
    //
    _z22(sdk::unknown_ptr) tp_work_callback;
    
    // [RtlpTpWorkTaskCallbacks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109460, 0x67960 bytes
    // ntdll.dll .rdata:0x11c390, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131500, 0x74648 bytes
    // ntdll.dll .rdata:0x11c390, 0x6fc38 bytes
    //
    _z23(sdk::unknown_ptr) tp_work_task_callbacks;
    
    // [RtlpTpWorkUnposted]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4e940, 0x67960 bytes
    // ntdll.dll .text:0x433a0, 0x6fc38 bytes
    // ntdll.dll .text:0x4fa60, 0x74648 bytes
    // ntdll.dll .text:0x433a0, 0x6fc38 bytes
    //
    _z24(sdk::unknown_ptr) tp_work_unposted;
    
    // [RtlpTraceDatabaseFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf4600, 0x67960 bytes
    // ntdll.dll .text:0x10251c, 0x6fc38 bytes
    // ntdll.dll .text:0x10f6d4, 0x74648 bytes
    // ntdll.dll .text:0x1024ac, 0x6fc38 bytes
    //
    _z25(sdk::unknown_ptr) trace_database_free;
    
    // [RtlpTraverseParents]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1a8fc, 0x67960 bytes
    // ntdll.dll .text:0x52e0c, 0x6fc38 bytes
    // ntdll.dll .text:0x3fd0, 0x74648 bytes
    // ntdll.dll .text:0x52e0c, 0x6fc38 bytes
    //
    _z26(sdk::unknown_ptr) traverse_parents;
    
    // [RtlpUnWaitCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f510, 0x67960 bytes
    // ntdll.dll .text:0xe8cc0, 0x6fc38 bytes
    // ntdll.dll .text:0xf3c20, 0x74648 bytes
    // ntdll.dll .text:0xe8c30, 0x6fc38 bytes
    //
    _z27(sdk::unknown_ptr) un_wait_critical_section;
    
    // [RtlpUnhandledExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153310, 0x67960 bytes
    // ntdll.dll .data:0x16a450, 0x6fc38 bytes
    // ntdll.dll .data:0x184320, 0x74648 bytes
    // ntdll.dll .data:0x16b450, 0x6fc38 bytes
    //
    _z28(sdk::unknown_ptr) unhandled_exception_filter;
    
    // [RtlpUninitializeAssemblyStorageMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8533c, 0x67960 bytes
    // ntdll.dll .text:0x81bfc, 0x6fc38 bytes
    // ntdll.dll .text:0x85850, 0x74648 bytes
    // ntdll.dll .text:0x81d9c, 0x6fc38 bytes
    //
    _z29(sdk::unknown_ptr) uninitialize_assembly_storage_map;
    
    // [RtlpUnloadEventTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153420, 0x67960 bytes
    // ntdll.dll .data:0x16a540, 0x6fc38 bytes
    // ntdll.dll .data:0x184400, 0x74648 bytes
    // ntdll.dll .data:0x16b540, 0x6fc38 bytes
    //
    _z30(sdk::unknown_ptr) unload_event_trace;
    
    // [RtlpUnloadEventTraceEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153f98, 0x67960 bytes
    // ntdll.dll .data:0x16b168, 0x6fc38 bytes
    // ntdll.dll .data:0x184c08, 0x74648 bytes
    // ntdll.dll .data:0x16c168, 0x6fc38 bytes
    //
    _z31(sdk::unknown_ptr) unload_event_trace_ex;
    
    // [RtlpUnloadEventTraceExNumber]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150690, 0x67960 bytes
    // ntdll.dll .data:0x167790, 0x6fc38 bytes
    // ntdll.dll .data:0x1817f0, 0x74648 bytes
    // ntdll.dll .data:0x168790, 0x6fc38 bytes
    //
    _z32(sdk::unknown_ptr) unload_event_trace_ex_number;
    
    // [RtlpUnloadEventTraceExSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1506a0, 0x67960 bytes
    // ntdll.dll .data:0x1677b0, 0x6fc38 bytes
    // ntdll.dll .data:0x181810, 0x74648 bytes
    // ntdll.dll .data:0x1687b0, 0x6fc38 bytes
    //
    _z33(sdk::unknown_ptr) unload_event_trace_ex_size;
    
    // [RtlpUnlockHeapManagerForCloning]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xebc98, 0x67960 bytes
    // ntdll.dll .text:0xf4404, 0x6fc38 bytes
    // ntdll.dll .text:0xffcd8, 0x74648 bytes
    // ntdll.dll .text:0xf43b4, 0x6fc38 bytes
    //
    _z34(sdk::unknown_ptr) unlock_heap_manager_for_cloning;
    
    // [RtlpUnlockStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2420, 0x67960 bytes
    // ntdll.dll .text:0x85c40, 0x6fc38 bytes
    // ntdll.dll .text:0x87200, 0x74648 bytes
    // ntdll.dll .text:0x85de0, 0x6fc38 bytes
    //
    _z35(sdk::unknown_ptr) unlock_stack;
    
    // [RtlpUnregisterLockedMemoryBlockLookaside]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1d40, 0x67960 bytes
    // ntdll.dll .text:0x7fdf4, 0x6fc38 bytes
    // ntdll.dll .text:0x51fa8, 0x74648 bytes
    // ntdll.dll .text:0x7ff94, 0x6fc38 bytes
    //
    _z36(sdk::unknown_ptr) unregister_locked_memory_block_lookaside;
    
    // [RtlpUnregisterLockedMemoryZone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1d00, 0x67960 bytes
    // ntdll.dll .text:0x7fdb4, 0x6fc38 bytes
    // ntdll.dll .text:0x525a4, 0x74648 bytes
    // ntdll.dll .text:0x7ff54, 0x6fc38 bytes
    //
    _z37(sdk::unknown_ptr) unregister_locked_memory_zone;
    
    // [RtlpUpdateHeapWatermarks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed354, 0x67960 bytes
    // ntdll.dll .text:0x86528, 0x6fc38 bytes
    // ntdll.dll .text:0x89b94, 0x74648 bytes
    // ntdll.dll .text:0x866c8, 0x6fc38 bytes
    //
    _z38(sdk::unknown_ptr) update_heap_watermarks;
    
    // [RtlpUpdateTagEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xebe2c, 0x67960 bytes
    // ntdll.dll .text:0xf4570, 0x6fc38 bytes
    // ntdll.dll .text:0xfffac, 0x74648 bytes
    // ntdll.dll .text:0xf4520, 0x6fc38 bytes
    //
    _z39(sdk::unknown_ptr) update_tag_entry;
    
    // [RtlpUpdateTEBLanguage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1dc38, 0x67960 bytes
    // ntdll.dll .text:0x6a8c4, 0x6fc38 bytes
    // ntdll.dll .text:0x70508, 0x74648 bytes
    // ntdll.dll .text:0x6a9e4, 0x6fc38 bytes
    //
    _z40(sdk::unknown_ptr) update_teb_language;
    
    // [RtlpUpdateUCRIndexInsert]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x11490, 0x67960 bytes
    // ntdll.dll .text:0xf2a8, 0x6fc38 bytes
    // ntdll.dll .text:0x466a0, 0x74648 bytes
    // ntdll.dll .text:0xf2a8, 0x6fc38 bytes
    //
    _z41(sdk::unknown_ptr) update_ucr_index_insert;
    
    // [RtlpUpdateUCRIndexRemove]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82320, 0x67960 bytes
    // ntdll.dll .text:0xf420, 0x6fc38 bytes
    // ntdll.dll .text:0x46784, 0x74648 bytes
    // ntdll.dll .text:0xf420, 0x6fc38 bytes
    //
    _z42(sdk::unknown_ptr) update_ucr_index_remove;
    
    // [RtlpUserPolicies]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544c0, 0x67960 bytes
    // ntdll.dll .data:0x16b758, 0x6fc38 bytes
    // ntdll.dll .data:0x1852a0, 0x74648 bytes
    // ntdll.dll .data:0x16c758, 0x6fc38 bytes
    //
    _z43(sdk::unknown_ptr) user_policies;
    
    // [RtlpValidLabelSubjectContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe2400, 0x67960 bytes
    // ntdll.dll .text:0xe84c0, 0x6fc38 bytes
    // ntdll.dll .text:0xf33fc, 0x74648 bytes
    // ntdll.dll .text:0xe8430, 0x6fc38 bytes
    //
    _z44(sdk::unknown_ptr) valid_label_subject_context;
    
    // [RtlpValidOwnerSubjectContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x56158, 0x67960 bytes
    // ntdll.dll .text:0x7c10c, 0x6fc38 bytes
    // ntdll.dll .text:0x84c9c, 0x74648 bytes
    // ntdll.dll .text:0x7c2ac, 0x6fc38 bytes
    //
    _z45(sdk::unknown_ptr) valid_owner_subject_context;
    
    // [RtlpValidateActivationContextData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x194cc, 0x67960 bytes
    // ntdll.dll .text:0x729b8, 0x6fc38 bytes
    // ntdll.dll .text:0x75ba8, 0x74648 bytes
    // ntdll.dll .text:0x72b58, 0x6fc38 bytes
    //
    _z46(sdk::unknown_ptr) validate_activation_context_data;
    
    // [RtlpValidateHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x94180, 0x67960 bytes
    // ntdll.dll .text:0xf9e54, 0x6fc38 bytes
    // ntdll.dll .text:0x106990, 0x74648 bytes
    // ntdll.dll .text:0xf9e04, 0x6fc38 bytes
    //
    _z47(sdk::unknown_ptr) validate_heap;
    
    // [RtlpValidateHeapEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x77b08, 0x67960 bytes
    // ntdll.dll .text:0x64380, 0x6fc38 bytes
    // ntdll.dll .text:0x86e24, 0x74648 bytes
    // ntdll.dll .text:0x644a0, 0x6fc38 bytes
    //
    _z48(sdk::unknown_ptr) validate_heap_entry;
    
    // [RtlpValidateHeapHdrsEnable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x155438, 0x67960 bytes
    // ntdll.dll .data:0x16bb80, 0x6fc38 bytes
    // ntdll.dll .data:0x185918, 0x74648 bytes
    // ntdll.dll .data:0x16cb80, 0x6fc38 bytes
    //
    _z49(sdk::unknown_ptr) validate_heap_hdrs_enable;
    
    // [RtlpValidateHeapHeaders]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f034, 0x67960 bytes
    // ntdll.dll .text:0xfa434, 0x6fc38 bytes
    // ntdll.dll .text:0x106f74, 0x74648 bytes
    // ntdll.dll .text:0xfa3e4, 0x6fc38 bytes
    //
    _z50(sdk::unknown_ptr) validate_heap_headers;
    
    // [RtlpValidateHeapSegment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfc5c0, 0x67960 bytes
    // ntdll.dll .text:0xfa5f0, 0x6fc38 bytes
    // ntdll.dll .text:0x107130, 0x74648 bytes
    // ntdll.dll .text:0xfa5a0, 0x6fc38 bytes
    //
    _z51(sdk::unknown_ptr) validate_heap_segment;
    
    // [RtlpValidateHeapTagsEnable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151650, 0x67960 bytes
    // ntdll.dll .data:0x168c48, 0x6fc38 bytes
    // ntdll.dll .data:0x182ee8, 0x74648 bytes
    // ntdll.dll .data:0x169c48, 0x6fc38 bytes
    //
    _z52(sdk::unknown_ptr) validate_heap_tags_enable;
    
    // [RtlpValidateLFHBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90cbc, 0x67960 bytes
    // ntdll.dll .text:0x10b620, 0x6fc38 bytes
    // ntdll.dll .text:0xaf166, 0x74648 bytes
    // ntdll.dll .text:0x10b5b0, 0x6fc38 bytes
    //
    _z53(sdk::function<uint8_t(void*, struct heap::entry_t*)>*) validate_lfh_block;
    
    // [RtlpValidateRange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6dc8, 0x67960 bytes
    // ntdll.dll .text:0xd8df8, 0x6fc38 bytes
    // ntdll.dll .text:0xe3678, 0x74648 bytes
    // ntdll.dll .text:0xd8d68, 0x6fc38 bytes
    //
    _z54(sdk::unknown_ptr) validate_range;
    
    // [RtlpValidateRemoteDebugInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd6ea0, 0x67960 bytes
    // ntdll.dll .text:0xd8f0c, 0x6fc38 bytes
    // ntdll.dll .text:0xe3798, 0x74648 bytes
    // ntdll.dll .text:0xd8e7c, 0x6fc38 bytes
    //
    _z55(sdk::unknown_ptr) validate_remote_debug_information;
    
    // [RtlpVerifyAndCommitUILanguageSettings]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8d3d0, 0x67960 bytes
    // ntdll.dll .text:0x8a840, 0x6fc38 bytes
    // ntdll.dll .text:0x8dbe0, 0x74648 bytes
    // ntdll.dll .text:0x8a9e0, 0x6fc38 bytes
    //
    _z56(sdk::unknown_ptr) verify_and_commit_ui_language_settings;
    
    // [RtlpWaitCouldDeadlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2faf0, 0x67960 bytes
    // ntdll.dll .text:0x461e0, 0x6fc38 bytes
    // ntdll.dll .text:0x34b50, 0x74648 bytes
    // ntdll.dll .text:0x461e0, 0x6fc38 bytes
    //
    _z57(sdk::unknown_ptr) wait_could_deadlock;
    
    // [RtlpWaitForCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0xf3c80, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _z58(sdk::unknown_ptr) wait_for_critical_section;
    
    // [RtlpWaitOnAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f8fc, 0x67960 bytes
    // ntdll.dll .text:0x45fa4, 0x6fc38 bytes
    // ntdll.dll .text:0x4ff84, 0x74648 bytes
    // ntdll.dll .text:0x45fa4, 0x6fc38 bytes
    //
    _z59(sdk::unknown_ptr) wait_on_address;
    
    // [RtlpWaitOnAddressRemoveWaitBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f414, 0x67960 bytes
    // ntdll.dll .text:0x4628c, 0x6fc38 bytes
    // ntdll.dll .text:0x50084, 0x74648 bytes
    // ntdll.dll .text:0x4628c, 0x6fc38 bytes
    //
    _z60(sdk::unknown_ptr) wait_on_address_remove_wait_block;
    
    // [RtlpWaitOnAddressWakeEntireList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f5c0, 0x67960 bytes
    // ntdll.dll .text:0x46890, 0x6fc38 bytes
    // ntdll.dll .text:0x50614, 0x74648 bytes
    // ntdll.dll .text:0x46890, 0x6fc38 bytes
    //
    _z61(sdk::unknown_ptr) wait_on_address_wake_entire_list;
    
    // [RtlpWaitOnAddressWithTimeout]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2fa64, 0x67960 bytes
    // ntdll.dll .text:0x4611c, 0x6fc38 bytes
    // ntdll.dll .text:0x33fe4, 0x74648 bytes
    // ntdll.dll .text:0x4611c, 0x6fc38 bytes
    //
    _z62(sdk::unknown_ptr) wait_on_address_with_timeout;
    
    // [RtlpWaitOnCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f764, 0x67960 bytes
    // ntdll.dll .text:0x45d70, 0x6fc38 bytes
    // ntdll.dll .text:0x340b0, 0x74648 bytes
    // ntdll.dll .text:0x45d70, 0x6fc38 bytes
    //
    _z63(sdk::unknown_ptr) wait_on_critical_section;
    
    // [RtlpWakeByAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f560, 0x67960 bytes
    // ntdll.dll .text:0x45a5c, 0x6fc38 bytes
    // ntdll.dll .text:0x2a19c, 0x74648 bytes
    // ntdll.dll .text:0x45a5c, 0x6fc38 bytes
    //
    _z64(sdk::unknown_ptr) wake_by_address;
    
    // [RtlpWakeConditionVariable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6b5b4, 0x67960 bytes
    // ntdll.dll .text:0x79614, 0x6fc38 bytes
    // ntdll.dll .text:0x69bbc, 0x74648 bytes
    // ntdll.dll .text:0x797b4, 0x6fc38 bytes
    //
    _z65(sdk::unknown_ptr) wake_condition_variable;
    
    // [RtlpWakeSingle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6b2a4, 0x67960 bytes
    // ntdll.dll .text:0x64ff0, 0x6fc38 bytes
    // ntdll.dll .text:0x6991c, 0x74648 bytes
    // ntdll.dll .text:0x65110, 0x6fc38 bytes
    //
    _z66(sdk::unknown_ptr) wake_single;
    
    // [RtlpWakeSRWLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x77334, 0x67960 bytes
    // ntdll.dll .text:0x334ac, 0x6fc38 bytes
    // ntdll.dll .text:0x31850, 0x74648 bytes
    // ntdll.dll .text:0x334ac, 0x6fc38 bytes
    //
    _z67(sdk::unknown_ptr) wake_srw_lock;
    
    // [RtlpWalkCallbackRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x95df0, 0x67960 bytes
    // ntdll.dll .text:0xd9300, 0x6fc38 bytes
    // ntdll.dll .text:0xada00, 0x74648 bytes
    // ntdll.dll .text:0xd9270, 0x6fc38 bytes
    //
    _z68(sdk::unknown_ptr) walk_callback_routine;
    
    // [RtlpWalkHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1809c, 0x67960 bytes
    // ntdll.dll .text:0xf476c, 0x6fc38 bytes
    // ntdll.dll .text:0x1001a8, 0x74648 bytes
    // ntdll.dll .text:0xf471c, 0x6fc38 bytes
    //
    _z69(sdk::unknown_ptr) walk_heap;
    
    // [RtlpWalkHeapInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x17f7c, 0x67960 bytes
    // ntdll.dll .text:0x1c4c, 0x6fc38 bytes
    // ntdll.dll .text:0x63b5c, 0x74648 bytes
    // ntdll.dll .text:0x1c4c, 0x6fc38 bytes
    //
    _z70(sdk::unknown_ptr) walk_heap_internal;
    
    // [RtlpWalkLFHBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x187f0, 0x67960 bytes
    // ntdll.dll .text:0x10b6a0, 0x6fc38 bytes
    // ntdll.dll .text:0xaf1e4, 0x74648 bytes
    // ntdll.dll .text:0x10b630, 0x6fc38 bytes
    //
    _z71(sdk::unknown_ptr) walk_lfh_block;
    
    // [RtlpWalkLowFragHeapSegment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1070, 0x67960 bytes
    // ntdll.dll .text:0x10bcd8, 0x6fc38 bytes
    // ntdll.dll .text:0x119c28, 0x74648 bytes
    // ntdll.dll .text:0x10bc68, 0x6fc38 bytes
    //
    _z72(sdk::unknown_ptr) walk_low_frag_heap_segment;
    
    // [RtlpWin32NtNameToNtPathName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd5e4, 0x67960 bytes
    // ntdll.dll .text:0x3bc6c, 0x6fc38 bytes
    // ntdll.dll .text:0x19394, 0x74648 bytes
    // ntdll.dll .text:0x3bc6c, 0x6fc38 bytes
    //
    _z73(sdk::unknown_ptr) win32_nt_name_to_nt_path_name;
    
    // [RtlpWin32NtRoot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109680, 0x67960 bytes
    // ntdll.dll .rdata:0x11c700, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131880, 0x74648 bytes
    // ntdll.dll .rdata:0x11c700, 0x6fc38 bytes
    //
    _z74(sdk::unknown_ptr) win32_nt_root;
    
    // [RtlpWin32NtRootSlash]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109670, 0x67960 bytes
    // ntdll.dll .rdata:0x11c6f0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131870, 0x74648 bytes
    // ntdll.dll .rdata:0x11c6f0, 0x6fc38 bytes
    //
    _z75(sdk::unknown_ptr) win32_nt_root_slash;
    
    // [RtlpWin32NtUncRoot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1096a0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c720, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1318a0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c720, 0x6fc38 bytes
    //
    _z76(sdk::unknown_ptr) win32_nt_unc_root;
    
    // [RtlpWin32NtUncRootSlash]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109690, 0x67960 bytes
    // ntdll.dll .rdata:0x11c710, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131890, 0x74648 bytes
    // ntdll.dll .rdata:0x11c710, 0x6fc38 bytes
    //
    _z77(sdk::unknown_ptr) win32_nt_unc_root_slash;
    
    // [RtlpWnfCalculateAndSetNextTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdae38, 0x67960 bytes
    // ntdll.dll .text:0x89f3c, 0x6fc38 bytes
    // ntdll.dll .text:0xe8d08, 0x74648 bytes
    // ntdll.dll .text:0x8a0dc, 0x6fc38 bytes
    //
    _z78(sdk::unknown_ptr) wnf_calculate_and_set_next_timer;
    
    // [RtlpWnfETWEventCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdaee8, 0x67960 bytes
    // ntdll.dll .text:0xde6e8, 0x6fc38 bytes
    // ntdll.dll .text:0xe8e50, 0x74648 bytes
    // ntdll.dll .text:0xde658, 0x6fc38 bytes
    //
    _z79(sdk::unknown_ptr) wnf_etw_event_callback;
    
    // [RtlpWnfETWEventNameSubRundown]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdaf78, 0x67960 bytes
    // ntdll.dll .text:0xde798, 0x6fc38 bytes
    // ntdll.dll .text:0xe8f18, 0x74648 bytes
    // ntdll.dll .text:0xde708, 0x6fc38 bytes
    //
    _z80(sdk::unknown_ptr) wnf_etw_event_name_sub_rundown;
    
    // [RtlpWnfETWEventPublish]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdafe4, 0x67960 bytes
    // ntdll.dll .text:0xde828, 0x6fc38 bytes
    // ntdll.dll .text:0xe8fa8, 0x74648 bytes
    // ntdll.dll .text:0xde798, 0x6fc38 bytes
    //
    _z81(sdk::unknown_ptr) wnf_etw_event_publish;
    
    // [RtlpWnfETWEventSubscribe]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb050, 0x67960 bytes
    // ntdll.dll .text:0xde8b8, 0x6fc38 bytes
    // ntdll.dll .text:0xe9038, 0x74648 bytes
    // ntdll.dll .text:0xde828, 0x6fc38 bytes
    //
    _z82(sdk::unknown_ptr) wnf_etw_event_subscribe;
    
    // [RtlpWnfETWEventUnsubscribe]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb0d8, 0x67960 bytes
    // ntdll.dll .text:0xde964, 0x6fc38 bytes
    // ntdll.dll .text:0xe90f4, 0x74648 bytes
    // ntdll.dll .text:0xde8d4, 0x6fc38 bytes
    //
    _z83(sdk::unknown_ptr) wnf_etw_event_unsubscribe;
    
    // [RtlpWnfMarkFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb160, 0x67960 bytes
    // ntdll.dll .text:0x8aa18, 0x6fc38 bytes
    // ntdll.dll .text:0xe91b0, 0x74648 bytes
    // ntdll.dll .text:0x8abb8, 0x6fc38 bytes
    //
    _z84(sdk::unknown_ptr) wnf_mark_failure;
    
    // [RtlpWnfMetaCallbackProc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x556e0, 0x67960 bytes
    // ntdll.dll .text:0x844f0, 0x6fc38 bytes
    // ntdll.dll .text:0x88330, 0x74648 bytes
    // ntdll.dll .text:0x84690, 0x6fc38 bytes
    //
    _z85(sdk::unknown_ptr) wnf_meta_callback_proc;
    
    // [RtlpWnfNotificationThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52f80, 0x67960 bytes
    // ntdll.dll .text:0x439f0, 0x6fc38 bytes
    // ntdll.dll .text:0x4c820, 0x74648 bytes
    // ntdll.dll .text:0x439f0, 0x6fc38 bytes
    //
    _z86(sdk::unknown_ptr) wnf_notification_thread;
    
    // [RtlpWnfProcessCurrentDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53098, 0x67960 bytes
    // ntdll.dll .text:0x424ec, 0x6fc38 bytes
    // ntdll.dll .text:0x4dd44, 0x74648 bytes
    // ntdll.dll .text:0x424ec, 0x6fc38 bytes
    //
    _z87(sdk::unknown_ptr) wnf_process_current_descriptor;
    
    // [RtlpWnfRegisterTpNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x15aa4, 0x67960 bytes
    // ntdll.dll .text:0x7b8e4, 0x6fc38 bytes
    // ntdll.dll .text:0x503c4, 0x74648 bytes
    // ntdll.dll .text:0x7ba84, 0x6fc38 bytes
    //
    _z88(sdk::unknown_ptr) wnf_register_tp_notification;
    
    // [RtlpWnfRetryTimerCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb240, 0x67960 bytes
    // ntdll.dll .text:0x89db0, 0x6fc38 bytes
    // ntdll.dll .text:0xe9290, 0x74648 bytes
    // ntdll.dll .text:0x89f50, 0x6fc38 bytes
    //
    _z89(sdk::unknown_ptr) wnf_retry_timer_callback;
    
    // [RtlpWnfSetRetryTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb3cc, 0x67960 bytes
    // ntdll.dll .text:0x89ff0, 0x6fc38 bytes
    // ntdll.dll .text:0xe9420, 0x74648 bytes
    // ntdll.dll .text:0x8a190, 0x6fc38 bytes
    //
    _z90(sdk::unknown_ptr) wnf_set_retry_timer;
    
    // [RtlpWnfWalkUserSubscriptionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53258, 0x67960 bytes
    // ntdll.dll .text:0x41e98, 0x6fc38 bytes
    // ntdll.dll .text:0x4df28, 0x74648 bytes
    // ntdll.dll .text:0x41e98, 0x6fc38 bytes
    //
    _z91(sdk::unknown_ptr) wnf_walk_user_subscription_list;
    
    // [RtlpWow64OpenThreadProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd9978, 0x67960 bytes
    // ntdll.dll .text:0xdc4a8, 0x6fc38 bytes
    // ntdll.dll .text:0x1e1c, 0x74648 bytes
    // ntdll.dll .text:0xdc418, 0x6fc38 bytes
    //
    _z92(sdk::unknown_ptr) wow64_open_thread_process;
    
    // [RtlpWow64SelectSystem32PathInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70e04, 0x67960 bytes
    // ntdll.dll .text:0x860ac, 0x6fc38 bytes
    // ntdll.dll .text:0x85fac, 0x74648 bytes
    // ntdll.dll .text:0x8624c, 0x6fc38 bytes
    //
    _z93(sdk::unknown_ptr) wow64_select_system32_path_internal;
    
    // [RtlpZeroBlockFromOffset]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6df64, 0x67960 bytes
    // ntdll.dll .text:0xdd24, 0x6fc38 bytes
    // ntdll.dll .text:0x7c940, 0x74648 bytes
    // ntdll.dll .text:0xdd24, 0x6fc38 bytes
    //
    _z94(sdk::unknown_ptr) zero_block_from_offset;
};
#include "magic/api.end.hpp"
