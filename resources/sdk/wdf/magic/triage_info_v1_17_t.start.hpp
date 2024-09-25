#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_17.WdfMajorVersion", wdf_major_version, 0x0, 0x0, false, 0x7ddd5f779c5f4866)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_17.WdfMinorVersion", wdf_minor_version, 0x0, 0x0, false, 0xf6b629f3454d685d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_17.TriageInfoMajorVersion", triage_info_major_version, 0x0, 0x0, false, 0xdd047624f885def7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_17.TriageInfoMinorVersion", triage_info_minor_version, 0x0, 0x0, false, 0x9fa0ae162aa424f0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfobject_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfObjectTriageInfo", wdf_object_triage_info, 0x0, 0x0, false, 0xe24fa1355403e595)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontext_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfContextTriageInfo", wdf_context_triage_info, 0x0, 0x0, false, 0x20237d7aeba2447f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontexttype_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfContextTypeTriageInfo", wdf_context_type_triage_info, 0x0, 0x0, false, 0xa8aca2f599f64f1c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfQueueTriageInfo", wdf_queue_triage_info, 0x0, 0x0, false, 0xab746003c4b52c76)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdffwdprogress_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfFwdProgressTriageInfo", wdf_fwd_progress_triage_info, 0x0, 0x0, false, 0x6d8d436bac92d5b4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirpqueue_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfIrpQueueTriageInfo", wdf_irp_queue_triage_info, 0x0, 0x0, false, 0x14b84897ac449a70)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfRequestTriageInfo", wdf_request_triage_info, 0x0, 0x0, false, 0xcb5b946f36311526)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfDeviceTriageInfo", wdf_device_triage_info, 0x0, 0x0, false, 0x419a749d3cbcaad7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirp_triage_info_v1_17_t*), "_WDF_TRIAGE_INFO_V1_17.WdfIrpTriageInfo", wdf_irp_triage_info, 0x0, 0x0, false, 0x55f7433b4d30d8fc)
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