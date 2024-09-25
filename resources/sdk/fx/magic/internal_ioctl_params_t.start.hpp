#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_FxInternalIoctlParams.Argument1", argument1, 0x0, 0x40, true, 0xab2a168f1cb36117)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_FxInternalIoctlParams.Argument2", argument2, 0x40, 0x40, true, 0x6a86256185842569)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_FxInternalIoctlParams.Argument4", argument4, 0x80, 0x40, true, 0x5ef23499bd38bdcb)
#else
#define _m00
#define _m01
#define _m02
#endif