#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_DRIVER_BUFFER_SET.Version", version, 0x0, 0x20, true, 0x3045d3ae0901c9b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_WHEA_DRIVER_BUFFER_SET.Data", data, 0x20, 0x40, true, 0xb6c6b6c14222ff92)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_DRIVER_BUFFER_SET.DataSize", data_size, 0x60, 0x20, true, 0xc487f426f94737d2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_WHEA_DRIVER_BUFFER_SET.SectionTypeGuid", section_type_guid, 0x80, 0x40, true, 0x2bdf83dba943a409)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_WHEA_DRIVER_BUFFER_SET.SectionFriendlyName", section_friendly_name, 0xc0, 0x40, true, 0x9edf6a6e818fff45)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_WHEA_DRIVER_BUFFER_SET.Flags", flags, 0x100, 0x40, true, 0x94765603f404ffdd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif