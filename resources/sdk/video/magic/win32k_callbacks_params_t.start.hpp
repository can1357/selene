#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum video::win32k_callbacks_params_type_t), "_VIDEO_WIN32K_CALLBACKS_PARAMS.CalloutType", callout_type, 0x0, 0x20, true, 0xae8490ae934098ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_WIN32K_CALLBACKS_PARAMS.PhysDisp", phys_disp, 0x40, 0x40, true, 0xcd1723f372481fdf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_WIN32K_CALLBACKS_PARAMS.Param", param, 0x80, 0x40, true, 0x27dbef5ef7b0b1f9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_WIN32K_CALLBACKS_PARAMS.Status", status, 0xc0, 0x20, true, 0x8504a3cdfbdf25fa)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_WIN32K_CALLBACKS_PARAMS.LockUserSession", lock_user_session, 0xe0, 0x8, true, 0x575a6902f8c2e734)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_WIN32K_CALLBACKS_PARAMS.IsPostDevice", is_post_device, 0xe8, 0x8, true, 0xe367c121d5649b7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_WIN32K_CALLBACKS_PARAMS.SurpriseRemoval", surprise_removal, 0xf0, 0x8, true, 0x23adbf3ed92dbdc9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_WIN32K_CALLBACKS_PARAMS.WaitForQueueReady", wait_for_queue_ready, 0xf8, 0x8, true, 0xa9f71ef5f5dbd434)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif