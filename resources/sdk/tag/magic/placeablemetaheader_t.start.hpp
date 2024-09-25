#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPLACEABLEMETAHEADER.key", key, 0x0, 0x0, false, 0x2dc687b8605b955c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPLACEABLEMETAHEADER.hmf", hmf, 0x0, 0x0, false, 0x7cbcfba0289c1531)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::win16rect_t), "tagPLACEABLEMETAHEADER.bbox", bbox, 0x0, 0x0, false, 0x456823d3334537b0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPLACEABLEMETAHEADER.inch", inch, 0x0, 0x0, false, 0xa21f7e2f0ece8d74)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPLACEABLEMETAHEADER.checksum", checksum, 0x0, 0x0, false, 0x335930e7801d47cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif