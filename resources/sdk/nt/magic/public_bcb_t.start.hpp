#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PUBLIC_BCB.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0x281104949a7a43ea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PUBLIC_BCB.NodeByteSize", node_byte_size, 0x10, 0x10, true, 0x241737f6676ca375)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBLIC_BCB.MappedLength", mapped_length, 0x20, 0x20, true, 0x80688423ef756731)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PUBLIC_BCB.MappedFileOffset", mapped_file_offset, 0x40, 0x40, true, 0xb8485d6c22087d66)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif