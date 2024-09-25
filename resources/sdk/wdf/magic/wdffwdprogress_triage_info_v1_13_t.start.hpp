#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_13.ReservedRequestList", reserved_request_list, 0x0, 0x0, false, 0xe0b52da7753fb9f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_13.ReservedRequestInUseList", reserved_request_in_use_list, 0x0, 0x0, false, 0x793d32727018ef03)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_13.PendedIrpList", pended_irp_list, 0x0, 0x0, false, 0x2ec3c8faf2acc9d1)
#else
#define _m00
#define _m01
#define _m02
#endif