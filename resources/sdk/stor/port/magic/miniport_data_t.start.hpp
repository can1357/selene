#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_MINIPORT_DATA.Name", name, 0x0, 0x0, false, 0x8f0db94c4c06b273)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::data_type_t), "_MINIPORT_DATA.Type", type, 0x0, 0x0, false, 0xc60d526b6b4cd920)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MINIPORT_DATA.ArrayLength", array_length, 0x0, 0x0, false, 0x7b3b35167f25d5da)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIPORT_DATA.Data", data, 0x0, 0x0, false, 0xb6bef1e04668b247)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif