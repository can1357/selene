#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSATTRIBUTE.Size", size, 0x0, 0x0, false, 0xc71b54a1d066191)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSATTRIBUTE.Flags", flags, 0x0, 0x0, false, 0x3b7d2e5adf5d348a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KSATTRIBUTE.Attribute", attribute, 0x0, 0x0, false, 0xa41d3445a1f78341)
#else
#define _m00
#define _m01
#define _m02
#endif