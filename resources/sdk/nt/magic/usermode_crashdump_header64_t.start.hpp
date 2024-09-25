#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER64.Signature", signature, 0x0, 0x20, true, 0xe496c94ae3f607c1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER64.ValidDump", valid_dump, 0x20, 0x20, true, 0x1df589ee960532a2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER64.MajorVersion", major_version, 0x40, 0x20, true, 0x6d1754539742fc5f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER64.MinorVersion", minor_version, 0x60, 0x20, true, 0xa52cb56fbcf85e50)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER64.MachineImageType", machine_image_type, 0x80, 0x20, true, 0x95ca48ad3306b83a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER64.ThreadCount", thread_count, 0xa0, 0x20, true, 0xb5f5394d63118631)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER64.ModuleCount", module_count, 0xc0, 0x20, true, 0x110b6cdc13e8f1f1)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER64.MemoryRegionCount", memory_region_count, 0xe0, 0x20, true, 0x46299f3387e8433f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER64.ThreadOffset", thread_offset, 0x100, 0x40, true, 0x104df98acf6b551d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER64.ModuleOffset", module_offset, 0x140, 0x40, true, 0xb273c91bb4bc643c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER64.DataOffset", data_offset, 0x180, 0x40, true, 0xe8b35a20217098c3)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER64.MemoryRegionOffset", memory_region_offset, 0x1c0, 0x40, true, 0xb8b3d24d8345b8af)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER64.DebugEventOffset", debug_event_offset, 0x200, 0x40, true, 0x2ceb489848692332)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER64.ThreadStateOffset", thread_state_offset, 0x240, 0x40, true, 0x92c0da78a811ee52)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_USERMODE_CRASHDUMP_HEADER64.VersionInfoOffset", version_info_offset, 0x280, 0x40, true, 0x8185246a50513cb7)
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