#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_EXTENDED_THREAD_INFORMATION.ProcessId", process_id, 0x0, 0x20, true, 0x9722a32f36ad2ea9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_EXTENDED_THREAD_INFORMATION.ThreadId", thread_id, 0x20, 0x20, true, 0x517f79a83b338cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_EXTENDED_THREAD_INFORMATION.StackBase", stack_base, 0x40, 0x40, true, 0xc9be2b566f21c73a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_EXTENDED_THREAD_INFORMATION.StackLimit", stack_limit, 0x80, 0x40, true, 0x35a984d6e5a7271)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_EXTENDED_THREAD_INFORMATION.UserStackBase", user_stack_base, 0xc0, 0x40, true, 0x39c8ac574fa54c6a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_EXTENDED_THREAD_INFORMATION.UserStackLimit", user_stack_limit, 0x100, 0x40, true, 0x18102209fd615737)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_EXTENDED_THREAD_INFORMATION.StartAddr", start_addr, 0x140, 0x40, true, 0xeb5b8f21d313e965)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION.Affinity", affinity, 0x140, 0x40, true, 0x31654f8cc21afb4e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_EXTENDED_THREAD_INFORMATION.Win32StartAddr", win32_start_addr, 0x180, 0x40, true, 0xd593a88ee481b8b7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_EXTENDED_THREAD_INFORMATION.TebBase", teb_base, 0x1c0, 0x40, true, 0xa2f8dc874cb8a37a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_EXTENDED_THREAD_INFORMATION.SubProcessTag", sub_process_tag, 0x200, 0x20, true, 0x5087738ca6800ce9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_WMI_EXTENDED_THREAD_INFORMATION.BasePriority", base_priority, 0x220, 0x8, true, 0x568b7821f6e854ea)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_EXTENDED_THREAD_INFORMATION.PagePriority", page_priority, 0x228, 0x8, true, 0xe6909bf3c84e06e6)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_EXTENDED_THREAD_INFORMATION.IoPriority", io_priority, 0x230, 0x8, true, 0xf30ab4ff7d8994f9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_EXTENDED_THREAD_INFORMATION.Flags", flags, 0x238, 0x8, true, 0xcf47ab1d6344311e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_EXTENDED_THREAD_INFORMATION.ThreadName", thread_name, 0x240, 0x10, true, 0x192bf133056a113e)
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
#define _m15
#endif