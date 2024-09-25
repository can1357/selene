#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_15.WdfMajorVersion", wdf_major_version, 0x0, 0x0, false, 0x55b0f109a7e219f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_15.WdfMinorVersion", wdf_minor_version, 0x0, 0x0, false, 0x77eff4f9077c9632)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_15.TriageInfoMajorVersion", triage_info_major_version, 0x0, 0x0, false, 0xa3aa6e7c70176dc9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_15.TriageInfoMinorVersion", triage_info_minor_version, 0x0, 0x0, false, 0x48a0834ef9e53057)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfobject_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfObjectTriageInfo", wdf_object_triage_info, 0x0, 0x0, false, 0xda1de0847a9473b0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontext_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfContextTriageInfo", wdf_context_triage_info, 0x0, 0x0, false, 0xeb9f09f30cd78dc6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontexttype_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfContextTypeTriageInfo", wdf_context_type_triage_info, 0x0, 0x0, false, 0x6467a2d61e2879f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfQueueTriageInfo", wdf_queue_triage_info, 0x0, 0x0, false, 0x6c11a9726d141f48)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdffwdprogress_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfFwdProgressTriageInfo", wdf_fwd_progress_triage_info, 0x0, 0x0, false, 0xc0ab6d44a9f65413)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirpqueue_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfIrpQueueTriageInfo", wdf_irp_queue_triage_info, 0x0, 0x0, false, 0x99bd931be1a148bd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfRequestTriageInfo", wdf_request_triage_info, 0x0, 0x0, false, 0x13b342d3f02dcfb9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfDeviceTriageInfo", wdf_device_triage_info, 0x0, 0x0, false, 0x58032ca73422afe1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirp_triage_info_v1_15_t*), "_WDF_TRIAGE_INFO_V1_15.WdfIrpTriageInfo", wdf_irp_triage_info, 0x0, 0x0, false, 0x8de71b0ffd3f1932)
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