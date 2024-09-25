#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, void*, uint32_t, void*, void*, uint32_t*)>*), "_WPP_TRACE_CONTROL_BLOCK.Callback", callback, 0x0, 0x40, true, 0x8633b7596050a1b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WPP_TRACE_CONTROL_BLOCK.ControlGuid", control_guid, 0x40, 0x40, true, 0x131959ddb2f6aafb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::wpp_trace_control_block_t*), "_WPP_TRACE_CONTROL_BLOCK.Next", next, 0x80, 0x40, true, 0xf4f9c9b63eed2581)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WPP_TRACE_CONTROL_BLOCK.Logger", logger, 0xc0, 0x40, true, 0x17855eed048019fc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_WPP_TRACE_CONTROL_BLOCK.RegistryPath", registry_path, 0x100, 0x40, true, 0x8d6365cc777e8e7e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WPP_TRACE_CONTROL_BLOCK.FlagsLen", flags_len, 0x140, 0x8, true, 0xdec76ef928c5e86)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WPP_TRACE_CONTROL_BLOCK.Level", level, 0x148, 0x8, true, 0x731cde42465c1330)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_WPP_TRACE_CONTROL_BLOCK.Flags", flags, 0x160, 0x20, true, 0xcad12befb3ff9be0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WPP_TRACE_CONTROL_BLOCK.RegHandle", reg_handle, 0x1c0, 0x40, true, 0x53c91c7036b2dc0b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WPP_TRACE_CONTROL_BLOCK.AutoLogContext", auto_log_context, 0x200, 0x40, true, 0x880c7c226c866646)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WPP_TRACE_CONTROL_BLOCK.AutoLogVerboseEnabled", auto_log_verbose_enabled, 0x240, 0x10, true, 0xcd42b7814f5c9c22)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WPP_TRACE_CONTROL_BLOCK.AutoLogAttachToMiniDump", auto_log_attach_to_mini_dump, 0x250, 0x10, true, 0x1d29a1300e8fe533)
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
#endif