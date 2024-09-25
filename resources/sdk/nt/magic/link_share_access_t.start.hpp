#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LINK_SHARE_ACCESS.OpenCount", open_count, 0x0, 0x20, true, 0xbe8ee42210d8f09a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LINK_SHARE_ACCESS.Deleters", deleters, 0x20, 0x20, true, 0xa1e9fd4095e107e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LINK_SHARE_ACCESS.SharedDelete", shared_delete, 0x40, 0x20, true, 0x6698b02257ef42aa)
#else
#define _m00
#define _m01
#define _m02
#endif