#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GROUP_MEMBERSHIP.RelativeId", relative_id, 0x0, 0x20, true, 0x1a9c3324d484212c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GROUP_MEMBERSHIP.Attributes", attributes, 0x20, 0x20, true, 0x6a08009d1cae860e)
#else
#define _m00
#define _m01
#endif