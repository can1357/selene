#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_pending_call_t*), "SPendingCall.pNext", p_next, 0x0, 0x40, true, 0xbde48e3ff2ea0f03)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_pending_call_t*), "SPendingCall.pPrev", p_prev, 0x40, 0x40, true, 0x8a6346d24b78fc8c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_channel_object_t*), "SPendingCall.pChnlObj", p_chnl_obj, 0x80, 0x40, true, 0x4f5a2d662226cd9f)
#else
#define _m00
#define _m01
#define _m02
#endif