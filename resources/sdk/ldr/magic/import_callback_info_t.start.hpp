#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, char*)>*), "_LDR_IMPORT_CALLBACK_INFO.ImportCallbackRoutine", import_callback_routine, 0x0, 0x40, true, 0xa67512a33eb9526d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_IMPORT_CALLBACK_INFO.ImportCallbackParameter", import_callback_parameter, 0x40, 0x40, true, 0x3c425a5ceaa9b2ad)
#else
#define _m00
#define _m01
#endif