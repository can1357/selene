#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PiiFilter.PiiFilterHandle", pii_filter_handle, 0x0, 0x40, true, 0x19fdead201066b86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "PiiFilter.Initialized", initialized, 0x40, 0x20, true, 0x922910163484f527)
#else
#define _m00
#define _m01
#endif