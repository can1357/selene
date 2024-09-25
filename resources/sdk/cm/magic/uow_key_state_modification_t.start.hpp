#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_UOW_KEY_STATE_MODIFICATION.RefCount", ref_count, 0x0, 0x20, true, 0x9cfb68fc866ed3e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_CM_UOW_KEY_STATE_MODIFICATION.SubKeyListCount", sub_key_list_count, 0x20, 0x40, true, 0x3e7752f49f1593)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_CM_UOW_KEY_STATE_MODIFICATION.NewSubKeyList", new_sub_key_list, 0x60, 0x40, true, 0x61178621db9accc4)
#else
#define _m00
#define _m01
#define _m02
#endif