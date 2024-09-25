#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONF_STRUCTURE_HEADER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xf931f1c80a3aad1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONF_STRUCTURE_HEADER_FORMAT.Alignment", alignment, 0x8, 0x8, true, 0xc57996fdc421dcb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_structure_flags_t), "_NDR64_CONF_STRUCTURE_HEADER_FORMAT.Flags", flags, 0x10, 0x8, true, 0x24261856131c3d94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_CONF_STRUCTURE_HEADER_FORMAT.Reserve", reserve, 0x18, 0x8, true, 0x1a646207067edb5e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_CONF_STRUCTURE_HEADER_FORMAT.MemorySize", memory_size, 0x20, 0x20, true, 0xc5e709778137ec77)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_CONF_STRUCTURE_HEADER_FORMAT.ArrayDescription", array_description, 0x40, 0x40, true, 0xd594c278bf508a59)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif