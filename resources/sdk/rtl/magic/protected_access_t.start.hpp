#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROTECTED_ACCESS.DominateMask", dominate_mask, 0x0, 0x20, true, 0xef5556b1149e8c6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROTECTED_ACCESS.DeniedProcessAccess", denied_process_access, 0x20, 0x20, true, 0xf7ac2ea4adf702f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROTECTED_ACCESS.DeniedThreadAccess", denied_thread_access, 0x40, 0x20, true, 0x612f7b4efbe8e211)
#else
#define _m00
#define _m01
#define _m02
#endif