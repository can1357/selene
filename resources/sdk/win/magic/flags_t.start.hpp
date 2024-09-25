#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_Flags.ValidCallPending", valid_call_pending, 0x0, 0x1, true, 0x900b43430dc60fe0, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_Flags.ErrorPending", error_pending, 0x1, 0x1, true, 0x143c2cf3afbf5045, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_Flags.BadStubData", bad_stub_data, 0x2, 0x1, true, 0xde49b590a68f7243, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_Flags.RuntimeCleanedUp", runtime_cleaned_up, 0x3, 0x1, true, 0x70eac9ccd1ffe267, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_Flags.ClientHandleCreated", client_handle_created, 0x4, 0x1, true, 0xc90c2f8229678a7b, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_Flags.HandlelessObjCall", handleless_obj_call, 0x5, 0x1, true, 0x2c9673fd4af2174a, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_Flags.HasBigByValueArg", has_big_by_value_arg, 0x6, 0x1, true, 0xf45b82993cdf1961, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_Flags.ClientDcomPipeCall", client_dcom_pipe_call, 0x7, 0x1, true, 0x8392ccfaa4867130, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif