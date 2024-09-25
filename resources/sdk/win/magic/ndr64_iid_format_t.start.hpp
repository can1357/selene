#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_IID_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x5f1f0e3a6140c93b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_IID_FORMAT.Flags", flags, 0x8, 0x8, true, 0x4a7be863a43c6394)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_IID_FORMAT.IIDDescriptor", iid_descriptor, 0x40, 0x40, true, 0xc65631b20713d59f)
#else
#define _m00
#define _m01
#define _m02
#endif