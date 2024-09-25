#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrApiPort$win32kbase.sys", 0x259a60, 0x0, true, 0x96d2a0fe8fef49d1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrAllocateCaptureBuffer$ntdll.dll", 0x71030, 0x0, true, 0x5eb195920b8b65fd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrAllocateMessagePointer$ntdll.dll", 0x70fe0, 0x0, true, 0xbc0d1942a120e40d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrCaptureMessageBuffer$ntdll.dll", 0x705b0, 0x0, true, 0x6e76959fa86f342)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrCaptureMessageMultiUnicodeStringsInPlace$ntdll.dll", 0x70e20, 0x0, true, 0x658f6173d52d612a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrCaptureMessageString$ntdll.dll", 0x70f30, 0x0, true, 0xb4ffbe7996429f91)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrCaptureTimeout$ntdll.dll", 0xcb290, 0x0, true, 0x52db1c667a10aef2)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrClientCallServer$ntdll.dll", 0x70c80, 0x0, true, 0xb891a9f3ee347e37)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrClientConnectToServer$ntdll.dll", 0x70610, 0x0, true, 0x7d74665eabe17186)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrClientProcess$ntdll.dll", 0x16bc10, 0x0, true, 0x69883d58922bf70)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrFreeCaptureBuffer$ntdll.dll", 0x70c50, 0x0, true, 0x60a402610b4e146a)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrGetProcessId$ntdll.dll", 0xcb2c0, 0x0, true, 0x5274a323e94fdae1)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrHeap$ntdll.dll", 0x16bc60, 0x0, true, 0x25146e9d106a9b08)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrIdentifyAlertableThread$ntdll.dll", 0x836f0, 0x0, true, 0x7636363b4f848b10)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrInitOnceDone$ntdll.dll", 0x16bc11, 0x0, true, 0xbcb2f956af536811)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrPortBaseTag$ntdll.dll", 0x16bc58, 0x0, true, 0xdb7100e6dee45c91)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrPortHandle$ntdll.dll", 0x16bc48, 0x0, true, 0xae7d41fe4ce6c339)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrPortHeap$ntdll.dll", 0x16bc50, 0x0, true, 0x9aed3d81bb6fbee5)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrPortMemoryRemoteDelta$ntdll.dll", 0x16bc40, 0x0, true, 0xdb180334459fdbb1)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrPortName$ntdll.dll", 0x16bc20, 0x0, true, 0x53e6c3482dc148fb)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrProcessId$ntdll.dll", 0x16bc30, 0x0, true, 0xa31e4f273fb952c4)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrReadOnlySharedMemorySize$ntdll.dll", 0x16bc38, 0x0, true, 0x112a50460af6a129)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrServerApiRoutine$ntdll.dll", 0x16bc08, 0x0, true, 0xf8ade49b541e2c2c)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrSetPriorityClass$ntdll.dll", 0xd5190, 0x0, true, 0x3520a5691f9d2bcb)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrVerifyRegion$ntdll.dll", 0xcb2e0, 0x0, true, 0x3ec83940208b6ff5)
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
#endif