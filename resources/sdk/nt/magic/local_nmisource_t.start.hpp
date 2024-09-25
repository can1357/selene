#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCAL_NMISOURCE.Type", type, 0x0, 0x8, true, 0x4f429283530d9bba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCAL_NMISOURCE.Length", length, 0x8, 0x8, true, 0xbbfa491e8db35302)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCAL_NMISOURCE.ProcessorID", processor_id, 0x10, 0x8, true, 0xfffde781df2bd9b3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LOCAL_NMISOURCE.Flags", flags, 0x18, 0x10, true, 0x2683f7a6056ad64c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCAL_NMISOURCE.LINTIN", lintin, 0x28, 0x8, true, 0xcc55d7e476c7c02d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif