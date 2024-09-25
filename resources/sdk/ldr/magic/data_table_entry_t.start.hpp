#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LDR_DATA_TABLE_ENTRY.InLoadOrderLinks", in_load_order_links, 0x0, 0x80, true, 0x6831b05d2740c3d7)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LDR_DATA_TABLE_ENTRY.InMemoryOrderLinks", in_memory_order_links, 0x80, 0x80, true, 0xe05e267a4cac955e)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LDR_DATA_TABLE_ENTRY.InInitializationOrderLinks", in_initialization_order_links, 0x100, 0x80, true, 0x9d0da71411e09d9)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_DATA_TABLE_ENTRY.DllBase", dll_base, 0x180, 0x40, true, 0x37b29040c7e43df3)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint8_t(void*, uint32_t, void*)>*, void*>), "_LDR_DATA_TABLE_ENTRY.EntryPoint", entry_point, 0x1c0, 0x40, true, 0x12006f647c6496f9)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY.SizeOfImage", size_of_image, 0x200, 0x20, true, 0xfca3f177ea8951ec)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_LDR_DATA_TABLE_ENTRY.FullDllName", full_dll_name, 0x240, 0x80, true, 0x734d6b9b5dc282f0)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_LDR_DATA_TABLE_ENTRY.BaseDllName", base_dll_name, 0x2c0, 0x80, true, 0x5950ca5bcb85778e)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_LDR_DATA_TABLE_ENTRY.FlagGroup", flag_group, 0x340, 0x20, true, 0xcfb77afc7debc662)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY.Flags", flags, 0x340, 0x20, true, 0x7b7a167a0d470e0e)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.PackagedBinary", packaged_binary, 0x340, 0x1, true, 0x42fbf227a67afcf, 1, uint32_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.MarkedForRemoval", marked_for_removal, 0x341, 0x1, true, 0x467beab3338c0da9, 1, uint32_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.ImageDll", image_dll, 0x342, 0x1, true, 0x8aa733830695d6cf, 1, uint32_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.LoadNotificationsSent", load_notifications_sent, 0x343, 0x1, true, 0xfbb450d310fccd30, 1, uint32_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.TelemetryEntryProcessed", telemetry_entry_processed, 0x344, 0x1, true, 0xf6112db3d4ad75c2, 1, uint32_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.ProcessStaticImport", process_static_import, 0x345, 0x1, true, 0x92507163b623baf1, 1, uint32_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.InLegacyLists", in_legacy_lists, 0x346, 0x1, true, 0x466210ac99776611, 1, uint32_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.InIndexes", in_indexes, 0x347, 0x1, true, 0xf35d6ba7c8e258e7, 1, uint32_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.ShimDll", shim_dll, 0x348, 0x1, true, 0x62d94328bdd60c6b, 1, uint32_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.InExceptionTable", in_exception_table, 0x349, 0x1, true, 0x9ff0c97ea39005e8, 1, uint32_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.LoadInProgress", load_in_progress, 0x34c, 0x1, true, 0xd75b8d1064169401, 1, uint32_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.LoadConfigProcessed", load_config_processed, 0x34d, 0x1, true, 0xd4cbc6ba12e06c6e, 1, uint32_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.EntryProcessed", entry_processed, 0x34e, 0x1, true, 0x25d204472d3a29b8, 1, uint32_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.ProtectDelayLoad", protect_delay_load, 0x34f, 0x1, true, 0xaeae74392b02d122, 1, uint32_t)
#define _m024 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.DontCallForThreads", dont_call_for_threads, 0x352, 0x1, true, 0x8ba09993bc3c9d5c, 1, uint32_t)
#define _m025 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.ProcessAttachCalled", process_attach_called, 0x353, 0x1, true, 0x9d72e6100c3c2e11, 1, uint32_t)
#define _m026 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.ProcessAttachFailed", process_attach_failed, 0x354, 0x1, true, 0x9e297d51d9ec4fc2, 1, uint32_t)
#define _m027 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.CorDeferredValidate", cor_deferred_validate, 0x355, 0x1, true, 0x1ee70a0ddadc878f, 1, uint32_t)
#define _m028 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.CorImage", cor_image, 0x356, 0x1, true, 0xf88e4dca7029e561, 1, uint32_t)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.DontRelocate", dont_relocate, 0x357, 0x1, true, 0x735d21d9d43e7aa2, 1, uint32_t)
#define _m030 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.CorILOnly", cor_il_only, 0x358, 0x1, true, 0x95e5814f92b69442, 1, uint32_t)
#define _m031 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.Redirected", redirected, 0x35c, 0x1, true, 0xaeda4c20f78ddb9e, 1, uint32_t)
#define _m032 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.CompatDatabaseProcessed", compat_database_processed, 0x35f, 0x1, true, 0x9b4f3fa391177f82, 1, uint32_t)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_DATA_TABLE_ENTRY.ObsoleteLoadCount", obsolete_load_count, 0x360, 0x10, true, 0x785cbc323122d6fc)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_DATA_TABLE_ENTRY.TlsIndex", tls_index, 0x370, 0x10, true, 0xba88228041a1b0c1)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LDR_DATA_TABLE_ENTRY.HashLinks", hash_links, 0x380, 0x80, true, 0x9f1a97661607c9b2)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY.TimeDateStamp", time_date_stamp, 0x400, 0x20, true, 0xa92812f212e8ccf3)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_t*), "_LDR_DATA_TABLE_ENTRY.EntryPointActivationContext", entry_point_activation_context, 0x440, 0x40, true, 0x663fa1d685f7806a)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_DATA_TABLE_ENTRY.Lock", lock, 0x480, 0x40, true, 0x2cfccedddccdd910)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::ddag_node_t*), "_LDR_DATA_TABLE_ENTRY.DdagNode", ddag_node, 0x4c0, 0x40, true, 0x85c7d412bf1f7f13)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LDR_DATA_TABLE_ENTRY.NodeModuleLink", node_module_link, 0x500, 0x80, true, 0x5f07fadc78d73872)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldrp::load_context_t*), "_LDR_DATA_TABLE_ENTRY.LoadContext", load_context, 0x580, 0x40, true, 0x8706e961bbb07b7e)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_DATA_TABLE_ENTRY.ParentDllBase", parent_dll_base, 0x5c0, 0x40, true, 0xde014b228400cf45)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_DATA_TABLE_ENTRY.SwitchBackContext", switch_back_context, 0x600, 0x40, true, 0x5a034ab2ec49dbb4)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_LDR_DATA_TABLE_ENTRY.BaseAddressIndexNode", base_address_index_node, 0x640, 0xc0, true, 0x72406acf6231cf0b)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_LDR_DATA_TABLE_ENTRY.MappingInfoIndexNode", mapping_info_index_node, 0x700, 0xc0, true, 0x5c77765a85080ee6)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_DATA_TABLE_ENTRY.OriginalBase", original_base, 0x7c0, 0x40, true, 0x8db15312e30c490e)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_LDR_DATA_TABLE_ENTRY.LoadTime", load_time, 0x800, 0x40, true, 0xb8d38ec9dc65cd72)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY.BaseNameHashValue", base_name_hash_value, 0x840, 0x20, true, 0x1a844a570c4b25db)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum ldr::dll_load_reason_t), "_LDR_DATA_TABLE_ENTRY.LoadReason", load_reason, 0x860, 0x20, true, 0xd9dce9af58c4a66f)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY.ImplicitPathOptions", implicit_path_options, 0x880, 0x20, true, 0xd3644e78c87f441)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY.ReferenceCount", reference_count, 0x8a0, 0x20, true, 0xebcfd2007d7ce29)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY.DependentLoadFlags", dependent_load_flags, 0x8c0, 0x20, true, 0x188a1cd9af704aa5)
#define _m053 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.ChpeImage", chpe_image, 0x359, 0x1, true, 0xc29cfcecfb7723db, 1, uint32_t)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LDR_DATA_TABLE_ENTRY.SigningLevel", signing_level, 0x8e0, 0x8, true, 0x2a5bac0ece36fdfe)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LDR_DATA_TABLE_ENTRY.InProgressLinks", in_progress_links, 0x100, 0x80, true, 0xfee367b6d462fa1)
#define _m056 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDR_DATA_TABLE_ENTRY.ChpeEmulatorImage", chpe_emulator_image, 0x35a, 0x1, true, 0xb1775272ef867e3d, 1, uint32_t)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DATA_TABLE_ENTRY.CheckSum", check_sum, 0x900, 0x20, true, 0x4e6fec2d5c274382)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_DATA_TABLE_ENTRY.ActivePatchImageBase", active_patch_image_base, 0x940, 0x40, true, 0x1d540f01dd839b66)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum ldr::hot_patch_state_t), "_LDR_DATA_TABLE_ENTRY.HotPatchState", hot_patch_state, 0x980, 0x20, true, 0xb63f198eff588add)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#endif