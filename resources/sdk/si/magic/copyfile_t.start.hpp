#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SI_COPYFILE.SourceFileNameLength", source_file_name_length, 0x0, 0x20, true, 0x580fc693fdc55084)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SI_COPYFILE.DestinationFileNameLength", destination_file_name_length, 0x20, 0x20, true, 0xd529debdcc542085)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SI_COPYFILE.Flags", flags, 0x40, 0x20, true, 0x5147c797ab42dee)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_SI_COPYFILE.FileNameBuffer", file_name_buffer, 0x60, 0x10, true, 0x3e5b514d440cdc4f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif