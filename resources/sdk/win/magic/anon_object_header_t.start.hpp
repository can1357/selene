#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER.Sig1", sig1, 0x0, 0x10, true, 0x393649277f5c1811)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER.Sig2", sig2, 0x10, 0x10, true, 0x785755a15779e98c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER.Version", version, 0x20, 0x10, true, 0x6f342d1ce70dc236)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER.Machine", machine, 0x30, 0x10, true, 0xfba61497fa7e4ad2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER.TimeDateStamp", time_date_stamp, 0x40, 0x20, true, 0xc89e9420b7d205d7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ANON_OBJECT_HEADER.ClassID", class_id, 0x60, 0x80, true, 0x72f8b2b1fc7a8187)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER.SizeOfData", size_of_data, 0xe0, 0x20, true, 0xf1b9b4bce2814382)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif