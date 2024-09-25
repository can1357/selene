#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CONTEXT_CHUNK.Offset", offset, 0x0, 0x20, true, 0x17371af45947b247)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTEXT_CHUNK.Length", length, 0x20, 0x20, true, 0xde9f538ca23e18ee)
#else
#define _m00
#define _m01
#endif