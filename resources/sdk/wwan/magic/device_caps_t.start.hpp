#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::device_type_t), "_WWAN_DEVICE_CAPS.WwanDeviceType", wwan_device_type, 0x0, 0x20, true, 0xdfe6e052b3874b24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::cellular_class_t), "_WWAN_DEVICE_CAPS.WwanCellularClass", wwan_cellular_class, 0x20, 0x20, true, 0x30b242c2732f4158)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::voice_class_t), "_WWAN_DEVICE_CAPS.WwanVoiceClass", wwan_voice_class, 0x40, 0x20, true, 0xd981fbfca6d73ea2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::sim_class_t), "_WWAN_DEVICE_CAPS.WwanSimClass", wwan_sim_class, 0x60, 0x20, true, 0xda048d3d2b859560)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DEVICE_CAPS.WwanDataClass", wwan_data_class, 0x80, 0x20, true, 0x70bd17be2dd376cd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 12>), "_WWAN_DEVICE_CAPS.CustomDataClass", custom_data_class, 0xa0, 0xc0, true, 0xe57422b008fdea2e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DEVICE_CAPS.WwanGsmBandClass", wwan_gsm_band_class, 0x160, 0x20, true, 0x859b901e5bb6ca99)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DEVICE_CAPS.WwanCdmaBandClass", wwan_cdma_band_class, 0x180, 0x20, true, 0x88bad945ff75c10c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 20>), "_WWAN_DEVICE_CAPS.CustomBandClass", custom_band_class, 0x1a0, 0x40, true, 0x187f9ffa27d8292a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DEVICE_CAPS.WwanSmsCaps", wwan_sms_caps, 0x2e0, 0x20, true, 0x376319420a2a6b6b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DEVICE_CAPS.WwanControlCaps", wwan_control_caps, 0x300, 0x20, true, 0xbf7354cabd4888c1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 18>), "_WWAN_DEVICE_CAPS.DeviceId", device_id, 0x320, 0x20, true, 0xe48430cd6daf3c41)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_WWAN_DEVICE_CAPS.Manufacturer", manufacturer, 0x440, 0x0, true, 0xf550fd4641843d80)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_WWAN_DEVICE_CAPS.Model", model, 0x640, 0x0, true, 0x3fe082264b214543)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_WWAN_DEVICE_CAPS.FirmwareInfo", firmware_info, 0x840, 0x0, true, 0x42fb28cf1a714ad2)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DEVICE_CAPS.MaxActivatedContexts", max_activated_contexts, 0xa40, 0x20, true, 0x9d8704ab65e8a757)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_DEVICE_CAPS.WwanAuthAlgoCaps", wwan_auth_algo_caps, 0xa60, 0x20, true, 0x931f808e20a2d987)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::list_header_t), "_WWAN_DEVICE_CAPS.CellularClassListHeader", cellular_class_list_header, 0xa80, 0x40, true, 0xc38f79180efd6532)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif