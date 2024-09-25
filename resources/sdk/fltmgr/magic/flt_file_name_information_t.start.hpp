#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_FILE_NAME_INFORMATION.Size", size, 0x0, 0x10, true, 0xb1433edbbcd7827b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_FILE_NAME_INFORMATION.NamesParsed", names_parsed, 0x10, 0x10, true, 0xbc93dd788199832)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_FILE_NAME_INFORMATION.Format", format, 0x20, 0x20, true, 0x64d215213e272059)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILE_NAME_INFORMATION.Name", name, 0x40, 0x80, true, 0x143103a170327de5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILE_NAME_INFORMATION.Volume", volume, 0xc0, 0x80, true, 0xb5c2f5fb9d8512a5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILE_NAME_INFORMATION.Share", share, 0x140, 0x80, true, 0x9d4007b34e863557)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILE_NAME_INFORMATION.Extension", extension, 0x1c0, 0x80, true, 0xced4e82b5790de1a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILE_NAME_INFORMATION.Stream", stream, 0x240, 0x80, true, 0x266c6d66a99ae24f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILE_NAME_INFORMATION.FinalComponent", final_component, 0x2c0, 0x80, true, 0x91613b231182e55)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILE_NAME_INFORMATION.ParentDir", parent_dir, 0x340, 0x80, true, 0x5dd3ea7d6295e4e)
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
#endif