#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSTGOPTIONS.usVersion", us_version, 0x0, 0x10, true, 0xd810f0f26db5e6a8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTGOPTIONS.ulSectorSize", ul_sector_size, 0x20, 0x20, true, 0x24c91c7ebad723e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagSTGOPTIONS.pwcsTemplateFile", pwcs_template_file, 0x40, 0x40, true, 0x789d7977ec234509)
#else
#define _m00
#define _m01
#define _m02
#endif