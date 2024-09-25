#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeactivateInputProcessing@CKernelSensorThread$win32kbase.sys", 0x0, 0x0, false, 0x9b1a5cf46366c751)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyEventHandles@CKernelSensorThread$win32kbase.sys", 0x0, 0x0, false, 0xa8e9b60829f2b9af)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CKernelSensorThread@@UEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0x5dd9b3a6b76a97f7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CKernelSensorThread$win32kbase.sys", 0x0, 0x0, false, 0x1a6c5144f70ab0a1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeEventHandles@CKernelSensorThread$win32kbase.sys", 0x0, 0x0, false, 0x12e8283c097fcd40)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif