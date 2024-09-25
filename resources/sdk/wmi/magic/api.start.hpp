#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiMatchSMBiosSysInfo$ntoskrnl.exe", 0x0, 0x0, false, 0x7055bfc4c30c26a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiAcquireSmbiosLockExclusive$ntoskrnl.exe", 0x76513c, 0x0, true, 0x181dbfc88ec37abd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiGetClock$ntoskrnl.exe", 0x5a0610, 0x0, true, 0xe74d18cbbcafc860)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiIdleAccntEventEnabled$ntoskrnl.exe", 0xcf9d58, 0x0, true, 0x76c5b6cfae5ebbf7)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiIdleStateEventEnabled$ntoskrnl.exe", 0xcf9d54, 0x0, true, 0x8c47a0b4025cac5f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WMIInitialize$ntoskrnl.exe", 0xa390cc, 0x0, true, 0x5ae04884d9649a51)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiIrpNames$ntoskrnl.exe", 0x9b8310, 0x0, true, 0xbc707cde7d6a3e5c)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiPerfStateDomainEventEnabled$ntoskrnl.exe", 0xced150, 0x0, true, 0xdff5b458fdd5e24f)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiPerfStateEventEnabled$ntoskrnl.exe", 0xced14c, 0x0, true, 0x140fb67336a71fa6)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(enum trace::information_class_t, void*, uint32_t, uint32_t*, void*)>*), "$WmiQueryTraceInformation$ntoskrnl.exe", 0x7739e0, 0x0, true, 0x4bf5d864c4723021)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiQueryTraceProviderCount$ntoskrnl.exe", 0x3af2d8, 0x0, true, 0x5c5e7039ec427c04)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiReleaseSmbiosLockExclusive$ntoskrnl.exe", 0x76516c, 0x0, true, 0x8e8596d37c997247)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiSetNetworkNotify$ntoskrnl.exe", 0x92ec88, 0x0, true, 0x5675ff34a2a3bb85)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiThermalEventEnabled$ntoskrnl.exe", 0xcf9d50, 0x0, true, 0x2b7fc938bbc6295a)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiThermalPolicyEventEnabled$ntoskrnl.exe", 0xcf4d68, 0x0, true, 0x1ae5c1fa403b8fdc)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint32_t, const struct nt::guid_t*, uint16_t, ...)>*), "$WmiTraceMessage$ntoskrnl.exe", 0x31fb10, 0x0, true, 0x47f72ab2df945595)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint32_t, const struct nt::guid_t*, uint16_t, char*)>*), "$WmiTraceMessageVa$ntoskrnl.exe", 0x5a0680, 0x0, true, 0x5cb64b6da70cf6c8)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiTraceRundownNotify$ntoskrnl.exe", 0x7ab484, 0x0, true, 0x9bdc29b9c26703a5)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiVerifierCopyEvent$ntoskrnl.exe", 0x59f720, 0x0, true, 0x94afdc19a80ed26a)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiVerifierTakeEventOwnership$ntoskrnl.exe", 0x59f778, 0x0, true, 0xb35c9daa8f7431b2)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiMonitorBrightness_GUID$win32kfull.sys", 0x2f3818, 0x0, true, 0xef3db6f738a9ced4)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WmiScsiAddressGuid$ataport.sys", 0x1b328, 0x0, true, 0xfabd7c727b31d57f)
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
#endif