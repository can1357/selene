#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRMODIFYWORLDTRANSFORM.emr", emr, 0x0, 0x40, true, 0x1b1538a734d96bba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::xform_t), "tagEMRMODIFYWORLDTRANSFORM.xform", xform, 0x40, 0xc0, true, 0x9ff9e1e1d41a7d62)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMODIFYWORLDTRANSFORM.iMode", i_mode, 0x100, 0x20, true, 0x6b1728f03135a21e)
#else
#define _m00
#define _m01
#define _m02
#endif