#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t*), "_EX_RUNDOWN_REF_CACHE_AWARE.RunRefs", run_refs, 0x0, 0x40, true, 0x715b75f46cbcf3c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EX_RUNDOWN_REF_CACHE_AWARE.PoolToFree", pool_to_free, 0x40, 0x40, true, 0xa975960716ff2b6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_RUNDOWN_REF_CACHE_AWARE.RunRefSize", run_ref_size, 0x80, 0x20, true, 0x44c0facbcfc274cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_RUNDOWN_REF_CACHE_AWARE.Number", number, 0xa0, 0x20, true, 0xb1e2421dc56d9383)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif