#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_QUERY_INDEX.ulAssemblyIndex", ul_assembly_index, 0x0, 0x20, true, 0x82ee1e362269e3b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_QUERY_INDEX.ulFileIndexInAssembly", ul_file_index_in_assembly, 0x20, 0x20, true, 0x9ca3f319e582b621)
#else
#define _m00
#define _m01
#endif