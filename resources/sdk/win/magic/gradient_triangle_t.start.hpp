#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GRADIENT_TRIANGLE.Vertex1", vertex1, 0x0, 0x20, true, 0xf50bec8d303ac6dd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GRADIENT_TRIANGLE.Vertex2", vertex2, 0x20, 0x20, true, 0xf7e4303a06c18c8c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GRADIENT_TRIANGLE.Vertex3", vertex3, 0x40, 0x20, true, 0x81faf254cf25597a)
#else
#define _m00
#define _m01
#define _m02
#endif