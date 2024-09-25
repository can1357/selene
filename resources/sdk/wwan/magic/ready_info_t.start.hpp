#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::ready_state_t), "_WWAN_READY_INFO.ReadyState", ready_state, 0x0, 0x20, true, 0x9e3e3bf201025ee9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::emergency_mode_t), "_WWAN_READY_INFO.EmergencyMode", emergency_mode, 0x20, 0x20, true, 0xcf226bad0307678e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 16>), "_WWAN_READY_INFO.SubscriberId", subscriber_id, 0x40, 0x0, true, 0xa35df8fd24a764e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 21>), "_WWAN_READY_INFO.SimIccId", sim_icc_id, 0x140, 0x50, true, 0xb7d403c0401103be)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WWAN_READY_INFO.CdmaShortMsgSize", cdma_short_msg_size, 0x290, 0x8, true, 0x7e59b03e699e6c88)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::list_header_t), "_WWAN_READY_INFO.TNListHeader", tn_list_header, 0x2c0, 0x40, true, 0xe8096eb5cca69378)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_READY_INFO.StatusFlags", status_flags, 0x2a0, 0x20, true, 0x88369c904b71efc0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif