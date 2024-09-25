#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::segment_t*), "_CONTROL_AREA.Segment", segment, 0x0, 0x40, true, 0xd9ca127fb662676e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CONTROL_AREA.ListHead", list_head, 0x40, 0x80, true, 0x8ecec070890652fd)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CONTROL_AREA.NumberOfSectionReferences", number_of_section_references, 0xc0, 0x40, true, 0x8086ee8ad9a0fba1)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CONTROL_AREA.NumberOfPfnReferences", number_of_pfn_references, 0x100, 0x40, true, 0x6b764ee0c056911c)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CONTROL_AREA.NumberOfMappedViews", number_of_mapped_views, 0x140, 0x40, true, 0x82415fbf420d0926)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CONTROL_AREA.NumberOfUserReferences", number_of_user_references, 0x180, 0x40, true, 0x8ef79baec1245b24)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_AREA.LongFlags", long_flags, 0x1c0, 0x20, true, 0xfd56f54f33e3c73e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsection_flags_t), "_CONTROL_AREA.Flags", flags, 0x1c0, 0x20, true, 0x57286e8e9e35cbb9)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_u1_t), "_CONTROL_AREA.u1", u1, 0x1e0, 0x20, true, 0xed7c4e44ba38c7ec)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::fast_ref_t), "_CONTROL_AREA.FilePointer", file_pointer, 0x200, 0x40, true, 0x5436d9d3a58ac041)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_CONTROL_AREA.ControlAreaLock", control_area_lock, 0x240, 0x20, true, 0x6518a7f279ace0a5)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_AREA.ModifiedWriteCount", modified_write_count, 0x260, 0x20, true, 0xc0dba7146e951c67)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::control_area_wait_block_t*), "_CONTROL_AREA.WaitList", wait_list, 0x280, 0x40, true, 0xf6f7b2373741754d)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_AREA.NumberOfSystemCacheViews", number_of_system_cache_views, 0x2c0, 0x20, true, 0xa203db21396661f7)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_AREA.ImageRelocationStartBit", image_relocation_start_bit, 0x2c0, 0x20, true, 0x6e53d43d33869591)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_CONTROL_AREA.WritableUserReferences", writable_user_references, 0x2e0, 0x20, true, 0xc64dc13589860473)
#define _m018 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint16_t), "_CONTROL_AREA.ImageRelocationSizeIn64k", image_relocation_size_in64k, 0x2e0, 0x10, true, 0xa9cb5c16a00bc2d6, 16, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_CONTROL_AREA.SystemImage", system_image, 0x2f0, 0x1, true, 0x237b3f145fd9abe2, 1, uint32_t)
#define _m020 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_CONTROL_AREA.CantMove", cant_move, 0x2f1, 0x1, true, 0xccbfd4eb46bc4ae1, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint2_t), "_CONTROL_AREA.StrongCode", strong_code, 0x2f2, 0x2, true, 0xb5d6f58adb8c29f6, 2, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint2_t), "_CONTROL_AREA.BitMap", bit_map, 0x2f4, 0x2, true, 0xd132ba468ff09b7f, 2, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_CONTROL_AREA.ImageActive", image_active, 0x2f6, 0x1, true, 0xb25f0ea5a550963c, 1, uint32_t)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_AREA.FlushInProgressCount", flush_in_progress_count, 0x300, 0x20, true, 0x6e3e336d0ef0a8d8)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_AREA.NumberOfSubsections", number_of_subsections, 0x300, 0x20, true, 0x9c645c30217b5f0b)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::image_security_reference_t*), "_CONTROL_AREA.SeImageStub", se_image_stub, 0x300, 0x40, true, 0x74d7c8af1c571a90)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_CONTROL_AREA.FileObjectLock", file_object_lock, 0x340, 0x40, true, 0xacc51ffefd49788d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_CONTROL_AREA.LockedPages", locked_pages, 0x380, 0x40, true, 0xd9fe898ef637a54b)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint61_t), "_CONTROL_AREA.IoAttributionContext", io_attribution_context, 0x3c0, 0x3d, true, 0xa8cd4299d641b708, 61, uint64_t)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CONTROL_AREA.AweContext", awe_context, 0x40, 0x40, true, 0xa4c735d54202b9bc)
#define _m031 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_CONTROL_AREA.ImageBaseOkToReuse", image_base_ok_to_reuse, 0x2f7, 0x1, true, 0xa9c246d2893e5174, 1, uint32_t)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CONTROL_AREA.ImageCrossPartitionCharge", image_cross_partition_charge, 0x3c0, 0x40, true, 0x9075ee901b8db896)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint36_t), "_CONTROL_AREA.CommittedPageCount", committed_page_count, 0x3c0, 0x24, true, 0x9ef0c3fb59cdc0e5, 36, uint64_t)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CONTROL_AREA.SpareImage", spare_image, 0x0, 0x0, false, 0x5d41339f38872f93)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_AREA.u1.LongFlags", long_flags, 0x0, 0x20, true, 0xd4bfce12acee2753)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsection_flags2_t), "_CONTROL_AREA.u1.Flags", flags, 0x0, 0x20, true, 0x5a550f49c564360e)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
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
#define _m08
#define _m09
#endif