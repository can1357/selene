#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "NDR_PFNFREE_POINTER_QUEUE_ELEMENT.pNext", p_next, 0x40, 0x40, true, 0xe2c429164ac42c4d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "NDR_PFNFREE_POINTER_QUEUE_ELEMENT.pfnFree", pfn_free, 0x80, 0x40, true, 0xb83d5f8b1f79e68a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "NDR_PFNFREE_POINTER_QUEUE_ELEMENT.pMemory", p_memory, 0xc0, 0x40, true, 0xd30abe273015c850)
#else
#define _m00
#define _m01
#define _m02
#endif