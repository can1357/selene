#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheDereference$ntoskrnl.exe", 0x0, 0x0, false, 0xf39e987da761bdfd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheManagerInitialize$ntoskrnl.exe", 0xa67828, 0x0, true, 0x87330fac71e82f34)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheAdd$ntoskrnl.exe", 0x928a1c, 0x0, true, 0xbdf28feda60cb697)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheCleanup$ntoskrnl.exe", 0x928b30, 0x0, true, 0x1f716b7ba67db5e3)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheCreatePrepare$ntoskrnl.exe", 0x925e5c, 0x0, true, 0x5805cd010afa6bdb)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheDelete$ntoskrnl.exe", 0x928bb4, 0x0, true, 0xefb5724f5bf6ada7)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheInitialize$ntoskrnl.exe", 0x928c0c, 0x0, true, 0xb4201b1e0df823ce)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheManagerStart$ntoskrnl.exe", 0x928c8c, 0x0, true, 0x62bac100dd871b06)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheReference$ntoskrnl.exe", 0x928e4c, 0x0, true, 0xa09e139e8df072a0)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheRemove$ntoskrnl.exe", 0x928ec0, 0x0, true, 0x18ce80fb1d98d0be)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcCacheStart$ntoskrnl.exe", 0x928f78, 0x0, true, 0xfdb881c0b9e8ea4e)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcGetCacheStats$ntoskrnl.exe", 0x929128, 0x0, true, 0x93a6000ca330088d)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcProcessCreateRequest$ntoskrnl.exe", 0x925f28, 0x0, true, 0x4e2d8ba4b58cf156)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcProcessDeleteRequest$ntoskrnl.exe", 0x926188, 0x0, true, 0xf47d6c6acdc03a32)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcProcessListRequest$ntoskrnl.exe", 0x7b1a48, 0x0, true, 0x1ad5a8b0b4c0189)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcProcessResizeRequest$ntoskrnl.exe", 0x9261f8, 0x0, true, 0xc9b060f6ce74fbb4)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcProcessStatsRequest$ntoskrnl.exe", 0x9262c0, 0x0, true, 0xcf66278e2603ed31)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcProcessStoreCreateRequest$ntoskrnl.exe", 0x9264c4, 0x0, true, 0x8b55ae2788174536)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcProcessStoreDeleteRequest$ntoskrnl.exe", 0x92660c, 0x0, true, 0x2f006ab900531c19)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcStoreCreate$ntoskrnl.exe", 0x929298, 0x0, true, 0x47554e9d9fd627d7)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcStoreDelete$ntoskrnl.exe", 0x9294f8, 0x0, true, 0x20799f8d9ea71e84)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcStoreEntryFind$ntoskrnl.exe", 0x929660, 0x0, true, 0x41af0f3ab8f5a5c0)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcStorePlacementGet$ntoskrnl.exe", 0x9296a0, 0x0, true, 0x38f65c0da19ebb93)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcStoreResize$ntoskrnl.exe", 0x9297c0, 0x0, true, 0x89f15b88ae4397b9)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcStoreSlotAbort$ntoskrnl.exe", 0x929a6c, 0x0, true, 0xbb2cd7e49ea2d273)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcStoreSlotCommit$ntoskrnl.exe", 0x929b00, 0x0, true, 0x551f2fc22dc71be9)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcStoreSlotReserve$ntoskrnl.exe", 0x929ba8, 0x0, true, 0x4224b2e0dc2ce874)
#define _o7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmcVolumePnpNotification$ntoskrnl.exe", 0x929d10, 0x0, true, 0xcfa3382d24b397bf)
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
#endif