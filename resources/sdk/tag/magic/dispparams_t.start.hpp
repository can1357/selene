#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::variant_t*), "tagDISPPARAMS.rgvarg", rgvarg, 0x0, 0x40, true, 0x754f2c0c58450ef3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagDISPPARAMS.rgdispidNamedArgs", rgdispid_named_args, 0x40, 0x40, true, 0x2a4107beea7d37d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDISPPARAMS.cArgs", c_args, 0x80, 0x20, true, 0x877513dab0b54ffc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDISPPARAMS.cNamedArgs", c_named_args, 0xa0, 0x20, true, 0x86467a28ea168815)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif