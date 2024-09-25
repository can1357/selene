#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJREFDATA.nElms", n_elms, 0x0, 0x20, true, 0xc71df58efd9a3040)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dataelement_t**), "tagOBJREFDATA.ppElmArray", pp_elm_array, 0x40, 0x40, true, 0xc677edc6934c2b06)
#else
#define _m00
#define _m01
#endif