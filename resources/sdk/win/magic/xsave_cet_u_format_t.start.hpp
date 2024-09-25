#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSAVE_CET_U_FORMAT.Ia32CetUMsr", ia32_cet_u_msr, 0x0, 0x40, true, 0x6bd06cd43a4ed63)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSAVE_CET_U_FORMAT.Ia32Pl3SspMsr", ia32_pl3_ssp_msr, 0x40, 0x40, true, 0xcb15cba160e090f9)
#else
#define _m00
#define _m01
#endif