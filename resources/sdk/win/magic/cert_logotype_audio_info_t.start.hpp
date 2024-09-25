#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_AUDIO_INFO.dwFileSize", dw_file_size, 0x0, 0x20, true, 0xb589cfde59709b10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_AUDIO_INFO.dwPlayTime", dw_play_time, 0x20, 0x20, true, 0xe2c9f994aebaae82)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_AUDIO_INFO.dwChannels", dw_channels, 0x40, 0x20, true, 0xe4e8ff7cdb7da53a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_AUDIO_INFO.dwSampleRate", dw_sample_rate, 0x60, 0x20, true, 0x98cd81285aea9218)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_LOGOTYPE_AUDIO_INFO.pwszLanguage", pwsz_language, 0x80, 0x40, true, 0xe11d3d78ee1a3ca6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif