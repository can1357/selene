#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFREQUEST_TRIAGE_INFO.RequestSize", request_size, 0x0, 0x20, true, 0xe8fa089cc50cc767)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFREQUEST_TRIAGE_INFO.CsqContext", csq_context, 0x20, 0x20, true, 0xed7dd524714c2f12)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFREQUEST_TRIAGE_INFO.FxIrp", fx_irp, 0x40, 0x20, true, 0x7c5139550107d3ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFREQUEST_TRIAGE_INFO.ListEntryQueueOwned", list_entry_queue_owned, 0x60, 0x20, true, 0xfbbf3aef7639d35a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFREQUEST_TRIAGE_INFO.ListEntryQueueOwned2", list_entry_queue_owned2, 0x80, 0x20, true, 0x43a704d354c026c1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFREQUEST_TRIAGE_INFO.RequestListEntry", request_list_entry, 0xa0, 0x20, true, 0xb12c78da9e54dc4d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFREQUEST_TRIAGE_INFO.FwdProgressList", fwd_progress_list, 0xc0, 0x20, true, 0xf5410ae28ecf6e33)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif