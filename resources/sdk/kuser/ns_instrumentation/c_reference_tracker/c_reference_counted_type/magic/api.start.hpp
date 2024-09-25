#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation$win32kbase.sys", 0x15c0f0, 0x0, true, 0x5229b0ef96532c41)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation$win32kbase.sys", 0x15c1c4, 0x0, true, 0xf786ad3e6a4b8ad2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation$win32kbase.sys", 0x15c288, 0x0, true, 0x99611bdc2913da65)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation$win32kbase.sys", 0x15c574, 0x0, true, 0x33a2b55ff8c63091)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif