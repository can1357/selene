#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10.Signature", signature, 0x0, 0x20, true, 0x54e51a62a6b0b689)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10.Offset", offset, 0x20, 0x20, true, 0xaf8b0c46f1d88afe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10.TimeStamp", time_stamp, 0x40, 0x20, true, 0x901973765f45618d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10.Age", age, 0x60, 0x20, true, 0x3479755bd30dbde1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_NB10.PdbName", pdb_name, 0x80, 0x8, true, 0x25ae1df234fb2b7b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif