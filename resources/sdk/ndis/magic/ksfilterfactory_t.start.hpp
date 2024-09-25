#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksfilter_descriptor_t*), "_KSFILTERFACTORY.FilterDescriptor", filter_descriptor, 0x0, 0x0, false, 0xc12bd673b35d01a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSFILTERFACTORY.Bag", bag, 0x0, 0x0, false, 0x6228ae19b4d3807e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSFILTERFACTORY.Context", context, 0x0, 0x0, false, 0x932ae114af825916)
#else
#define _m00
#define _m01
#define _m02
#endif