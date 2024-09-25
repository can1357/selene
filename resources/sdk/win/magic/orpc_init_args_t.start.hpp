#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_orpc_debug_notify_t*), "ORPC_INIT_ARGS.lpIntfOrpcDebug", lp_intf_orpc_debug, 0x0, 0x40, true, 0xbec32b62fd4bd0e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ORPC_INIT_ARGS.pvPSN", pv_psn, 0x40, 0x40, true, 0x5622e60c7f34f349)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ORPC_INIT_ARGS.dwReserved1", dw_reserved1, 0x80, 0x20, true, 0xc7e466bae5d87dbf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ORPC_INIT_ARGS.dwReserved2", dw_reserved2, 0xa0, 0x20, true, 0x869e114b6b8ce23b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif