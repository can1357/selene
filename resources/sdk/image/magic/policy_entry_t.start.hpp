#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum image::policy_entry_type_t), "_IMAGE_POLICY_ENTRY.Type", type, 0x0, 0x20, true, 0xeb5716a851b77b05)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum image::policy_id_t), "_IMAGE_POLICY_ENTRY.PolicyId", policy_id, 0x20, 0x20, true, 0x6a498557ecd174e5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_IMAGE_POLICY_ENTRY.None", none, 0x40, 0x40, true, 0x971666fa1dca4fc5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_POLICY_ENTRY.BoolValue", bool_value, 0x40, 0x8, true, 0xcb2287e82f1c0909)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int8_t), "_IMAGE_POLICY_ENTRY.Int8Value", int8_value, 0x40, 0x8, true, 0x76109b0d9198a24a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_POLICY_ENTRY.UInt8Value", u_int8_value, 0x40, 0x8, true, 0x9c514db5f9cdd351)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_IMAGE_POLICY_ENTRY.Int16Value", int16_value, 0x40, 0x10, true, 0x104a7f8326ba0cec)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_POLICY_ENTRY.UInt16Value", u_int16_value, 0x40, 0x10, true, 0xdb01d5c931dfacf7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IMAGE_POLICY_ENTRY.Int32Value", int32_value, 0x40, 0x20, true, 0x9c84ff0c306ed58e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_POLICY_ENTRY.UInt32Value", u_int32_value, 0x40, 0x20, true, 0x9e1ee238dc770936)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IMAGE_POLICY_ENTRY.Int64Value", int64_value, 0x40, 0x40, true, 0x7328754198c22283)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_POLICY_ENTRY.UInt64Value", u_int64_value, 0x40, 0x40, true, 0xb8cc609c46928239)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const char*), "_IMAGE_POLICY_ENTRY.AnsiStringValue", ansi_string_value, 0x40, 0x40, true, 0x4363c21ecc2c30fb)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_IMAGE_POLICY_ENTRY.UnicodeStringValue", unicode_string_value, 0x40, 0x40, true, 0xcf1072e25169e874)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif