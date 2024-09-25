#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER.Signature", signature, 0x0, 0x20, true, 0x23bab2b633939661)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER.ValidDump", valid_dump, 0x20, 0x20, true, 0x3f9663f19bbac691)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER.MajorVersion", major_version, 0x40, 0x20, true, 0xa2dc3bba4eaa4f51)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER.MinorVersion", minor_version, 0x60, 0x20, true, 0x6e25d00810251ef7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER.MachineImageType", machine_image_type, 0x80, 0x20, true, 0xc1be4d0b5f89a953)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER.ThreadCount", thread_count, 0xa0, 0x20, true, 0x2b0bdf5a951483d5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER.ModuleCount", module_count, 0xc0, 0x20, true, 0xc41d2f9b06e045ff)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER.MemoryRegionCount", memory_region_count, 0xe0, 0x20, true, 0xab5091a0faba559)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER.ThreadOffset", thread_offset, 0x100, 0x40, true, 0xbb4bbfb30b36e7f5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER.ModuleOffset", module_offset, 0x140, 0x40, true, 0xafdd68b4c3c0c522)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER.DataOffset", data_offset, 0x180, 0x40, true, 0x6c6f55430ca94ba0)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER.MemoryRegionOffset", memory_region_offset, 0x1c0, 0x40, true, 0xb3771a819ac9469c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER.DebugEventOffset", debug_event_offset, 0x200, 0x40, true, 0xa1722ab08259d717)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER.ThreadStateOffset", thread_state_offset, 0x240, 0x40, true, 0xd150245e05e18209)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER.VersionInfoOffset", version_info_offset, 0x280, 0x40, true, 0x1697fd60c22695e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif