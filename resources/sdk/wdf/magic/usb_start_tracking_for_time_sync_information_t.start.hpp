#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USB_START_TRACKING_FOR_TIME_SYNC_INFORMATION.TimeTrackingHandle", time_tracking_handle, 0x0, 0x40, true, 0xff0877ae3c808fe1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_START_TRACKING_FOR_TIME_SYNC_INFORMATION.IsStartupDelayTolerable", is_startup_delay_tolerable, 0x40, 0x8, true, 0xec556fbdd0bb7fb6)
#else
#define _m00
#define _m01
#endif