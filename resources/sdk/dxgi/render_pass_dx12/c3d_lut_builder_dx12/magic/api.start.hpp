#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Cleanup@C3DLutBuilderDx12@RenderPassDx12$dxgi.dll", 0x0, 0x0, false, 0x433ffd8e4809b03)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@C3DLutBuilderDx12@RenderPassDx12$dxgi.dll", 0x0, 0x0, false, 0x11c714048d621310)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Update3DLutResource@C3DLutBuilderDx12@RenderPassDx12$dxgi.dll", 0x0, 0x0, false, 0x29bb008ebf5acd69)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif