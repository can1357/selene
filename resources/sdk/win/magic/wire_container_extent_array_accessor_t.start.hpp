#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtentArrayAccessor._bufferSize", buffer_size, 0x0, 0x20, true, 0x4e239792d6e9bae4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_container_extent_array_t*), "WireContainerExtentArrayAccessor._extentArray", extent_array, 0x40, 0x40, true, 0xbbbfe0ad1ac52c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_container_extent_t*), "WireContainerExtentArrayAccessor._firstExtent", first_extent, 0x80, 0x40, true, 0x63faa95687eb8684)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtentArrayAccessor._currentExtentIndex", current_extent_index, 0xc0, 0x20, true, 0xcb076e3883c3cfaa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_container_extent_t*), "WireContainerExtentArrayAccessor._currentExtent", current_extent, 0x100, 0x40, true, 0x9291bee1a005a615)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif