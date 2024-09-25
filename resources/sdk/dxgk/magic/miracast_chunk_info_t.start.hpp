#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::miracast_chunk_type_t), "DXGK_MIRACAST_CHUNK_INFO.ChunkType", chunk_type, 0x0, 0x20, true, 0x500ae56b9f853b96)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::miracast_chunk_id_t), "DXGK_MIRACAST_CHUNK_INFO.ChunkId", chunk_id, 0x40, 0x40, true, 0xf2bedb8700af5ca5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGK_MIRACAST_CHUNK_INFO.ProcessingTime", processing_time, 0x80, 0x20, true, 0x85c612c0723bc7f7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGK_MIRACAST_CHUNK_INFO.EncodeRate", encode_rate, 0xa0, 0x20, true, 0xd3f03550ebfb2340)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif