#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_SCOPED_POLICY_ID_ACE.Header", header, 0x0, 0x20, true, 0x44aae7479520a50a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SCOPED_POLICY_ID_ACE.Mask", mask, 0x20, 0x20, true, 0x7e8fb9e1d558edf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SCOPED_POLICY_ID_ACE.SidStart", sid_start, 0x40, 0x20, true, 0x45cbac0ddd4fb93)
#else
#define _m00
#define _m01
#define _m02
#endif