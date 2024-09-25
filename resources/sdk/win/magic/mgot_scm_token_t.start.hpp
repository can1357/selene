#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_MgotScmToken.clsid", clsid, 0x0, 0x80, true, 0xa7b008ee76b9a8e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::scmregkey_t), "_MgotScmToken.srkRegKey", srk_reg_key, 0x80, 0x80, true, 0x431343b0cc7de467)
#else
#define _m00
#define _m01
#endif