#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTOUCH_HIT_TESTING_INPUT.pointerId", pointer_id, 0x0, 0x20, true, 0x17aa9a3d5a437c15)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagTOUCH_HIT_TESTING_INPUT.point", point, 0x20, 0x40, true, 0xae0a79398aa36975)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagTOUCH_HIT_TESTING_INPUT.boundingBox", bounding_box, 0x60, 0x80, true, 0xf26a79d2850b5366)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagTOUCH_HIT_TESTING_INPUT.nonOccludedBoundingBox", non_occluded_bounding_box, 0xe0, 0x80, true, 0xdda3c1db1b448bf1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTOUCH_HIT_TESTING_INPUT.orientation", orientation, 0x160, 0x20, true, 0xdd4677e07940010c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif