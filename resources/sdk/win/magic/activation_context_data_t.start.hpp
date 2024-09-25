#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA.Magic", magic, 0x0, 0x20, true, 0x344df5067c6bf4e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA.HeaderSize", header_size, 0x20, 0x20, true, 0x4c214d5567dc0f5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA.FormatVersion", format_version, 0x40, 0x20, true, 0xae18c2d7a7d58147)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA.TotalSize", total_size, 0x60, 0x20, true, 0x9febe484c496d26)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA.DefaultTocOffset", default_toc_offset, 0x80, 0x20, true, 0x73efed7c018e2ca)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA.ExtendedTocOffset", extended_toc_offset, 0xa0, 0x20, true, 0xfab59f2ced56d66)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA.AssemblyRosterOffset", assembly_roster_offset, 0xc0, 0x20, true, 0xa6fbbdf690ae5430)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA.Flags", flags, 0xe0, 0x20, true, 0xac5a3e24a3f8d4f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif