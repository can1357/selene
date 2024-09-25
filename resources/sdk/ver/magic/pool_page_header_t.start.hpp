#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t*), "_VI_POOL_PAGE_HEADER.NextPage", next_page, 0x0, 0x40, true, 0x36836e6215c2be6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VI_POOL_PAGE_HEADER.VerifierEntry", verifier_entry, 0x40, 0x40, true, 0x63fd9153844d9399)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VI_POOL_PAGE_HEADER.Signature", signature, 0x80, 0x40, true, 0xb8c8b95e08d099b5)
#else
#define _m00
#define _m01
#define _m02
#endif