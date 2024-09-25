#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_t*), "NONOICF_POINTER_QUEUE_STATE.pActiveQueue", p_active_queue, 0x40, 0x40, true, 0x264ebe31a49e082c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::array_info_t), "NONOICF_POINTER_QUEUE_STATE.ArrayInfo", array_info, 0x80, 0x80, true, 0xc912f4ffcd30395b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NONOICF_POINTER_QUEUE_STATE.pFreeList", p_free_list, 0x200, 0x40, true, 0x1cc5e720d0100d0c)
#else
#define _m00
#define _m01
#define _m02
#endif