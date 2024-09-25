#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagFUNCDESC.memid", memid, 0x0, 0x20, true, 0x554a334cd1c2181e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagFUNCDESC.lprgscode", lprgscode, 0x40, 0x40, true, 0x5079fb9165c14619)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::elemdesc_t*), "tagFUNCDESC.lprgelemdescParam", lprgelemdesc_param, 0x80, 0x40, true, 0x4dd82aceaa797efc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::funckind_t), "tagFUNCDESC.funckind", funckind, 0xc0, 0x20, true, 0xb31b7196ab18745e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::invokekind_t), "tagFUNCDESC.invkind", invkind, 0xe0, 0x20, true, 0xe83d50cf9cf6f98e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::callconv_t), "tagFUNCDESC.callconv", callconv, 0x100, 0x20, true, 0x52c527ccf6b5ee2e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagFUNCDESC.cParams", c_params, 0x120, 0x10, true, 0xa2da5d768cde35da)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagFUNCDESC.cParamsOpt", c_params_opt, 0x130, 0x10, true, 0xf4a3064eba31634a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagFUNCDESC.oVft", o_vft, 0x140, 0x10, true, 0xa9d2288b6620aee9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagFUNCDESC.cScodes", c_scodes, 0x150, 0x10, true, 0xb0728c0e41e1ceb6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::elemdesc_t), "tagFUNCDESC.elemdescFunc", elemdesc_func, 0x180, 0x0, true, 0x39f46dd1421259c4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagFUNCDESC.wFuncFlags", w_func_flags, 0x280, 0x10, true, 0x1e1c5693db5b9c16)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif