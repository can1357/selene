#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksfilter_descriptor_t*), "_KSFILTER.Descriptor", descriptor, 0x0, 0x0, false, 0x102383c1bdd3df7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSFILTER.Bag", bag, 0x0, 0x0, false, 0xe4909393ed8a9ed8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSFILTER.Context", context, 0x0, 0x0, false, 0x4937e9b871bd63f8)
#else
#define _m00
#define _m01
#define _m02
#endif