#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagCOLORMATCHTOTARGET.emr", emr, 0x0, 0x40, true, 0x485afb312e5c7b6f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOLORMATCHTOTARGET.dwAction", dw_action, 0x40, 0x20, true, 0xc2954f17e0325909)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOLORMATCHTOTARGET.dwFlags", dw_flags, 0x60, 0x20, true, 0xe98d889be32e3fee)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOLORMATCHTOTARGET.cbName", cb_name, 0x80, 0x20, true, 0x3a8de451af2a1ddb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOLORMATCHTOTARGET.cbData", cb_data, 0xa0, 0x20, true, 0x261377db0ac91980)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagCOLORMATCHTOTARGET.Data", data, 0xc0, 0x8, true, 0xbfeda9ed41ac259)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif