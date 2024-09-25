#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fx::mdl_debug_info_t, 16>), "FxAllocatedMdls.Info", info, 0x0, 0x0, true, 0x6feec5642527fe36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxAllocatedMdls.Count", count, 0xc00, 0x20, true, 0x27e6f3564383a87a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::allocated_mdls_t*), "FxAllocatedMdls.Next", next, 0xc40, 0x40, true, 0x71d12f5c1aa94ef1)
#else
#define _m00
#define _m01
#define _m02
#endif