#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LBLOB.Length", length, 0x0, 0x40, true, 0xf1786ba6f4e222ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LBLOB.MaximumLength", maximum_length, 0x40, 0x40, true, 0x8ceaf691cdd4362c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_LBLOB.Buffer", buffer, 0x80, 0x40, true, 0xdef9aa83f54e2252)
#else
#define _m00
#define _m01
#define _m02
#endif