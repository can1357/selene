#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_HEADER.Version", version, 0x0, 0x0, false, 0x5b93b3bcea08b137)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_HEADER.Count", count, 0x0, 0x0, false, 0xac6409647c6569c8)
#else
#define _m00
#define _m01
#endif