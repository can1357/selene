#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION.score", score, 0x0, 0x10, true, 0x9926a1fecd63a485)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION.adjustedPoint", adjusted_point, 0x20, 0x40, true, 0x1789eda6960147c7)
#else
#define _m00
#define _m01
#endif