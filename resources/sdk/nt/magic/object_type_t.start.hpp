#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_OBJECT_TYPE.TypeList", type_list, 0x0, 0x80, true, 0xee0656cd8de3ef36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_OBJECT_TYPE.Name", name, 0x80, 0x80, true, 0x7ac8a33f1932fb21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_TYPE.DefaultObject", default_object, 0x100, 0x40, true, 0x9000db988f2cb8c7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_TYPE.Index", index, 0x140, 0x8, true, 0x2700308e3fb6caaf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE.TotalNumberOfObjects", total_number_of_objects, 0x160, 0x20, true, 0x5b955f92396647c3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE.TotalNumberOfHandles", total_number_of_handles, 0x180, 0x20, true, 0x80602154268143bf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE.HighWaterNumberOfObjects", high_water_number_of_objects, 0x1a0, 0x20, true, 0x9414fb48d4de29ec)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE.HighWaterNumberOfHandles", high_water_number_of_handles, 0x1c0, 0x20, true, 0x6376a9c2059d86ab)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_type_initializer_t), "_OBJECT_TYPE.TypeInfo", type_info, 0x200, 0xc0, true, 0xe8498c500534c433)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_OBJECT_TYPE.TypeLock", type_lock, 0x5c0, 0x40, true, 0xa1291b051c602989)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_TYPE.Key", key, 0x600, 0x20, true, 0xe4ac1d06d8600582)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_OBJECT_TYPE.CallbackList", callback_list, 0x640, 0x80, true, 0x4a4cf8be884a9838)
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
#endif