#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_17.ReservedRequestList", reserved_request_list, 0x0, 0x0, false, 0xda744939b90bdf2a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_17.ReservedRequestInUseList", reserved_request_in_use_list, 0x0, 0x0, false, 0xddc9214664ceb46a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_17.PendedIrpList", pended_irp_list, 0x0, 0x0, false, 0x4756d0dc1d9a7c53)
#else
#define _m00
#define _m01
#define _m02
#endif