#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSerializationHeader.dwSize", dw_size, 0x0, 0x20, true, 0x7ea0d6c1379d06e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SSerializationHeader.pvMarshalPtr", pv_marshal_ptr, 0x40, 0x40, true, 0xf311afc1e59327c)
#else
#define _m00
#define _m01
#endif