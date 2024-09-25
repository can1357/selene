#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RTL_BUFFER.Buffer", buffer, 0x0, 0x40, true, 0x71b75d2ed8e37ba0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RTL_BUFFER.StaticBuffer", static_buffer, 0x40, 0x40, true, 0xdcd0273629b5176a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_BUFFER.Size", size, 0x80, 0x40, true, 0x6b63c99cd22a3d4a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_BUFFER.StaticSize", static_size, 0xc0, 0x40, true, 0x77ba5ea9dcd5ddbf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif