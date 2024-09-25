#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LpcInitializeProcess$ntoskrnl.exe", 0x6f6be0, 0x0, true, 0xf5c1b0d81ce04c75)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LpcExitProcess$ntoskrnl.exe", 0x65ffa8, 0x0, true, 0xa3599a36fef0261a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LpcLegacyMaxMessageLength$ntoskrnl.exe", 0xcfa230, 0x0, true, 0x505d399653f97f2b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LpcPortObjectType$ntoskrnl.exe", 0xcfa260, 0x0, true, 0xb2b2820d13db79a9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, char, struct nt::port_message_t*)>*), "$LpcReplyWaitReplyPort$ntoskrnl.exe", 0x711830, 0x0, true, 0x4e48bfb7f179b619)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*)>*), "$LpcRequestPort$ntoskrnl.exe", 0x707060, 0x0, true, 0xab5ce49be73248f2)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*)>*), "$LpcRequestWaitReplyPort$ntoskrnl.exe", 0x8bd380, 0x0, true, 0xbdec5638c9374955)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*)>*), "$LpcRequestWaitReplyPortEx$ntoskrnl.exe", 0x8bd3a0, 0x0, true, 0x51283517f016f3d0)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::port_message_t*, struct nt::port_message_t*, uint64_t*, char, uint8_t, int64_t*)>*), "$LpcSendWaitReceivePort$ntoskrnl.exe", 0x6db2b0, 0x0, true, 0x24fa06ffad26321a)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LpcWaitablePortObjectType$ntoskrnl.exe", 0xcfa398, 0x0, true, 0xfb7801a2bfa6b60e)
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
#endif