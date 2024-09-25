#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_SEED_AND_LENGTH.Length", length, 0x0, 0x8, true, 0x857c51bb1008aa3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_SEED_AND_LENGTH.Seed", seed, 0x8, 0x8, true, 0x58836566d1f839c)
#else
#define _m00
#define _m01
#endif