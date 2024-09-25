#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_SECURITY.Signature", signature, 0x0, 0x10, true, 0x9f4adcbf50e1b75b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY.Flink", flink, 0x20, 0x20, true, 0x4529dafaaa0c2d9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY.Blink", blink, 0x40, 0x20, true, 0xb9bb37271bf5ac97)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY.ReferenceCount", reference_count, 0x60, 0x20, true, 0x682ef8789a3029b1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY.DescriptorLength", descriptor_length, 0x80, 0x20, true, 0xb15e08b0e249dbb3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::descriptor_relative_t), "_CM_KEY_SECURITY.Descriptor", descriptor, 0xa0, 0xa0, true, 0xa9e45cf0a645548e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif