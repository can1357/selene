#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT.Version", version, 0x0, 0x20, true, 0xdbc590e2481bfbde)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT.IsResume", is_resume, 0x20, 0x8, true, 0xdbe6e78b17d388fb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::csv_down_level_file_type_t), "_CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT.FileType", file_type, 0x40, 0x20, true, 0xd402fe392ce3b478)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT.SourceNodeId", source_node_id, 0x60, 0x20, true, 0xd887670abbebe0e3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT.DestinationNodeId", destination_node_id, 0x80, 0x20, true, 0xaf755c874f83fe6c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif