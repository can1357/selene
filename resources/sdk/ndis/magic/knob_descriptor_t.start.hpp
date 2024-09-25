#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "KnobDescriptor.Name", name, 0x0, 0x0, false, 0xd1c5b70cbdce2b77)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "KnobDescriptor.Value", value, 0x0, 0x0, false, 0xd6904cd17c3eca59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "KnobDescriptor.DefaultValue", default_value, 0x0, 0x0, false, 0x3499074104ff8dde)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::config_knob_flag_t), "KnobDescriptor.Flags", flags, 0x0, 0x0, false, 0xff3580f63b2aa4c0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "KnobDescriptor.MinimumValue", minimum_value, 0x0, 0x0, false, 0x4b20b188103709f8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "KnobDescriptor.MaximumValue", maximum_value, 0x0, 0x0, false, 0x92b914214baa1639)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif