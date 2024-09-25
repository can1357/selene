#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagStorageLayout.LayoutType", layout_type, 0x0, 0x20, true, 0xf4a120c46becf227)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagStorageLayout.pwcsElementName", pwcs_element_name, 0x40, 0x40, true, 0xf501409d9664593)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagStorageLayout.cOffset", c_offset, 0x80, 0x40, true, 0x2d5a725b04f610ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagStorageLayout.cBytes", c_bytes, 0xc0, 0x40, true, 0x1e6b176d1c67141f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif