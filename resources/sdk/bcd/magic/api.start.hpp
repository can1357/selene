#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdDeleteElement$ntoskrnl.exe", 0x0, 0x0, false, 0x8cf9df31fe238ee)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdOpenStoreFromFile$ntoskrnl.exe", 0x0, 0x0, false, 0xa443e86d433c22d7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdOpenSystemStore$ntoskrnl.exe", 0x0, 0x0, false, 0x269de12b224e687b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdSetSystemStore$ntoskrnl.exe", 0x0, 0x0, false, 0x5b4e4ed54ad7f0a2)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdGetSystemStorePath$ntoskrnl.exe", 0x76d414, 0x0, true, 0x8d3878d9a29a786f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdOpenStore$ntoskrnl.exe", 0x76dda8, 0x0, true, 0x8e166cfd735b43cd)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdCloseObject$ntoskrnl.exe", 0x76eb2c, 0x0, true, 0x35091a9d62b53764)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdCloseStore$ntoskrnl.exe", 0x76d374, 0x0, true, 0xc3dc4994cffe7484)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdCreateObject$ntoskrnl.exe", 0x96a300, 0x0, true, 0xc385d5a2d074cda9)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdDeleteObject$ntoskrnl.exe", 0x96a398, 0x0, true, 0x7b73fe57d3cceb31)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdEnumerateObjects$ntoskrnl.exe", 0x96a3f4, 0x0, true, 0x58868d655daec7c5)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdFlushStore$ntoskrnl.exe", 0x765040, 0x0, true, 0x7b7400cde5b68e9a)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdForciblyUnloadStore$ntoskrnl.exe", 0x764094, 0x0, true, 0xb954b60a5d760fce)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdGetElementData$ntoskrnl.exe", 0x96ab10, 0x0, true, 0x1d8be4afa0b7b7d)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdGetElementDataWithFlags$ntoskrnl.exe", 0x76f120, 0x0, true, 0xdd5dd52c6e63c405)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdInitializeBcdSyncMutant$ntoskrnl.exe", 0xa6f7e8, 0x0, true, 0x79138bb7ceaa2e2)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdMutantHandle$ntoskrnl.exe", 0xc13420, 0x0, true, 0xd7648e1ee52ce470)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdOpenObject$ntoskrnl.exe", 0x76e9a0, 0x0, true, 0xfa96ad572a45af39)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdQueryObject$ntoskrnl.exe", 0x76e264, 0x0, true, 0x3302c76769c0fd8)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdSetElementData$ntoskrnl.exe", 0x96ab30, 0x0, true, 0x25ca7175eb78b1b0)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdSetElementDataWithFlags$ntoskrnl.exe", 0x76ef3c, 0x0, true, 0x9db5460bc9df08cb)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdSyncMutantName$ntoskrnl.exe", 0x5b40, 0x0, true, 0x1f2ad8a381b14161)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdUtilGetBootOption$ntoskrnl.exe", 0x7a33a0, 0x0, true, 0xb99a9a24b18d4743)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdUtilGetBootOptionBoolean$ntoskrnl.exe", 0x7a3358, 0x0, true, 0xb0f5c60f2a70dd88)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdUtilGetBootOptionInteger$ntoskrnl.exe", 0x7a2eac, 0x0, true, 0x167263bc5cf6b1cc)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BcdUtilGetBootOptionString$ntoskrnl.exe", 0x7a2e6c, 0x0, true, 0x9f5945c7352e687c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#define _o2(...) __VA_ARGS__
#define _o3(...) __VA_ARGS__
#define _o4(...) __VA_ARGS__
#define _o5(...) __VA_ARGS__
#endif