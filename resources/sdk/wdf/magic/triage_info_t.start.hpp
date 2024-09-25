#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO.WdfMajorVersion", wdf_major_version, 0x0, 0x20, true, 0xbf524fba9486963c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO.WdfMinorVersion", wdf_minor_version, 0x20, 0x20, true, 0xf86fc3ea2e9c19e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO.TriageInfoMajorVersion", triage_info_major_version, 0x40, 0x20, true, 0x2ca20319a57a9a43)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TRIAGE_INFO.TriageInfoMinorVersion", triage_info_minor_version, 0x60, 0x20, true, 0xab8ae23920f09b4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfobject_triage_info_t*), "_WDF_TRIAGE_INFO.WdfObjectTriageInfo", wdf_object_triage_info, 0xc0, 0x40, true, 0x275b277da5cfc1fd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontext_triage_info_t*), "_WDF_TRIAGE_INFO.WdfContextTriageInfo", wdf_context_triage_info, 0x100, 0x40, true, 0x7c1306cc3e49afb3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcontexttype_triage_info_t*), "_WDF_TRIAGE_INFO.WdfContextTypeTriageInfo", wdf_context_type_triage_info, 0x140, 0x40, true, 0x5a84f4df80bc2c60)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_triage_info_t*), "_WDF_TRIAGE_INFO.WdfQueueTriageInfo", wdf_queue_triage_info, 0x180, 0x40, true, 0x6929e5625e88d059)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdffwdprogress_triage_info_t*), "_WDF_TRIAGE_INFO.WdfFwdProgressTriageInfo", wdf_fwd_progress_triage_info, 0x1c0, 0x40, true, 0x70cc55d250b45bc1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirpqueue_triage_info_t*), "_WDF_TRIAGE_INFO.WdfIrpQueueTriageInfo", wdf_irp_queue_triage_info, 0x200, 0x40, true, 0x14bf129782fc2b13)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_triage_info_t*), "_WDF_TRIAGE_INFO.WdfRequestTriageInfo", wdf_request_triage_info, 0x240, 0x40, true, 0xaaa2becf9336c0b0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_triage_info_t*), "_WDF_TRIAGE_INFO.WdfDeviceTriageInfo", wdf_device_triage_info, 0x280, 0x40, true, 0xb3d07000cfad3e98)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfirp_triage_info_t*), "_WDF_TRIAGE_INFO.WdfIrpTriageInfo", wdf_irp_triage_info, 0x2c0, 0x40, true, 0xc0d715e1f609f586)
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