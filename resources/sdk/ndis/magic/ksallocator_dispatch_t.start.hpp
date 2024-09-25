#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::kspin_t*, struct ndis::ksallocator_framing_t*, void**)>*), "_KSALLOCATOR_DISPATCH.InitializeAllocator", initialize_allocator, 0x0, 0x0, false, 0x4ecc3b62b1f60111)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_KSALLOCATOR_DISPATCH.DeleteAllocator", delete_allocator, 0x0, 0x0, false, 0xe084bbaa3bf7e2c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*)>*), "_KSALLOCATOR_DISPATCH.Allocate", allocate, 0x0, 0x0, false, 0xd2a6676d5b6cecd8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_KSALLOCATOR_DISPATCH.Free", free, 0x0, 0x0, false, 0x936d4374b55af8eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif