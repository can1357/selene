#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRRESTOREDC.emr", emr, 0x0, 0x40, true, 0xebe885f4e01a86a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRRESTOREDC.iRelative", i_relative, 0x40, 0x20, true, 0x6db66212badedfb2)
#else
#define _m00
#define _m01
#endif