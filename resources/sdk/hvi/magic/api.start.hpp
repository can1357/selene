#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviCopyMemory$ntoskrnl.exe", 0x58e470, 0x0, true, 0x5798f038a1191789)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviCopyMemoryNonTemporal$ntoskrnl.exe", 0x58e4ec, 0x0, true, 0xfacc9334b24e64b4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviEnterKernelAperture$ntoskrnl.exe", 0x58e570, 0x0, true, 0xd2596444c3cb2ff3)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviGetDebugDeviceOptions$ntoskrnl.exe", 0x5b8cd0, 0x0, true, 0xa2fe709e286214de)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviGetIptFeatures$ntoskrnl.exe", 0x5b8e78, 0x0, true, 0xc6891f99da1d3172)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviIsIommuInUse$ntoskrnl.exe", 0x5b8f20, 0x0, true, 0xf0e9ba2ff0b2117)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviLeaveKernelAperture$ntoskrnl.exe", 0x58e5cc, 0x0, true, 0x4b61492dcf2a70cf)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviGetEnlightenmentInformation$ntoskrnl.exe", 0x3a9b10, 0x0, true, 0xda2302ae6f5f09ea)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviGetHardwareFeatures$ntoskrnl.exe", 0x5b8d10, 0x0, true, 0xe8488572e56f8c64)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct hv::x64_hypervisor_features_t*)>*), "$HviGetHypervisorFeatures$ntoskrnl.exe", 0x3a9b50, 0x0, true, 0xde1952eef4793a8b)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviGetHypervisorInterface$ntoskrnl.exe", 0x3a9be0, 0x0, true, 0x44089e36e0cb9e26)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviGetHypervisorVendorAndMaxFunction$ntoskrnl.exe", 0x5b8d90, 0x0, true, 0xae3cb288b39d6fe3)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviGetHypervisorVersion$ntoskrnl.exe", 0x5b8de0, 0x0, true, 0x3aaacbe7f1b92a30)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviGetImplementationLimits$ntoskrnl.exe", 0x5b8e30, 0x0, true, 0xd6d67492b23f9bc5)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviIsAnyHypervisorPresent$ntoskrnl.exe", 0x3a24e0, 0x0, true, 0xef91c425f3a72a25)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviIsHypervisorMicrosoftCompatible$ntoskrnl.exe", 0x3a9b90, 0x0, true, 0xd756888fbc289a50)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviIsHypervisorVendorMicrosoft$ntoskrnl.exe", 0x3af230, 0x0, true, 0x771a284d6b2a0aee)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HviIsXboxNanovisorPresent$ntoskrnl.exe", 0x3ca114, 0x0, true, 0xcb6a1149fa60144f)
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
#endif