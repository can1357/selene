#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z$dxgkrnl.sys", 0x1473f4, 0x0, true, 0x35bd69c9019e55)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1TOKEN_BINDING_GUARD@@QEAA@XZ$dxgkrnl.sys", 0x147f9c, 0x0, true, 0x725295fa785d029b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif