#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSDATAFORMAT.FormatSize", format_size, 0x0, 0x0, false, 0x6c607ae8b84feb68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSDATAFORMAT.Flags", flags, 0x0, 0x0, false, 0x61b67a2376c1737a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSDATAFORMAT.SampleSize", sample_size, 0x0, 0x0, false, 0xdcde0b28d55fd44a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSDATAFORMAT.MajorFormat", major_format, 0x0, 0x0, false, 0x5afbe5dd238b788b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSDATAFORMAT.SubFormat", sub_format, 0x0, 0x0, false, 0x9d54d36490380023)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSDATAFORMAT.Specifier", specifier, 0x0, 0x0, false, 0x45d487f8b4e5eb82)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "KSDATAFORMAT.Alignment", alignment, 0x0, 0x0, false, 0x3fa544c21d327fc2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif