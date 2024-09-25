#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_15.ReservedRequestList", reserved_request_list, 0x0, 0x0, false, 0x977869ebe189735f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_15.ReservedRequestInUseList", reserved_request_in_use_list, 0x0, 0x0, false, 0x32e3f009df306040)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFFWDPROGRESS_TRIAGE_INFO_V1_15.PendedIrpList", pended_irp_list, 0x0, 0x0, false, 0x7c70f043447efc39)
#else
#define _m00
#define _m01
#define _m02
#endif