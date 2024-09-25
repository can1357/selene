#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ss_stop_reason_t), "_NDIS_SS_RESUME_REASON.StopReason", stop_reason, 0x0, 0x0, false, 0x76f38394b614bdf2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ss_busy_reason_t), "_NDIS_SS_RESUME_REASON.BusyReason", busy_reason, 0x0, 0x0, false, 0xc2316a33a6402c1a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SS_RESUME_REASON.Value", value, 0x0, 0x0, false, 0xd8cdc25fac799a03)
#else
#define _m00
#define _m01
#define _m02
#endif