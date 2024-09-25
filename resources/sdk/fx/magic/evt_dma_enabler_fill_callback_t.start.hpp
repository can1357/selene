#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "FxEvtDmaEnablerFillCallback.m_Method", m_method, 0x0, 0x40, true, 0x5337abcdc525a426)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxEvtDmaEnablerFillCallback.m_Status", m_status, 0x40, 0x20, true, 0x6d07d15bb88a014c)
#else
#define _m00
#define _m01
#endif