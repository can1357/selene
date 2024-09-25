#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KHETERO_PROCESSOR_SET.IdealMask", ideal_mask, 0x0, 0x40, true, 0x6135c1ed07edbc7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KHETERO_PROCESSOR_SET.PreferredMask", preferred_mask, 0x40, 0x40, true, 0x2880c45ce1b95721)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KHETERO_PROCESSOR_SET.AvailableMask", available_mask, 0x80, 0x40, true, 0x2fa8513497dc0250)
#else
#define _m00
#define _m01
#define _m02
#endif