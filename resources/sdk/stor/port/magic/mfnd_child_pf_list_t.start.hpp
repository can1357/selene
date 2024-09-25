#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_LIST.Version", version, 0x0, 0x0, false, 0x440a13789d7b98ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_LIST.Size", size, 0x0, 0x0, false, 0x67210b5c87175c5c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_LIST.ChildPFCount", child_pf_count, 0x0, 0x0, false, 0xe46c7c972dabcbc2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::mfnd_child_pf_data_t, 1>), "_MFND_CHILD_PF_LIST.ChildPFs", child_p_fs, 0x0, 0x0, false, 0xf8e7a1f14d411d12)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif