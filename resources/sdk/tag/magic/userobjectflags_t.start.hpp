#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagUSEROBJECTFLAGS.fInherit", f_inherit, 0x0, 0x20, true, 0xa2966b73f9337bcb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagUSEROBJECTFLAGS.fReserved", f_reserved, 0x20, 0x20, true, 0xa309a47ec1486913)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagUSEROBJECTFLAGS.dwFlags", dw_flags, 0x40, 0x20, true, 0xd9148075704a3c75)
#else
#define _m00
#define _m01
#define _m02
#endif