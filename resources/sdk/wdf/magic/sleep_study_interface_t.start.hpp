#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::ss_library_t*), "_SLEEP_STUDY_INTERFACE.SleepStudyLibContext", sleep_study_lib_context, 0x0, 0x40, true, 0xe8f62d5cca1e9fec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mx::wnf_subscription_context_t*), "_SLEEP_STUDY_INTERFACE.WnfContext", wnf_context, 0x40, 0x40, true, 0xe799e9b2bc5e54e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::ss_component_t*), "_SLEEP_STUDY_INTERFACE.ComponentPowerRef", component_power_ref, 0x80, 0x40, true, 0xa19d4393a90c3e62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_SLEEP_STUDY_INTERFACE.LibInitializing", lib_initializing, 0xc0, 0x20, true, 0x3e0ae2ef89190bb1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif