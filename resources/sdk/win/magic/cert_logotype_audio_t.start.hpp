#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_details_t), "_CERT_LOGOTYPE_AUDIO.LogotypeDetails", logotype_details, 0x0, 0xc0, true, 0x9e458b4f7f6bea54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_audio_info_t*), "_CERT_LOGOTYPE_AUDIO.pLogotypeAudioInfo", p_logotype_audio_info, 0xc0, 0x40, true, 0xf7a18f59be3eca38)
#else
#define _m00
#define _m01
#endif