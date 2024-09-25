#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CPrivateData@@QEAA@AEBV0@@Z$dxgi.dll", 0x1d2e0, 0x0, true, 0x929c5443fe3e1682)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CPrivateData@@QEAA@XZ$dxgi.dll", 0x1d1b4, 0x0, true, 0xe8eed802469a2ec2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Retrieve@CPrivateData$dxgi.dll", 0x4b7d0, 0x0, true, 0xcad4aa535d3fd807)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Set@CPrivateData$dxgi.dll", 0x1d328, 0x0, true, 0x9c9e2d51b77bdf3f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif