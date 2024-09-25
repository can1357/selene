#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "HandleWrapperMarshalDataHeader.WrapperType", wrapper_type, 0x0, 0x8, true, 0xc8de0ecc7769339f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "HandleWrapperMarshalDataHeader.IdlType", idl_type, 0x8, 0x8, true, 0x77b685638096be2e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "HandleWrapperMarshalDataHeader.WasMarshaledInComCall", was_marshaled_in_com_call, 0x10, 0x10, true, 0xfc6573c6c121102b)
#else
#define _m00
#define _m01
#define _m02
#endif