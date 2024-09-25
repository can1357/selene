#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpValidateStatusInformation$ntoskrnl.exe", 0x0, 0x0, false, 0x2170f84772b95b45)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpAdvanceStackDownwards$ntoskrnl.exe", 0x9ccadc, 0x0, true, 0x62f5186d68de493c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpBuildDriverObjectList$ntoskrnl.exe", 0x9c2410, 0x0, true, 0x3336a2d33cedcdbb)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCallDriver1$ntoskrnl.exe", 0x9ccc4c, 0x0, true, 0x3748e8c32adf3f26)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCallDriver2$ntoskrnl.exe", 0x9cd144, 0x0, true, 0xf11c86449cfcc37d)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCallDriverNoIrpTracking$ntoskrnl.exe", 0x9c2484, 0x0, true, 0x92c63cc5b75f8098)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCallDriverWithStackBuffer$ntoskrnl.exe", 0x9c24f4, 0x0, true, 0xe45d3359652fa95c)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCancelRoutine$ntoskrnl.exe", 0x9cd3d0, 0x0, true, 0x875b7171033859d)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCheckIrpForCriticalTracking$ntoskrnl.exe", 0x9cd448, 0x0, true, 0xafdcff508a54075c)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCompleteRequest1$ntoskrnl.exe", 0x9cd4c0, 0x0, true, 0x854312d1e8d64df9)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCompleteRequest2$ntoskrnl.exe", 0x9cd5f0, 0x0, true, 0xcc1ea1bc6aa1f926)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCompleteRequest3$ntoskrnl.exe", 0x9cd980, 0x0, true, 0x2f6dff60f97e96c9)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpCompleteRequest4$ntoskrnl.exe", 0x9cda08, 0x0, true, 0x80dc12f6289a6b33)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpDisabledWithoutReboot$ntoskrnl.exe", 0xcf5154, 0x0, true, 0x9be35d87ff18a001)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpEnabledInThePast$ntoskrnl.exe", 0xcf5158, 0x0, true, 0x826c61826ff896b2)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpExamineDevObjForwarding$ntoskrnl.exe", 0x9cdad0, 0x0, true, 0x7b074e8feb70ac59)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpExamineIrpStackForwarding$ntoskrnl.exe", 0x9cdb74, 0x0, true, 0xe696b9b65287784f)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpInternalCompletionTrap$ntoskrnl.exe", 0x9cdcb0, 0x0, true, 0xece73c25055a3b64)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpLocalCompletionRoutine$ntoskrnl.exe", 0x9c26c0, 0x0, true, 0xaac9e2652bbfbec5)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpLogStackCallout$ntoskrnl.exe", 0x9c2940, 0x0, true, 0xcbe39427d0caf5b)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpLogStackTrace$ntoskrnl.exe", 0x9c2978, 0x0, true, 0x40acd9b82d92dbab)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpSessionDataCreate$ntoskrnl.exe", 0x9de7d0, 0x0, true, 0x8104cfb230110305)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpSessionDataDereference$ntoskrnl.exe", 0x9de8e0, 0x0, true, 0xe19d9a1a7e2b2cb6)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpSessionDataReference$ntoskrnl.exe", 0x9de948, 0x0, true, 0x3957953600cf0196)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpUnloadDriver$ntoskrnl.exe", 0x9c2a18, 0x0, true, 0xa147b71953b6699d)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpUtilMarkDeviceObject$ntoskrnl.exe", 0x9d3ce8, 0x0, true, 0xccd8fe060f8f89fa)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IovpValidateDeviceObject$ntoskrnl.exe", 0x9c2b24, 0x0, true, 0xc9274996d9a42e82)
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
#define _o6(...) __VA_ARGS__
#endif