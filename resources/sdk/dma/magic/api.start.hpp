#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmaDispatch$ntoskrnl.exe", 0xc4bca8, 0x0, true, 0x429f59ae22754277)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmaNonworkingListDev$pci.sys", 0x33bea, 0x0, true, 0x5c8da011ec2f1de3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif