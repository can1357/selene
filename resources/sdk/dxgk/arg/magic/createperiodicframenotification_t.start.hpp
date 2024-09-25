#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEPERIODICFRAMENOTIFICATION.hAdapter", h_adapter, 0x0, 0x40, true, 0xb16565a1bf28cf9b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEPERIODICFRAMENOTIFICATION.VidPnTargetId", vid_pn_target_id, 0x40, 0x20, true, 0x5d0de102118847cd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_CREATEPERIODICFRAMENOTIFICATION.Time", time, 0x80, 0x40, true, 0xcc193bc758da7b5b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEPERIODICFRAMENOTIFICATION.NotificationID", notification_id, 0xc0, 0x20, true, 0x8c50f726c3764344)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEPERIODICFRAMENOTIFICATION.hNotification", h_notification, 0x100, 0x40, true, 0xcb323780fa262efa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif