#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETWORLDTRANSFORM.emr", emr, 0x0, 0x40, true, 0x34695579a40e054b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::xform_t), "tagEMRSETWORLDTRANSFORM.xform", xform, 0x40, 0xc0, true, 0x62f1c1c4fcc9a476)
#else
#define _m00
#define _m01
#endif