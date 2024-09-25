#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_13.WdfMajorVersion", wdf_major_version, 0x0, 0x0, false, 0x4d0b2735234f92a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_13.WdfMinorVersion", wdf_minor_version, 0x0, 0x0, false, 0xba28afa48aa0aa42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_13.TriageInfoMajorVersion", triage_info_major_version, 0x0, 0x0, false, 0xe240bd6496da44c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_13.TriageInfoMinorVersion", triage_info_minor_version, 0x0, 0x0, false, 0x1af6e1e93edfd740)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfobject_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfObjectTriageInfo", wdf_object_triage_info, 0x0, 0x0, false, 0xbceb5cc20c25ea99)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontext_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfContextTriageInfo", wdf_context_triage_info, 0x0, 0x0, false, 0xcf701ab25c24c342)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontexttype_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfContextTypeTriageInfo", wdf_context_type_triage_info, 0x0, 0x0, false, 0x7575957982662781)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfQueueTriageInfo", wdf_queue_triage_info, 0x0, 0x0, false, 0xad376d1ef3dde4e7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdffwdprogress_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfFwdProgressTriageInfo", wdf_fwd_progress_triage_info, 0x0, 0x0, false, 0x352e3ee62a07ba6f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirpqueue_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfIrpQueueTriageInfo", wdf_irp_queue_triage_info, 0x0, 0x0, false, 0x6c375e97aeea25fc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfRequestTriageInfo", wdf_request_triage_info, 0x0, 0x0, false, 0xa5429cb01ecd7020)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfDeviceTriageInfo", wdf_device_triage_info, 0x0, 0x0, false, 0x4afd9272c4746ef6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirp_triage_info_v1_13_t*), "_WDF_TRIAGE_INFO_V1_13.WdfIrpTriageInfo", wdf_irp_triage_info, 0x0, 0x0, false, 0x2182a8bc343466f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif