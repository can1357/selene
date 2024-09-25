#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIOutput_TakeOwnership@@QEAA@PEAXPEBUIUnknown@@H@Z$dxgi.dll", 0x512f4, 0x0, true, 0x1c7c883d5a942f30)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIOutput_TakeOwnership@@QEAA@XZ$dxgi.dll", 0x51abc, 0x0, true, 0xb54e144a12a04c3a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif