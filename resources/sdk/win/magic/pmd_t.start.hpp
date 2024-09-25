#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PMD.mdisp", mdisp, 0x0, 0x20, true, 0xe397b6792fc318d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PMD.pdisp", pdisp, 0x20, 0x20, true, 0x6f40552cd91cccce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PMD.vdisp", vdisp, 0x40, 0x20, true, 0x8145c8cc5bb1f9e0)
#else
#define _m00
#define _m01
#define _m02
#endif