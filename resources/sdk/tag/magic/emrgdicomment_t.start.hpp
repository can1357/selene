#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRGDICOMMENT.emr", emr, 0x0, 0x40, true, 0x6f3c9482b6cfe5b7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRGDICOMMENT.cbData", cb_data, 0x40, 0x20, true, 0x7f1e9bd5f0f8f6da)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRGDICOMMENT.Data", data, 0x60, 0x8, true, 0x8104563aee6abd65)
#else
#define _m00
#define _m01
#define _m02
#endif