#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_PIPE_MESSAGE.Signature", signature, 0x0, 0x10, true, 0xb5378bf14027b6cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_PIPE_MESSAGE.PipeId", pipe_id, 0x10, 0x10, true, 0x6953a5f37513c89c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_PIPE_MESSAGE.PipeStatus", pipe_status, 0x20, 0x10, true, 0x513470512d556ee6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_PIPE_MESSAGE.PipeFlags", pipe_flags, 0x30, 0x10, true, 0x4a78d398644f59ae)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_NDR_PIPE_MESSAGE.pTypeFormat", p_type_format, 0x40, 0x40, true, 0x8e306e7c655fdded)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t*), "_NDR_PIPE_MESSAGE.pStubMsg", p_stub_msg, 0x80, 0x40, true, 0xe6d155a4f81764d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::generic_pipe_type_t*), "_NDR_PIPE_MESSAGE.pPipeObject", p_pipe_object, 0xc0, 0x40, true, 0x5cc85dd05110aff2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif