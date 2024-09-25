#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_11.ReservedRequestList", reserved_request_list, 0x0, 0x0, false, 0xb86e9967c7b631d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_11.ReservedRequestInUseList", reserved_request_in_use_list, 0x0, 0x0, false, 0x5f81576c1287f3c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_11.PendedIrpList", pended_irp_list, 0x0, 0x0, false, 0xea67dfb5de652197)
#else
#define _m00
#define _m01
#define _m02
#endif