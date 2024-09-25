#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_PROGID_REDIRECTION.Size", size, 0x0, 0x20, true, 0x32a56b1ee1c06790)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_PROGID_REDIRECTION.Flags", flags, 0x20, 0x20, true, 0xbb3eb02d840a5ebb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_PROGID_REDIRECTION.ConfiguredClsidOffset", configured_clsid_offset, 0x40, 0x20, true, 0xa11488576c882beb)
#else
#define _m00
#define _m01
#define _m02
#endif