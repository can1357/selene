#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_CALL_FRAME.ReturnAddress", return_address, 0x0, 0x20, true, 0x57b1d316a28a49b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_CALL_FRAME.Param1", param1, 0x20, 0x20, true, 0xca1605450adc823)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_CALL_FRAME.Param2", param2, 0x40, 0x20, true, 0xdb561df651203a7b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_CALL_FRAME.CompatibilityArea", compatibility_area, 0x60, 0x20, true, 0xa2efe7b9dbf09d1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif