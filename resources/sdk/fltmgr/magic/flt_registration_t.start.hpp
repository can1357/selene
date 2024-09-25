#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_REGISTRATION.Size", size, 0x0, 0x10, true, 0x2f706c7b165cf329)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_REGISTRATION.Version", version, 0x10, 0x10, true, 0xecf48afc344ea2da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_REGISTRATION.Flags", flags, 0x20, 0x20, true, 0x2ab1921c9c2f9b71)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct fltmgr::flt_context_registration_t*), "_FLT_REGISTRATION.ContextRegistration", context_registration, 0x40, 0x40, true, 0xcd0b5c721d8c6173)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct fltmgr::flt_operation_registration_t*), "_FLT_REGISTRATION.OperationRegistration", operation_registration, 0x80, 0x40, true, 0x35eb66019e032a39)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "_FLT_REGISTRATION.FilterUnloadCallback", filter_unload_callback, 0xc0, 0x40, true, 0xba2c0640216d8c24)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t, uint32_t, enum fltmgr::flt_filesystem_type_t)>*), "_FLT_REGISTRATION.InstanceSetupCallback", instance_setup_callback, 0x100, 0x40, true, 0x121f1b63c08d9b3b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_REGISTRATION.InstanceQueryTeardownCallback", instance_query_teardown_callback, 0x140, 0x40, true, 0x9f04be27d35dcb45)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_REGISTRATION.InstanceTeardownStartCallback", instance_teardown_start_callback, 0x180, 0x40, true, 0xbdc8d0d4a0a1bcb6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_REGISTRATION.InstanceTeardownCompleteCallback", instance_teardown_complete_callback, 0x1c0, 0x40, true, 0x87d963032d421284)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, struct fltmgr::flt_callback_data_t*, uint32_t, uint8_t*, struct fltmgr::flt_name_control_t*)>*), "_FLT_REGISTRATION.GenerateFileNameCallback", generate_file_name_callback, 0x200, 0x40, true, 0xe5fa7efdfda1680e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*), "_FLT_REGISTRATION.NormalizeNameComponentCallback", normalize_name_component_callback, 0x240, 0x40, true, 0xa4dc1493c0cca2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void**)>*), "_FLT_REGISTRATION.NormalizeContextCleanupCallback", normalize_context_cleanup_callback, 0x280, 0x40, true, 0xa59cb4ad8c99d54b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*), "_FLT_REGISTRATION.TransactionNotificationCallback", transaction_notification_callback, 0x2c0, 0x40, true, 0x71f2f7924447eda7)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*), "_FLT_REGISTRATION.NormalizeNameComponentExCallback", normalize_name_component_ex_callback, 0x300, 0x40, true, 0xfff56d40b818646d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, void*, struct fltmgr::flt_callback_data_t*)>*), "_FLT_REGISTRATION.SectionNotificationCallback", section_notification_callback, 0x340, 0x40, true, 0xe41c41c1fe9f050c)
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
#define _m14
#define _m15
#endif