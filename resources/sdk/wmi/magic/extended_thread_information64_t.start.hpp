#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_EXTENDED_THREAD_INFORMATION64.ProcessId", process_id, 0x0, 0x20, true, 0x26ebfb9cf153b7a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_EXTENDED_THREAD_INFORMATION64.ThreadId", thread_id, 0x20, 0x20, true, 0xb0a62deb796c2242)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION64.StackBase64", stack_base64, 0x40, 0x40, true, 0xcb4f81a856d8f16d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION64.StackLimit64", stack_limit64, 0x80, 0x40, true, 0xe4308a6d1d99ffe3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION64.UserStackBase64", user_stack_base64, 0xc0, 0x40, true, 0x1bd34e963d542394)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION64.UserStackLimit64", user_stack_limit64, 0x100, 0x40, true, 0x92ff234cf532af25)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION64.StartAddr64", start_addr64, 0x140, 0x40, true, 0x271347df6ed99327)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION64.Affinity", affinity, 0x140, 0x40, true, 0x9560e2e9f6738dd5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION64.Win32StartAddr64", win32_start_addr64, 0x180, 0x40, true, 0x8f3a90287e6660e6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_EXTENDED_THREAD_INFORMATION64.TebBase64", teb_base64, 0x1c0, 0x40, true, 0xf28a19e58ae4ef8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_EXTENDED_THREAD_INFORMATION64.SubProcessTag", sub_process_tag, 0x200, 0x20, true, 0x8571cd88234a33a0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_WMI_EXTENDED_THREAD_INFORMATION64.BasePriority", base_priority, 0x220, 0x8, true, 0x10571b71dda61395)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_EXTENDED_THREAD_INFORMATION64.PagePriority", page_priority, 0x228, 0x8, true, 0xe66b821269e05cc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_EXTENDED_THREAD_INFORMATION64.IoPriority", io_priority, 0x230, 0x8, true, 0x6a79073ff5e86894)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_EXTENDED_THREAD_INFORMATION64.Flags", flags, 0x238, 0x8, true, 0x272daf940d395b8d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_EXTENDED_THREAD_INFORMATION64.ThreadName", thread_name, 0x240, 0x10, true, 0xee051befc9e96c62)
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