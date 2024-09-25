#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO.ReservedRequestList", reserved_request_list, 0x0, 0x20, true, 0x27f4482e31843cc3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO.ReservedRequestInUseList", reserved_request_in_use_list, 0x20, 0x20, true, 0x5f1c16e47f248a6f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO.PendedIrpList", pended_irp_list, 0x40, 0x20, true, 0x9222cc8fc6c1212f)
#else
#define _m00
#define _m01
#define _m02
#endif