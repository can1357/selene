#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSrvCallState._dwCallCatIn", dw_call_cat_in, 0x0, 0x20, true, 0xc95abd214195ec49)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_srv_call_state_t*), "CSrvCallState._pPrev", p_prev, 0x40, 0x40, true, 0x44718b83948b22ee)
#else
#define _m00
#define _m01
#endif