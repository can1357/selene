#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2.Version", version, 0x0, 0x20, true, 0xcae35189e716c814)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2.PrivateHandle", private_handle, 0x40, 0x40, true, 0x8040b91f4fcc906e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgk_power_notification_t ), "_DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2.PowerNotificationCb", power_notification_cb, 0x80, 0x40, true, 0x5a3f2c03ab4e7074)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2.RemovalNotificationCb", removal_notification_cb, 0xc0, 0x40, true, 0xad0a3a655777a933)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgk_fstate_notification_t ), "_DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2.FStateNotificationCb", f_state_notification_cb, 0x100, 0x40, true, 0x2f08e686701b229)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgk_initial_component_state_t ), "_DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2.InitialComponentStateCb", initial_component_state_cb, 0x140, 0x40, true, 0xb0fd88a888b87158)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif