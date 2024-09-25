#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FAILURE_PREDICTION_CONFIG.Version", version, 0x0, 0x20, true, 0xf1a9a66727019347)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FAILURE_PREDICTION_CONFIG.Size", size, 0x20, 0x20, true, 0xeecbb4f0cdc19c84)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FAILURE_PREDICTION_CONFIG.Set", set, 0x40, 0x8, true, 0x28c76b903233212f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FAILURE_PREDICTION_CONFIG.Enabled", enabled, 0x48, 0x8, true, 0x136d8aeb68a92f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif