#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_DceInfo.AuthzSvc", authz_svc, 0x0, 0x20, true, 0xea4886c308959747)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SecPkgContext_DceInfo.pPac", p_pac, 0x40, 0x40, true, 0x66420b1330912d21)
#else
#define _m00
#define _m01
#endif