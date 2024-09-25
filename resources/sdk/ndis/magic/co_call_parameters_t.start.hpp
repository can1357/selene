#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_CALL_PARAMETERS.Flags", flags, 0x0, 0x20, true, 0x825a8013dd7ef993)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_call_manager_parameters_t*), "_CO_CALL_PARAMETERS.CallMgrParameters", call_mgr_parameters, 0x40, 0x40, true, 0x58f500be7e559f49)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_media_parameters_t*), "_CO_CALL_PARAMETERS.MediaParameters", media_parameters, 0x80, 0x40, true, 0x3ee3484732c67b99)
#else
#define _m00
#define _m01
#define _m02
#endif