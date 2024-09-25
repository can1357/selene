#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::pkg_info_a_t*), "_SecPkgContext_NegotiationInfoA.PackageInfo", package_info, 0x0, 0x40, true, 0x1ee33a28ddd7db9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_NegotiationInfoA.NegotiationState", negotiation_state, 0x40, 0x20, true, 0x7a767c54bb76919a)
#else
#define _m00
#define _m01
#endif