#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_HEAP_TABLE.Size", size, 0x0, 0x20, true, 0x69825f896534cd80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*, uint32_t, uint64_t)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapAllocate", vrf_heap_allocate, 0x40, 0x40, true, 0xded7c8fd39f372a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*, uint32_t, void*, uint64_t)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapReAllocate", vrf_heap_re_allocate, 0x80, 0x40, true, 0xb39edf0ae78f7ef6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapFree", vrf_heap_free, 0xc0, 0x40, true, 0xf43eace0feb3f73a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(verifier_create_rpc_page_heap_function_t ), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapCreate", vrf_heap_create, 0x100, 0x40, true, 0x1940e48776b588c2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapDestroy", vrf_heap_destroy, 0x140, 0x40, true, 0x4339823beb3a02d5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint64_t)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapExtend", vrf_heap_extend, 0x180, 0x40, true, 0x5fec8ffdc5b48c89)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, void**)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfGetProcessHeaps", vrf_get_process_heaps, 0x1c0, 0x40, true, 0xa653bbc463d0657c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct rtl::heap_walk_entry_t*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapWalk", vrf_heap_walk, 0x200, 0x40, true, 0x1059fe85bd02d73a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapLock", vrf_heap_lock, 0x240, 0x40, true, 0x95e57050f06f67e4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapUnlock", vrf_heap_unlock, 0x280, 0x40, true, 0x74e994ac0dd52e39)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapIsLocked", vrf_heap_is_locked, 0x2c0, 0x40, true, 0x7703ce3cad7fccae)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapValidate", vrf_heap_validate, 0x300, 0x40, true, 0x99ee8b802cb7951c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*, void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapSetUserValue", vrf_heap_set_user_value, 0x340, 0x40, true, 0xa0786a9554dd8ccf)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*, void**, uint32_t*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapGetUserInfo", vrf_heap_get_user_info, 0x380, 0x40, true, 0xa78cf1f29659e2bd)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, void*, uint32_t, uint32_t)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapSetUserFlags", vrf_heap_set_user_flags, 0x3c0, 0x40, true, 0x363bb9c40fe913e2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapSerialize", vrf_heap_serialize, 0x400, 0x40, true, 0x73847a5f6c9e8c82)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(void*, uint32_t, void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapSize", vrf_heap_size, 0x440, 0x40, true, 0xc8f899b0bbf086fa)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapCompact", vrf_heap_compact, 0x480, 0x40, true, 0x204ba59d46a149fc)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfHeapZero", vrf_heap_zero, 0x4c0, 0x40, true, 0xc9cee44abee09b6)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*, void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfQueryVerifierOptions", vrf_query_verifier_options, 0x500, 0x40, true, 0x7e3457f7e5753b05)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*, void*)>*), "_RTL_VERIFIER_HEAP_TABLE.VrfSetVerifierOptions", vrf_set_verifier_options, 0x540, 0x40, true, 0x98dedcfb0846112)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif