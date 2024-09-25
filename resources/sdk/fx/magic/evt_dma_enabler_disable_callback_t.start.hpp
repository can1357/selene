#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "FxEvtDmaEnablerDisableCallback.m_Method", m_method, 0x0, 0x40, true, 0x9b79e09fd9694f99)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxEvtDmaEnablerDisableCallback.m_Status", m_status, 0x40, 0x20, true, 0x882b90edf61cc94c)
#else
#define _m00
#define _m01
#endif