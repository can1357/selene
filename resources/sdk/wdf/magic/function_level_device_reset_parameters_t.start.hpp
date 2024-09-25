#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS.Size", size, 0x0, 0x20, true, 0x561f20dcbf732c84)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS.DeviceResetCompletion", device_reset_completion, 0x40, 0x40, true, 0x93fdd1fbd23ad6ae)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS.CompletionContext", completion_context, 0x80, 0x40, true, 0xca653f698c491152)
#else
#define _m00
#define _m01
#define _m02
#endif