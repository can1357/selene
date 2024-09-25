#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT.ResolutionContext", resolution_context, 0x0, 0x40, true, 0xe4456ca8b1cf5902)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT.RootIndex", root_index, 0x40, 0x40, true, 0x2e3715e477e84c8a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT.CancelResolution", cancel_resolution, 0x80, 0x8, true, 0xbba1daa3aed4388e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT.NoMoreEntries", no_more_entries, 0x88, 0x8, true, 0x5237640925c7de66)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT.Root", root, 0xc0, 0x80, true, 0x7a296d6aaa414eb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif