#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_INITIALIZATION_CONTEXT.Length", length, 0x0, 0x20, true, 0x4398f0309d2b6b76)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_INITIALIZATION_CONTEXT.MemoryBlock", memory_block, 0x40, 0x40, true, 0x9bb0d0463b793b1d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_DUMP_INITIALIZATION_CONTEXT.CommonBuffer", common_buffer, 0x80, 0x80, true, 0x504be591028da09d)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 2>), "_DUMP_INITIALIZATION_CONTEXT.PhysicalAddress", physical_address, 0x100, 0x80, true, 0x68c137603db20100)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "_DUMP_INITIALIZATION_CONTEXT.StallRoutine", stall_routine, 0x180, 0x40, true, 0x9f4978fb65a983b5)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(int64_t)>*), "_DUMP_INITIALIZATION_CONTEXT.OpenRoutine", open_routine, 0x1c0, 0x40, true, 0x6f6e1cd88040795)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int64_t*, struct nt::mdl_t*)>*), "_DUMP_INITIALIZATION_CONTEXT.WriteRoutine", write_routine, 0x200, 0x40, true, 0x2ffa4f6a57fffbd3)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_DUMP_INITIALIZATION_CONTEXT.FinishRoutine", finish_routine, 0x240, 0x40, true, 0x2ee84a6fbf327da5)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::adapter_object_t*), "_DUMP_INITIALIZATION_CONTEXT.AdapterObject", adapter_object, 0x280, 0x40, true, 0xebb28fb66421ae3d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_INITIALIZATION_CONTEXT.MappedRegisterBase", mapped_register_base, 0x2c0, 0x40, true, 0x4688c6054367c1a2)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_INITIALIZATION_CONTEXT.PortConfiguration", port_configuration, 0x300, 0x40, true, 0x6d2fd69bf487b6a0)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUMP_INITIALIZATION_CONTEXT.CrashDump", crash_dump, 0x340, 0x8, true, 0xb18cc258c7259247)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUMP_INITIALIZATION_CONTEXT.MarkMemoryOnly", mark_memory_only, 0x348, 0x8, true, 0xee350de4c5089004)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUMP_INITIALIZATION_CONTEXT.HiberResume", hiber_resume, 0x350, 0x8, true, 0x8c2e232628760f43)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_INITIALIZATION_CONTEXT.MaximumTransferSize", maximum_transfer_size, 0x360, 0x20, true, 0x37b93111418b964a)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_INITIALIZATION_CONTEXT.CommonBufferSize", common_buffer_size, 0x380, 0x20, true, 0x26d7d09f4ee308c7)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_INITIALIZATION_CONTEXT.TargetAddress", target_address, 0x3c0, 0x40, true, 0xfd766938c18cb0f0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int32_t, int64_t*, struct nt::mdl_t*, void*)>*), "_DUMP_INITIALIZATION_CONTEXT.WritePendingRoutine", write_pending_routine, 0x400, 0x40, true, 0xb1f5ae845dc154c1)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_INITIALIZATION_CONTEXT.PartitionStyle", partition_style, 0x440, 0x20, true, 0x584a5c3646908ee6)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_disk_info_t), "_DUMP_INITIALIZATION_CONTEXT.DiskInfo", disk_info, 0x460, 0x80, true, 0x236186fbd2f68e32)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int32_t, int64_t*, struct nt::mdl_t*)>*), "_DUMP_INITIALIZATION_CONTEXT.ReadRoutine", read_routine, 0x500, 0x40, true, 0x69f7038a7bc6f260)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, void*, uint32_t)>*), "_DUMP_INITIALIZATION_CONTEXT.GetDriveTelemetryRoutine", get_drive_telemetry_routine, 0x540, 0x40, true, 0x9f80248785767f4c)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_INITIALIZATION_CONTEXT.LogSectionTruncateSize", log_section_truncate_size, 0x580, 0x20, true, 0x538395f248c38b4)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_DUMP_INITIALIZATION_CONTEXT.Parameters", parameters, 0x5a0, 0x0, true, 0xfaf45de093263c21)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t*, uint32_t*)>*), "_DUMP_INITIALIZATION_CONTEXT.GetTransferSizesRoutine", get_transfer_sizes_routine, 0x7c0, 0x40, true, 0x25e785d6325a9c01)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(enum nt::dump_events_t, void*, uint32_t)>*), "_DUMP_INITIALIZATION_CONTEXT.DumpNotifyRoutine", dump_notify_routine, 0x800, 0x40, true, 0x98f5e272c989208c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_INITIALIZATION_CONTEXT.DiskInfo.Mbr.Signature", signature, 0x0, 0x20, true, 0x301be614735e8248)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_INITIALIZATION_CONTEXT.DiskInfo.Mbr.CheckSum", check_sum, 0x20, 0x20, true, 0xabbadd7fd8013413)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_mbr_t), "_DUMP_INITIALIZATION_CONTEXT.DiskInfo.Mbr", mbr, 0x0, 0x40, true, 0x1ef86c9840938411)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DUMP_INITIALIZATION_CONTEXT.DiskInfo.Gpt.DiskId", disk_id, 0x0, 0x80, true, 0xcda4352358d6f1c6)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_gpt_t), "_DUMP_INITIALIZATION_CONTEXT.DiskInfo.Gpt", gpt, 0x0, 0x80, true, 0x1707634a89d32202)
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
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif