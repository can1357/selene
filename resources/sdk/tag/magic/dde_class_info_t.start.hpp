#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDdeClassInfo.dwContextMask", dw_context_mask, 0x0, 0x20, true, 0x4e57bd29043fedb0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tagDdeClassInfo.fClaimFactory", f_claim_factory, 0x20, 0x20, true, 0x2bd1e85ae7daa848)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDdeClassInfo.dwContext", dw_context, 0x40, 0x20, true, 0x2455919a58464670)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDdeClassInfo.dwFlags", dw_flags, 0x60, 0x20, true, 0xcdcfb95268729e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDdeClassInfo.dwThreadId", dw_thread_id, 0x80, 0x20, true, 0x1de450dcd484146)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagDdeClassInfo.dwRegistrationKey", dw_registration_key, 0xa0, 0x20, true, 0xaf3d049df91cc068)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "_tagDdeClassInfo.punk", punk, 0xc0, 0x40, true, 0x8857599d5d21cfb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif