#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMPORT_OBJECT_HEADER.Sig1", sig1, 0x0, 0x10, true, 0x2a034caeb18b6926)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMPORT_OBJECT_HEADER.Sig2", sig2, 0x10, 0x10, true, 0xd0f1b5c2e05cd6c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMPORT_OBJECT_HEADER.Version", version, 0x20, 0x10, true, 0x3db43107ec8caba3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMPORT_OBJECT_HEADER.Machine", machine, 0x30, 0x10, true, 0x317579a7507d31)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMPORT_OBJECT_HEADER.TimeDateStamp", time_date_stamp, 0x40, 0x20, true, 0x2474ced11533a80b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMPORT_OBJECT_HEADER.SizeOfData", size_of_data, 0x60, 0x20, true, 0x5001aa4467f52f65)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMPORT_OBJECT_HEADER.Ordinal", ordinal, 0x80, 0x10, true, 0xfab6405b4f8cadc3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "IMPORT_OBJECT_HEADER.Hint", hint, 0x80, 0x10, true, 0x52d73effb02599a0)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "IMPORT_OBJECT_HEADER.Type", type, 0x90, 0x2, true, 0xfdff8429be95d34f, 2, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "IMPORT_OBJECT_HEADER.NameType", name_type, 0x92, 0x3, true, 0xab913a7a025a134e, 3, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif