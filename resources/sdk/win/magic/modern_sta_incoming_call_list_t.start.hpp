#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_t*), "ModernSTAIncomingCallList._pFirst", p_first, 0x0, 0x40, true, 0xdab3579f8c4e68cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_t*), "ModernSTAIncomingCallList._pLast", p_last, 0x40, 0x40, true, 0xdfaaa32ae35e8e62)
#else
#define _m00
#define _m01
#endif