#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::csc_inner_unknown_t), "CSynchronizeContainer._cInner", c_inner, 0x40, 0xc0, true, 0x45ad4893aeb7b4b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CSynchronizeContainer._pControl", p_control, 0x100, 0x40, true, 0x6f950f551c457a6a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSynchronizeContainer._lLast", l_last, 0x140, 0x20, true, 0xe4f297a49998928d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 63>), "CSynchronizeContainer._aEvent", a_event, 0x180, 0xc0, true, 0x92fe7fe31534f822)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::i_synchronize_t*, 63>), "CSynchronizeContainer._aSync", a_sync, 0x1140, 0xc0, true, 0x296d8536b27ce593)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif