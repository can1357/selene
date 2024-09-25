#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kuser::objectowner_s_t), "_OBJECTOWNER.Share", share, 0x0, 0x20, true, 0x739c2aacde9b58df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECTOWNER.ulObj", ul_obj, 0x0, 0x20, true, 0xe54e4f0f1f069082)
#else
#define _m00
#define _m01
#endif