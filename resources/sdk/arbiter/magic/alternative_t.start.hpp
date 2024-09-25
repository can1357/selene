#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALTERNATIVE.Minimum", minimum, 0x0, 0x40, true, 0x7fc32b83ad23b61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALTERNATIVE.Maximum", maximum, 0x40, 0x40, true, 0x673381908aee5d65)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALTERNATIVE.Length", length, 0x80, 0x40, true, 0xaebd9f8ede352736)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALTERNATIVE.Alignment", alignment, 0xc0, 0x40, true, 0x7110a30fe48b3e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ARBITER_ALTERNATIVE.Priority", priority, 0x100, 0x20, true, 0x8cb86d5d965a2fec)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_ALTERNATIVE.Flags", flags, 0x120, 0x20, true, 0x8a163b29568101c9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t*), "_ARBITER_ALTERNATIVE.Descriptor", descriptor, 0x140, 0x40, true, 0xf079c70cb1c4aa9d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif