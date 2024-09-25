#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::media_type_t), "_FORMAT_PARAMETERS.MediaType", media_type, 0x0, 0x20, true, 0xa48e26bb228c67c8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FORMAT_PARAMETERS.StartCylinderNumber", start_cylinder_number, 0x20, 0x20, true, 0x737aaaa266a23dfd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FORMAT_PARAMETERS.EndCylinderNumber", end_cylinder_number, 0x40, 0x20, true, 0x5313eefe4be90471)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FORMAT_PARAMETERS.StartHeadNumber", start_head_number, 0x60, 0x20, true, 0xad47d2f263fa11d7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FORMAT_PARAMETERS.EndHeadNumber", end_head_number, 0x80, 0x20, true, 0xfad4f7bfdd0e34f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif