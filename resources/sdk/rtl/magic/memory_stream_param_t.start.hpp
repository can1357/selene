#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_MEMORY_STREAM_PARAM.ParamId", param_id, 0x0, 0x20, true, 0x4ec30aaa5c2ee14e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_MEMORY_STREAM_PARAM.Size", size, 0x20, 0x20, true, 0x2bd9011b32e684bd)
#else
#define _m00
#define _m01
#endif