#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V3.IDLength", id_length, 0x0, 0x20, true, 0xb8c680b0cbe1e548)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V3.DescriptionLength", description_length, 0x20, 0x20, true, 0xe4ea464e74def5d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V3.FriendlyNameLength", friendly_name_length, 0x40, 0x20, true, 0x4b7494869d13dde9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_PNP_RECORD_V3.Strings", strings, 0x60, 0x10, true, 0xc341d79c73b6cf9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif