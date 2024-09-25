#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.Signature", signature, 0x0, 0x20, true, 0x7e1e1b3f77475d18)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.ValidDump", valid_dump, 0x20, 0x20, true, 0xe142c91247781945)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.MajorVersion", major_version, 0x40, 0x20, true, 0x6b7aab58339380fa)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.MinorVersion", minor_version, 0x60, 0x20, true, 0x8136ea7371dbe3d7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.MachineImageType", machine_image_type, 0x80, 0x20, true, 0xe8e18a4bdd4fd4ee)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.ThreadCount", thread_count, 0xa0, 0x20, true, 0x770a809c4379b3cb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.ModuleCount", module_count, 0xc0, 0x20, true, 0xa8eaa778fae635b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.MemoryRegionCount", memory_region_count, 0xe0, 0x20, true, 0xda9d239f73122000)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.ThreadOffset", thread_offset, 0x100, 0x20, true, 0x90e68538901c459d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.ModuleOffset", module_offset, 0x120, 0x20, true, 0x643c87082269d017)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.DataOffset", data_offset, 0x140, 0x20, true, 0x374f5f2b7767645a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.MemoryRegionOffset", memory_region_offset, 0x160, 0x20, true, 0x98d0dadf2826b56f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.DebugEventOffset", debug_event_offset, 0x180, 0x20, true, 0x102b8d56d4b85c38)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.ThreadStateOffset", thread_state_offset, 0x1a0, 0x20, true, 0xc09332fbca44b07b)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USERMODE_CRASHDUMP_HEADER32.VersionInfoOffset", version_info_offset, 0x1c0, 0x20, true, 0x16bef8b3b6c18bb8)
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