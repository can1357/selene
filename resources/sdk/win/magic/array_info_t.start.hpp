#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ARRAY_INFO.Dimension", dimension, 0x0, 0x20, true, 0x3b81110010dab78f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "ARRAY_INFO.BufferConformanceMark", buffer_conformance_mark, 0x40, 0x40, true, 0xfd31413e87f64c87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "ARRAY_INFO.BufferVarianceMark", buffer_variance_mark, 0x80, 0x40, true, 0x707b0758c01594fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "ARRAY_INFO.MaxCountArray", max_count_array, 0xc0, 0x40, true, 0xdb1aae1abc022bfb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "ARRAY_INFO.OffsetArray", offset_array, 0x100, 0x40, true, 0xe116110b5330d15a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "ARRAY_INFO.ActualCountArray", actual_count_array, 0x140, 0x40, true, 0x7c43c074eb993bd0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif