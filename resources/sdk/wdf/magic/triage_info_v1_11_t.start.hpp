#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_11.WdfMajorVersion", wdf_major_version, 0x0, 0x0, false, 0x34cb9036d28bd007)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_11.WdfMinorVersion", wdf_minor_version, 0x0, 0x0, false, 0x6f6f9b6be4b37b3d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_11.TriageInfoMajorVersion", triage_info_major_version, 0x0, 0x0, false, 0xb788edd21184f541)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO_V1_11.TriageInfoMinorVersion", triage_info_minor_version, 0x0, 0x0, false, 0xa2435fafba434b55)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfobject_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfObjectTriageInfo", wdf_object_triage_info, 0x0, 0x0, false, 0x25a421a21f2ff1d4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontext_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfContextTriageInfo", wdf_context_triage_info, 0x0, 0x0, false, 0xa0dafaa7f5d985b7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontexttype_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfContextTypeTriageInfo", wdf_context_type_triage_info, 0x0, 0x0, false, 0x8a49b9b51632cbdc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfQueueTriageInfo", wdf_queue_triage_info, 0x0, 0x0, false, 0x5243b70630616740)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdffwdprogress_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfFwdProgressTriageInfo", wdf_fwd_progress_triage_info, 0x0, 0x0, false, 0x728d9a23acd5bf44)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirpqueue_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfIrpQueueTriageInfo", wdf_irp_queue_triage_info, 0x0, 0x0, false, 0xfba8af21cf5898c3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfRequestTriageInfo", wdf_request_triage_info, 0x0, 0x0, false, 0xb0619dabe818784d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfDeviceTriageInfo", wdf_device_triage_info, 0x0, 0x0, false, 0x1a34839b4f6bbe7f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirp_triage_info_v1_11_t*), "_WDF_TRIAGE_INFO_V1_11.WdfIrpTriageInfo", wdf_irp_triage_info, 0x0, 0x0, false, 0x5ab9f0ac9c6342e5)
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