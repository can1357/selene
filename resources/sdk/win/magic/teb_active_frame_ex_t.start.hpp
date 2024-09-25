#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::teb_active_frame_t), "_TEB_ACTIVE_FRAME_EX.BasicFrame", basic_frame, 0x0, 0xc0, true, 0xe683d08fa9e3df44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TEB_ACTIVE_FRAME_EX.ExtensionIdentifier", extension_identifier, 0xc0, 0x40, true, 0x7dcc517cac3e2bef)
#else
#define _m00
#define _m01
#endif