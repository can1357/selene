#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_ole_in_place_active_object_t*), "CSurrogatedObjectList._pInplaceObject", p_inplace_object, 0x0, 0x40, true, 0xee69e0662b48129)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "CSurrogatedObjectList._hWnd", h_wnd, 0x40, 0x40, true, 0x3dc7c111fc755ef7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_surrogated_object_list_t*), "CSurrogatedObjectList._pNext", p_next, 0x80, 0x40, true, 0x3f7e48d78f79d5a0)
#else
#define _m00
#define _m01
#define _m02
#endif