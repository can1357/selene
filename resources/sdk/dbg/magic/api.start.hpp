#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$DbgBreakPoint$ntoskrnl.exe", 0x3fd600, 0x0, true, 0xb6cbea3df7e9771c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "$DbgBreakPointWithStatus$ntoskrnl.exe", 0x3fd620, 0x0, true, 0x9a61e3fd2e2b48a9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgBreakPointWithStatusEnd$ntoskrnl.exe", 0x3fd622, 0x0, true, 0x1b0d0e0cfd43807e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgCommandString$ntoskrnl.exe", 0x57f460, 0x0, true, 0x7524f93f84a4e505)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgEnumerateCallback$ntoskrnl.exe", 0x391dd0, 0x0, true, 0xe07dd2340216b1ae)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgLoadImageSymbols$ntoskrnl.exe", 0x36ec70, 0x0, true, 0xcd2a36a9c3499430)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgLoadImageSymbolsUnicode$ntoskrnl.exe", 0x36ec14, 0x0, true, 0x10f738b9bb86832)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgLoadUserImageSymbols$ntoskrnl.exe", 0x3c8618, 0x0, true, 0xa329e813f8e13f35)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const char*, ...)>*), "$DbgPrint$ntoskrnl.exe", 0x33c640, 0x0, true, 0x20503bf065ec93c9)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, uint32_t, const char*, ...)>*), "$DbgPrintEx$ntoskrnl.exe", 0x37c520, 0x0, true, 0x2ecc74f8df96eb6d)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const char*, ...)>*), "$DbgPrintReturnControlC$ntoskrnl.exe", 0x57f4d0, 0x0, true, 0xd9cafff33d479625)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(const char*, char*, uint32_t)>*), "$DbgPrompt$ntoskrnl.exe", 0x57f520, 0x0, true, 0x69f8f54a9a59582d)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t)>*), "$DbgQueryDebugFilterState$ntoskrnl.exe", 0x57f570, 0x0, true, 0xbddad3ea3f209635)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint8_t)>*), "$DbgSetDebugFilterState$ntoskrnl.exe", 0x3b2510, 0x0, true, 0xde01295bed78679f)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void(nt::ascii_view*, uint32_t, uint32_t)>*, uint8_t)>*), "$DbgSetDebugPrintCallback$ntoskrnl.exe", 0x57f590, 0x0, true, 0xd11d8688f7fbea9c)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgUnLoadImageSymbols$ntoskrnl.exe", 0x57f5c0, 0x0, true, 0x84d95e99c71e4dfa)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgUnLoadImageSymbolsUnicode$ntoskrnl.exe", 0x36f940, 0x0, true, 0x7b3f3f5e239bce9e)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgUnicodeStringToAnsiString$ntoskrnl.exe", 0x36ecc4, 0x0, true, 0xe4e62c5180ad6470)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$DbgUserBreakPoint$ntoskrnl.exe", 0x3fd610, 0x0, true, 0xf49efc32e95c3a8d)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgDumpNode$win32kbase.sys", 0x0, 0x0, false, 0xd0289d662ceb71e7)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgLockQCursor$win32kfull.sys", 0x0, 0x0, false, 0xaac35cd12256b732)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgPrintRIM$win32kbase.sys", 0x0, 0x0, false, 0x4c7c22ebbc1859e)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgPrintRIMAlways$win32kbase.sys", 0x0, 0x0, false, 0x9fe195ec9d13f3ce)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgPrintError$win32kbase.sys", 0x14a180, 0x0, true, 0xf2d94b53fef47944)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgPrintWarning$win32kbase.sys", 0x7395c, 0x0, true, 0x4e516b280f1133dd)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgPrintGDI$win32kbase.sys", 0x14a180, 0x0, true, 0xe8f65ece9cbcb0b6)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgValidateHooks$win32kfull.sys", 0x12a110, 0x0, true, 0x270e3eea43caec10)
#define _o7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgGetAddressLongFromXrb$storport.sys", 0x27ca0, 0x0, true, 0x3477c15817b92b58)
#define _o8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct stor::port::raid_adapter_extension_t*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t, int64_t)>*), "$DbgLogRequest$storport.sys", 0xe6e8, 0x0, true, 0x84f92575001dd326)
#define _o9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$DbgUiConnectToDbg$ntdll.dll", 0xcc3e0, 0x0, true, 0xa9ea7012e22be6ea)
#define _p0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::client_id_t*, int32_t)>*), "$DbgUiContinue$ntdll.dll", 0xcc450, 0x0, true, 0x794f51b53cb43fc6)
#define _p1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::dbgui_wait_state_change_t*, struct win::debug_event_t*)>*), "$DbgUiConvertStateChangeStructure$ntdll.dll", 0xcc480, 0x0, true, 0xeb9dda887022e603)
#define _p2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgUiConvertStateChangeStructureEx$ntdll.dll", 0xcc490, 0x0, true, 0x805d999d2e3b32b3)
#define _p3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgUiConvertStateChangeStructureWorker$ntdll.dll", 0xcc4a0, 0x0, true, 0xd4e159f8d96e4ae1)
#define _p4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$DbgUiDebugActiveProcess$ntdll.dll", 0xcc740, 0x0, true, 0xe4e2934955320deb)
#define _p5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void*()>*), "$DbgUiGetThreadDebugObject$ntdll.dll", 0xcc7b0, 0x0, true, 0xc33fed8e6821c336)
#define _p6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$DbgUiIssueRemoteBreakin$ntdll.dll", 0xcc7d0, 0x0, true, 0x7b009dd75fb98867)
#define _p7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$DbgUiRemoteBreakin$ntdll.dll", 0xcc840, 0x0, true, 0x27432ce0a7201485)
#define _p8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$DbgUiSetThreadDebugObject$ntdll.dll", 0xcc8a0, 0x0, true, 0xebb0a96b38e2f2ca)
#define _p9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "$DbgUiStopDebugging$ntdll.dll", 0xcc8c0, 0x0, true, 0xb402b02332b20336)
#define _q0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::dbgui_wait_state_change_t*, int64_t*)>*), "$DbgUiWaitStateChange$ntdll.dll", 0xcc8e0, 0x0, true, 0x888d7ee8bae49046)
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
#define _o7(...) __VA_ARGS__
#define _o8(...) __VA_ARGS__
#define _o9(...) __VA_ARGS__
#define _p0(...) __VA_ARGS__
#define _p1(...) __VA_ARGS__
#define _p2(...) __VA_ARGS__
#define _p3(...) __VA_ARGS__
#define _p4(...) __VA_ARGS__
#define _p5(...) __VA_ARGS__
#define _p6(...) __VA_ARGS__
#define _p7(...) __VA_ARGS__
#define _p8(...) __VA_ARGS__
#define _p9(...) __VA_ARGS__
#define _q0(...) __VA_ARGS__
#endif