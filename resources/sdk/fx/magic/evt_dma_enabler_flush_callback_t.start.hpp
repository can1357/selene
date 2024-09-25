#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*), "FxEvtDmaEnablerFlushCallback.m_Method", m_method, 0x0, 0x40, true, 0x427c9c8ac043a5ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxEvtDmaEnablerFlushCallback.m_Status", m_status, 0x40, 0x20, true, 0xced77b9782da0927)
#else
#define _m00
#define _m01
#endif