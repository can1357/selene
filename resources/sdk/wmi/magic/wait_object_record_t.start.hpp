#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_WAIT_OBJECT_RECORD.Object", object, 0x0, 0x40, true, 0x2ccf09c15c2fd873)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_WAIT_OBJECT_RECORD.ObjectType", object_type, 0x40, 0x8, true, 0x464378dc9269fd2f)
#else
#define _m00
#define _m01
#endif