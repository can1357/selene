#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FT.ft_scalar", ft_scalar, 0x0, 0x40, true, 0xa588d9a6d42506f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "FT.ft_struct", ft_struct, 0x0, 0x40, true, 0xffd89e11d0d60aba)
#else
#define _m00
#define _m01
#endif