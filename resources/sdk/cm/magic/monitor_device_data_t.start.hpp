#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.Version", version, 0x0, 0x10, true, 0xb21edaca85134ee8)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.Revision", revision, 0x10, 0x10, true, 0x357973877a3de55c)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalScreenSize", horizontal_screen_size, 0x20, 0x10, true, 0xc1c8d9218a764fe4)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalScreenSize", vertical_screen_size, 0x30, 0x10, true, 0x3fc1d2180bc9ad7d)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalResolution", horizontal_resolution, 0x40, 0x10, true, 0x9f846de43087a62a)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalResolution", vertical_resolution, 0x50, 0x10, true, 0xf23cbcaf38de930b)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalDisplayTimeLow", horizontal_display_time_low, 0x60, 0x10, true, 0x6db067722ab9e2)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalDisplayTime", horizontal_display_time, 0x70, 0x10, true, 0x27de8835b3784e2d)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalDisplayTimeHigh", horizontal_display_time_high, 0x80, 0x10, true, 0x8d5ea9c4de3e2f2b)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalBackPorchLow", horizontal_back_porch_low, 0x90, 0x10, true, 0x65a3cbf7bee106aa)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalBackPorch", horizontal_back_porch, 0xa0, 0x10, true, 0x25d225834e4a4989)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalBackPorchHigh", horizontal_back_porch_high, 0xb0, 0x10, true, 0xb7cc759450cd1abf)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalFrontPorchLow", horizontal_front_porch_low, 0xc0, 0x10, true, 0x57522809f50ed3f9)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalFrontPorch", horizontal_front_porch, 0xd0, 0x10, true, 0xaa07e112df47fd22)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalFrontPorchHigh", horizontal_front_porch_high, 0xe0, 0x10, true, 0xe9b83444d4a3726)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalSyncLow", horizontal_sync_low, 0xf0, 0x10, true, 0x53e84e9ea0ace6f2)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalSync", horizontal_sync, 0x100, 0x10, true, 0x29cefeb3f6dfa647)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.HorizontalSyncHigh", horizontal_sync_high, 0x110, 0x10, true, 0x5a9acd5600ad07dc)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalBackPorchLow", vertical_back_porch_low, 0x120, 0x10, true, 0xcb5def50805fa093)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalBackPorch", vertical_back_porch, 0x130, 0x10, true, 0xee794ec64c5aab7a)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalBackPorchHigh", vertical_back_porch_high, 0x140, 0x10, true, 0xf2bfa0aa1468c36d)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalFrontPorchLow", vertical_front_porch_low, 0x150, 0x10, true, 0xf47a04c41fd284e0)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalFrontPorch", vertical_front_porch, 0x160, 0x10, true, 0x92f999f1fae54646)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalFrontPorchHigh", vertical_front_porch_high, 0x170, 0x10, true, 0x7b5a6d9c94f9e942)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalSyncLow", vertical_sync_low, 0x180, 0x10, true, 0xf697b94426819c15)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalSync", vertical_sync, 0x190, 0x10, true, 0x4c8fcf565cba6)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MONITOR_DEVICE_DATA.VerticalSyncHigh", vertical_sync_high, 0x1a0, 0x10, true, 0x2286a433e8379c68)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#endif