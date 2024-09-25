#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_MGMT_CLIENT_REGISTRATION.Version", version, 0x0, 0x20, true, 0xc1ee003420f3060c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclfs_client_advance_tail_callback_t ), "_CLFS_MGMT_CLIENT_REGISTRATION.AdvanceTailCallback", advance_tail_callback, 0x40, 0x40, true, 0x196bbfd3ee9b7c7b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CLFS_MGMT_CLIENT_REGISTRATION.AdvanceTailCallbackData", advance_tail_callback_data, 0x80, 0x40, true, 0x54f2594b12b470c0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclfs_client_lff_handler_complete_callback_t ), "_CLFS_MGMT_CLIENT_REGISTRATION.LogGrowthCompleteCallback", log_growth_complete_callback, 0xc0, 0x40, true, 0xb6315b02f8146604)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CLFS_MGMT_CLIENT_REGISTRATION.LogGrowthCompleteCallbackData", log_growth_complete_callback_data, 0x100, 0x40, true, 0xb5a772aef9cdac48)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclfs_client_log_unpinned_callback_t ), "_CLFS_MGMT_CLIENT_REGISTRATION.LogUnpinnedCallback", log_unpinned_callback, 0x140, 0x40, true, 0x23748c248b73dbfe)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CLFS_MGMT_CLIENT_REGISTRATION.LogUnpinnedCallbackData", log_unpinned_callback_data, 0x180, 0x40, true, 0xe4c4a4e1b6c72a02)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif