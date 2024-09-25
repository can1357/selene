#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, void*, uint32_t, void*, void*, uint32_t*)>*), "_WPP_REGISTRATION_BLOCK.Callback", callback, 0x0, 0x40, true, 0xd6287ff0e56eaf31)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WPP_REGISTRATION_BLOCK.ControlGuid", control_guid, 0x40, 0x40, true, 0x81f8462990812257)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wpp_registration_block_t*), "_WPP_REGISTRATION_BLOCK.Next", next, 0x80, 0x40, true, 0xfd4967003d987163)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WPP_REGISTRATION_BLOCK.Logger", logger, 0xc0, 0x40, true, 0x1b0d5701a4ceaded)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_WPP_REGISTRATION_BLOCK.FriendlyName", friendly_name, 0x100, 0x40, true, 0x9fa13c0a8aca8985)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_WPP_REGISTRATION_BLOCK.BitNames", bit_names, 0x140, 0x40, true, 0x917b75322380ca42)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_WPP_REGISTRATION_BLOCK.RegistryPath", registry_path, 0x180, 0x40, true, 0xc95f7902517610e5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WPP_REGISTRATION_BLOCK.FlagsLen", flags_len, 0x1c0, 0x8, true, 0xb2ce95b387ab6af0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WPP_REGISTRATION_BLOCK.RegBlockLen", reg_block_len, 0x1c8, 0x8, true, 0x38c80ec5101236e2)
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
#endif