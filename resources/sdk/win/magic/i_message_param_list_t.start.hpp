#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_t*), "IMessageParamList._pFirst", p_first, 0x0, 0x40, true, 0xea4e6c2a7fcd49bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_t*), "IMessageParamList._pLast", p_last, 0x40, 0x40, true, 0xdf0e68e80b827c14)
#else
#define _m00
#define _m01
#endif