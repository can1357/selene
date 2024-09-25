#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "InprocClassActivationProperties._isSixteenBit", is_sixteen_bit, 0x0, 0x0, false, 0x2cb4152170edd404)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "InprocClassActivationProperties._isVirtualizationEnabled", is_virtualization_enabled, 0x0, 0x0, false, 0xe586dec3f32e53d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::threading_model_t), "InprocClassActivationProperties._threadingModel", threading_model, 0x0, 0x0, false, 0x4af3271189991ef7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "InprocClassActivationProperties._requestedClassContext", requested_class_context, 0x0, 0x0, false, 0xc90da5455cb92ef7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::clsctx_t), "InprocClassActivationProperties._selectedClassContext", selected_class_context, 0x0, 0x0, false, 0x86d5a21720c72c39)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::unnamed_struct_dll_class_handle_t*), "InprocClassActivationProperties._dllClass", dll_class, 0x0, 0x0, false, 0xcd424be3887e8965)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif