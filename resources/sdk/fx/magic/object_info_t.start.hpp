#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_FX_OBJECT_INFO.Name", name, 0x0, 0x40, true, 0x6929d50b50e2504d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_FX_OBJECT_INFO.HandleName", handle_name, 0x40, 0x40, true, 0x88939a4c5b12550d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FX_OBJECT_INFO.Size", size, 0x80, 0x10, true, 0xf1252fc918fc3cb1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FX_OBJECT_INFO.ObjectType", object_type, 0x90, 0x10, true, 0xa218438425f62f3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif