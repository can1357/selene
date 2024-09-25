#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_DATA.cLogotypeImage", c_logotype_image, 0x0, 0x20, true, 0xcc1812ac6e30c6cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_image_t*), "_CERT_LOGOTYPE_DATA.rgLogotypeImage", rg_logotype_image, 0x40, 0x40, true, 0xf0e27685bde8f85f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_DATA.cLogotypeAudio", c_logotype_audio, 0x80, 0x20, true, 0x8d2d3cd0b3b0596b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_audio_t*), "_CERT_LOGOTYPE_DATA.rgLogotypeAudio", rg_logotype_audio, 0xc0, 0x40, true, 0xe796ebe3f3429b79)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif