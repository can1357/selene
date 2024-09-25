#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CRpcThread._hWakeup", h_wakeup, 0x0, 0x40, true, 0x3d2f42039ab91fe6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CRpcThread._fDone", f_done, 0x40, 0x20, true, 0xf407c45708eb7bb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "CRpcThread._fn", fn, 0x80, 0x40, true, 0x2dae391e75bfbdd4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CRpcThread._param", param, 0xc0, 0x40, true, 0x7b54a0925bcd6445)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_rpc_thread_t*), "CRpcThread._pNext", p_next, 0x100, 0x40, true, 0x7480e37874ccb935)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRpcThread._dwThreadID", dw_thread_id, 0x140, 0x20, true, 0x93f5e7f7543646ba)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "CRpcThread._hInstOle32", h_inst_ole32, 0x180, 0x40, true, 0x6354deec656df2bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif