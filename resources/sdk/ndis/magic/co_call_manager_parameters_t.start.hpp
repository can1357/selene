#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::flowspec_t), "_CO_CALL_MANAGER_PARAMETERS.Transmit", transmit, 0x0, 0x0, true, 0xb50f498080fe260)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::flowspec_t), "_CO_CALL_MANAGER_PARAMETERS.Receive", receive, 0x100, 0x0, true, 0xd23ccff1331e0ef7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_specific_parameters_t), "_CO_CALL_MANAGER_PARAMETERS.CallMgrSpecific", call_mgr_specific, 0x200, 0x60, true, 0x55650ea1c7323658)
#else
#define _m00
#define _m01
#define _m02
#endif