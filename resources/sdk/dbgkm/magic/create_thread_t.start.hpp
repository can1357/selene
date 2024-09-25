#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_CREATE_THREAD.SubSystemKey", sub_system_key, 0x0, 0x20, true, 0x57f471759b1c09ac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGKM_CREATE_THREAD.StartAddress", start_address, 0x40, 0x40, true, 0x51c3937ad1cdf7df)
#else
#define _m00
#define _m01
#endif