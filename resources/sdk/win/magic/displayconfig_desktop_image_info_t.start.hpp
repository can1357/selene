#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "DISPLAYCONFIG_DESKTOP_IMAGE_INFO.PathSourceSize", path_source_size, 0x0, 0x40, true, 0xf1334ddeeb9e2ba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "DISPLAYCONFIG_DESKTOP_IMAGE_INFO.DesktopImageRegion", desktop_image_region, 0x40, 0x80, true, 0x6a72d0e4930be9d4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "DISPLAYCONFIG_DESKTOP_IMAGE_INFO.DesktopImageClip", desktop_image_clip, 0xc0, 0x80, true, 0x2e38eb419303896c)
#else
#define _m00
#define _m01
#define _m02
#endif