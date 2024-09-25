#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxChnl._dwState", dw_state, 0x200, 0x20, true, 0x841c28247c83db5d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_face_entry_t*), "CCtxChnl._pIFaceEntry", p_i_face_entry, 0x240, 0x40, true, 0xff87531608cedf11)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_wrapper_t*), "CCtxChnl._pStdWrapper", p_std_wrapper, 0x280, 0x40, true, 0x232f84043a325e06)
#else
#define _m00
#define _m01
#define _m02
#endif