#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::pkg_info_w_t*), "_SecPkgContext_NegotiationInfoW.PackageInfo", package_info, 0x0, 0x40, true, 0x54d635825a529d29)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_NegotiationInfoW.NegotiationState", negotiation_state, 0x40, 0x20, true, 0xe7337e192c5a0d29)
#else
#define _m00
#define _m01
#endif