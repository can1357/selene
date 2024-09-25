#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CALL_FRAME.ReturnAddress", return_address, 0x0, 0x40, true, 0xd85f3e9a04443cbf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CALL_FRAME.Param1Home", param1_home, 0x40, 0x40, true, 0x34b1ff8ffd74613b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CALL_FRAME.Param2Home", param2_home, 0x80, 0x40, true, 0xed09301d8e7a892f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CALL_FRAME.Param3Home", param3_home, 0xc0, 0x40, true, 0x9cfc5c5b5891064c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CALL_FRAME.Param4Home", param4_home, 0x100, 0x40, true, 0xe321a8981eaee3a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif