#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PROVIDER_REG.cAliases", c_aliases, 0x0, 0x20, true, 0x2382269f924fb88d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_PROVIDER_REG.rgpszAliases", rgpsz_aliases, 0x40, 0x40, true, 0x41ae6d36b6a0d3d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_image_reg_t*), "_CRYPT_PROVIDER_REG.pUM", p_um, 0x80, 0x40, true, 0x4cf6e2d8ee658a27)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_image_reg_t*), "_CRYPT_PROVIDER_REG.pKM", p_km, 0xc0, 0x40, true, 0x77bb3eff42e44996)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif